#include <iostream>
using namespace std;

#define SIZE 5

void selectionSort(int a[],int n)
{
    int select,minIndex,minValue;

    for( select=0; select<n-1; select++ )
    {
        minIndex = select;
        minValue = a[select];

            for( int i=select+1; i<n ;i++ )
            {
                if (a[i] < minValue)
                {
                    minValue = a[i];
                    minIndex = i;
                }
            }
            a[minIndex] = a[select];
            a[select]= minValue;
    }
}

int main()
{
    int i,e,s;

    cout << "Enter arr size:";
        cin >> s;

    int arr[s];

    cout << "Enter of element:";
        cin >> e;
    cout << "Enter " << e << " value?" << endl;

        for( i=0;i<e; i++)
        {
            cin >> arr[i];
        }
        selectionSort(arr,e);

        cout << "Sorted Value:";

            for(i=0; i<e; i++)
            {
                cout << arr[i] <<" ";
            }

    return 0;
}
