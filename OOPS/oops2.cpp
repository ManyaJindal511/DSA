#include<iostream>
using namespace std;
class counter{
	static int count;
	public:
	void setData(int c){
		count=c;
	}
	void getData(){
		cout<<"count="<<count;
	}
	void inc(){
		count++;
	}
};
int counter::count=0;
int main(){
	counter obj1,obj2;
	obj1.setData(10);
	obj2.setData(10);
	cout<<"object one count\n";
	obj1.inc();
	obj1.getData();
	cout<<"\n";
	cout<<"object2 Count";
	obj2.getData();
	return 0;
}