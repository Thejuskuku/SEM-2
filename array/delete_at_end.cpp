#include"delete_at_end.h"


template <class T>
Array<T>::Array(){
	LB=0;
	UB=8;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	
}
template <class T>
void Array<T>::delete_at_end()
{
    if (LB<=UB)
    {
        A[UB]=NULL;
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
	myArray.delete_at_end();
	myArray.delete_at_end();
	myArray.delete_at_end();
	cout<<myArray;
	return 0;
}