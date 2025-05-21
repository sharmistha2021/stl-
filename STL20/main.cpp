#include <iostream>
#include <bitset>


using namespace std;

int main()
{
    bitset<8> b(string("1101"));
    bitset<8> a(string("1010"));
    //cout << (a == b) << endl;
    cout << (a & b) << endl;

    // b <<= 1; // left shift
     //cout << b << endl;
    //b.flip()// reverse hbe string ta
   // b.set();
    //b.reset();
    //cout << b.size() << endl;
    //cout << b << endl;
    //cout <<b.count() << endl;
    //cout <<b.size() - b.count() << endl;
//    if(b.any()){       // reverse function......b.none()
//        cout <<"true" << endl;
//    }else{
//    cout<< "false" << endl;
//    }
    //b.set(1);// 1 ashbe 1no index a
    //b.reset(1); // 0 ashbe 1 no index a










    return 0;
}
