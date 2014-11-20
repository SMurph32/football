#ifndef ATHLETE_CPP
#define ATHLETE_CPP
#include"Athlete.cpp"
#endif

#ifndef MAKETEAM_CPP
#define MAKETEAM_CPP
#include"MakeTeam.cpp"
#endif

#ifndef TIMECLOCK_CPP
#define TIMECLOCK_CPP
#include"TimeClock.cpp"
#endif

#define TIME 0.2
using namespace std;


void game(Team A, Team B){



	int play, yrds=0, passyrds=0, pos = 20, i, thrw, down=0, tofirst=10, ipos;
	int score[2]= {0,0}, time = 3600;

	int Awin=0, Bwin=0, z;


	//stats
	int Aatt=0, Apick=0, Asack=0, Amiss=0, Atd=0, Aswat=0, Acth=0, Apassyrds=0, Apunt=0;
	int Batt=0, Bpick=0, Bsack=0, Bmiss=0, Btd=0, Bswat=0, Bcth=0, Bpassyrds=0, Bpunt =0;
	string pause;

	enum{GameStart, Aoff, Boff, Akick, Bkick}game;

	//This string is used to be able to use the same statments functions
	//to each team by having a variable for the team names
	string Poss;

	game = GameStart;

//	for(z=0;z<1000;z++){
	while(time>0 || score[0] == score[1]){
		switch(game){
			//Initiates game position and posession
			case GameStart:
				Poss = "Team B";
				game = Bkick;
				pos = 65;
				break;

			//Team B kicks the ball to team A then the kick is returned b A.kr
			//posession is changed
			case Bkick:
				cout << "Kickoff!" << endl;
				pos = Return(A.kr, B.k);
				game = Aoff;
				Poss = "Team A";
				break;

			//Team A is on offene
			case Aoff:
				
				//The play is chosen here, play = 3 means long pass, 2 means medium pass, and 1 mean short pass
				//pos is where the ball is, if pos reaches 100 they score
				if(pos < 80){
				
					//If it is 4th down adn not close to scaring the team punts
					if(down==4){
						cout << "Team A punts" << endl;
						pos = pos + Punt(B.kr, A.p);
						Apunt++;
						//If the ball is kicked into the endzome then it is a touchback
						//and the other team gets it at the 20 yard line
						if(pos>99){
							cout << "Touchback" << endl;
							pos=80;
						}
						pos = 100-pos;
						game = Boff;
						Poss = "Team B";
						break;
					}
					play = 3;
				}
				else if(pos > 80)
					play = 2;
				else if(pos > 95) 
					play = 1;

				//determines how many yards the pass will gain IF completeld
				yrds = PassYards(play, A.qb, A.wr1, B.cb1);

				//the time will go down as plays happen, this was just a simple temporary fix, will put
				//a more detailed function in later
				time -= (yrds/TIME);

				//if this is true then the QB was sacked. Team A loses 5 yards and the down
				if(Blitz(A.rde, B.lt) || Blitz(A.rde, B.lt) || Blitz(A.rde, B.lt)){
					Bsack++;
					pos -= 5;
					i=4;

				}
				else{
					//This determines the outcome of the pass, a 0 means the qb missed or the receiver 
					//dropped the ball, and 1 means the defender swatted the pass away, a 2 means the 
					//defender intercepted the pass which means team B is then on offence, and a 3 means 
					//team A's receiver successfully caught the ball
					thrw=Pass(A.qb, A.wr1, B.cb1, yrds, time);
					Aatt++;

					//miss or dropped
					if(thrw==0){
						Amiss++;
						cout << "Incomplete!" << endl;
					}
					
					//pass swatted
					else if(thrw==1){
						Aswat++;
						cout << "Pass defended!" << endl;
					}
				
					//pass intercepted
					else if(thrw==2){
						Apick++;
						down=0;
						tofirst=10;
						game = Boff;
						pos = 100-pos-yrds;
						if(pos<1){
						//If the ball is intercepted in the endzome then it is a
						//touchback and the other team gets it at the 20 yard line
							cout << "Touchback" << endl;
							pos=20;
						}
						cout << "Interception!" << endl;
						Poss = "Team B";
					}

					//pass caught
					else if(thrw==3){
						Acth++;
						Apassyrds += yrds;
						cout << "Pass completed for " << yrds << " yards!" << endl;
						pos = pos + yrds;
					}

				}
				break;

			//team A kicks to Team B, works same as B kick
			case Akick:
				cout << "Kickoff!" << endl;
				pos = Return(B.kr, A.k);
				Poss = "Team B";
				game = Boff;
				down=0;
				break;

			//Team B is now on offence and Team A is defending, everything work the same as Aoff
			case Boff:

				//length of pass is chosen, or the team punts
				if(pos < 80){
					if(down==4){
						cout << "Team B punts" << endl;
						pos = pos +Punt(A.kr, B.p);
						Bpunt++;
						if(pos>99){
							cout << "Touchback" << endl;
							pos=80;
						}
						pos = 100-pos;
						game = Aoff;
						Poss = "Team A";
						break;
					}
					play = 3;
				}
				else if(pos > 80)
					play = 2;
				else if(pos > 95) 
					play = 1;

				//specific yards the catch is worth is chosen
				yrds = PassYards(play, B.qb, B.wr1, A.cb1);

				//time is taken off the clock	
				time -= (yrds/TIME);

	
				//decides if qb is sacked
				if(Blitz(A.rde, B.lt) || Blitz(A.rde, B.lt) || Blitz(A.rde, B.lt)){
					Asack++;
					pos -= 5;
					i=4;
				}

				else{
					//decides the outcome of the pass
					thrw=Pass(B.qb, B.wr1, A.cb1, yrds, time);
					Batt++;

					//pass is a miss or a drop
					if(thrw==0){
						Bmiss++;
						cout << "Incomplete!" << endl;
					}

					//pass was blocked by the defender
					else if(thrw==1){
						Bswat++;
						cout << "Pass defended!" << endl;
					}

					//pass was intercepted by the defender
					else if(thrw==2){
						Bpick++;
						down=0;
						tofirst=10;
						game = Aoff;
						pos = 100-pos - yrds;
						if(pos<1){
							cout << "Touchback" << endl;
							pos=20;
						}
						cout << "Interception!" << endl;
						Poss="Team A";
						break;
					}
					//Pass completed
					else if(thrw==3){
						Bcth++;
						Bpassyrds += yrds;
						cout << "Pass completed for " << yrds << " yards!" << endl;
						pos = pos + yrds;
					}

					break;
				}
		cin >>;

		}//end Switch

		//If the team doesn't get a first down on 
		//4th down then it's a turnover and
		//the other team gets the ball
		if(down==5){
			if(game == Boff){
				Poss = "Team A";
				game = Aoff;
			}
			else{
				Poss = "Team B";
				game = Boff;
			}
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
			cout << "TOUCHDOWN!" << endl;
			//a score on Bkick or Aoff means that team A scored
			if(game == Bkick || game == Aoff){
				if(game==Aoff)
					Atd++;
				game = Akick;
				score[0] += 7;

			}
			//Team b scored
			else{
				score[1]+= 7;
				if(game==Boff)
					Btd++;
				game = Bkick;

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
			cout << "SAFETY!" << endl;
			//Team A got the safety
			if(game == Bkick || game == Aoff){
				game = Akick;
				score[1] += 2;

			}
			//Team B got the safety
			else{
				score[0]+= 2;
				if(game==Boff)
					Btd++;
				game = Bkick;

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
		//game, what down it is, and how far they have to get a first down
		Position(Poss, pos, score, down, tofirst);

		//Displays the time remaining by inputting an integer values of just seconds
		//and it displays the hours, minutes, and seconds left
//		TimeClock(time);
		
		//Option  to pause the game after each play
//		cin.get();

	}//end while

	//Displays post game stats for both teams
	cout << "QB A has completed " << Acth << " out of " << Aatt << endl;
	cout << "for " << Apassyrds << " yards with " << Apick << " interceptions and " << Atd << " TDs" << endl;
	cout << "QB was sacked " << Bsack << " times!" << endl;
	cout << "A Passer Rating: " << PasserRating(Acth, Apassyrds, Aatt, Atd, Apick) << endl;
	cout << "Team A has punted " << Apunt << " times " << endl;


	cout << "QB has completed " << Bcth << " out of " << Batt << endl;
	cout << "for " << Bpassyrds << " yards with " << Bpick << " interceptions and " << Btd << " TDs" << endl;
	cout << "QB was sacked " << Asack << " times!" << endl;
	cout << "B Passer Rating: " << PasserRating(Bcth, Bpassyrds, Batt, Btd, Bpick) << endl;
	cout << "Team B has punted " << Bpunt << " times " << endl;
/*
	if(score[0]>score[1])
		Awin++;
	if(score[1]>score[0])
		Bwin++;

//	cout << "score 1 " << score[0] << " score 2 " << score[1] << endl;
	score[0]=0;
	score[1]=0;
	time=3600;
}
	cout << "Team A won " << Awin << " games while team B won " << Bwin << " games." << endl;
*/
}

