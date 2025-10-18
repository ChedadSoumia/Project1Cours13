#include <iostream>
#include "clsDblLinkedList.h"

int main()
{
    clsDblLinkedList<int> MyDblLinkedList;

    MyDblLinkedList.InsertAtBeginning(6);
    MyDblLinkedList.InsertAtBeginning(1);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(2);
    
    MyDblLinkedList.PrintList();    
    
    cout << "\n\n";
    
    
    //clsDblLinkedList<int>::Node* n;
    MyDblLinkedList.InsertAfter(5,200);
    MyDblLinkedList.PrintList();

    

    cout << "\n\n";

    










    return 0;
}
