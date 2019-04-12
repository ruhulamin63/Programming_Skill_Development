#include <iostream>
using namespace std;

void Binary_Search(int a[], int n, int item)
{
    int left,right,mid,position;
    bool found = false;
    left = 0;
    right = n-1;

    while( !found && left <= right )
    {
        mid = (left + right)/2;

        if(a[mid] == item)
        {
            found = true;
            position = mid;
        }
        else if(a[mid] > item)
        {
            right = mid-1;
        }
        else
        {
           left = mid+1;
        }
    }
            if(found == true)
            {
                cout << "Found in index " << position << endl;
            }
            else
            {
                cout << "Not Found" << endl;
            }
}

int main()
{
    int s,e,v;

    cout << "Enter arr size: ";
        cin >> s;

    int a[s];

    cout << "Enter arr element: ";
        cin >> e;
    cout << "Enter " << e << " value ?" << endl;

        for(int i=0; i<e; i++)
        {
            cin >> a[i];
        }

        cout << "Sorted value: ";

        for(int i=0; i<e; i++)
        {
            cout << a[i] <<" ";
        }

        cout << "Enter item to be searched: ";
            cin >> v;

        Binary_Search(a,e,v);

    return 0;
}
