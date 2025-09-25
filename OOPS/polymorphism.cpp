#include<iostream>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<" in base class"<<endl;
    }
};
class Derived :public Base{
    public:
    void display(){
        cout<<"in derived class"<<endl;
    }
};
int main(){
    Base *base_pointer=new Derived;
    base_pointer->display();
    return 0;
}