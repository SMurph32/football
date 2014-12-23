

extern int pos, down, tofirst, kr;



int PickPlay(){
	int x;


	cout << kr << "is kr" << endl;
	switch(down){
		case 4:
			x = rand()%100;
			if(pos > kr){
				if(x < 10)	{return x%6+3;} //return random run or qb keep
				else		{return PUNT;}
			}else if(tofirst > 2){
				if(x < 10)	{return x%6+3;} //return random run or qb keep
				else		{return FIELDGOAL;}
			}
			break;	


		case 3: 
			if(tofirst > 30) 	{return DEEPPASS;}

			if(tofirst > 20){
				x = rand()%100;

				if(x < 70) 	{return DEEPPASS;}
				else		{return MIDPASS;}
			}// first > 20

			if(tofirst > 10){
				x = rand()%100;

				if(x < 60) 	{return DEEPPASS;}
				else if(x < 95)	{return MIDPASS;}
				else 		{return x%2 + 3;} //return RSWEEP or LSWEEP	
			}//over 10 to first
			if(tofirst > 5){
				x = rand()%100;

				if(x < 40) 	{return DEEPPASS;}
				else if(x < 80)	{return MIDPASS;}
				else if(x < 95)	{return SHORTPASS;}
				else 		{return x%5 + 3;} //return random run 
			}//over 5 to first
			if(tofirst > 0){
				x = rand()%100;

				if(x < 10) 	{return DEEPPASS;}
				else if(x < 40)	{return MIDPASS;}
				else if(x < 70)	{return MIDPASS;}
				else 		{return x%5 + 3;} //return random run 
			}//under 5 to first
			break;

		case 2:
			if(tofirst > 40) {return DEEPPASS;}

			if(tofirst > 30){
				x = rand()%100;

				if(x < 70) 	{return DEEPPASS;}
				else		{return MIDPASS;}
			}// first > 30

			if(tofirst > 20){
				x = rand()%100;

				if(x < 60) 	{return DEEPPASS;}
				else if(x < 95)	{return MIDPASS;}
				else 		{return x%2 + 3;} //return RSWEEP or LSWEEP	
			}//over 20 to first
			if(tofirst > 10){
				x = rand()%100;

				if(x < 40) 	{return DEEPPASS;}
				else if(x < 70)	{return MIDPASS;}
				else if(x < 80)	{return SHORTPASS;}
				else 		{return x%5 + 3;} //return random running play
			}//over 10 to first
			if(tofirst > 5){
				x = rand()%100;

				if(x < 10) 	{return DEEPPASS;}
				else if(x < 30)	{return MIDPASS;}
				else if(x < 60)	{return SHORTPASS;}
				else 		{return x%5 + 3;} //return random running play
			}//over 5 to first
			if(tofirst > 0){
				x = rand()%100;

				if(x < 40) 	{return DEEPPASS;}
				else if(x < 50)	{return MIDPASS;}
				else if(x < 60)	{return SHORTPASS;}
				else 		{return x%5 + 3;} //return random running play
			}//under 5 to first
			break;
		case 1:
			if(tofirst > 50) {return DEEPPASS;}

			if(tofirst > 30){
				x = rand()%100;

				if(x < 70) 	{return DEEPPASS;}
				else		{return MIDPASS;}
			}// first > 30

			if(tofirst > 20){
				x = rand()%100;

				if(x < 30) 	{return DEEPPASS;}
				else if(x < 60)	{return MIDPASS;}
				else if(x < 80)	{return SHORTPASS;}
				else 		{return x%5 + 3;} //return random running play
			}//over 20 to first
			if(tofirst > 10){
				x = rand()%100;

				if(x < 10) 	{return DEEPPASS;}
				else if(x < 40)	{return MIDPASS;}
				else if(x < 70)	{return SHORTPASS;}
				else 		{return x%5 + 3;} //return random running play
			}//over 10 to first
			if(tofirst > 5){
				x = rand()%100;

				if(x < 20) 	{return DEEPPASS;}
				else if(x < 40)	{return MIDPASS;}
				else if(x < 60)	{return SHORTPASS;}
				else 		{return x%5 + 3;} //return random running play
			}//over 5 to first
			if(tofirst > 0){
				x = rand()%100;

				if(x < 50) 	{return DEEPPASS;}
				else if(x < 70)	{return MIDPASS;}
				else if(x < 80)	{return SHORTPASS;}
				else 		{return x%5 + 3;} //return random running play
			}//under 5 to first
			break;
	}//end switch
	cout << "ERROR: Did not correctly select play!" << endl;
	return -1; //error
}







































