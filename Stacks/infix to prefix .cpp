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
//     result.push_back(ch);
//     result += val1;
//     result += val2;
//     return result;
// }

// int main() {
//     string s = "(7+9)*4/8-3"; // Infix Expression
//     cout << "Infix: " << s << endl;
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
//             // s[i] is an operator: *, /, +, -
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

//     cout << "Prefix: " << val.top() << endl;
//     return 0;
// }


#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int priority(char c) {
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    if(c == '^') return 3;
    return 0;
}

// string infixToPostfix(string str) {
//     int n = str.length();
//     stack<char> st;
//     string ans = "";
    
//     for(int i = 0; i < n; i++) {
//         char c = str[i];

//         if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
//             ans += c;
//         }
//         else if(c == '(') {
//             st.push(c);
//         }
//         else if(c == ')') {
//             while(!st.empty() && st.top() != '(') {
//                 ans += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else {
//             while(!st.empty() && priority(c) <= priority(st.top())) {
//                 if(c == '^' && st.top() == '^') break; // Right-associative condition
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }

//     while(!st.empty()) {
//         ans += st.top();
//         st.pop();
//     }

//     return ans;
// }

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

string infixToPrefix(string str) {
    // Reverse the infix expression
    reverse(str.begin(), str.end());
    
    // Change '(' to ')' and vice versa
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '(') {
            str[i] = ')';
        }
        else if(str[i] == ')') {
            str[i] = '(';
        }
    }

    // Get postfix of the modified expression
    string postfix = infixToPostfix(str);

    // Reverse postfix to get prefix
    reverse(postfix.begin(), postfix.end());

    return postfix;
}

int main() {
    string str;
    cout << "Enter an infix expression: ";
    cin >> str;
    cout << "Prefix expression: " << infixToPrefix(str);
    return 0;
}
