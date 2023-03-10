#include <iostream>
#include <deque>
using namespace std;


int main(){
    deque<int> c_1;
    deque<int> c_2;
    int n = 0;
    int k[5], h[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>k[i];
    }
    for (int j = 0; j < 5; j++)
    {
        cin>>h[j];
    }
    for (int i = 4; i >= 0; i--)
    {
        c_1.push_front(k[i]);
        c_2.push_front(h[i]);
    }
    while (!c_1.empty() && !c_2.empty()){
        if ((c_1.empty() || c_2.empty()) || n >= 1000000){
            break;
        }
        if ((c_1.front() == 0 || c_2.front() == 0) && (c_1.front() == 9 || c_2.front() == 9)){
            if (c_1.front() == 0) {
                c_1.push_back(c_1.front());
                c_1.push_back(c_2.front());
                c_1.pop_front();
                c_2.pop_front();
            }
            else {
                c_2.push_back(c_1.front());
                c_2.push_back(c_2.front());
                c_1.pop_front();
                c_2.pop_front();
            }
        }
        else if (c_1.front() > c_2.front()){
            c_1.push_back(c_1.front());
            c_1.push_back(c_2.front());
            c_1.pop_front();
            c_2.pop_front();
        }
        else if (c_1.front() < c_2.front()){
            c_2.push_back(c_1.front());
            c_2.push_back(c_2.front());
            c_1.pop_front();
            c_2.pop_front();
        }
        n++;
    }
    if (n >= 1000000){
        cout << "botva" << endl;
    }
    else {
        if(c_1.empty()){
            cout << "second" << " " << n << endl;
        }
        else{
            cout << "first" << " " << n << endl;
        }
    }
}