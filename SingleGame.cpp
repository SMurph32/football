/*********************************************************************
 * ** Program Filename:		SingleGame.cpp 
 * ** Author: 			Zachary Murphy
 * ** Date:			Started 5/25/13
 * ** Description:		Generates and quarterback, receiver, and pass defender for two teams and then
 * 				plays them against each other
 * ** Input:
 * ** Output:			Displays the outcome of the game
 * *********************************************************************/
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<unistd.h>

#include "football.h"

using namespace std;



int main()
{

	int i, week = 1;

	//Initiate the random number generator
	srand(time(NULL));

	//Generates teams with all players using default constructors which leves all stats equal to 20	
	Team A   = MakeTeam();
	Team B[31];

	for(i=0;i<31;i++) B[i] = MakeTeam();

	//sets team A's quarterback to 90 overall
	A.qb=GenerateQB(90);
	//sets team A's wide receiver to 90 overall
	A.wr1=GenerateWR(90);
	//sets team A's cornerback to 90 overall
	A.cb1=GenerateCB(90);
	//Sets team A's blocker to 90 overall
	A.lt=GenerateT(90);
	//sets team A's blitzer to 90 overall
	A.rde=GenerateDE(90);

	A.rde=GenerateK(90);


	A.k.setKickPower(90);

	A.k.setKickAccuracy(90);

	//make team A and team B play against each other
	for(i=0;i<31;i++) SimDisplay(week++,  play_game(A, B[i]));


	return 1; 
}
