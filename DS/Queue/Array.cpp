#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int front, rear, capacity;
    int* queue;

public:
Queue( int c )
{
    front = rear = 0;
    capacity = c;
    queue = new int;
}

void enqueue( int n )
{
    if ( rear==capacity )
        cout << "Queue is Full" << endl ;

    else
        queue[rear++]=n;
}

void dequeue()
{
    for( int i=front; i<rear-1; i++)
        queue[i]=queue[i+1] ;
    
    rear--;
}

void Display()
{
    if ( rear==front )
        cout << "Queue is Empty";
    
    else    {
    for( int i=front; i<rear; i++)
        cout << queue[i] << " " ;
    }
    cout << endl ;
}
};

int main()
{
    int choice, n, e;

    cout << "Enter Capacity To Create A Queue : " ;
        cin >> n ;  
        Queue q(n);

    while ( choice!=4 )
    {
        cout << "\nEnter The Choice:\n"
             << "1.EnQueue\n"
             << "2.DeQueue\n" 
             << "3.Display\n"
             << "4.Exit\n" ;
             << "Choice : "

        cin >> choice ;

        switch(choice)
        {
            case 1 :
            {   cout << "Element to Queue: " ;
                cin >> e;
                q.enqueue(e);
                break;  }

            case 2 :
            {   q.dequeue();
                break;  }
        
            case 3 :
            {   q.Display();
                break;  }

            case 4 :
            break;
        }
    }  
    return 0;
}
