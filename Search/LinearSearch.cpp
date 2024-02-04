#include"LinearSearch.h"


template <class T>
Array<T>::Array(){
	LB=0;
	UB=8;
    index=NULL;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	
}
template <class T>
void Array<T>::LinearSearch(T key)
{
    int i=LB;
    while (i<=UB)
    {
        if (A[i]==key)
        {
            index=i;
            break;
        }
        i=i+1;
    }
}
template <class U>
ostream& operator << (ostream& os,Array<U> M)
{
	os<<endl;
	os<<M.index<<" is the index";
	os<<endl;
	return os;
}
int main(){
	Array<int> myArray;
	myArray.LinearSearch(6);
	cout<<myArray;
	return 0;
}