#include<iostream>
#include<string.h>

using namespace std;

class High_school
{
	public:
		
	int id;
	char stu_name[100];
	int stu_roll_no; 
	int stu_standard; 
	int stu_age; 
	int stu_contact; 
	static char stu_edu_institute_name[100];
	char stu_address[100];
	
	void setdata()
	{
		cout<<"enter the ID ="<<endl;cin>>id;
		cout<<"enter the stu_name ="<<endl;cin>>stu_name;
		cout<<"enter the stu_roll_no ="<<endl;cin>>stu_roll_no;
		cout<<"enter the stu_standard ="<<endl;cin>>stu_standard;
		cout<<"enter the stu_age ="<<endl;cin>>stu_age;
		cout<<"enter the stu_contact ="<<endl;cin>>stu_contact;
		cout<<"enter the stu_edu_institute_name ="<<endl;cin>>stu_edu_institute_name;
		cout<<"enter the stu_address ="<<endl;cin>>stu_address;
		
		
	}
	void getdata()
	{
		cout<<"id ="<<id<<endl;
		cout<<"stu_name ="<<stu_name<<endl;
		cout<<"stu_roll_no ="<<stu_roll_no<<endl;
		cout<<"stu_standard ="<<stu_standard<<endl;
		cout<<"stu_age ="<<stu_age<<endl;
	    cout<<"stu_contact ="<<stu_contact<<endl;
		cout<<"stu_edu_institute_name ="<<stu_edu_institute_name<<endl;
		cout<<"stu_address ="<<stu_address<<endl;
		
	}
	
};
class College
{
	public:
		
	int id;
	char stu_name[100];
	int stu_roll_no; 
	int stu_standard; 
	int stu_age; 
	int stu_contact; 
	static char stu_edu_institute_name[100];
	char stu_address[100];
	
	void setdata()
	{
		cout<<"enter the ID ="<<endl;cin>>id;
		cout<<"enter the stu_name ="<<endl;cin>>stu_name;
		cout<<"enter the stu_roll_no ="<<endl;cin>>stu_roll_no;
		cout<<"enter the stu_standard ="<<endl;cin>>stu_standard;
		cout<<"enter the stu_age ="<<endl;cin>>stu_age;
		cout<<"enter the stu_contact ="<<endl;cin>>stu_contact;
		cout<<"enter the stu_edu_institute_name ="<<endl;cin>>stu_edu_institute_name;
		cout<<"enter the stu_address ="<<endl;cin>>stu_address;
	}
	void getdata()
	{
		cout<<"college id ="<<id<<endl;
		cout<<"college stu_name ="<<stu_name<<endl;
		cout<<"college stu_roll_no ="<<stu_roll_no<<endl;
		cout<<"college stu_standard ="<<stu_standard<<endl;
		cout<<"college stu_age ="<<stu_age<<endl;
	    cout<<"college stu_contact ="<<stu_contact<<endl;
		cout<<"college stu_edu_institute_name ="<<stu_edu_institute_name<<endl;
		cout<<"college stu_address ="<<stu_address<<endl;
		
	}
	char High_school::stu_edu_institute_name[]="Shri Swminarayan Mission";
	char College::stu_edu_institute_name[]="UKA Tasadiya University";
	
};
int main()
{
	High_school h;
	College c;
	
	h.setdata();
	h.getdata();
	
	c.setdata();
	c.getdata();
	
	return 0;
}

