#include "Cycle1_5dll.h"

template<class T>

Node<T>::Node(T data) {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
}

template<class T>
T Node<T>::get_data() {
    return data;
}

template<class T>
void Node<T>::set_data(T data) {
    this->data = data;
}

template<class T>
void Node<T>::set_prev(Node *prev) {
    this->prev = prev;
}

template<class T>
Node<T> *Node<T>::get_prev() {
    return prev;
}
template<class T>
void Node<T>::set_next(Node *next) {
    this->prev = next;
}

template<class T>
Node<T> *Node<T>::get_next() {
    return next;
}

template<class T>
void LinkedList<T>::create() {
    string choice;
    T x;
    Node<T> *current = nullptr;
    do {
        cout << "Enter the data: ";
        cin >> x;
        cout << endl;
        Node<T> *node = new Node<T>(x);
        if (head == nullptr) 
        {
            head = node;
            current = head;
        } 
        else {
            current->set_next(node);
            current->set_prev(node);
            current = node;
        }
        cout << "Do you want to enter more values? (y/n): ";
        cin >> choice;
        cout << endl;
    } while (choice == "y");
}

template<class T>
void LinkedList<T>::display() {
    Node<T> *t = head;
    while (t != NULL) {
        cout << t->get_data() << " ";
        t = t->get_next();
    }
}

template<class T>
void LinkedList<T>::insertAtBeginning(T key) {
    Node<T> *node = new Node<T>(key);
    node->set_data(key);
    node->set_next(head);
    if (head != nullptr)
    {
        head->set_prev(node);
    }
    head = node;
}

template<class T>
void LinkedList<T>::insertAtEnd(T key) {
    Node<T> *q = head;
    while (q->get_next() != NULL) {
        q = q->get_next();
    }
    Node<T> *node = new Node<T>(key);
    node->set_data(key);
    q->set_next(node);
    node->set_prev(q);
    tail=node;
}

template<class T>
void LinkedList<T>::insertAfterKey(T key, T value) {
    Node<T> *p = head;
    while (p->get_next() != NULL && p->get_data() != key) {
        p = p->get_next();
    }
    if (p->get_next() == NULL) {
        cout << "Key is not available" << endl;
        return;
    } else {
        Node<T> *q = p->get_next();
        Node<T> *node = new Node<T>(value);
        node->set_data(value);
        node->set_next(q);
        q->set_prev(node);
        p->set_next(node);
        node->set_prev(p);
    }
}

template<class T>
void LinkedList<T>::insertBeforeKey(T key, T item) {
    Node<T> *p = head;
    Node<T> *q = p->get_next();
    while (q->get_next() != NULL && q->get_data() != key) {
        p = q;
        q = q->get_next();
    }
    if (q->get_next() == NULL) {
        cout << "Key is not in this link list" << endl;
        return;
    } else {
        Node<T> *node = new Node<T>(item);
        node->set_next(q);
        q->set_prev(node);
        p->set_next(node);
        node->set_prev(p);
    }
}

template<class T>
void LinkedList<T>::deleteAtBeginning() {
    Node<T> *temp = head;
    head = head->get_next();
    delete (temp);
}

template<class T>
void LinkedList<T>::deleteAtEnd() {
    Node<T> *p = head;
    Node<T> *q = p->get_next();
    while (q->get_next() != NULL) {
        p = q;
        q = q->get_next();
    }
    p->set_next(NULL);
    delete (q);
}

template<class T>
void LinkedList<T>::deleteAtKey(T key) {
    Node<T> *p = head;
    Node<T> *q = p->get_next();

    if (head->get_data() == key) {
        head = head->get_next();
        delete p;
        return;
    }

    while (q != NULL && q->get_data() != key) {
        p = q;
        q = q->get_next();
    }

    if (q == NULL) {
        cout << "Key not available" << endl;
        return;
    }

    p->set_next(q->get_next());
    (q->get_next())->set_prev(p);
    delete q;
}
