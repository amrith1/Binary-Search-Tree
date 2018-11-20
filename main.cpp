#include <iostream>
#include "BST312.h"
using namespace std;

int main() {

    BST_312<int> bst;
    cout << bst.countNodes()<<endl;
    for(int i = 0; i < 10; i++){
        bst.insertItem((i - 5) * (i - 2) * (i - 7));
    }
    cout << bst.countNodes()<<endl;
    vector<int> inorder = bst.inOrderTraversal();
    for(int i = 0; i < 10; i++){
        cout << inorder[i] << " ";
    }

    bst.deleteItem(18);
    cout << endl;
    inorder = bst.inOrderTraversal();
    for(int i = 0; i < 9; i++){
        cout << inorder[i] << " ";
    }


    if(bst.isItemInTree(6)){
        cout <<endl<< "Yes" << endl;
    }

    BST_312<int> yuh;
    yuh.insertItem(10);
    yuh.insertItem(14);
    yuh.insertItem(16);
    yuh.insertItem(12);
    yuh.insertItem(24);
    yuh.insertItem(8);
    yuh.insertItem(10);
    yuh.insertItem(9);

    vector<int> preor = yuh.preOrderTraversal();
    for(int i = 0; i < 8; i++){
        cout << preor[i] << " ";
    }
    cout << endl;
    vector<int> postor = yuh.postOrderTraversal();
    for(int i = 0; i < 8; i++){
        cout << postor[i] << " ";
    }

    cout << endl << yuh.countNodes();

    yuh.makeEmpty();

    cout << endl << yuh.countNodes();

    return 0;
}