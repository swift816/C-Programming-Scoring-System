void setPoints(int *playerStats, char pointType)
{     
	int pointScore = 0;    
	if(pointType == '1')    
	{        
		pointScore = 1;        
		playerStats[0] += pointScore;        
		printf("1 Point Scored..Press Any Key To Continue");    
	}    
	else if(pointType == '2')    
	{        
		pointScore = 2;        
		playerStats[1] += pointScore;        
		printf("2 Points Scored...Press Any Key To Continue");    
	}    
	else if(pointType == '3')    
	{        
		pointScore = 3;        
		playerStats[2] += pointScore;        
		printf("3 Points Scored...Press Any Key To Continue");
	}
	else
	{        
		printf("Invalid Score...Press Any Key To Continue");    
	}    
	getchar();
	
} 

void setRebounds(int *playerStats, char reboundType)
{
 	int reboundScore = 0;
 	if(reboundType == '1')
 	{
 		reboundScore = 1;
 		playerStats[3] += reboundScore;
 		printf("Offensive Rebound..Press Any Key To Continue");
 	}
 	
 	else if(reboundType == '2')
 	{
 		reboundScore = 1;
 		playerStats[4] += reboundScore;
 		printf("Defensive Rebound..Press Any Key To Continue");
 	}
 	
 	else
 	{
 		printf("Invalid Rebound...Press Any Key To Continue");
 	}
 	
 getchar();
}

void setAssists(int *playerStats)
{
 	int assists = 1;
 	playerStats[5] += assists;
 	printf("Assist Credited.....Press Any Key To Continue");
 	getchar();
}

void setFouls(int *playerStats, char foulType)
{
 	int foulScore = 1;
 	if(foulType == '1')
 	{
 		playerStats[6] += foulScore;
 		printf("Personal Foul Charged..Press Any Key To Continue");
 		if(playerStats[6] == 5)
 		{
 			printf("\n\nPlayer has reached 5 Personal Fouls...Player disqualified\n");
 		}
 	}
 	
 	else if(foulType == '2')
 	{
 		playerStats[7] += foulScore;
 		printf("Technical Foul Charged..Press Any Key To Continue");
 		if(playerStats[7] == 2)
 		{
 			printf("\n\nPlayer has reached 2 Technical Fouls...Player disqualified\n");
 		}
 	}
 	
 	else
 	{
 		printf("Invalid Foul Type...Press Any Key To Continue");
 	}
 	getchar();
}

void setTurnovers(int *playerStats)
{
 	int turnover = 1;
 	playerStats[8] += turnover;
 	printf("Charged Turnover.....Press Any Key To Continue");
 	getchar();
}

void setOnFloor(int *playerStats)
{
 	if(playerStats[6] == 5)
 	{
 		printf("\n\nPlayer has FOULED OUT.....Press Any Key To Continue");
 		getchar();
 	}
	  
 	else if(playerStats[7] == 2)
 	{
 		printf("\n\nPlayer has been EJECTED.....Press Any Key To Continue");
 		getchar();
 	}
 	
 	else
 	{
 		if(playerStats[9] == 0)
 		{	
 			printf("Player Subbing In.....Press Any Key To Continue....");
 			getchar();
 			playerStats[9] = 1;
 		}
 		
 		else
 		{
 			printf("Player Subbing Out.....Press Any Key To Continue....");
 			getchar();
 			playerStats[9] = 0;
 		}
 	}
}
