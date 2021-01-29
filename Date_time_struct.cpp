#include<iostream>
#include<ctime>
int main()
{
	time_t now=time(0);
	
	std::cout<<"Number of seconds since JAN 1 1970"<<now<<std::endl;
	tm *ltm=localtime(&now);
	 std::cout<<"year"<<1970+ltm->tm_year<<std::endl;
	 
	  std::cout<<"month"<<1+ltm->tm_mon<<std::endl;
	  
	   std::cout<<"day"<<ltm->tm_mday<<std::endl;
	   
	    std::cout<<"time"<<1+ltm->tm_hour<<std::endl;
	    
	std::cout<<1+ltm->tm_min<<std::endl;
	std::cout<<1+ltm->tm_sec<<std::endl;
	return 0;
}
