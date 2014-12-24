/*********************************************************************
 * ** Function: 	GeneratePlayer.cpp
 * ** Description:	Generates an athlete with random stats but the desired overall
 * ** Parameters: 
 * ** Pre-Conditions:	input desired overall
 * ** Post-Conditions:	returns an athlete with the desired overall
 * *********************************************************************/
#include<iostream>
#include<fstream>
#include<ctime>
#include<cmath>


using namespace std;

Athlete GenerateQB(int ovr){

		Athlete newQB;
		int x, att=0, give=0;

		
		x = rand()%87+10;
		x = 50-(100/(100-x))+500/x;

	
		newQB.setSpeed(x);
		newQB.setStrength(rand()%35+30);

		x = x + (rand()%15-10);
		if(x>99)
				x = 99;

		newQB.setAgility(x);

		while(QBOverall(newQB) > ovr+give || QBOverall(newQB) < ovr-give ){
			att++;
	//		cout << "Att" << endl;
		if(att==1000){
		//	cout << "Give" << endl;
			att=0;
			give++;
		}
		newQB.setThrowPower(rand()%100);
		newQB.setThrowAccuracy(rand()%100);
		newQB.setAwareness(rand()%100);
		}
		
		return newQB;
}

Athlete GenerateK(int ovr){

		Athlete newK;
		int x, att=0, give=0;

		
		x = rand()%40+60;

	
		newK.setKickPower(x);

		while(KOverall(newK) > ovr+give || KOverall(newK) < ovr-give ){
			att++;
	//		cout << "Att" << endl;
		if(att==1000){
		//	cout << "Give" << endl;
			att=0;
			give++;
		}
		newK.setThrowPower(rand()%100);
		newK.setThrowAccuracy(rand()%100);
		newK.setAwareness(rand()%100);
		}
		
		return newK;
}

Athlete GenerateWR(int ovr){

		Athlete newWR;
		int x, att=0, give=0;

		
		x = rand()%94+6;
		x = (100*x/(x+4));

	
		newWR.setSpeed(x);
		newWR.setStrength(rand()%60+29);

		x = rand()%96+4;
		x = (100*x/(x+3));
		
		if(x>99)
				x = 99;

		newWR.setAgility(x);

		//Generates a WR with the requested overall and the previously calculated speed
		//and agility. If a receiver is not calculated in 1000 attempts then it allowed the over 
		//to be one from what was requested. This is repeated until a WR is found or 3 attempts
		// have been made
		while(WROverall(newWR) > ovr+give || WROverall(newWR) < ovr-give ){

			//This function recalculates the WR's speed and agility in case the function 
			//fails to generate a WR within 3 overall points of what was requested
			if(give == 3){
				x = rand()%94+6;
				x = (100*x/(x+4));
				newWR.setSpeed(x);
				newWR.setStrength(rand()%60+29);
				x = rand()%96+4;
				x = (100*x/(x+3));
				if(x>99)
					x = 99;
				newWR.setAgility(x);
			}
						att++;
	//		cout << "Att" << endl;
		if(att==1000){
		//	cout << "Give" << endl;
			att=0;
			give++;
		}
		newWR.setRouteRunning(rand()%100);
		newWR.setCatch(rand()%100);
		newWR.setAwareness(rand()%100);
		}


		return newWR;
}

Athlete GenerateCB(int ovr){

		Athlete A;
		int x, att=0, give=0;

		
		x = rand()%94+6;
		x = (100*x/(x+4));

	
		A.setSpeed(x);
		A.setStrength(rand()%60+29);

		x = rand()%96+4;
		x = (100*x/(x+3));
		
		if(x>99)
				x = 99;

		A.setAgility(x);

		//Generates a WR with the requested overall and the previously calculated speed
		//and agility. If a receiver is not calculated in 1000 attempts then it allowed the over 
		//to be one from what was requested. This is repeated until a WR is found or 3 attempts
		// have been made
		while(CBOverall(A) > ovr+give || CBOverall(A) < ovr-give ){

			//This function recalculates the WR's speed and agility in case the function 
			//fails to generate a WR within 3 overall points of what was requested
			if(give == 3){
				x = rand()%94+6;
				x = (100*x/(x+4));
				A.setSpeed(x);
				A.setStrength(rand()%60+29);
				x = rand()%96+4;
				x = (100*x/(x+3));
				if(x>99)
					x = 99;
				A.setAgility(x);
			}
						att++;
	//		cout << "Att" << endl;
		if(att==1000){
		//	cout << "Give" << endl;
			att=0;
			give++;
		}
		A.setCoverage(rand()%100);
		A.setCatch(rand()%100);
		A.setAwareness(rand()%100);
		}


		return A;
}

Athlete GenerateT(int ovr){

		Athlete A;
		int x, att=0, give=0;

		
		x = rand()%89+6;
		x = 100*x/(x+2)-150/(x-100)-48;

	
		A.setSpeed(x);
		
		x = rand()%96+4;
		x = (100*x/(x+3));
		
		if(x>99)
				x = 99;

		A.setAgility(x);

		//Generates a WR with the requested overall and the previously calculated speed
		//and agility. If a receiver is not calculated in 1000 attempts then it allowed the over 
		//to be one from what was requested. This is repeated until a WR is found or 3 attempts
		// have been made
		while(TOverall(A) > ovr+give || TOverall(A) < ovr-give ){

			//This function recalculates the WR's speed and agility in case the function 
			//fails to generate a WR within 3 overall points of what was requested
			if(give == 3){
				x = rand()%94+6;
				x = (100*x/(x+4));
				A.setSpeed(x);
				x = rand()%96+4;
				x = (100*x/(x+3));
				if(x>99)
					x = 99;
				A.setAgility(x);
			}
						att++;
	//		cout << "Att" << endl;
		if(att==1000){
		//	cout << "Give" << endl;
			att=0;
			give++;
		}
		A.setBlocking(rand()%100);
		A.setStrength(rand()%100);
		A.setAwareness(rand()%100);
		}


		return A;
}

Athlete GenerateDE(int ovr){

		Athlete A;
		int x, att=0, give=0;

		
		x = rand()%84+8;
		x = 100*x/(x+9)-150/(x-100)-15;

	
		A.setSpeed(x);

	
		x = x + (rand()%15-10);
		
		if(x>99)
				x = 99;

		A.setAgility(x);

		//Generates a WR with the requested overall and the previously calculated speed
		//and agility. If a receiver is not calculated in 1000 attempts then it allowed the over 
		//to be one from what was requested. This is repeated until a WR is found or 3 attempts
		// have been made
		while(DEOverall(A) > ovr+give || DEOverall(A) < ovr-give ){

			//This function recalculates the WR's speed and agility in case the function 
			//fails to generate a WR within 3 overall points of what was requested
			if(give == 3){
	//			cout << "fail" << endl;
				x = rand()%94+6;
				x = (100*x/(x+4));
				A.setSpeed(x);
				x = rand()%96+4;
				x = (100*x/(x+3));
				if(x>99)
					x = 99;
				A.setAgility(x);
			}
						att++;
	//		cout << "Att" << endl;
		if(att==1000){
		//	cout << "Give" << endl;
			att=0;
			give++;
		}
		A.setStrength(rand()%100);
		A.setBlockShed(rand()%100);
		A.setAwareness(rand()%100);
		}


		return A;
}








