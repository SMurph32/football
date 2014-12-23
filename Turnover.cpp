#include "football.h"
extern int poss;

extern int Afg, Aatt, Apick, Asack, Amiss, Atd, Aswat, Acth, Apassyrds, Apunt;
extern int Bfg, Batt, Bpick, Bsack, Bmiss, Btd, Bswat, Bcth, Bpassyrds, Bpunt;
extern int *fg, *att, *pick, *sack, *miss, *td, *swat, *cth, *passyrds, *punt;
extern int pos, down;

int Turnover(){

	if(poss == TEAMA)	{Possession(TEAMB);}
	else if(poss == TEAMB)	{Possession(TEAMA);}
	
	down = 1;

	if(pos <= 90) 	tofirst = 10;
	else 		tofirst = 100-pos;	

	return 1;

}


