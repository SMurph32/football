/*********************************************************************
 * ** Function: 	TimeClock.cpp
 * ** Description:	Displays the clock
 * ** Parameters: 
 * ** Pre-Conditions:	input an integer representing the time in seconds
 * ** Post-Conditions:	displays the time remaining in the correct digital clock format
 * *********************************************************************/
#include<iomanip>
void TimeClock(int x){

	int i;
	
	i=x/3600;

	std::cout << "Time is "; 
	std::cout << std::setw(2) << std::setfill('0') << i << ":";

	i=(x/60)%60;

	std::cout << std::setw(2) << std::setfill('0') << i << ":";

	i = x%60;

	
	std::cout << std::setw(2) << std::setfill('0') << i << std::endl;
} 
