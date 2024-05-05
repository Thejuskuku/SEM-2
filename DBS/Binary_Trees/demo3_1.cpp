#include <iostream>
#include "Cycle3_1.cpp"

int main() {
    BinaryTree tree(10);

    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Pre-order traversal: ";
    tree.preOrder();
    std::cout << std::endl;

    std::cout << "In-order traversal: ";
    tree.inOrder();
    std::cout << std::endl;

    std::cout << "Post-order traversal: ";
    tree.postOrder();
    std::cout << std::endl;

    return 0;
}