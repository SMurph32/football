#define TIME 0.2



#include"football.h"



using namespace std;

enum gamestate state;

int play, pos = 20, i, down=0, tofirst=10, ipos;
int kr, poss;
int score[2] = {0,0}, time_left = 3600;

Team  *A, *B;
//stats
int Afg=0, Aatt=0, Apick=0, Asack=0, Amiss=0, Atd=0, Aswat=0, Acth=0, Apassyrds=0, Apunt=0, Arunyrds=0;
int Bfg=0, Batt=0, Bpick=0, Bsack=0, Bmiss=0, Btd=0, Bswat=0, Bcth=0, Bpassyrds=0, Bpunt =0, Brunyrds=0;
int *fg, *att, *pick, *sack, *miss, *td, *swat, *cth, *passyrds, *punt, *runyrds;

string Aname = "Team A", Bname = "Team B", poss_string;

int play_game(Team A1, Team B1){

	int Awin=0, Bwin=0, z, Akr, Bkr;
	int yrds=0, netyrds=0, thrw;

	A = &A1;
	B = &B1;

	Akr = (25 + 30.0*A->k.getKickPower()/100.0) - 17;
	Bkr = (25 + 30.0*B->k.getKickPower()/100.0) - 17;

	score[0] = 0;
	score[1] = 0;

	time_left = 3600;

	

	string pause;


	//This string is used to be able to use the same statments functions
	//to each team by having a variable for the team names

	state = GameStart;


	//	for(z=0;z<1000;z++){
	while(time_left>0 || score[0] == score[1]){
		switch(state){
			//Initiates state position and posession
			case GameStart:
				poss_string = "Team B";
				poss = TEAMA;
				state = Bkick;
				pos = 65;
				break;

				//Team B kicks the ball to team A then the kick is returned b A->kr
				//posession is changed
			case Bkick:
				////cout << "Kickoff!" << endl;
				pos = Return(A->kr, B->k);
				state = Aoff;
				poss_string = "Team A";
				poss = TEAMA;
				Possession(poss);
				tofirst = 10;
				down = 0;
				break;

				//Team A is on offense
			case Aoff:

				kr = Akr;
				play = PickPlay();
				if(play > 3 && play < 10) play = play % 3;
				RunPlay();

				break;

			case Akick:
				////cout << "Kickoff!" << endl;
				pos = Return(B->kr, A->k);
				poss_string = "Team B";
				poss = TEAMB;
				state = Boff;
				down=0;
				break;

				//Team B is now on offence and Team A is defending, everything work the same as Aoff
			case Boff:

				kr = Bkr;
				play = PickPlay();
				if(play > 3 && play < 10) play = play % 3;
				RunPlay();

				break;

		}//end Switch

		//If the team doesn't get a first down on 
		//4th down then it's a turnover and
		//the other team gets the ball
		if(down==5){
			Turnover();		
		}

		//Calculates prograssion to the next first down
		if(down>0)
			//ipos is the last position so pos-ipos is 
			//prograss this play, to first is the length
			//to get a first down so this calculates if 
			//they got a first down
			if(pos-ipos>=tofirst){
				down=0;
				tofirst=10;
			}
			else{
				tofirst -= pos-ipos;
			}
		//First downs and kickoffs are set to 0 so that this takes it to 
		//1st down, (down==1)
		down++;

		//if pos >= 100 then the team is in teh endzome and they score
		if(pos >= 100){
			////cout << "TOUCHDOWN!" << endl;
			//a score on Bkick or Aoff means that team A scored
			if(state == Bkick || state == Aoff){
				if(state==Aoff)
					Atd++;
				state = Akick;
				score[0] += 7;

			}
			//Team b scored
			else{
				score[1]+= 7;
				if(state==Boff)
					Btd++;
				state = Bkick;

			}
			//Position for the next kickoff
			pos = 65;
			tofirst=10;
			down=0;
		}

		//If the team  moved back behind their enzsome, (pos==0) then
		//they get a safety, 2 points and it's the other team's ball
		//Akick isn't technically what happens after a safety but it'll 
		//work for now
		else if(pos<1){
			////cout << "SAFETY!" << endl;
			//Team A got the safety
			if(state == Bkick || state == Aoff){
				state = Akick;
				score[1] += 2;

			}
			//Team B got the safety
			else{
				score[0]+= 2;
				if(state==Boff)
					Btd++;
				state = Bkick;

			}
			//position for a kickoff
			pos = 65;
			tofirst=10;
			down=0;
		}

		//records the starting position for the next play progression 
		//to be measured
		ipos = pos;


		//Displays who has the ball, where they have it, the score of the
		//state, what down it is, and how far they have to get a first down
		Position(poss_string, pos, score, down, tofirst);

		//Displays the time_left remaining by inputting an integer values of just seconds
		//and it displays the hours, minutes, and seconds left
		//		TimeClock(time_left);

		//Option  to pause the state after each play
		//		cin.get();


	}//end while

	/*

	//Displays post state stats for both teams
	//cout << "QB A has completed " << Acth << " out of " << Aatt << endl;
	//cout << "for " << Apassyrds << " yards with " << Apick << " interceptions and " << Atd << " TDs" << endl;
	//cout << "QB was sacked " << Bsack << " times!" << endl;
	//cout << "A Passer Rating: " << PasserRating(Acth, Apassyrds, Aatt, Atd, Apick) << endl;
	//cout << "A rushed for " << Arunyrds << " yards." << endl;
	//cout << "Team A has punted " << Apunt << " time_lefts " << endl;


	//cout << "QB has completed " << Bcth << " out of " << Batt << endl;
	//cout << "for " << Bpassyrds << " yards with " << Bpick << " interceptions and " << Btd << " TDs" << endl;
	//cout << "QB was sacked " << Asack << " times!" << endl;
	//cout << "B Passer Rating: " << PasserRating(Bcth, Bpassyrds, Batt, Btd, Bpick) << endl;
	//cout << "B rushed for " << Brunyrds << " yards." << endl;
	//cout << "Team B has punted " << Bpunt << " time_lefts " << endl;
	*/

	A->qb.stats[PASSYARDS

	cout << score[0] << "-" << score[1] << " ";

	if(score[0] > score[1]) return 1;
	if(score[0] < score[1]) return -1;
	if(score[0] == score[1]) return 0;
	
}

