//In this constructor is declared in the class
//but the inner code is written outside class
#include<iostream>
using namespace std;
class Rectangle{
public:
    int l;
    int b;
    int a;
    Rectangle(int x,int y);
};
Rectangle::Rectangle(int x,int y){
        l=x;
        b=y;
        a=l*b;
    }
int main(){
    Rectangle r1(5,9);
    cout<<r1.l<<" "<<r1.b<<endl;
    cout<<r1.a;
    return 0;
}