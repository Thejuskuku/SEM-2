#include "array.cpp"
int main()
{
    Array<int> myArray;
    cout<<"INSERT AT BEGINNING (INT)";
    myArray.insert(3);
    myArray.insert(2);
    myArray.insert(1);
    cout<<myArray<<endl;

    cout<<"INSERT AT END (INT)";
    myArray.insert_at_end(4);
	myArray.insert_at_end(5);
	myArray.insert_at_end(6);
	cout<<myArray<<endl;

    cout<<"INSERT AT INDEX (INT)";
    myArray.insert_at_index(7,3);
	myArray.insert_at_index(8,5);
	myArray.insert_at_index(9,6);
	cout<<myArray<<endl;

    cout<<"DELETE AT BEGINNING (INT)";
	myArray.delete_at_begin();
	cout<<myArray<<endl;

    cout<<"DELETE AT END (INT)";
	myArray.delete_at_end();
	cout<<myArray<<endl;
    
    cout<<"DELETE AT INDEX (INT)";
    myArray.delete_at_index(3);
	cout<<myArray<<endl;

    Array<float> myfArray;
    cout<<"INSERT AT BEGINNING (FLOAT)";
	myfArray.insert(3.2);
	myfArray.insert(2.1);
	myfArray.insert(1.0);
	cout<<myfArray<<endl;

    cout<<"INSERT AT END (FLOAT)";
	myfArray.insert_at_end(3.5);
	myfArray.insert_at_end(5.5);
	myfArray.insert_at_end(6.3);
	cout<<myfArray<<endl;

    cout<<"INSERT AT INDEX (FLOAT)";
    myfArray.insert_at_index(3.7,4);
	myfArray.insert_at_index(5.1,5);
	myfArray.insert_at_index(6.0,6);
	cout<<myfArray<<endl;

    cout<<"DELETE AT BEGINNING (FLOAT)";
	myfArray.delete_at_begin();
	cout<<myfArray<<endl;

    cout<<"DELETE AT END (FLOAT)";
	myfArray.delete_at_end();
	cout<<myfArray<<endl;

    cout<<"DELETE AT INDEX (FLOAT)";
    myfArray.delete_at_index(3);
	cout<<myfArray<<endl;
    

    cout<<"BUBBLE SORT";
    myArray.bubbleSort();
	cout<<myArray<<endl;

	cout<<"INSERTION SORT";
	myfArray.insertionSort();
    cout<<myfArray<<endl;

	cout<<"SELECTION SORT";
	myArray.selectionSort();
	cout<<myArray<<endl;

	cout<<"QUICK SORT";
	//myArray.quickSort(1,6);
	myfArray.quickSort(1,6);
	cout<<myArray;
	cout<<myfArray<<endl;

	cout<<"MERGE SORT";
	myArray.MergeSort(1,6);
    cout<<myArray<<endl;

    cout<<"BINARY SEARCH(8)"<<endl;
	double ind=myArray.BinarySearch(8);
    cout<<ind<<" is the index"<<endl<<endl;

	cout<<"LINEAR SEARCH(5.1)"<<endl;
	double indd=myfArray.LinearSearch(5.1);
	cout<<indd<<" is the index"<<endl<<endl;

	cout<<"ROTATING(Clockwise)";
	myArray.shift(4);
	cout<<myArray<<endl;

	myArray.bubbleSort();

	cout<<"ROTATING(Anti-Clockwise)";
	myArray.shift1(4);
	cout<<myArray<<endl;

	myArray.bubbleSort();

	myArray.insert_at_index(7,3);
	myArray.insert_at_index(8,5);
	myArray.insert_at_index(9,6);
	myArray.bubbleSort();
	cout<<myArray<<endl;

	cout<<"DISTINCT ELEMENTS ONLY";
	myArray.distinct();
	cout<<myArray<<endl;

	myArray.insert_at_index(7,3);
	myArray.insert_at_index(8,5);
	myArray.insert_at_index(9,6);

	cout<<"FREQUENCY TABLE"<<endl;
	myArray.frequency();
	return 0;
}