#include <iostream>
using namespace std;

int temp;

#define size 5

void swap(int *a, int *b)
{
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int a[], int n)
{
    int pass,i,flag;

    for( pass=1; pass<n; pass++ )
    {
        flag=0;
        for( i=0; i<n-1; i++ )
        {
            if(a[i] > a[i+1])
                swap(&a[i], &a[i+1]);
                flag=1;
        }
        if( flag == 0)
            break;
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
        bubble(arr,e);

        cout << "Sorted Value:";

            for(i=0; i<e; i++)
            {
                cout << arr[i] <<" ";
            }

    return 0;
}
