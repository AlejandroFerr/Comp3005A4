#include "Date.h"

Date::Date() {
	// DEFAULT CONSTRUCTOR
}

Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}
