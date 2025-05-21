#include <iostream>
#include <stdio.h>
#include <set>
#include <iterator>
using namespace std;

int main()
{
   set <string> s;
   set <string>::iterator it;
   s.insert("dipta");
   s.insert("nabil");
   s.insert("arnob");

   pair <set <string>::iterator, bool> p;
  p = s.insert("arnob");

  if(p.second == false)
    {
        cout << "cant" <<endl;
    }
  else
    cout << "insert" << endl;

 // it = s.find(5);
  //s.erase();
  //s.erase(s.find(5));

   for(it = s.begin(); it != s.end(); it++){
    cout << *it << " ";
   }
   cout<< endl;
    return 0;
}
