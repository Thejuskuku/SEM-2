#include"BinarySearch.h"


template <class T>
Array<T>::Array()
{
	LB=0;
	UB=8;
	index=NULL;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[])
{
	
}
template <class T>
int Array<T>::BinarySearch(T key)
{
	int p=LB;
	int q=UB;
	while(p<=q)
	{
		index=(p+q)/2;
		if (A[index]>key) 
		{
			q=index-1;
	    }
		else if (A[index]<key)
		{
			p=index+1;
		}
		else
		{
			return index;
		}
	}
}
template <class U>
ostream& operator << (ostream& os,Array<U> N)
{
	os<<endl;
	os<<N.index<<" is the index";
	os<<endl;
	return os;
}
int main(){
	Array<int> myArray;
	myArray.BinarySearch(4);
	cout<<myArray;
	return 0;
}