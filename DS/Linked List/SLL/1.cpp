#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertHead( Node** head, int new_data)
{
    Node* new_node = new Node();

    new_node->data = new_data ;
    new_node->next = *head ;
    *head = new_node ;
}

void insertAfter( Node* prev_node, int new_data)
{
    if ( prev_node==NULL )
    {
        cout << "Previous Node Cant be NULL!" ;
        return;
    }    

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next ;
    prev_node->next = new_node;    
}

void deleteKey( int key, Node** head )
{
    Node* node = *head;
    if ( node->data==key )
    {
        *head=node->next;
        return;
    }

    while( node!=NULL)
    {
        Node* prev_node = node;
        node=node->next;
        if( node->data==key)
        {
            prev_node->next=node->next;
            break;
        }
    }
}

void deletePos( int pos, Node** head)
{
    Node* node = *head;
    if( pos==1 )
    {
        *head = node->next ;
        return ;
    }

    for( int i=1; i<pos-1; i++ )
        node=node->next;
    
    node->next=node->next->next;
}

void printList( Node* node )
{
    while( node!=NULL )
    {
        cout << node->data << " ";
        node=node->next;
    }
    cout << endl ;
}

int main()
{
    Node* head = NULL;

    insertHead( &head, 0);
    insertHead( &head, 1);
    insertAfter( head, 2);
    insertAfter( head->next, 7);
    insertAfter( head, 5);
    insertAfter( head, 4);
    insertAfter( head->next, 3);

    printList(head);

    deleteKey( 1, &head);
    deleteKey( 0, &head);

    printList(head);

    deletePos( 3, &head);
    deletePos( 1, &head);

    printList(head);

    return 0;
}
