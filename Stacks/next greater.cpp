#include<iostream>
#include<stack>
using namespace std;
void nextgreater(int arr[],int n){
    int ng[n];
    stack<int>st;
    ng[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        //pop all the elements that are smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //mark the ans in ng array
        if(st.size()==0) ng[i]=-1;
        else{
            ng[i]=st.top();
        }
        //push the arr[i]
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ng[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nextgreater(arr,n);
}