#define TEAMA 0
#define TEAMB 1

extern int Aatt, Apick, Asack, Amiss, Atd, Aswat, Acth, Apassyrds, Apunt;
extern int Batt, Bpick, Bsack, Bmiss, Btd, Bswat, Bcth, Bpassyrds, Bpunt;
extern int *att, *pick, *sack, *miss, *td, *swat, *cth, *passyrds, *punt;



int Possession(int a){


	if(a == TEAMA){
		pick	= &Apick;
		sack	= &Asack;
		miss	= &Amiss;
		td	= &Atd;
		swat	= &Aswat;
		cth	= &Acth;
		passyrds= &Apassyrds;
		punt	= &Apunt;
	}else{
		pick	= &Apick;
		sack	= &Bsack;
		miss	= &Bmiss;
		td	= &Btd;
		swat	= &Bswat;
		cth	= &Bcth;
		passyrds= &Bpassyrds;
		punt	= &Bpunt;
	}

	return 1;

}
