#include<iostream>
using namespace std;
class Test{
    int value;
    public:
        void putvalue2(){
            value=40;
        }
        int getvalue(){
            return value;
        }
};
int main(){
    Test t;
    t.putvalue2();
    cout<<t.getvalue();
    return 0;
}