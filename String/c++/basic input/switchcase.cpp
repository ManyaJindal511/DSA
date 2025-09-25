#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"the value of age is : ";
    cin>>age;
    switch(age){
        case 18:
        cout<<"you r a adult"<<endl;
        break;
        case 20:
        cout<<"you can come to the party"<<endl;
        break;
        case 67:
        cout<<"u r a senior citizen"<<endl;
        break;
        default:
        cout<<"no special case"<<endl;
        break;
    }
    cout<<"done";
    return 0;
}