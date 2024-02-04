#include"SelectionSort.h"

template <class T>
Array<T>::Array(){
	LB=0;
	UB=8;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	
}
template <class T>
void Array<T>::selectionSort()
{       
    for(int i=LB;i<UB;i++)
    {
        int min=i;
        for(int j=i+1;j<=UB;j++)
        {
            if(A[j]<A[min])
            {
                 min=j;
            }
        }    
        if (min!=i)
        {
            int temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
        
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
	myArray.selectionSort();
	cout<<myArray;
	return 0;
}