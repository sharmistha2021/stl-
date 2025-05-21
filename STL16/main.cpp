#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

int main()
{
    stack <string> s;
    s.push("dipta");
    s.push("nabil");
    s.push("arnob");

    while(!s.empty()){
        string x;
        x = s.top();
        cout << x << endl;
        s.pop();
    }

    //s.pop();

    //cout << s.top() <<endl;

    return 0;
}
