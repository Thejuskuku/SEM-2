#include"delete_at_begin.h"


template <class T>
Array<T>::Array(){
	LB=0;
	UB=8;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	
}
template <class T>
void Array<T>::delete_at_begin()
{
    if (LB<=UB)
    {
        int k=LB+1;
        while (k<=UB)
        {
            A[k-1]=A[k];
            k=k+1;
        }
        UB=UB-1;
    }
    else
    {
        cout<<"\nIndex out of bound\n";
    }
}
template <class U>
ostream& operator << (ostream& os,Array<U> M){
	int i;
	os<<endl;
	for (i=M.LB;i<=M.UB;i++){
		os<<M.A[i]<<" ";
	}
	os<<endl;
	return os;
}
int main(){
	Array<int> myArray;
	myArray.delete_at_begin();
	myArray.delete_at_begin();
	myArray.delete_at_begin();
	cout<<myArray;
	return 0;
}