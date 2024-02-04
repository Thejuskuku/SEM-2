#include"insert_at_begin.h"
template <class T>
Array<T>::Array()
{
    LB=1;
    UB=0;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[])
{

}
template <class T>
void Array<T>::insert_at_begin(T key)
{
    UB=UB+1;
    int K=UB-1;
    while(K>=LB)
    {
        A[K+1]=A[K];
        K=K-1;
    }
    A[LB]=key;
}
template <class U>
ostream& operator <<(ostream& os,Array<U> M)
{
    int i;
    os<<endl;
    for(i=M.LB;i<=M.UB;i++)
    {
        os<<M.A[i]<<" ";
    }
    os<<endl;
    return os;
}
int main()
{
    Array<int> myArray;
    myArray.insert_at_begin(3);
    myArray.insert_at_begin(2);
    myArray.insert_at_begin(1);
    cout<<myArray;
    
    Array<float> myfArray;
	myfArray.insert_at_begin(3.2);
	myfArray.insert_at_begin(2.1);
	myfArray.insert_at_begin(1.0);
	cout<<myfArray;
	return 0;
}