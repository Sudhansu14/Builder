#include<iostream>
#include<string.h>

using namespace std;

class Employee

{
	private:
    int id;
 	char name[100];
 	int  role;
 	int salary;
 	int experience;
	char address[100];
	char email[100];
	int contact;
	
	public:
	void setData()
	{
		cout<<"enter the id =";
		cin>> id;
		cout<<"enter the role =";
		cin>> role;
		cout<<"enter the salary =";
		cin>> salary;
		cout<<"enter the experience =";
		cin>> experience;
		cout<<"enter the address =";
		cin>> address;
		cout<<"enter the email =";
		cin>> email;
		cout<<"enter the contact =";
		cin>> contact;
		
	} 
	void getdata()
	{
		cout<<"id="<<id<<endl
		    <<"name="<<name<<endl
		    <<"role="<<role<<endl
		    <<"salary="<<salary<<endl
		    <<"experience="<<experience<<endl
		    <<"address="<<address<<endl
		    <<"email="<<email<<endl
		    <<"contact="<<contact<<endl;
	}

};
int main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	
   e1.getdata();
   e2.getdata();
   e3.getdata();
   e4.getdata();
   e5.getdata();

	return 0;
}

