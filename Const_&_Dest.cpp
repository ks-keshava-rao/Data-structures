//program for constrctor and destructor 
#include<iostream>
using namespace std;

class line
{
	public:
		void setlength(double len);
		double getlength(void);
		line(); //construtor 
	private:
		double length;
		
};
line::line(void)
{
cout<<"object is being created"<<endl;
} 


void line::setlength(double len)
{
	 length = len;
}
double line::getlength(void)
{
	return length;
}
int main()
{
	line l1;
	l1.setlength(6.0);
	cout<<"length of the line "<<l1.getlength()<<endl;
	return 0;
}
