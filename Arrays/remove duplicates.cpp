/*To remove the duplicates and return the no of unique elements*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(v[i]);
    }
    for(auto i:s){
        cout<<i<<" ";
    }
    //cout<<endl;
    //cout<<s.size();
    int sum=0;
    for(auto i:s){
        sum+=i;
    }
    cout<<sum;
}
