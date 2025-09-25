//we have to calculate stock span which means the days where the value of stock was greater than the previous days
#include<iostream>
#include<stack>
using namespace std;
void prevgreater(int arr[],int n){
    int ng[n];
    stack<int>st;
    ng[0]=-1;
    //here index is pushed instead of value
    st.push(0);
    for(int i=1;i<n;i++){
        //pop all the elements that are smaller than arr[st.top()]
        //here st.top() is the index which is pushed in the stack
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        //mark the ans in ng array
        if(st.size()==0) ng[i]=-1;
        else{
            ng[i]=st.top();
        }
        //push the index i
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ng[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        ng[i]=i-ng[i];
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