
extern int poss;



int Turnover(){

	if(poss == TEAMA)	{Possession(TEAMB);}
	else if(poss == TEAMB)	{Possession(TEAMA);}

	return 1;

}


