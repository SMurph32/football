#include "football.h"





int SimDisplay(int week, int result){


	switch(result){
		case -1:
			cout << "\tWeek " << week << ": \tL" << endl; 
			return -1;
			break;
		case 1:
			cout << "\tWeek " << week << ": \tW" << endl;
			return 1;
			break;
		case 0:
			cout << "\tWeek " << week << ": \tT" << endl;
			return 0;
			break;

	}
	return -2;
}
