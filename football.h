/*********************************************************************
 * ** Function: 	football.h
 * ** Description:	includes all files for simulating a football game
 * ** Parameters: 
 * ** Pre-Conditions:	
 * ** Post-Conditions:	
 * *********************************************************************/
#include<iostream>
#include<fstream>
#include<ctime>
#include<cmath>

#define DEEPPASS	0
#define MIDPASS		1
#define SHORTPASS	2
#define RSWEEP		3
#define LSWEEP		4
#define ROFFT		5
#define LOFFT		6
#define RDIVE		7
#define LDIVE		8
#define QBKEEP		9
#define PUNT		10
#define FIELDGOAL	11



#ifndef STATS_H
#define STATS_H
#include "stats.h"
#endif

#ifndef UPDATESTATS_CPP
#define UPDATESTATS_CPP
#include "UpdateStats.cpp"
#endif

#ifndef SIMDISPLAY_CPP
#define SIMDISPLAY_CPP
#include "SimDisplay.cpp"
#endif

#ifndef ATHLETE_CPP
#define ATHLETE_CPP
#include"Athlete.cpp"
#endif


#ifndef RUN_CPP
#define RUN_CPP
#include "Run.cpp"
#endif

#ifndef PASS_CPP
#define PASS_CPP
#include"Pass.cpp"
#endif

#ifndef PASSERRATING_CPP
#define PASSERRATING_CPP
#include "PasserRating.cpp"
#endif

#ifndef PASSYARDS_CPP
#define PASSYARDS_CPP
#include"PassYards.cpp"
#endif

#ifndef BLITZ_CPP
#define BLITZ_CPP
#include"Blitz.cpp"
#endif

#ifndef TEAM_CPP
#define TEAM_CPP
#include"Team.cpp"
#endif

#ifndef POSITION_CPP
#define POSITION_CPP
#include"Position.cpp"
#endif

#ifndef RETURN_CPP
#define RETURN_CPP
#include"Return.cpp"
#endif

#ifndef PLAYEROVERALL_CPP
#define PLAYEROVERALL_CPP
#include"PlayerOverall.cpp"
#endif

#ifndef DISPLAYATHLETE_CPP
#define DISPLAYATHLETE_CPP
#include"DisplayAthlete.cpp"
#endif

#ifndef GENERATEPLAYER_CPP
#define GENERATEPLAYER_CPP
#include"GeneratePlayer.cpp"
#endif

#ifndef PUNT_CPP
#define PUNT_CPP
#include"Punt.cpp"
#endif

#ifndef OPERATOROVERLOAD_CPP
#define OPERATOROVERLOAD_CPP
#include"OperatorOverload.cpp"
#endif

#ifndef GAME_CPP
#define GAME_CPP
#include"Game.cpp"
#endif

#ifndef MAKETEAM_CPP
#define MAKETEAM_CPP
#include"MakeTeam.cpp"
#endif

#ifndef TIMECLOCK_CPP
#define TIMECLOCK_CPP
#include"TimeClock.cpp"
#endif

#ifndef FIELDGOAL_CPP
#define FIELDGOAL_CPP
#include "Fieldgoal.cpp"
#endif

#ifndef POSSESSION_CPP
#define POSSESSION_CPP
#include "Possession.cpp"
#endif

#ifndef TURNOVER_CPP 
#define TURNOVER_CPP
#include "Turnover.cpp"
#endif

#ifndef PICKPLAY_CPP
#define PICKPLAY_CPP
#include "PickPlay.cpp"
#endif

#ifndef RUNPLAY_CPP
#define RUNPLAY_CPP
#include "RunPlay.cpp"
#endif

#ifndef GAMESTATE_CPP
#define GAMESTATE_CPP
#include "gamestate.cpp"
#endif

int UpdateStats();
int Run();
int RunPlay();
int Possession(int a);
int Turnover();
int Fieldgoal(Athlete k, int pos);
