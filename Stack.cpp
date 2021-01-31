#include<iostream>
using namespace std;
class stack
{
	int top;
	public:
		int a[10];
		stack()
		{
			top=-1;
		}
	void push(int x);
	int pop();
	void isempty();
	
};
void stack::push(int x)
{
	if(top>=10)
	{
		cout<<"stack overflow"<<endl;
	}
	else 
	{
		a[++top]=x;
		cout<<"element inserted"<<endl;
	}
}

void stack::isempty()
{
	if(top<0)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		cout<<"stck not empty"<<endl;
	}
}
int main()
{
	stack s1;
	s1.push(10);
	s1.push(100);
	return 0;
}
