#include<iostream>
#include<ostream>

using namespace std;
template <class T>
class Array{
	int LB,UB,pos,index;
	T A[100]={3,6,1,8,5,2,9,7,4};
	T B[100];
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

 	template <class U>
  	friend ostream& operator<<(ostream&, Array<U> );
};