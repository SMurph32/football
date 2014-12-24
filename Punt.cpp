/*********************************************************************
 * ** Function: 	Punt.cpp
 * ** Description:	Calculates the length of a punt based on the punter's stats
 * ** Parameters: 
 * ** Pre-Conditions:	punter and kr, though the kick returner is not used yet
 * ** Post-Conditions:	returns an int representing how far the punt went
 * *********************************************************************/
int Punt(Athlete kr, Athlete p){

		int x, d;

		x = rand()%92+3;
		d=((100*x/(x+2))-(150/(x-100))-50);
		d *= (0.7*p.getKickPower()+.3*p.getKickAccuracy())/100;

		//cout << "The punt went " << d << " yards" << endl;

		return d;
}
