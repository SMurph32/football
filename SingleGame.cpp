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

	int week = 1;

	//Initiate the random number generator
	srand(time(NULL));

	//Generates teams with all players using default constructors which leves all stats equal to 20	
	Team A   = MakeTeam();
	Team B   = MakeTeam();
	Team B1  = MakeTeam();
	Team B2  = MakeTeam();
	Team B3  = MakeTeam();
	Team B4  = MakeTeam();
	Team B5  = MakeTeam();
	Team B6  = MakeTeam();
	Team B7  = MakeTeam();
	Team B8  = MakeTeam();
	Team B9  = MakeTeam();
	Team B10 = MakeTeam();
	Team B11 = MakeTeam();
	Team B12 = MakeTeam();
	Team B13 = MakeTeam();
	Team B14 = MakeTeam();
	Team B15 = MakeTeam();
	Team B16 = MakeTeam();
	Team B17 = MakeTeam();
	Team B18 = MakeTeam();
	Team B19 = MakeTeam();
	Team B20 = MakeTeam();
	Team B21 = MakeTeam();
	Team B22 = MakeTeam();
	Team B23 = MakeTeam();
	Team B24 = MakeTeam();
	Team B25 = MakeTeam();
	Team B26 = MakeTeam();
	Team B27 = MakeTeam();
	Team B28 = MakeTeam();
	Team B29 = MakeTeam();
	Team B30 = MakeTeam();

	//Generates a player whos overall is the integer inside the function called. The skill ranges from 0-99

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

	//sets team B's quarterback to 75 overall
	B.qb=GenerateQB(90);
	//sets team B's wide receiver to 75 overall
	B.wr1=GenerateWR(75);
	//sets team B's cornerback to 75 overall
	B.cb1=GenerateCB(75);
	//sets team B's blocker to 75 overall
	B.lt=GenerateT(75);
	//sets team B's blitzer to 75 overall
	B.rde=GenerateDE(75);


	B.k.setKickPower(99);

	B.k.setKickAccuracy(99);
	//make team A and team B play against each other
	SimDisplay(week++,  play_game(A, B));
	SimDisplay(week++,  play_game(A, B1));
	SimDisplay(week++,  play_game(A, B2));
	SimDisplay(week++,  play_game(A, B3));
	SimDisplay(week++,  play_game(A, B4));
	SimDisplay(week++,  play_game(A, B5));
	SimDisplay(week++,  play_game(A, B6));
	SimDisplay(week++,  play_game(A, B7));
	SimDisplay(week++,  play_game(A, B8));
	SimDisplay(week++,  play_game(A, B9));
	SimDisplay(week++,  play_game(A, B10));
	SimDisplay(week++,  play_game(A, B11));
	SimDisplay(week++,  play_game(A, B12));
	SimDisplay(week++,  play_game(A, B13));
	SimDisplay(week++,  play_game(A, B14));
	SimDisplay(week++,  play_game(A, B15));
	SimDisplay(week++,  play_game(A, B16));
	SimDisplay(week++,  play_game(A, B17));
	SimDisplay(week++,  play_game(A, B18));
	SimDisplay(week++,  play_game(A, B19));
	SimDisplay(week++,  play_game(A, B20));
	SimDisplay(week++,  play_game(A, B21));
	SimDisplay(week++,  play_game(A, B22));
	SimDisplay(week++,  play_game(A, B23));
	SimDisplay(week++,  play_game(A, B24));
	SimDisplay(week++,  play_game(A, B25));
	SimDisplay(week++,  play_game(A, B26));
	SimDisplay(week++,  play_game(A, B27));
	SimDisplay(week++,  play_game(A, B28));
	SimDisplay(week++,  play_game(A, B29));
	SimDisplay(week++,  play_game(A, B30));


	return 1; 
}
