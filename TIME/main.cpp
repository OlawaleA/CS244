#include "time.h"
#include <iostream>
using namespace std;
using namespace ws3;

int main()
{
	//Using an anonymous object to display
	//the time at midnight
	cout << Time().ToString() << "\n";
	Time tw;
	//	tw.hour=4;
	//	tw.minute=54;
	//  tw.second=50;
	tw.SetHour(4);
	tw.SetMinute(54);
	tw.SetSecond(50);

cout << tw.ToString() << "\n";

	return 0;
}
