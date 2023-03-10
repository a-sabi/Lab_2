#include <iostream>
#include <stack>

using namespace std;


int main() {
    deque <int> s;
    string el;
    cin>>el;
    for (int i = 0; i < el.size(); i++){
        if (!s.empty()){
            if (el[i] == ')' && s.back() == '('){
                s.pop_back();
            }
            else if (el[i] == ']' && s.back() == '['){
                s.pop_back();
            }
            else if (el[i] == '}' && s.back() == '{'){
                s.pop_back();
            }
            else{
                s.push_back(el[i]);
            }
        }
        else{
            s.push_back(el[i]);
        }
    }
    if (s.empty()){
        cout<< "yes" <<endl;
    }
    else{
        cout<< "no" <<endl;
    }
}
