/*********************************************************************
 * ** Function:		Team.cpp 
 * ** Description:	An object that contans all the athlets of a single team
 * ** Parameters: 	
 * ** Pre-Conditions:	Input 55, the newkr and newpr technically should be a duplucate of one of the other players
 * ** Post-Conditions:	Returns a team containing all 53 players
 * *********************************************************************/

#ifndef OPERATOROVERLOAD_CPP
#define OPERATOROVERLOAD_CPP
#include"OperatorOverload.cpp"
#endif
class Team : public Athlete{
public:
	Team();

	Team(Athlete newqb1, Athlete newqb2, Athlete newrb1, Athlete newrb2, Athlete newfb, Athlete newwr1, Athlete newwr2, Athlete newwr3, Athlete newwr4,
		Athlete newte1, Athlete newte2, Athlete newt1, Athlete newt2, Athlete newt3, Athlete newt4, Athlete newg1, Athlete newg2, Athlete newg3, Athlete newg4, 
		Athlete newc1, Athlete newc2, Athlete newde1, Athlete newde2, Athlete newde3, Athlete newde4, Athlete newdt1, Athlete newdt2, Athlete newdt3, Athlete newolb1, 
		Athlete newolb2, Athlete newolb3, Athlete newolb4, Athlete newmlb1, Athlete newmlb2, Athlete newcb1, Athlete newcb2, Athlete newcb3, Athlete newcb4,
		Athlete news1, Athlete news2, Athlete news3, Athlete news4, Athlete newk, Athlete newp, Athlete newkr, Athlete newpr, Athlete newex1, Athlete newex2, 
		Athlete newex3, Athlete newex4, Athlete newex5, Athlete newex6, Athlete newex7);

	Athlete qb;
	Athlete rb;
	Athlete fb;
	Athlete wr1;
	Athlete wr2;
	Athlete wr3;
	Athlete wr4;
	Athlete te1;
	Athlete te2;
	Athlete lt;
	Athlete lg;
	Athlete c;
	Athlete rg;
	Athlete rt;
	Athlete rde;
	Athlete lde;
	Athlete dt1;
	Athlete dt2;
	Athlete rolb;
	Athlete mlb;
	Athlete lolb;
	Athlete cb1;
	Athlete cb2;
	Athlete fs;
	Athlete ss;
	Athlete k;
	Athlete p;
	Athlete kr;
	Athlete pr;

	//This is being used for adding running into the game
	Athlete LineAvg();
	
private:
	

//	Athlete starters[26];

};

Team::Team(Athlete newqb1, Athlete newqb2, Athlete newrb1, Athlete newrb2, Athlete newfb, Athlete newwr1, Athlete newwr2, Athlete newwr3, Athlete newwr4,
		Athlete newte1, Athlete newte2, Athlete newt1, Athlete newt2, Athlete newt3, Athlete newt4, Athlete newg1, Athlete newg2, Athlete newg3, Athlete newg4, 
		Athlete newc1, Athlete newc2, Athlete newde1, Athlete newde2, Athlete newde3, Athlete newde4, Athlete newdt1, Athlete newdt2, Athlete newdt3, Athlete newolb1, 
		Athlete newolb2, Athlete newolb3, Athlete newolb4, Athlete newmlb1, Athlete newmlb2, Athlete newcb1, Athlete newcb2, Athlete newcb3, Athlete newcb4,
		Athlete news1, Athlete news2, Athlete news3, Athlete news4, Athlete newk, Athlete newp, Athlete newkr, Athlete newpr, Athlete newex1, Athlete newex2, 
		Athlete newex3, Athlete newex4, Athlete newex5, Athlete newex6, Athlete newex7){

	qb = newqb1;
	rb = newrb1;
	fb = newfb;
	wr1 = newwr1;
	wr2 = newwr2;
	wr3 = newwr3;
	wr4 = newwr4;
	te1 = newte1;
	te2 = newte2;
	lt = newt1;
	lg = newg1;
	c = newc1;
	rg = newg2;
	rt = newt2;
	rde = newde1;
	lde = newde2;
	dt1 = newdt1;
	dt2 = newdt2;
	rolb = newolb2;
	mlb = newmlb1;
	lolb = newolb1;
	cb1 = newcb1;
	cb2 = newcb2;
	fs = news2;
	ss = news1;
	k = newk;
	p = newp;
	kr = newkr;
	pr = newpr;



}

Athlete Team::LineAvg(){
	Athlete A;

	A = lt + lg + c + rg + rt;
	A = A/5;

	return A;
}
