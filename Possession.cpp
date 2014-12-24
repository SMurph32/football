#define TEAMA 0
#define TEAMB 1

#include "football.h"
extern enum gamestate state;

extern string Aname, Bname, poss_string;

extern int Afg, Aatt, Apick, Asack, Amiss, Atd, Aswat, Acth, Apassyrds, Apunt;
extern int Bfg, Batt, Bpick, Bsack, Bmiss, Btd, Bswat, Bcth, Bpassyrds, Bpunt;
extern int *fg, *att, *pick, *sack, *miss, *td, *swat, *cth, *passyrds, *punt;



int Possession(int a){


	if(a == TEAMA){
		att	= &Aatt;
		pick	= &Apick;
		sack	= &Bsack;
		miss	= &Amiss;
		td	= &Atd;
		swat	= &Aswat;
		cth	= &Acth;
		passyrds= &Apassyrds;
		punt	= &Apunt;
		fg = &Afg;
		state = Aoff;
		poss_string = Aname;
	}else{
		att 	= &Batt;
		pick	= &Bpick;
		sack	= &Asack;
		miss	= &Bmiss;
		td	= &Btd;
		swat	= &Bswat;
		cth	= &Bcth;
		passyrds= &Bpassyrds;
		punt	= &Bpunt;
		fg = &Bfg;	
		state = Boff;
		poss_string = Bname;
	}

	return 1;

}
