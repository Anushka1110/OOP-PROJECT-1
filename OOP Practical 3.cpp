//problem statement: Implementation of school management system
#include<iostream>
using namespace std;

class Person{//Super class for all the entities
	
	protected:
		string name;
		int age;
};
class Student:public Person{
	public:
		int grade_level;
		
		void get_student_info(string a,int b,int c)
		{
			name=a;
			age=b;
			grade_level=c;
		}
		
		void set_student_info()
		{
			cout<<"Name ="<<" "<<name<<endl;
			cout<<name<<"'s"<<" age is "<<age<<endl;
			cout<<name<<"'s "<<" Grade_level is  "<<grade_level<<endl;
		}
		friend class Teacher;
		friend class AdministrativeStaff;
};
class Teacher:public Person{
	string teaching_subject;
	
	public:
		
		void get_Teacher_info(string a,int b,string c)
		{
			name=a;
			age=b;
			teaching_subject=c;
		}
		void set_Teacher_info()
		{
			cout<<"Name ="<<" "<<name<<endl;
			cout<<name<<"'s"<<" age is "<<age<<endl;
			cout<<name<<"'s "<<" Teaching subject is  "<<teaching_subject<<endl;
		}
		void display_student_data(Student &s)
		{
			cout<<"Student's name is "<<s.name<<endl;
			cout<<"Student's age is "<<s.age<<endl;
			cout<<"Student's grade level is "<<s.grade_level<<endl; 
		}
		friend class AdministrativeStaff;
};

class AdministrativeStaff:public Person{
	string job_title;
	public:

		void get_Administrative_info(string p,int q,string r)
		{
			name=p;
			age=q;
			job_title=r;
		}
		void set_Administrative_info()
		{
			cout<<"Name ="<<" "<<name<<endl;
			cout<<name<<"'s"<<" age is "<<age<<endl;
			cout<<name<<"'s "<<" Job Title is  "<<job_title<<endl;
		}
		void display_student_data(Student &s)
		{
			cout<<"Student's name is "<<s.name<<endl;
			cout<<"Student's age is "<<s.age<<endl;
			cout<<"Student's grade level is "<<s.grade_level<<endl; 
		}
		void display_teacher_data(Teacher &t)
		{
			cout<<"Teacher's name is "<<t.name<<endl;
			cout<<"Teacher's age is "<<t.age<<endl;
			cout<<"Teacher's Subject is "<<t.teaching_subject<<endl;
			t.age , t.teaching_subject;
		}
		//friend void Student::set_student_info();
		//friend void Teacher::set_Teacher_info();
};

int main()
{
	Student s[10];
	Teacher t[2];
	AdministrativeStaff a;
	s[0].get_student_info("Anushka",17,12);
	s[1].get_student_info("Abhilash",15,10);
	s[2].get_student_info("Abhi",14,9);
	s[3].get_student_info("Riya",15,10);
	s[4].get_student_info("Shreya",16,11);
	s[5].get_student_info("Anuj",13,8);
	s[6].get_student_info("Arpit",14,9);
	s[7].get_student_info("Ashutosh",17,12);
	s[8].get_student_info("Mandar",15,10);
	s[9].get_student_info("Mithilesh",17,11);
	t[0].get_Teacher_info("Rhea",35,"Maths");
	t[1].get_Teacher_info("Shivam",40,"Hindi");
	a.get_Administrative_info("Ravi",39,"Accountant");
	int choice;
	int i;
	do{
		
			cout<<"Enter 1 for Student's information"<<endl;
			cout<<"Enter 2 for Teacher's information"<<endl;
			cout<<"Enter 3 for Administrative Staff's info'"<<endl;
			cout<<"Enter your choice"<<endl;
			cin>>choice;
	switch(choice)
	{
		case 1:
			for(i=0;i<10;i++)
			{
				s[i].set_student_info();
			}
			break;
		case 2:
			for(i=0;i<2;i++)
			{
				t[i].set_Teacher_info();
				
			} 
			t[1].display_student_data(*(s+1));
			
			break;
		case 3:
			a.display_student_data(*(s+7));
			a.display_teacher_data(*t);
			a.set_Administrative_info();
			break;
		default :
			cout<<"wrong choice";	
	}
}
while(choice !=0);
return 0;
}
	
