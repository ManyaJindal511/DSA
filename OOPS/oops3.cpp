#include<iostream>
using namespace std;

class Test{
public:
    Test(){
        cout<<"Constructor is executed\n";
    }
    ~Test(){
        cout<<"destructor is executed\n";
    }
};

void myfunc(){
    static Test obj;
}
int main(){
    cout<<"main() starts \n";
    myfunc();
    cout <<"main() terminates\n";
}