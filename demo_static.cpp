#include<stdio.h>
#include<iostream>
using namespace std;

class complex
{
private:
	int real;
	int imag;
	static int count;
public:
complex(int i=1,int r=1)
{
	cout<<"\n....complex....";
	this->real=r;
	this->imag=i;
	count++;
}
static void printcount()
{
	cout<<"\nvalue of count ="<<count<<"address of count ="<<&count;
}
void printcomplexnumber()
{
	cout<<"\ncomplex number is"<<this->real<<"+j"<<this->imag;
}
};
int complex::count = 0;
int main()
{
	complex c1(1,2);
	complex cc(c1);

	complex c5(1,2),c6(2,3),c7(6,7);
	c5=c6;
return 0;
}

