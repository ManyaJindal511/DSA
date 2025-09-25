#include<iostream>
using namespace std;
class Fruit{
    public:
        string name;
        string color;
};
int main(){
    //creating object using class as data type
    Fruit apple;
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<"->"<<apple.color<<endl;

    //creating object using new operator
    Fruit *mango=new Fruit();
    mango->name="Mango";
    mango->color="Yellow";
    cout<<mango->name<<"->"<<mango->color;

    return 0;
}