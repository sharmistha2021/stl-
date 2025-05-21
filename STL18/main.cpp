#include <iostream>
#include <stdio.h>
#include <map>
#include <set>
using namespace std;

int main()
{
    multiset <int> s;
    multiset <int>::iterator it;
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(100);

    for(it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }




//    multimap <string, int> m;
//    multimap <string, int>::iterator it;
//    m.insert(make_pair("dipta",43));
//    m.insert(make_pair("dipta",41));
//    m.insert(make_pair("dipta",42));
//
//    for(it = m.begin(); it != m.end(); it++){
//        cout << it->first << " " << it->second<<endl;
//    }
    return 0;
}




