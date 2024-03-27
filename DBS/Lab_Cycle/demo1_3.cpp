#include "Cycle1_3.cpp"
int main()
{
    Array<int> myArray;
    bool ans=true;
    int val;
    int value;
    int pos;
    int ind;
    int value1;
    int value2;
    int value3;
    int value4;
    int ele;
    int count=0;
    while(ans==true)
    {
        cout<<"1: Insert at beginning"<<endl;
        cout<<"2: Insert at end"<<endl;
        cout<<"3: Insert at index"<<endl;
        cout<<"4: Delete at beginning"<<endl;
        cout<<"5: Delete at end"<<endl;
        cout<<"6: Delete at index"<<endl;
        cout<<"7: Quick Sort"<<endl;
        cout<<"8: Bubble Sort"<<endl;
        cout<<"9: Insertion Sort"<<endl;
        cout<<"10: Merge Sort"<<endl;
        cout<<"11: Selection Sort"<<endl;
        cout<<"12: Binary Search"<<endl;
        cout<<"13: Linear Search"<<endl;
        cout<<"14: Left Rotation"<<endl;
        cout<<"15: Right Rotation"<<endl;
        cout<<"16: Frequency Count"<<endl;
        cout<<"17: Distinct"<<endl; 
        cout<<"18: Index"<<endl;
        cout<<"19: Display"<<endl;
        cout<<"20: Exit"<<endl;

        cin>>val;
        switch(val)
        {
            case 1:
                cout<<"Enter the value to be inserted : ";
                cin>>value;
                myArray.insert_at_begin(value);
                count++;
                break;
            case 2:
                cout<<"Enter the value to be inserted : ";
                cin>>value;
                myArray.insert_at_end(value);
                count++;
                break;
            case 3:
                cout<<"Enter the value to be inserted : ";
                cin>>value;
                cout<<"Enter the position : ";
                cin>>pos;
                myArray.insert_at_index(value,pos);
                count++;
                break;
            case 4:
                myArray.delete_at_begin();
                cout<<"Element deleted from beginning";
                count--;
                break;
            case 5:
                myArray.delete_at_end();
                cout<<"Element deleted at end";
                break;
                count--;
            case 6:
                cout<<"Enter the index : ";
                cin>>ind;
                myArray.delete_at_index(ind);
                count--;
                break;
            case 7:
                myArray.quickSort(1,count);
                cout<<myArray;
                break;
            case 8:
                myArray.bubbleSort();
                cout<<myArray;
                break;
            case 9:
                myArray.insertionSort();
                cout<<myArray;
                break;
            case 10:
                myArray.MergeSort(1,count);
                cout<<myArray;
                break;
            case 11:
                myArray.selectionSort();
                cout<<myArray;
                break;
            case 12:
                cout<<"Enter the element to search : ";
                cin>>value2;
                //int value2=myArray.BinarySearch(val);
                cout<<myArray.BinarySearch(value2)<<" is the index"<<endl;
                break;
            case 13:
                cout<<"Enter the element to search : ";
                cin>>value1;
                //int value1=myArray.LinearSearch(val);
                cout<<myArray.LinearSearch(value1)<<" is the index"<<endl;
                break;
            case 14:
                cout<<"Enter the element to shift from : ";
                cin>>value3;
                myArray.shift(value3);
                break;
            case 15:
                cout<<"Enter the element to shift from : ";
                cin>>value4;
                myArray.shift1(value4);
                break;
            case 16:
                cout<<"FREQUENCY TABLE"<<endl;
	            myArray.frequency();
                break;
            case 17:
                myArray.distinct();
	            cout<<myArray<<endl;
                break;
            case 18:
                cout<<"Enter the element : ";
                cin>>ele;
                myArray.index_element(ele);
                break;
            case 19:
                cout<<myArray;
                break;
            case 20:
                ans=false;
                break;
            default:
                cout<<"Try again";
        }

    }
}