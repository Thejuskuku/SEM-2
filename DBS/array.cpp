#include"array.h"


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
void Array<T>::insert(T key)
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
template <class T>
double Array<T>::BinarySearch(T ind)
{
	int p=LB;
	int q=UB;
	while(p<=q)
	{
		index=(p+q)/2;
		if (A[index]>ind) 
		{
			q=index-1;
	    }
		else if (A[index]<ind)
		{
			p=index+1;
		}
		else
		{
			return index;
		}
	}
    return -1;
}

template <class T>
void Array<T>::insertionSort()
{
    int i=LB+1;
    while(i<=UB)
    {
        float key = A[i];
        int j = i-1;
        while(j>=LB && A[j]>key)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
        i=i+1;
    }
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

template <class T>
int Array<T>::partition(T A[],int LB,int UB)
{
    int j=LB-1;
    float pivot=A[UB];
    int i=LB;
    while(i<=UB-1)
    {
        if(A[i]<pivot)
        {
            j=j+1;
            std::swap(A[i],A[j]);
        }
        i=i+1;
    }
    std::swap(A[j+1],A[UB]);
    return  j+1;
}
template <class T>
void Array<T>::quickSort(int LB,int UB)
{       
    if(LB<UB)
    {
        float p=partition(A,LB,UB);
        quickSort(LB,p-1);
        quickSort(p+1,UB);
    }
}

template <class T>
void Array<T>::MergeSort(int LB,int UB)
{
        if(LB<UB)
        {
            int M=(LB+UB)/2;
            MergeSort(LB,M);
            MergeSort(M+1,UB);
            Merge(LB,M,UB);
        }   
}

template <class T>
void Array<T>::Merge(int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1]={};
    int R[n2+1]={};
    for(int i=0;i<=n1;i++)
    {
        L[i]=A[p+i];
    }
    for(int j=0;j<=n2;j++)
    {
        R[j]=A[q+1+j];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int i=0, j=0;
    for(int k=p; k<=r; k++){
        if(L[i]<=R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}

template <class T>
double Array<T>::LinearSearch(T indd)
{
    int i=LB;
    while (i<=UB)
    {
        if (A[i]==indd)
        {
            index=i;
            return index;
            break;
        }
        i=i+1;
    }
    return -1;
}

template <class T>
void Array<T>::shift(int k)
{
    int temp[6];
    int l=0;
    for(int i=k;i<6;i++)
    {
        temp[l]=A[i+1];
        l++;
    }
    for(int j=0;j<k;j++)
    {
        temp[l]=A[j+1];
        l++;
    }
    for (int m = 0; m < 6; m++) {
        A[m+1] = temp[m];
    }
}

template <class T>
void Array<T>::shift1(int k)
{
    int temp[6];
    int l=0;
    for(int i=6-k;i<6;i++)
    {
        temp[l]=A[i+1];
        l++;
    }
    for(int j=0;j<6-k;j++)
    {
        temp[l]=A[j+1];
        l++;
    }
    for (int m = 0; m < 6; m++) {
        A[m+1] = temp[m];
    }
}

template <class T>
void Array<T>::distinct()
{
    int temp[6];
    int l=0;
    for(int i=1;i<10;i++)
    {
        if(A[i]!=A[i+1])
        {
            temp[l]=A[i];
            l++;
        }
    }
    UB=l;
    for(int j=1;j<7;j++)
    {
        A[j]=temp[j-1];
        B[j]=temp[j-1];
    }
}

template <class T>
void Array<T>::frequency()
{
    cout<<"ELEMENT"<<"     "<<"FREQUENCY"<<endl;
    for(int i=1;i<=6;i++)
    {
        int count=0;
        for(int j=1;j<=UB;j++)
        {
            if(B[i]==A[j])
            {
                count++;
            }
        }
        cout<<B[i]<<"              "<<count<<endl;
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
