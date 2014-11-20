/*********************************************************************
 * ** Function: 	Blitz.cpp
 * ** Description:	Determines if the qb was sacked based on the qb, his blocker, and the blitzer's stats
 * ** Parameters: 	
 * ** Pre-Conditions:	input the  player blitzing (D) and the player blocking him (O)
 * ** Post-Conditions:	1 means he was sacked and 0 means he was not
 * *********************************************************************/
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;


#define D_SPEED 1
#define OSPEED 1
#define DSPEED 1
#define OSTRENGTH 1
#define DSTRENGTH 1
#define OSKILL 1
#define DSKILL 1
#define SPEED .5
#define STRENGTH 0.8
#define SKILL 1
#define OVERALL 3.5
#define BASE 30



int Blitz(Athlete D, Athlete O){

	float speed, str, blk, skill;

	speed = (D.getSpeed()*DSPEED - O.getSpeed()*OSPEED);
	str = (D.getStrength()*DSTRENGTH - O.getStrength()*OSTRENGTH);
	skill = (D.getBlockShed()*DSKILL-O.getBlocking()*OSKILL);

	blk = speed*SPEED+str*STRENGTH+skill*SKILL;


		//(1+((speed*SPEED+str*STRENGTH)/2))*(O.getBlocking()-(D.getBlockShed()*DBLOCKSHED)/100.0);
//	cout << "speed is " << speed << endl;
//	cout << "str is " << str << endl;
//	cout << "blk is " << blk << endl;
	if(rand()%10000>(BASE+blk*OVERALL)){

		return 0;
	}
	
//	cout << "Sacked!" << endl;
	
	return 1;
}
