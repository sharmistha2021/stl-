#include <iostream>
#include <vector>
#include <stdio.h>
#include <iterator>
using namespace std;

int main()
{
    //freopen("input", "r", stdin);
    vector <int> v;
    v[0]= 1;
    v[1] = 3;
    v[2] = 5;
    v.push_back(8);
    v[4] = 9;
    v[5] = 12;
    vector <int>::iterator it = lower_bound(v.begin(), v.end(), 6);
    cout << distance(v.begin(), it) << endl;//
   // cout << *it << endl;


//    bool ans = binary_search(v.begin(), v.end(), 5);
//    if(ans)
    return 0;
}
