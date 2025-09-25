#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>> returnset(vector<int> &v){
    int target ;
    cin>>target;
    sort(v.begin(), v.end());

    set<vector<int>> s;
    vector<vector<int>> ans;

    for (int i = 0; i < v.size(); i++) {
        int j = i + 1;
        int k = v.size() - 1;
        while (j < k) {
            if (v[i] + v[j] + v[k] == target) {
                s.insert({v[i], v[j], v[k]});
                j++;
                k--;
            } 
            else if (v[i] + v[j] + v[k] < target) {
                j++;
            } 
            else {
                k--;
            }
        }
    }

    for (auto i : s) {
        ans.push_back(i);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num); // Use push_back to add elements to the vector
    }

    vector<vector<int>> ans = returnset(v);

    // Now you can use 'ans' as needed, for example, printing the result
    for (auto i : ans) {
      for (int n : i) {
           cout << n << " ";
        }
        cout << endl;
   }

    return 0;
}