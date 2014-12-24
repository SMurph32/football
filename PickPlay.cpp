

extern int pos, down, tofirst, kr;



int PickPlay(){
	int random_number, i;

	switch(down){
		case 4:
			random_number = rand()%100;
			if(100 - pos > kr){
				if(random_number < 10)	{return random_number%6+3;} //return random run or qb keep
				else		{return PUNT;}
			}else if(tofirst > 2){
				if(random_number < 5)	{return random_number%6+3;} //return random run or qb keep
				else		{return FIELDGOAL;}
			}
			break;	


		case 3: 
			if(tofirst > 30) 	{return DEEPPASS;}

			if(tofirst > 20){
				random_number = rand()%100;

				if(random_number < 70) 	{return DEEPPASS;}
				else		{return MIDPASS;}
			}// first > 20

			if(tofirst > 10){
				random_number = rand()%100;

				if(random_number < 60) 	{return DEEPPASS;}
				else if(random_number < 95)	{return MIDPASS;}
				else 		{return random_number%2 + 3;} //return RSWEEP or LSWEEP	
			}//over 10 to first
			if(tofirst > 5){
				random_number = rand()%100;

				if(random_number < 40) 	{return DEEPPASS;}
				else if(random_number < 80)	{return MIDPASS;}
				else if(random_number < 95)	{return SHORTPASS;}
				else 		{return random_number%5 + 3;} //return random run 
			}//over 5 to first
			if(tofirst > 0){
				random_number = rand()%100;

				if(random_number < 10) 	{return DEEPPASS;}
				else if(random_number < 40)	{return MIDPASS;}
				else if(random_number < 70)	{return MIDPASS;}
				else 		{return random_number%5 + 3;} //return random run 
			}//under 5 to first
			break;

		case 2:
			if(tofirst > 40) {return DEEPPASS;}

			if(tofirst > 30){
				random_number = rand()%100;

				if(random_number < 70) 	{return DEEPPASS;}
				else		{return MIDPASS;}
			}// first > 30

			if(tofirst > 20){
				random_number = rand()%100;

				if(random_number < 60) 	{return DEEPPASS;}
				else if(random_number < 95)	{return MIDPASS;}
				else 		{return random_number%2 + 3;} //return RSWEEP or LSWEEP	
			}//over 20 to first
			if(tofirst > 10){
				random_number = rand()%100;

				if(random_number < 40) 	{return DEEPPASS;}
				else if(random_number < 70)	{return MIDPASS;}
				else if(random_number < 80)	{return SHORTPASS;}
				else 		{return random_number%5 + 3;} //return random running play
			}//over 10 to first
			if(tofirst > 5){
				random_number = rand()%100;

				if(random_number < 10) 	{return DEEPPASS;}
				else if(random_number < 30)	{return MIDPASS;}
				else if(random_number < 60)	{return SHORTPASS;}
				else 		{return random_number%5 + 3;} //return random running play
			}//over 5 to first
			if(tofirst > 0){
				random_number = rand()%100;

				if(random_number < 40) 	{return DEEPPASS;}
				else if(random_number < 50)	{return MIDPASS;}
				else if(random_number < 60)	{return SHORTPASS;}
				else 		{return random_number%5 + 3;} //return random running play
			}//under 5 to first
			break;
		case 1:
			if(tofirst > 50) {return DEEPPASS;}

			if(tofirst > 30){
				random_number = rand()%100;

				if(random_number < 70) 	{return DEEPPASS;}
				else		{return MIDPASS;}
			}// first > 30

			if(tofirst > 20){
				random_number = rand()%100;

				if(random_number < 30) 	{return DEEPPASS;}
				else if(random_number < 60)	{return MIDPASS;}
				else if(random_number < 80)	{return SHORTPASS;}
				else 		{return random_number%5 + 3;} //return random running play
			}//over 20 to first
			if(tofirst > 10){
				random_number = rand()%100;

				if(random_number < 10) 	{return DEEPPASS;}
				else if(random_number < 40)	{return MIDPASS;}
				else if(random_number < 70)	{return SHORTPASS;}
				else 		{return random_number%5 + 3;} //return random running play
			}//over 10 to first
			if(tofirst > 5){
				random_number = rand()%100;

				if(random_number < 20) 	{return DEEPPASS;}
				else if(random_number < 40)	{return MIDPASS;}
				else if(random_number < 60)	{return SHORTPASS;}
				else 		{return random_number%5 + 3;} //return random running play
			}//over 5 to first
			if(tofirst > 0){
				random_number = rand()%100;

				if(random_number < 50) 	{return DEEPPASS;}
				else if(random_number < 70)	{return MIDPASS;}
				else if(random_number < 80)	{return SHORTPASS;}
				else 		{return random_number%5 + 3;} //return random running play
			}//under 5 to first
			break;
	}//end switch
	//cout << "ERROR: Did not correctly select play!" << endl;
	return -1; //error
}







































