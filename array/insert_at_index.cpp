#include"insert_at_index.h"


template <class T>
Array<T>::Array(){
	LB=0;
	UB=8;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	
}
template <class T>
void Array<T>::insert_at_index(T key,int pos){
    UB=UB+1;
    int K=UB-1;
    while(K>=pos)
    {
        A[K+1]=A[K];
        K=K-1;
    }
    A[pos]=key;
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
	myArray.insert_at_index(1,3);
	myArray.insert_at_index(2,5);
	myArray.insert_at_index(3,6);
	cout<<myArray;
	
	Array<float> myfArray;
	myfArray.insert_at_index(3.5,4);
	myfArray.insert_at_index(5.5,5);
	myfArray.insert_at_index(6.3,6);
	cout<<myfArray;
	return 0;
}