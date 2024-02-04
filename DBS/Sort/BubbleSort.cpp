#include"BubbleSort.h"

template <class T>
Array<T>::Array(){
	LB=0;
	UB=8;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	
}
template <class T>
void Array<T>::bubbleSort()
{       
    for(int i=LB;i<UB;i++)
    {
        for(int j=LB;j<=UB+LB-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
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
	myArray.bubbleSort();
	cout<<myArray;
	return 0;
}