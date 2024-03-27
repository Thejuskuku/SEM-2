#include "Cycle1_1.cpp"

int main()
{
    Array<int> myArray;
    bool ans=true;
    int val;
    int value;
    int pos;
    int ind;
    int ele;
    while(ans==true)
    {
        cout<<"1: Insert at beginning"<<endl;
        cout<<"2: Insert at end"<<endl;
        cout<<"3: Insert at index"<<endl;
        cout<<"4: Delete at beginning"<<endl;
        cout<<"5: Delete at end"<<endl;
        cout<<"6: Delete at index"<<endl;
        cout<<"7: Index"<<endl;
        cout<<"8: Display"<<endl;
        cout<<"9: Exit"<<endl;

        cin>>val;
        switch(val)
        {
            case 1:
                cout<<"Enter the value to be inserted : ";
                cin>>value;
                myArray.insert_at_begin(value);
                break;
            case 2:
                cout<<"Enter the value to be inserted : ";
                cin>>value;
                myArray.insert_at_end(value);
                break;
            case 3:
                cout<<"Enter the value to be inserted : ";
                cin>>value;
                cout<<"Enter the position : ";
                cin>>pos;
                myArray.insert_at_index(value,pos);
                break;
            case 4:
                myArray.delete_at_begin();
                cout<<"Element deleted from beginning";
                break;
            case 5:
                myArray.delete_at_end();
                cout<<"Element deleted at end";
                break;
            case 6:
                cout<<"Enter the index : ";
                cin>>ind;
                myArray.delete_at_index(ind);
                break;
            case 7:
                cout<<"Enter the element : ";
                cin>>ele;
                myArray.index_element(ele);
                break;
            case 8:
                cout<<myArray;
                break;
            case 9:
                ans=false;
                break;
            default:
                cout<<"Try again";
        }

    }
}