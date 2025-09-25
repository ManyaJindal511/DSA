#include<iostream>
using namespace std;
class counter{
int id;
public:
counter(int i){
    id=i;
    cout<<"constructor with object id="<<id<<endl;
}
~counter(){
    cout<<"destructor with id"<<id<<endl;
}
};
int main(){
    counter c1(1);
    counter c2(3);
    counter c3(5);
    cout<<"end of main"<<endl;
    return 0;
}