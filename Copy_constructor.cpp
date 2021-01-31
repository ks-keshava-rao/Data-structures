//program for constrctor and destructor 
#include<iostream>
using namespace std;

class line
{
	public:
		//void setlength(void;
		double getlength(void);
		line(int len); //construtor 
		line(const line &obj);//copy constructor
		~line();
	private:
		int *ptr;
		
};
line::line(int len)
{
cout<<"Normal constructor allocating ptr is being created"<<endl;
 
ptr == new int;
*ptr=len;
}
line :: ~line(void)
{
	cout<<"freeing memory"<<endl;
	delete ptr;
}


double line::getlength(void)
{
	return *ptr;
}
void display(line obj)
{
	cout<<"length of line"<<obj.getlength()<<endl;
}
int main()
{
	line l1(20);
	
    display(l1);
	return 0;
}
