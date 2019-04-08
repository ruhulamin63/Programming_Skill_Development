#include<iostream>
using namespace std;

void Swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void maxHeap(int b[],int i, int n)
{
    int left_child, right_child, largest_index;

    left_child=2*i+1;
    right_child=2*i+2;

    if(left_child < n && b[left_child] > b[i])
    {
        largest_index=left_child;
    }
    else
    {
        largest_index=i;
    }
    if(right_child < n && b[right_child] > b[largest_index])
    {
        largest_index=right_child;
    }
    if(largest_index  != i)
    {
        Swap(&b[largest_index], &b[i]);
        maxHeap(b, largest_index, n);
    }
}

void buildHeap(int b[], int n)
{
    int i;
    for(i=(n/2); i>=0; i--)
    {
        maxHeap(b,i,n);
    }
}

void display(int b[],int n)
{
    int i;
    cout<<"Printing" <<endl;
    for(i=0; i<n; i++)
    {
        cout<<b[i] <<" ";
    }
}
int main()
{
    int n,i;

    cout<<"Enter number of nodes: ";
        cin >> n;

    int a[n];

    cout<<"Enter the value: ";
    for(i=0; i<n; i++)
    {
        cin >>a[i];
    }
    buildHeap(a,n);
    display(a,n);
}
