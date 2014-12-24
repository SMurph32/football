#include "football.h"

extern Team *A, *B;
extern int play;
extern enum gamestate state;

int Run(){
	//cout << "RUNNINGG!!!!!!!!!!!!!!" << endl;
	
	Team *O, *D;
	int running, runpower, blockshed, tackle, dthit, dehit, olbhit, mlbhit;
	Athlete *OT, *OG, *C, *RB, *DT, *DE, *MLB, *OLB; 

	

	if(state == Aoff){ 	// if A is on offense
		O = A;
		D = B;
	} else {		//if B is on offense
		O = B;
		D = A;
	}
	//cout << "RUNNINGG!!!!!!!!!!!!!!" << endl;

	C = &O->c;
	//cout << "RUNNINGG!!!!!!!!!!!!!!" << endl;
	MLB = &D->mlb;
	//cout << "RUNNINGG!!!!!!!!!!!!!!" << endl;

	if(
		play == RDIVE ||
		play == ROFFT ||
		play == RSWEEP
	){
		OT = &O->rt;
		OG = &O->rg;
		DT = &D->dt1;
		DE = &D->lde;	
		OLB= &D->lolb;
	
	}else if(

		play == LDIVE ||
		play == LOFFT ||
		play == LSWEEP
	){
		OT = &O->lt;
		OG = &O->lg;
		DT = &D->dt2;
		DE = &D->rde;
		OLB= &D->rolb;
	} else {
		//cout << "ERROR: RUN: Could not idenfy right or left run->" << endl;	
			return -1;
	}

	//cout << OLB->getSpeed() << endl;
	runpower	= OT->getBlocking() + OG->getBlocking() + C->getBlocking();
	blockshed 	= DT->getBlockShed() + DE->getBlockShed() + MLB->getBlockShed() + OLB->getBlockShed(); 
	tackle 		= DT->getTackle() + DE->getTackle() + MLB->getTackle() + OLB->getTackle(); 
	
	//cout << "RUNNINGG!!!!!!!!!!!!!!" << endl;
	dehit = DE->getBlockShed() - runpower/3;
	dehit = 35 + dehit/4;

	dthit = DT->getBlockShed() - runpower/3;
	dthit = 35 + dthit/4; 

	
	olbhit = OLB->getBlockShed() - runpower/3;
	olbhit = 35 + olbhit/4; 

	
	mlbhit = MLB->getBlockShed() - runpower/3;
	mlbhit = 35 + mlbhit/4; 

	//cout << "RUNNINGG!!!!!!!!!!!!!!" << endl;
	if(rand()%100 < dehit)  return -2 + rand()%4;
	if(rand()%100 < dthit)  return -2 + rand()%4;
	if(rand()%100 < mlbhit) return -2 + rand()%4;
	if(rand()%100 < olbhit) return -2 + rand()%4;
	
	return 15;
	

	//cout << "RUNNINGG!!!!!!!!!!!!!!" << endl;
}


