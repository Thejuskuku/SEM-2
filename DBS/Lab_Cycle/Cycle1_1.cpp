#include "Cycle1_1.h"

template <class T>
Array<T>::Array(){
	LB=1;
	UB=0;
	index=NULL;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	
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

template <class T>
void Array<T>::insert_at_end(T key){
	UB=UB+1;
	A[UB]=key;
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

template <class T>
void Array<T>::delete_at_index(int pos)
{
    if (LB<=pos && pos<=UB)
    {
        int k=pos+1;
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

template <class T>
void Array<T>::index_element(int val)
{
    int index=1;
    while(index<=UB)
    {
        if(A[index]==val)
        {
            cout<<"Index of the element "<<val<<"  is: "<<index<<endl;
        }
        else
        {
            cout<<"Element not in array"<<endl;
        }
        index++;
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


