#pragma once
class Date
{
public:
	Date();
	Date(int, int, int);
	int getDay();
	int getMonth();
	int getYear();
	
private:
	int day;
	int month;
	int year;
};

