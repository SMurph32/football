/*********************************************************************
 * ** Function: 	Return.cpp
 * ** Description:	Calculates how far the ball was kicked and if the returner attempts 
 * 			a return it calculates how far he returned it
 * ** Parameters: 
 * ** Pre-Conditions:	input the kicker and the kick returner
 * ** Post-Conditions:	output an integer for how far the kick went minus how far it was returned
 * 			for a total length of kick
 * *********************************************************************/
using namespace std;

int Return(Athlete kr, Athlete k){

	int yards, start, x;
	
	start = (5*sin(rand())-5.0)+((100-k.getKickPower())/3.0);


	cout << "The ball is kicked to the " << start << " yard line." << endl;

	if(start < -3){
		cout << "The returner takes a knee." << endl;
		return 20;
	}


	x = rand()%95+1;

	yards = (15-(100.0/(100-x))+(500.0/x));

	
	if(yards>0)	
		yards *= kr.getReturn()/100.0;

	x = yards + start;

	if(x > 50)
		x = (100-x);


	if(yards < 100){
		cout << "The returner has taken the ball " << yards << " yards to the " << x << " yard line." << endl;
		return (yards + start);
	}

	cout << "The returner has taken the ball " << 100-start << " yards for the TOUCHDOWN!." << endl;
	return 101;
}
