#include<iostream>
using namespace std;
class student
{
public:
int rollno;
char name[20];
void get_student_data()
{
cout<<"Enter the roll no. of student:";
cin>>rollno;
cout<<"Enter the name of student:";
cin>>name;
}
void put_student_data()
{
cout<<"Roll no. of student:"<<rollno<<endl;
cout<<"Name of student:"<<name<<endl;
}
};
class test:public student
{
public:
int m1,m2;
void get_test_data()
{
cout<<"Enter the marks of student in subject 1:";
cin>>m1;
cout<<"Enter the marks of student in subject 2:";
cin>>m2;
}
void put_test_data()
{
cout<<"Marks of student in subject 1:"<<m1<<endl;
cout<<"Marks of student in subject 2:"<<m2<<endl;
}
};
class sports:public test
{
public:
int score;
void get_sports_data()
{
cout<<"Enter the score of student:";
cin>>score;
}
void put_sports_data()
{
cout<<"Score of student:"<<score<<endl;
}
};
class result:public sports
{
public:
int total;
void display()
{
total=m1+m2+score;
cout<<"Total marks of student:"<<total<<endl;
if(total>200)
 cout<<"Student is eligible for scholarship"<<endl;
 else
 cout<<"Student is not eligible for scholarship"<<endl;
}
};
int main()
{
cout<<"....................welcome user to eligibility checker..........."<<endl;
result r;
r.get_student_data();
r.put_student_data();
r.get_test_data();
r.put_test_data();
r.get_sports_data();
r.put_sports_data();
r.display();
cout<<"....................thanks for visiting................................"<<endl;
return 0;
}