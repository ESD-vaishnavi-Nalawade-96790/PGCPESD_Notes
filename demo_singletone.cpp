#include<stdio.h>
#include<iostream>
class singletone
{
private:
	static singletone *ptr;
	singletone()
	{
	cout<<"......singletone.....";
	}
	
public:
	static singletone *getobject()
	{
		if(pt == NULL)
		
		ptr = new singletone();
		return ptr;
		
	}
	void print()
	{
	cout<<"..........print()..........";
	}
}

singletone *singletone::ptr = NULL;

int main
{
singletone *obj_addr= singletone :: getobject();
obj_addr->print();
cout<<"address of abject"<<obj_addr;

singletone *obj_addr1= singleone :: getobject();
obj_addr->print();
cout<<"address of object"<<obj_addr;

singletone *obj_addr2= singletone :: getobject();
obj_addr->print();
cout<<"address of object"<<obj_addr;

singletone *obj_addr3 = singletone :: getobject();
obj_addr->print();
cout<<"address of object"<<obj_addr;


return 0;
}
