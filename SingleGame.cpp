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

#include "football.h"

using namespace std;



int main()
{

	//Initiate the random number generator
	srand(time(NULL));

	//Generates teams with all players using default constructors which leves all stats equal to 20	
	Team A = MakeTeam();
	Team B = MakeTeam();

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


	//make team A and team B play against each other
	game(A, B);


	return 1; 
}
