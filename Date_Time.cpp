#include<iostream>
#include<ctime>
int main()
{
	time_t now = time(0);
	char * dt = ctime(&now);
	
	std::cout<<"the local date and time is "<<dt;
	tm *gmtm=gmtime(&now);
	std::cout<<"this utc date and time is "<<dt;
	return 0;
}
