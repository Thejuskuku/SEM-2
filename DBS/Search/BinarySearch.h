#include <iostream>
#include <ostream>
using namespace std;
template <class T>
class Array
{
    int LB,UB;
    T A[100]={1,2,3,4,5,6,7,8,9};
    public:
    Array();
    Array(int,int,T[]);
    int BinarySearch(T);
    template <class U>
    friend ostream& operator <<(ostream&,Array<U>);
};  