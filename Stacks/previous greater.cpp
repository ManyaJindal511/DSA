#include<iostream>
#include<stack>
using namespace std;
void prevgreater(int arr[],int n){
    int ng[n];
    stack<int>st;
    ng[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
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
    prevgreater(arr,n);
}