
int centuryFromYear(int year) 
{
	int century;
  
	century = (year / 100) + 1;
	if (year % 100 == 0)
		century--;
	return century ;
}

/* For testing purposes
#include <stdio.h>

int	main(void)
{
	printf("This is the %dst century\n", centuryFromYear(2023));
	printf("This is the %dst century\n", centuryFromYear(2001));
	printf("This is the %dth century\n", centuryFromYear(2000));
	return (0);
}
*/
