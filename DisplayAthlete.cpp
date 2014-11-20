/*********************************************************************
 * ** Function:		DisplayAthete.cpp
 * ** Description:	prints the Athlets overall on the screed followed by each of 
 * 			his stats with the abbreviates of the name of each stats above
 * ** Parameters: 
 * ** Pre-Conditions:	Input an Athlete to be displayed
 * ** Post-Conditions:	None
 * *********************************************************************/

#define STATS "ovr spd str agi thp tha awr cth rte kp  ka  sta inj tgh cvr blk ret bsh"
void DisplayAthlete(Athlete A){

			cout <<
			A.getSpeed() << "  " <<
			A.getStrength() << "  " <<
			A.getAgility() << "  " <<
			A.getThrowPower() << "  " <<
			A.getThrowAccuracy() << "  " <<
			A.getAwareness() << "  " <<
			A.getCatch() << "  " <<
			A.getRouteRunning() << "  " <<
			A.getKickPower() << "  " <<
			A.getKickAccuracy() << "  " <<
			A.getStamina() << "  " <<
			A.getInjury() << "  " <<
			A.getToughness() << "  " <<
			A.getCoverage() << "  " <<
			A.getBlocking() << "  " <<
			A.getReturn() << "  " <<
			A.getBlockShed() << "  " << endl;
}

void DisplayQB(Athlete A){
	cout << STATS << endl;
	cout << QBOverall(A) << "   ";
	DisplayAthlete(A);
}

void DisplayWR(Athlete A){
	cout << STATS << endl;
	cout << WROverall(A) << "   ";
	DisplayAthlete(A);
}

void DisplayCB(Athlete A){
	cout << STATS << endl;
	cout << CBOverall(A) << "   ";
	DisplayAthlete(A);
}

void DisplayT(Athlete A){
	cout << STATS << endl;
	cout << TOverall(A) << "   ";
	DisplayAthlete(A);
}

void DisplayDE(Athlete A){
	cout << STATS << endl;
	cout << DEOverall(A) << "   ";
	DisplayAthlete(A);
}
