extern team A, B;


int RunPlay(){

	play = PickPlay();

	kr = Akr;
	
	switch(play){

		case PUNT:	
			cout << "Team punts" << endl;
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
			return 1;
			break;
		case FIELDGOAL:
			if(Fieldgoal(A.k, (100-pos+17))){
				cout << "Fieldgoal is good!" << endl;
				game = Akick;
				score[0] += 3;
			} else {
				pos = 100-pos;
				game = Boff;
			}
			return 1;
			break;

		case LONGPASS:
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

			}else{
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
















	}
