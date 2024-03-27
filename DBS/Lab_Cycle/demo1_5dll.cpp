#include "Cycle1_5dll.cpp"

int main() {
    LinkedList<int> myLinkedList{};
    bool ans=true;
    int val;
    int keyFront;
    int keyEnd;
    int keyAfter, itemAfter;
    int keyBefore, itemBefore;
    int keyToDelete;
    while(ans==true)
    {
        cout<<"1: Create"<<endl;
        cout<<"2: Insert at beginning"<<endl;
        cout<<"3: Insert at end"<<endl;
        cout<<"4: Insert after index"<<endl;
        cout<<"5: Insert before index"<<endl;
        cout<<"6: Delete at beginning"<<endl;
        cout<<"7: Delete at end"<<endl;
        cout<<"8: Delete at key"<<endl;
        cout<<"9: Display"<<endl;
        cout<<"10: Exit"<<endl;

        cin>>val;
        switch(val)
        {
            case 1:
                cout<<"Creating the first linked list"<<endl;
                myLinkedList.create();
                myLinkedList.display();
                cout<<endl;
                break;
            case 2:
                cout << "Enter the data to be inserted at the front: ";
                cin >> keyFront;
                myLinkedList.insertAtBeginning(keyFront);
                myLinkedList.display();
                cout << endl;
                break;
            case 3:
                cout << "Enter the data to be inserted at the end: ";
                cin >> keyEnd;
                myLinkedList.insertAtEnd(keyEnd);
                myLinkedList.display();
                cout << endl;
                break;
            case 4:
                cout << "Enter the data after which the item is to be inserted: ";
                cin >> keyAfter;
                cout << endl;
                cout << "Enter the data to be inserted after " << keyAfter << ": ";
                cin >> itemAfter;
                cout << endl;
                myLinkedList.insertAfterKey(keyAfter, itemAfter);
                myLinkedList.display();
                cout << endl;
                break;
            case 5:
                cout << "Enter the data before which the item is to be inserted: ";
                cin >> keyBefore;
                cout << endl;
                cout << "Enter the data to be inserted before " << keyBefore << ": ";
                cin >> itemBefore;
                cout << endl;
                myLinkedList.insertBeforeKey(keyBefore, itemBefore);
                myLinkedList.display();
                cout << endl;
                break;
            case 6:
                cout << "After deletion from the front:" << endl;
                myLinkedList.deleteAtBeginning();
                myLinkedList.display();
                cout << endl;
                break;
            case 7:
                cout << "After deletion from the end:" << endl;
                myLinkedList.deleteAtEnd();
                myLinkedList.display();
                cout << endl;
                break;
            case 8:
                cout << "Enter the key to delete: ";
                cin >> keyToDelete;
                cout << endl;
                myLinkedList.deleteAtKey(keyToDelete);
                myLinkedList.display();
                cout << endl;
                break;
            case 9:
                myLinkedList.display();
                cout<<endl;
                break;
            case 10:
                ans=false;
                break;
            default:
                cout<<"Try again";
        }
    }
}
