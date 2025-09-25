#include<iostream>
using namespace std;
class Student{
int roll;
string name;
float marks;
public:
Student(int r,string nm,float m){
    roll=r;
    name=nm;
    marks=m;
}
Student(Student&s){
    roll=s.roll;
    name=s.name;
    marks=s.marks;
}
void display(){
    cout<<"Roll no: "<<roll<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"marks: "<<marks<<endl;
}
};
int main(){
    Student s1(2,"ABC",90);
    Student s2(s1);
    //cout<<display();
    cout<<endl;
    cout<<"values in object s2";
    s2.display();
    return 0;
}