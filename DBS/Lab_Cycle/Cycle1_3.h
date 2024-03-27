#include<iostream>
#include<ostream>
#include <math.h>

using namespace std;
template <class T>
class Array{
	int LB,UB,pos,index;
	T A[100];
  public:
  	Array();
  	Array(int,int,T[]);
  	void insert_at_begin(T);
	void insert_at_end(T);
	void insert_at_index(T,int);
	void delete_at_begin();
	void delete_at_end();
	void delete_at_index(int);
    void index_element(int);
	void bubbleSort();
	void insertionSort();
	void selectionSort();
	double BinarySearch(T);
	int partition(T[], int, int);
    void quickSort(int,int);
	void MergeSort(int, int);
    void Merge(int,int,int);
	double LinearSearch(T);
	void shift(int);
	void shift1(int);
	void distinct();
	void frequency();

 	template <class U>
  	friend ostream& operator<<(ostream&, Array<U> );
};