#include <stdio.h>

int main()
{
	enum DAYS {
		MONDAY = 5,
		TUESDAY,
		WEDNESDAY = 15,
		THURSDAY,
		FRIDAY,
		SATURDAY,
		SUNDAY
	} day;
	printf("%d\n", FRIDAY);
	
	printf("%d\n", day);

	typedef char NEWTYPE[10];
	NEWTYPE var = "asdfghj";
	printf("%s\n", var);

	enum DAYS days = MONDAY + WEDNESDAY;
	printf("%d\n", day);
}
