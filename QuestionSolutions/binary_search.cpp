#include <iostream>
using namespace std;
void binary_search(int *a)
{
    cout << "Initial " << endl;
    cout << endl;
    int key = 14;
    bool found = false;
    int start = 0,
        end = 11;
    int mid = (end + start) / 2;
    while (start <= end)
    {
        mid = (end + start) / 2;
        cout<<"Start : "<<start<<" , End : "<<end<<endl;
        for (int i = start; i <= end; i++)
        {
            cout << a[i] << " ";
        }
        cout<<endl;
        if (a[mid] == key)
        {
            found = true;
            cout << "At index = " << mid << endl;
            break;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }

    }
}
int main()
{
    int a[] = {1, 3, 5, 6, 7, 8, 9, 11, 14, 15, 19, 27};
    binary_search(a);
    return 0;
}