#include <iostream>
#include<ostream>

using namespace std;

template<class T>

class Node {
    T data;
    Node *prev;
    Node *next;
public:
    Node(T);

    T get_data();

    void set_data(T);

    void set_prev(Node *prev);

    Node *get_prev();

    void set_next(Node *next);

    Node *get_next();
};

template<class T>
class LinkedList {
    Node<T> *head;
    Node<T> *tail;
public:
    void create();

    void display();

    void insertAtBeginning(T);

    void insertAtEnd(T);

    void insertAfterKey(T, T);

    void insertBeforeKey(T, T);

    void deleteAtBeginning();

    void deleteAtEnd();

    void deleteAtKey(T);

};
