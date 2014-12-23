/*********************************************************************
 * ** Function: 	Fieldgoal.cpp
 * ** Description:	Calculates the length of a fieldgoal, if it's long enough, then if it is accurate enough
 * ** Parameters:
 * ** Pre-Conditions:	Kicker's kick power and accuracy
 * ** Post-Conditions:	Returns a 1 for if fieldgoal is good and 0 if not
 * *********************************************************************/
int Fieldgoal(Athlete k, int pos){

	int a, x; //accuracy, random number
	float d; //distance

	x = rand()%100;

	d = 50 + 100*pow(((pos-60*k.getKickPower()/100)/10), 3);

	if(d>x) return 0; //not enough kickpower then return 0

	x = rand()%99+1;

	a = 5 * tan((x-50)/(31.4159))+60*k.getKickAccuracy()/100;

	if(a < pos) return 0;// not enough kick accuracy then return 0

	return 1; // kick is good
}
