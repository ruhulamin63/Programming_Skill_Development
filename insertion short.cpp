#include <iostream>
using namespace std;

#define SIZE 5

void inesertionSort( int a[],int n )
{
    int j,v;

    for( int i=1; i<n; i++ )
    {
        v = a[i];
        j = i-1;
        while ( j>=0 && a[j]>v )
        {
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = v;
    }
}

int main()
{
    int s,e;

    cout << "Enter arr size: ";
        cin >> s;

    int arr[s];

    cout << "Enter of element: ";
        cin >> e;
    cout << "Enter " << e <<" value?" << endl;

    for(int i=0; i<e; i++)
    {
        cin >> arr[i];
    }
    inesertionSort(arr,e);

        cout << "Sorted value of incertion: ";

        for ( int i=0; i<e; i++ )
        {
            cout << arr[i] <<" ";
        }
    return 0;
}
