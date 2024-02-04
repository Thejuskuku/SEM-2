#include <iostream>
#include <ostream>
using namespace std;
template <class T>
class Array
{
    int LB,UB,pos;
    T A[100]={3,6,1,8,5,2,9,7,4};
    public:
    Array();
    Array(int,int,T[]);
    void bubbleSort();
    template <class U>
    friend ostream& operator <<(ostream&,Array<U>);
};  