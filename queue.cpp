#include <iostream>
using namespace std;

#define queue_size 100

int Queue[queue_size];
int Front=0,Rear=0,Size;

void enque(int element)
{
    if(Rear == Size)
        cout << endl << "Queue is full";
    else{
            Queue[Rear] = element;
            Rear++;
        }
}

void deque()
{
    if(Front == Size)
        cout << endl << "Queue is empty";
    else{
        cout << endl << "Deleted Data: " << Queue[Front];

        for(int j=0;j<Rear;j++)
            Queue[j] = Queue[j+1];
            Rear--;
    }

}

void Traverse()
{
    for(int i=Front;i<(Rear);i++)
        cout << Queue[i] << "\t";
}

int main()
{
    int data;
    cout << "Enter the size of the queue : ";
    cin >> Size;
    for(int i=0;i<Size;i++)
        {
            cout << "Input Data :";
            cin >> data;
            enque(data);
        }
                cout << endl << "Data List :";
                Traverse();
                deque();
                cout << endl << "Data List :";
                Traverse();
    return 0;
}
