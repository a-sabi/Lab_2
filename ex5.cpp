#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stack<int> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        if (s[i] == '+') {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(a + b);
        } else if (s[i] == '-') {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(b - a);
        } else if (s[i] == '*') {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(a * b);
        } else {
            int num = 0;
            while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            st.push(num);
        }
    }
    cout << st.top();
    return 0;
}

