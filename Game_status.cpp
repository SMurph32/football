
/*********************************************************************
 * ** Function:		Game_Status.cpp 
 * ** Description:	Holds the status of the game, i.e. remainint time, posessions, score....
 * ** Parameters: 	
 * ** Pre-Conditions:	
 * ** Post-Conditions:		
 * *********************************************************************/

class gamestatus : public gamestatus{
	public:
		void gamestatus(){};

	private:

		team *home, *away;

		int *time;

		int *home_score;

		int *away_score;

		int *down;

		int *to_first;

		int *pos;

};


