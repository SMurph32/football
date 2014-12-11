/*********************************************************************
 * ** Function: 	PassYards.cpp
 * ** Description:	Determines the length of the pass attempt based on which play was called
 * 			the play outcome is not determined here, just how many yards the pass is tryin gfor
 * ** Parameters: 	
 * ** Pre-Conditions:	input teh play, 1 for short pass, 2 for medium pass, and 3 for a long pass
 * ** Post-Conditions:	returns an int representing how many yards the pass is going for 
 * *********************************************************************/
#define LONG .8
#define SHORT .8
#define MID .8

//play should be 3 for a deep throw, 2 for a medium throw, and 1 for a short throw
int PassYards(int play, Athlete QB, Athlete WR, Athlete CB){

	int yards;
	int x, i;
	
	x = (rand()%60);

	if(play==DEEPPASS)
		yards = (pow(((x-50)/15.0),3)+5*sin(x)+30)*LONG;
	if(play==MIDPASS)
		yards = (pow(((x-25)/12),3)+3*sin(x)+5)*MID;
	if(play==SHORTPASS)
		yards = (pow(((x-20)/12),3)+3*sin(x)+4)*SHORT;


	return yards;
	
}
