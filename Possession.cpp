#define TEAMA 0
#define TEAMB 1

#include "football.h"
extern enum gamestate state;

extern string Aname, Bname, poss_string;

extern int Afg, Aatt, Apick, Asack, Amiss, Atd, Aswat, Acth, Apassyrds, Apunt, Arunyrds;
extern int Bfg, Batt, Bpick, Bsack, Bmiss, Btd, Bswat, Bcth, Bpassyrds, Bpunt, Brunyrds;
extern int *fg, *att, *pick, *sack, *miss, *td, *swat, *cth, *passyrds, *punt, *runyrds;



int Possession(int a){


	if(a == TEAMA){
		runyrds = &Arunyrds;
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
		runyrds = &Brunyrds;
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
