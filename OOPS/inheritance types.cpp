#include<iostream>
using namespace std;
class parent{
public:
    parent(){
        cout<<"parent class"<<endl;
    }
};
class child1:public parent{
public:
    child1(){
        cout<<"child class"<<endl;
    }
};
class grandchild:public child1{
public:
    grandchild(){
        cout<<"grandchild class"<<endl;
    }
};
int main(){
    grandchild gc;
    return 0;
}