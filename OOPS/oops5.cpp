#include<iostream>
using namespace std;
class ai{
private:
    int num=1;
public:
    friend void cpp(ai ob){
        cout<<ob.num<<endl;
    }
};
int main(){
    ai ob;
    cpp(ob);
    return 0;
}