#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string>li;
    string el;
    string el2;
    while (li.size() != 1000000) {
        cin >> el;
        if (el == "#"){
            break;
        }
        cin >> el2;
        if (el == "+") {
            li.insert(el2);
        }
        else if (el == "-") {
            li.erase(el2);
        }
        else if (el == "?") {
            if (li.count(el2)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
