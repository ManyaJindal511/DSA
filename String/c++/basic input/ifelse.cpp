#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age: "<<endl;
    cin>>age;
    if(age<18){
        cout<<"You are a kid";
    }
    else if(age==18){
        cout<<"You are not a kid";
    }
    else{
        cout<<"You are a adult.";
    }
    return 0;
}