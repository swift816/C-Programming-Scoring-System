#include <stdio.h>
#include <stdlib.h>


#include "ShowStats.c"
#include "GetStats.c"
#include "RecordStats.c"
#include "MenuAndOperations.c"

void displayRecordOptions(int *playerStats);
void chooseOperation(int *playerStats);
void checkPlayingStatus(int *playerStats);
void setRebounds(int *playerStats, char reboundType);
void setAssists(int *playerStats);
void setFouls(int *playerStats, char foulType);
void setTurnovers(int *playerStats);
void setOnFloor(int *playerStats);
void showStats(int *playerStats);
void setPoints(int *playerStats, char pointType);

int main()
{
	DriverMain();
}

void DriverMain()
{
	int playerStats[10] = {0,0,0,0,0,0,0,0,0,0};
	displayRecordOptions(playerStats);
}
