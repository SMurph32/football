/*********************************************************************
 * ** Function: 	OperatorOverload.cpp
 * ** Description:	Allows Athlets to be added togather by adding each players indivitual stats togather and returning the Sum as an athelte
 * 			Also allows division which returns the athlete with each stat divided by the integer that the athlete was divided by
 * ** Parameters: 
 * ** Pre-Conditions:
 * ** Post-Conditions:
 * *********************************************************************/
Athlete operator+(const Athlete A, const Athlete B);

Athlete operator+(Athlete A, Athlete B){
	
	B.setSpeed(A.getSpeed() + B.getSpeed());
	B.setStrength(A.getStrength() + B.getStrength());
	B.setAgility(A.getAgility() + B.getAgility());
	B.setThrowPower(A.getThrowPower() + B.getThrowPower());
	B.setThrowAccuracy(A.getThrowAccuracy() + B.getThrowAccuracy());
	B.setAwareness(A.getAwareness() + B.getAwareness());
	B.setCatch(A.getCatch() + B.getCatch());
	B.setRouteRunning(A.getRouteRunning() + B.getRouteRunning());
	B.setKickPower(A.getKickPower() + B.getKickPower());
	B.setKickAccuracy(A.getKickAccuracy() + B.getKickAccuracy());
	B.setStamina(A.getStamina() + B.getStamina());
	B.setInjury(A.getInjury() + B.getInjury());
	B.setToughness(A.getToughness() + B.getToughness());
	B.setCoverage(A.getCoverage() + B.getCoverage());
	B.setBlocking(A.getBlocking() + B.getBlocking());
	B.setReturn(A.getReturn() + B.getReturn());
	B.setBlockShed(A.getBlockShed() + B.getBlockShed());

	return B;

}

Athlete operator/(const Athlete B, float A);

Athlete operator/(Athlete B, const float A){
	
	B.setSpeed(B.getSpeed()/A);
	B.setStrength(B.getStrength()/A);
	B.setAgility(B.getAgility()/A);
	B.setThrowPower(B.getThrowPower()/A);
	B.setThrowAccuracy(B.getThrowAccuracy()/A);
	B.setAwareness(B.getAwareness()/A);
	B.setCatch(B.getCatch()/A);
	B.setRouteRunning(B.getRouteRunning()/A);
	B.setKickPower(B.getKickPower()/A);
	B.setKickAccuracy(B.getKickAccuracy()/A);
	B.setStamina(B.getStamina()/A);
	B.setInjury(B.getInjury()/A);
	B.setToughness(B.getToughness()/A);
	B.setCoverage(B.getCoverage()/A);
	B.setBlocking(B.getBlocking()/A);
	B.setReturn(B.getReturn()/A);
	B.setBlockShed(B.getBlockShed()/A);

	return B;

}
