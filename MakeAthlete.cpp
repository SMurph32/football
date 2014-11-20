/*********************************************************************
 * ** Function: 	MakeAthlete.cpp
 * ** Description:	
 * ** Parameters: 
 * ** Pre-Conditions:
 * ** Post-Conditions:
 * *********************************************************************/
#include "stdafx.h"
#include<iostream>
#include<fstream>

#ifndef ATHLETE_H
#define ATHLETE_H
#include"Athlete.h"
#endif


Athlete MakeAthlete(int i[13]){

	Athlete b;
	
		b.setSpeed(i[0]);
		
		b.setStrength(i[1]);

		b.setAgility(i[2]);

		b.setThrowPower(i[3]);

		b.setThrowAccuracy(i[4]);

		b.setAwareness(i[5]);

		b.setCatch(i[6]);

		b.setRouteRunning(i[7]);

		b.setKickPower(i[8]);

		b.setKickAccuracy(i[9]);

		b.setStamina(i[10]);

		b.setInjury(i[11]);

		b.setToughness(i[12]);

		return b;

}

		
		
