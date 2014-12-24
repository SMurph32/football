#include "football.h"


extern int Afg, Aatt, Apick, Asack, Amiss, Atd, Aswat, Acth, Apassyrds, Apunt, Arunyrds;
extern int Bfg, Batt, Bpick, Bsack, Bmiss, Btd, Bswat, Bcth, Bpassyrds, Bpunt , Brunyrds;
extern Team *A, *B;




int UpdateStats(){

A->qb.stats[PASSYARDS] += Apassyrds;



	return 1;
}
