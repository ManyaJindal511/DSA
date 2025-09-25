#include<iostream>
#include<vector>
using namespace std;
int countPrimes(int n) {
    vector<int> prime(n, 0);//initialize the vector of all elements as 0
    int count=0;
    for(long long i=2;i<n;i++){//we will start checking from 2
        if(prime[i]==0){
            for(long long j=i*i;j<n;j+=i){//we will increment j by i so that multiples of 2 are crossed we will start with i*i because before that every element must be crossed 
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(prime[i]==0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countPrimes(n);
}