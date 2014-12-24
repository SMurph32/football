/*********************************************************************
 * ** Function: 	Athlete.cpp
 * ** Description:	Creates an Athlete with all the included stats recorded within
 * ** Parameters: 
 * ** Pre-Conditions:	
 * ** Post-Conditions:	An athlete is created with the set stats and all non-set stats equal to 20
 * *********************************************************************/
class Athlete{
	public:
		Athlete();

		Athlete(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s);

		void Empty();

		void setSpeed(int newSpd);

		void setStrength(int newStr);

		void setAgility(int newAgi);

		void setThrowPower(int newThp);

		void setThrowAccuracy(int newTha);

		void setAwareness(int newAwr);

		void setCatch(int newCth);

		void setRouteRunning(int newRte);

		void setKickPower(int newKp);

		void setKickAccuracy(int newKa);

		void setStamina(int newSta);

		void setInjury(int newInj);

		void setToughness(int newTgh);

		void setCoverage(int newCvr);

		void setBlocking(int newBlk);

		void setReturn(int newRet);

		void setBlockShed(int newBsh);

		void setBreakTackle(int newBtk);

		void setTackle(int newTak);




		int getSpeed();

		int getStrength();

		int getAgility();

		int getThrowPower();

		int getThrowAccuracy();

		int getAwareness();

		int getCatch();

		int getRouteRunning();

		int getKickPower();

		int getKickAccuracy();

		int getStamina();

		int getInjury();

		int getToughness();

		int getBlocking();

		int getCoverage();

		int getReturn();

		int getBlockShed();

		int getBreakTackle();

		int getTackle();

		int stats[NUM_STATS];

	private:

		int spd;
		int str;
		int agi;
		int thp;
		int tha;
		int awr;
		int cth;
		int rte;
		int kp;
		int ka;
		int sta;
		int inj;
		int tgh;
		int cvr;
		int blk;
		int ret;
		int bsh;
		int btk;
		int tak;

};

Athlete::Athlete(){
	spd=20;
	str=20;
	agi=20;
	thp=20;
	tha=20;
	awr=20;
	cth=20;
	rte=20;
	kp=20;
	ka=20;
	sta=20;
	inj=20;
	tgh=20;
	cvr=20;
	blk=20;
	ret=20;
	bsh=20;
	btk=20;
	tak=20;

	int i;
	for(i=0;i<NUM_STATS;i++)
		stats[i]=0;

}

Athlete::Athlete(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s){

	spd=a;
	str=b;
	agi=c;
	thp=d;
	tha=e;
	awr=f;
	cth=g;
	rte=h;
	kp=i;
	ka=j;
	sta=k;
	inj=l;
	tgh=m;
	cvr=n;
	blk=o;	
	ret=p;
	bsh=q;
	btk=r;
	tak=s;
	int x;
	for(x=0;x<NUM_STATS;x++)
		stats[x]=0;
}

void Athlete::Empty(){

	spd=0;
	str=0;
	agi=0;
	thp=0;
	tha=0;
	awr=0;
	cth=0;
	rte=0;
	kp=0;
	ka=0;
	sta=0;
	inj=0;
	tgh=0;
	cvr=0;
	blk=0;	
	ret=0;
	bsh=0;
	btk=0;
	tak=0;
}

void Athlete::setSpeed(int newSpd){
	spd = newSpd;
}

void Athlete::setStrength(int newStr){
	str = newStr;
}

void Athlete::setAgility(int newAgi){
	agi = newAgi;
}

void Athlete::setThrowPower(int newThp){
	thp = newThp;
}

void Athlete::setThrowAccuracy(int newTha){
	tha = newTha;
}

void Athlete::setAwareness(int newAwr){
	awr = newAwr;
}

void Athlete::setCatch(int newCth){
	cth = newCth;
}

void Athlete::setRouteRunning(int newRte){
	rte = newRte;
}

void Athlete::setKickPower(int newKp){
	kp = newKp;
}

void Athlete::setKickAccuracy(int newKa){
	ka = newKa;
}

void Athlete::setStamina(int newSta){
	sta = newSta;
}

void Athlete::setInjury(int newInj){
	inj = newInj;
}

void Athlete::setToughness(int newTgh){
	tgh = newTgh;
}

void Athlete::setCoverage(int newCvr){
	cvr = newCvr;
}

void Athlete::setBlocking(int newBlk){
	blk = newBlk;
}

void Athlete::setReturn(int newRet){
	ret = newRet;
}

void Athlete::setBlockShed(int newBsh){
	bsh = newBsh;
}

void Athlete::setBreakTackle(int newBtk){
	btk=newBtk;
}

void Athlete::setTackle(int newTak){
	tak=newTak;
}

int Athlete::getSpeed(){
	return spd;
}

int Athlete::getStrength(){
	return str;
}

int Athlete::getAgility(){
	return agi;
}

int Athlete::getThrowPower(){
	return thp;
}

int Athlete::getThrowAccuracy(){
	return tha;
}

int Athlete::getAwareness(){
	return awr;
}

int Athlete::getCatch(){
	return cth;
}

int Athlete::getRouteRunning(){
	return rte;
}

int Athlete::getKickPower(){
	return kp;
}

int Athlete::getKickAccuracy(){
	return ka;
}

int Athlete::getStamina(){
	return sta;
}

int Athlete::getInjury(){
	return inj;
}

int Athlete::getToughness(){
	return tgh;
}

int Athlete::getCoverage(){
	return cvr;
}

int Athlete::getBlocking(){
	return blk;
}

int Athlete::getReturn(){
	return ret;
}

int Athlete::getBlockShed(){
	return bsh;
}

int Athlete::getBreakTackle(){
	return btk;
}

int Athlete::getTackle(){
	return tak;
}
