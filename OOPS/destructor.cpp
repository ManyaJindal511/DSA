#include<iostream>
using namespace std;
class Rectangle{
public:
    int l;
    int b;
    //default constructor - no args passed
    Rectangle(){
        l=5;
        b=6;
    }
    //parameterised constructor - args passed
    Rectangle(int x,int y){
        l=x;
        b=y;
    }
    //copy constructor - initialize an object with another existing object
    Rectangle(Rectangle& r){
        l=r.l;
        b=r.b;
    }

    //destructor is called
    ~Rectangle(){
        cout<<"Destructor is called"<<endl;
    }
};
int main(){
    Rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;

    Rectangle r2(8,9);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}