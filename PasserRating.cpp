/*********************************************************************
 * ** Function: 	PasserRating.cpp
 * ** Description:	calculates the passer rating of a qb
 * ** Parameters: 	
 * ** Pre-Conditions:	input the number of completions, pass yards, pass attempts, touchdowns, and interceptions by a single quarterback
 * ** Post-Conditions:	returns the float which is equal to the qb's passer rating
 * *********************************************************************/
float PasserRating(int COMP, int YARDS, int ATT, int TD, int INT){

	float a, b, c, d, PR;

	a = ((COMP/1.0/ATT)-0.3)*5;
	b=((YARDS/1.0/ATT)-3)*0.25;
	c=(TD/1.0/ATT)*20;
	d = 2.375-((INT/1.0/ATT)*25);

	if(a>2.375)
		a = 2.375;
	if(b>2.375)
		b= 2.375;
	if(c>2.375)
		c = 2.375;
	if(d>2.375)
		d = 2.375;

	if(a<0)
		a=0;
	if(b<0)
		b=0;
	if(c<0)
		c=0;
	if(d<0)
		d=0;

	PR = ((a+b+c+d)/6.0)*100;

	return PR;
}
