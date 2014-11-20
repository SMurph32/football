/*********************************************************************
 * ** Function: 	PlayerOverall.cpp
 * ** Description:	Calculates the player's overall based on how his stats fit his position
 * ** Parameters: 	
 * ** Pre-Conditions:	Input an athlete
 * ** Post-Conditions:	returns the athletes overall at the respective position
 * *********************************************************************/
#define QBSPEED 0
#define QBTHROWPOWER 1.06
#define QBTHROWACCURACY 1.06
#define WRSPEED .8
#define WRROUTERUNNING .8
#define WRCATCH 1.15
#define CBSPEED	1.15
#define CBCOVERAGE 1.15
#define CBCATCH .9
#define TSPEED .1
#define TSTRENGTH 1.45
#define TBLOCKING 1.3
#define DESPEED 1.1
#define DESTRENGTH 1.00
#define DEBLOCKSHED 0.90

int QBOverall(Athlete A){
		int ovr = 0.15*A.getSpeed()*QBSPEED-(2500/((A.getThrowPower()*QBTHROWPOWER+A.getThrowAccuracy()*QBTHROWACCURACY)/2-120)+10);

		if(ovr>99)
				return 99;
		else
				return ovr;
}

int WROverall(Athlete A){
			int ovr = (-3000/(((A.getSpeed()*WRSPEED+A.getRouteRunning()*WRROUTERUNNING)+A.getCatch()*WRCATCH)/3-120)+10);

		if(ovr>99)
				return 99;
		else
				return ovr;
}

int CBOverall(Athlete A){
			int ovr = (-3000/(((A.getSpeed()*CBSPEED+A.getCoverage()*CBCOVERAGE)+A.getCatch()*CBCATCH)/3-120)+10);

		if(ovr>99)
				return 99;
		else
				return ovr;
}

int TOverall(Athlete A){
			int ovr = (-3000/(((A.getSpeed()*TSPEED+A.getBlocking()*TBLOCKING)+A.getStrength()*TSTRENGTH)/3-120)+10);

		if(ovr>99)
				return 99;
		else
				return ovr;
}

int DEOverall(Athlete A){
			int ovr = (-3000/(((A.getSpeed()*DESPEED+A.getStrength()*DESTRENGTH + A.getBlockShed()*DEBLOCKSHED)/3)-120)+10);

		if(ovr>99)
				return 99;
		else
				return ovr;
}
