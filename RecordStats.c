int getFreeThrowPoints(int *playerStats)
{
 	return(playerStats[0]);
}

int getTwoPoints(int *playerStats)
{
 	return(playerStats[1]);
}

int getThreePoints(int *playerStats)
{
	return(playerStats[2]);
}

int getPoints(int *playerStats)
{
 	return(playerStats[0]+playerStats[1]+playerStats[2]);
}
int getOffensiveRebounds(int *playerStats)
{
 	return(playerStats[3]);
}
int getDefensiveRebounds(int *playerStats)
{
 	return(playerStats[4]);
}
int getRebounds(int *playerStats)
{
 	return(playerStats[3]+playerStats[4]);
}
int getAssists(int *playerStats)
{
 	return(playerStats[5]);
}
int getPersonalFouls(int *playerStats)
{
 	return(playerStats[6]);
}
int getTechnicalFouls(int *playerStats)
{
 	return(playerStats[7]);
}
int getFouls(int *playerStats)
{
 	return(playerStats[6] + playerStats[7]);
}
int getTurnovers(int *playerStats)
{
 	return(playerStats[8]);
}

int getPlayingStatus(int *playerStats)
{
	int playingStatus=1; //1 - playing, 0 - disqualified/ejected 
 
 	if(playerStats[6] == 5)
 	{
 		printf("\nPlayer has earned 5 Personal Fouls and Disqualified from the Games");
 		printf("\nPress Any Key To Continue....");
 		getchar();
 		playingStatus = 0;
 	}
 	
 	else if(playerStats[7] == 2)
 	{
 		printf("\nPlayer has earned 2 Technical Fouls and Ejected from the Games");
 		printf("\nPress Any Key To Continue....");
 		getchar();
 		playingStatus = 0;
 	}
 	
 	else if(playerStats[9] == 0)
 	{
 		printf("\nPlayer is Subbed Out.....Must Sub In To Play");
 		printf("\nPress Any Key to Continue......");
 		getchar();
 		playingStatus = 0;
 	}
 	
 return playingStatus;
}

