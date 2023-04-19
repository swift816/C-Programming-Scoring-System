void displayRecordOptions(int *playerStats)
{
	system("cls");
	printf("\nBASKETBALL SCOREBOOK\n");
	printf("--------------------\n");
	printf("[1] Points\n");
	printf("[2] Rebounds\n");
	printf("[3] Assists\n");
	printf("[4] Fouls\n");
	printf("[5] Turnovers\n");
	printf("[6] Subbed Out/In\n");
	printf("[7] Show Statistics\n");
	printf("[8] End\n");
	printf("--------------------\n");
	printf("Select Choice: ");
	chooseOperation(playerStats);
}

void chooseOperation(int *playerStats)
{
	char choice;
	scanf("%c", &choice);
	getchar();
 
	system("cls");
	if(choice == '1')
	{
		char pointType;
 
		checkPlayingStatus(playerStats);
 
		printf("Select Point Scored: \n");
		printf("---------------------\n");
		printf("[1] 1 Point\n");
		printf("[2] 2 Points\n");
		printf("[3] 3 Points\n");
		scanf("%c", &pointType);
		getchar();
		setPoints(playerStats, pointType);
		displayRecordOptions(playerStats);
	} 
	
	else if(choice == '2')
 	{
		char reboundType;
		checkPlayingStatus(playerStats);
 
		printf("Select Type of Rebound Scored: \n");
		printf("---------------------\n");
		printf("[1] Offensive Rebound\n");	
		printf("[2] Defensive Rebound\n");
		scanf("%c", &reboundType);
		getchar();
		setRebounds(playerStats, reboundType);
		displayRecordOptions(playerStats);
	}
	
	else if(choice == '3')
 	{
		checkPlayingStatus(playerStats);
 
		setAssists(playerStats);
		displayRecordOptions(playerStats);
 	}
 	
	else if(choice == '4')
 	{
 		char foulType;
 		checkPlayingStatus(playerStats);
 
 		printf("Select Type of Foul Charged: \n");
 		printf("---------------------\n");
 		printf("[1] Personal Foul\n");
 		printf("[2] Technical Foul\n");
 		scanf("%c", &foulType);
 		getchar();
 		setFouls(playerStats, foulType);
 		displayRecordOptions(playerStats);
 	}
 	
 	else if(choice == '5')
 	{
 		checkPlayingStatus(playerStats);
 
 		setTurnovers(playerStats);
 		displayRecordOptions(playerStats);
 	}
 	
 	else if(choice == '6')
 	{
		setOnFloor(playerStats);
		displayRecordOptions(playerStats);
 	}
 	
 	else if(choice == '7')
	{
		printf("\n\nACTIVE PLAYER STATS");
		showStats(playerStats);
		getchar();
		displayRecordOptions(playerStats);
	}
 	
 	else if(choice == '8')
	{
		printf("\n\nPLAYER SUMMARY");
		showStats(playerStats);
		printf("\n\nMODULE TERMINATED!!!");
		getchar();
		exit(0);
	}
 	
	else
	{
		system("cls");
		printf("\n\nInvalid Choice...Press Any Key To Continue...\n\n");
		displayRecordOptions(playerStats);
	} 
}

void checkPlayingStatus(int *playerStats)
{
 	int playingStatus = 1;
 
 	playingStatus = getPlayingStatus(playerStats);
 
 	if(playingStatus == 0)
 	{
 		displayRecordOptions(playerStats); 
 	}
}
