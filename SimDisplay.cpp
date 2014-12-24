#include "football.h"





void SimDisplay(int week, int result){


	switch(result){
		case -1:
			cout << "\tWeek " << week << ": \tL" << endl; 
			break;
		case 1:
			cout << "\tWeek " << week << ": \tW" << endl;
			break;
		case 0:
			cout << "\tWeek " << week << ": \tT" << endl;
			break;

	}
	return;
}
