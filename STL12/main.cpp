#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int ar[5] = {1, 3, 2, 6, 4};
    list <int> mylist(ar, ar+5);
    list <int>::iterator it;
    mylist.pop_front();
    mylist.pop_front();
    mylist.pop_back();

    //cout << mylist.front() >> endl;
   // cout << mylist.back() >> endl;


    for(it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << "\n";

//    list <int> mylist;
//    if(mylist.empty()){
//        cout << "Empty" << end1;
//    }
//    else{
//        cout << "Filled" << end1;
//    }
    return 0;
}
