#include "time.h"
#include <iostream>
using namespace std;
using namespace ws3;

int main()
{
	//Using an anonymous object to display
	//the time at midnight
	cout << Time() << "\n";
	Time tw;
	//	tw.hour=4;
	//	tw.minute=54;
	//  tw.second=50;
	tw.SetHour(4);
	tw.SetMinute(54);
	tw.SetSecond(50);

  cout <<"Hour :"<< tw.GetHour()<<endl;
	cout <<"Minute :"<< tw.GetMinute()<<endl;
	cout <<"Second :"<< tw.GetSecond()<<endl;

cout << tw<< "\n";

	return 0;
}
