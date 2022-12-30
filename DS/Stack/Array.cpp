#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int front, rear, capacity;
    int* stack;

public:
Stack( int c )
{
    front = rear = 0;
    capacity = c;
    stack = new int;
}

void push( int n )
{
    if ( rear==capacity )
        cout << "Stack is Full" << endl;

    else
        stack[rear++]=n;
}

void pop()
{
    rear--;
}

void Display()
{
    if ( rear==front )
        cout << "Stack is Empty";
    
    else    {
    for( int i=front; i<rear; i++)
        cout << stack[i] << " " ;
    }
    cout << endl ;
}
};

int main()
{
    int choice, n, e;

    cout << "Enter Capacity To Create A Stack : " ;
        cin >> n ;  
        Stack s(n);

    while ( choice!=4 )
    {   
        cout << "\nEnter The Choice:\n"
             << "1.Push\n"
             << "2.Pop\n" 
             << "3.Display\n"
             << "4.Exit\n" 
             << "Choice : " ;

        cin >> choice ;

        switch(choice)
        {
            case 1 :
            {   cout << "Element to Push: " ;
                cin >> e;
                s.push(e);
                break;  }

            case 2 :
            {   s.pop();
                break;  }
        
            case 3 :
            {   s.Display();
                break;  }

            case 4 :
            break;
        }
    }  
    return 0;
}
