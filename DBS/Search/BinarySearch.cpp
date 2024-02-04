#include"BinarySearch.h"


template <class T>
Array<T>::Array()
{
	LB=0;
	UB=8;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[])
{
	
}
template <class T>
int Array<T>::BinarySearch(T key)
{
    for(int i=LB;i<=UB;i++)
    {
        for (int j=LB;j)
    }
}
template <class U>
ostream& operator << (ostream& os,Array<U> N)
{
	os<<endl;
	os<<N.M<<" is the index";
	os<<endl;
	return os;
}
int main(){
	Array<int> myArray;
	myArray.BinarySearch(4);
	cout<<myArray;
	return 0;
}