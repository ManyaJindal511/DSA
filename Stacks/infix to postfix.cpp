// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;

// int prio(char ch) {
//     if(ch == '+' || ch == '-') return 1;
//     else if(ch == '*' || ch == '/') return 2;
//     return 0;
// }

// string solve(string val1, string val2, char ch) {
//     string result = "";
//     result += val1;
//     result += val2;
//     result.push_back(ch);
//     return result;
// }

// int main() {
//     string s = "(7+9)*4/8-3"; // Infix Expression
//     cout << s << endl;
//     stack<string> val;
//     stack<char> op;

//     for(int i = 0; i < s.length(); i++) {
//         // Check if s[i] is a digit
//         if(s[i]>=48 && s[i]<=57){
//             val.push(to_string(s[i]-48));
//         }
//         else if (s[i] == '(') {
//             op.push(s[i]);
//         } 
//         else if (s[i] == ')') {
//             while (op.top() != '(') {
//                 char ch = op.top();
//                 op.pop();
//                 string val2 = val.top();
//                 val.pop();
//                 string val1 = val.top();
//                 val.pop();
//                 string ans = solve(val1, val2, ch);
//                 val.push(ans);
//             }
//             op.pop();
//         } 
//         else {
//             // s[i] is -> *, /, +, -
//             while(!op.empty() && prio(s[i]) <= prio(op.top())) {
//                 char ch = op.top();
//                 op.pop();
//                 string val2 = val.top();
//                 val.pop();
//                 string val1 = val.top();
//                 val.pop();
//                 string ans = solve(val1, val2, ch);
//                 val.push(ans);
//             }
//             op.push(s[i]);
//         }
//     }

//     while(!op.empty()) {
//         char ch = op.top();
//         op.pop();
//         string val2 = val.top();
//         val.pop();
//         string val1 = val.top();
//         val.pop();
//         string ans = solve(val1, val2, ch);
//         val.push(ans);
//     }

//     cout << val.top() << endl;
//     return 0;
// }


#include<iostream>
#include<string>
#include<stack>
using namespace std;

int priority(char c) {
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    if(c == '^') return 3;
    return 0;
}

string infixToPostfix(string str){
    int i=0;
    stack<char> st;
    string ans="";
    int n=str.length();
    while(i<n){
        if((str[i] >='A' && str[i]<='Z') || (str[i] >='a' && str[i]<='z') || (str[i] >='0' && str[i]<='9')){
            ans+=str[i];
        }
        else if(str[i] == '('){
            st.push(str[i]);
        }
        else if(str[i] == ')'){
            while(!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && priority(str[i]) <= priority(st.top())){
                ans+=st.top();
                st.pop();
            }
            st.push(str[i]);
        }
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<infixToPostfix(str);
}