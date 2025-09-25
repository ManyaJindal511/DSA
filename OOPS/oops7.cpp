#include<iostream>
using namespace std;
class func{
public:
    void area(int x){
        int sum=x*x;
        cout<<sum<<endl;
    }
    void area(int x,float y){
        float sum=x*y;
        cout<<sum<<endl;
    }
};
int main(){
    func f;
    f.area(4);
    f.area(5,2.7);
    return 0;
}