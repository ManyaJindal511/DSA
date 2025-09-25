//only downward and rightward directions are allowed
#include<iostream>
using namespace std;
int path(int ir,int ic,int er,int ec){
    if(ir>er || ic>ec) return 0;
    if(ir==er && ic==ec) return 1;
    int rw=path(ir,ic+1,er,ec);
    int dw=path(ir+1,ic,er,ec);
    int tw=rw+dw;
    return tw;
}
void print(int ir,int ic,int er,int ec,string s){
    if(ir>er || ic>ec) return ;
    if(ir==er && ic==ec){
        cout<<s<<endl;
    }
    print(ir,ic+1,er,ec,s+'R');
    print(ir+1,ic,er,ec,s+'D');
}
int main(){
   cout<< "no of possible paths: "<<path(0,0,2,2)<<endl;
   print(0,0,2,2,""); // 0 and 2 are the indices
}