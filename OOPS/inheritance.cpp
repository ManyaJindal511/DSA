#include<iostream>
using namespace std;
class parent{
public:
    int x=90;
protected:
    int y=78;
private:
    int z=56;    
};

class child1 : public parent{
    //x will remain  public
    //y will remain protected
    //z will not be accessible
};
class child2: private parent{
    //x will be private
    //y will be private
    //z will not be accessible
};
class child3: protected parent{
    //x will be protected
    //y will be protected
    //z will not be accessible
};
int main(){
    parent p;
    // only the value in public could be accesible in main function
    cout<<p.x;
    //cout<<p.y <<p.z --> ERROR as it is not declared in public
    return 0;
}