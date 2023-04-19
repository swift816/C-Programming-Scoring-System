void showStats(int *playerStats)
{
 	int freeThrowPoints = 0;
 	int twoPoints = 0;
 	int threePoints = 0;
 	int totalPoints = 0;
 	int totalRebounds = 0;
 	int totalOffensiveRebounds = 0;
 	int totalDefensiveRebounds = 0;
 	int totalAssists = 0;
 	int totalPersonalFoul = 0;
 	int totalTechnicalFoul = 0;
 	int totalFouls = 0;
 	int totalTurnovers = 0;
 	freeThrowPoints = getFreeThrowPoints(playerStats);
 	twoPoints = getTwoPoints(playerStats);
 	threePoints = getThreePoints(playerStats);
 	totalPoints = getPoints(playerStats);
 	totalOffensiveRebounds = getOffensiveRebounds(playerStats);
 	totalDefensiveRebounds = getDefensiveRebounds(playerStats);
 	totalRebounds = getRebounds(playerStats);
 	totalAssists = getAssists(playerStats);
 	totalPersonalFoul = getPersonalFouls(playerStats);
 	totalTechnicalFoul = getTechnicalFouls(playerStats);
 	totalFouls = getFouls(playerStats);
 	totalTurnovers = getTurnovers(playerStats);

 	printf("\n--------------------------");
 	printf("\nFree Throw Points earned: %d", freeThrowPoints);
 	printf("\nTwo Points earned: %d", twoPoints);
 	printf("\nThree Points earned: %d", threePoints);
 	printf("\nTotal Points Earned: %d", totalPoints);
 	printf("\nTotal Offensive Rebounds Earned: %d", totalOffensiveRebounds);
 	printf("\nTotal Defensive Rebounds Earned: %d", totalDefensiveRebounds);
 	printf("\nTotal Rebounds Earned: %d", totalRebounds);
 	printf("\nTotal Assists Earned: %d", totalAssists);
 	printf("\nTotal Personal Fouls Charged: %d", totalPersonalFoul);
 	printf("\nTotal Technical Fouls Charged: %d", totalTechnicalFoul);
 	printf("\nTotal Fouls Charged: %d", totalFouls);
 	printf("\nTotal Turnovers Charged: %d", totalTurnovers);
 	printf("\n");
}
