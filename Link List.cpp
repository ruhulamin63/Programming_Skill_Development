#include <iostream>
using namespace std;

typedef struct ListNode{

        int data;
        struct ListNode *next;

    }* nodeptr;

nodeptr head = NULL, curr;

void AddData(int item)
 {
     nodeptr newNode = new ListNode;
     newNode -> data = item;
     newNode -> next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        curr -> next = newNode;
    }
    curr = newNode;
 }

 void Display()
 {
     nodeptr ptr = head;

     while(ptr != NULL)
     {
         cout << ptr -> data<<" ";
            ptr = ptr -> next;
     }
 }

int main()
{
    int i,n,item;

    cout << "Enter number of nodes: ";
        cin >> n;

    cout << "Enter item: " << endl;
        for(i=0; i<n; i++)
        {
            cin >> item;

            AddData(item);
        }
        Display();

    return 0;
}
