#include<iostream>
using namespace std;
class ABC{
    int x;
    public:
        void set(int n){
            x=n;
        }
        int hello(){
            return x;
        }
};
int main(){
    ABC obj1;
    obj1.set(34);
    cout<<obj1.hello()<<endl;
    return 0;
}