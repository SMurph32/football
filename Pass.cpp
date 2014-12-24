/*********************************************************************
 * ** Function: 	Pass.cpp
 * ** Description:	Decides the outcome of the pass based on how player stats fit the length of the pass
 * ** Parameters: 
 * ** Pre-Conditions:	input the passer, catcher, and defender, and how far the pass is
 * ** Post-Conditions:	returns a 0 for pass missed or dropped, a 1 for the pass being blocked by
 * 			the defender, a 2 for an interception, and a 3 for the pass being caught
 * *********************************************************************/
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;



#define CATCH 4
#define QB_ACCURACY 1
#define QB_POWER 1
#define WR_SPEED 1.2
#define WR_ROUTE 1.2
#define CB_SPEED  2
#define CB_COVERAGE 2
 

int Pass(Athlete QB, Athlete WR, Athlete CB, int deep, int time){

	float speed, cover, swat, cth;

	//speed is the ability for the CB to cover a WR on a deep route
	speed = ((CB.getSpeed()*CB_SPEED - ((QB.getThrowPower()*QB_POWER + WR.getSpeed()*WR_SPEED)/2.0))/30.0);
	//cover is the ability for the CB to cover the WR on a short route
	cover = ((CB.getCoverage()*CB_COVERAGE - ((QB.getThrowAccuracy()*QB_ACCURACY + WR.getRouteRunning()*WR_ROUTE)/2.0))/30.0);
	//cth is the ability for the WR to catch a pass that the CB does not defend
	cth = WR.getCatch()*(((deep/60.0)*QB.getThrowPower() + (1-deep/60.0)*QB.getThrowAccuracy())/100.0);
	//swat is the ability for the CB to defend a pass based on the length of the pass and the cover and speed values
	//a swatted pass is either a deflected pass or an interception
	swat = ((tan(deep/60.0)/1.57)*speed + (1-tan(deep/60.0)/1.57)*cover+1)/7.0;


//	//cout << "cmp is " << cth << endl;
//	//cout << "cth is " << swat*100 << endl;

	
	
	//chance of a pass being defended
	if(rand()%100 < (swat*100)){
			//chance of a defended pass being intercepted
			if(rand()%1000<CB.getCatch())
					return 2;
			return 1;
	}
	//if a  pass is not defended this is the chance of a reception
	else if(rand()%100<(cth*CATCH))
			return 3;
	else
			//a 0 means either the QB missed the WR or the WR dropped the pass
			return 0;

}
