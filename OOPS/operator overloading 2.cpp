#include<iostream>
using namespace std;
class number{
    public:
    int a;
    number(){
        a=20;
    }
    void operator+(){
        a=a*a;
    }
    void show(){
        cout<<a<<endl;
    }
};
int main(){
    number obj;
    obj.show();
    +obj;
    obj.show();
    return 0;
}