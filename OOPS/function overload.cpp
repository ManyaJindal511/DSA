#include<iostream>
using namespace std;
class func{
public:
    void add(int x, int y){
        int sum=x+y;
        cout<<sum<<endl;
    }
    void add(int x,int y,int z){
        int sum=x+y+z;
        cout<<sum<<endl;
    }
    void add(float x,float y){
        int sum=x+y;
        cout<<sum<<endl;
    }
};
int main(){
    func f;
    f.add(4,7,9);
    f.add(float(3.4),float(3.9));
    f.add(5,7);
    return 0;
}