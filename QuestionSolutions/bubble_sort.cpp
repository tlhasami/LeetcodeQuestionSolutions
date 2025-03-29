#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 1, 4, 2, 8};
    //-----> starting of first how the array was given
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    //-----> Sorting by Bubble Sort
    for (int i = 0; i < 5; i++)
    {
        cout << "i = " << i << endl;
        bool is_swap = false;
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j - 1] > a[j])
            {
                swap(a[j - 1], a[j]);
                is_swap = true;
            }
            for (int i = 0; i < 5; i++)
            {
                cout << a[i] << " ";
            }
            cout << " Swap " << is_swap << endl;
        }
        // if their is no swap above that mean the above array is sorted
        if (!is_swap)
        {
            cout << "break " << endl;
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << endl;

    int v[] = {53, 25, 84, 47, 61};

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        bool is_swap = false;
        cout << "i = " << i << endl;
        for (int j = 0; j < 5 - i; j++)
        {
            if (v[j - 1] < v[j])
            {
                swap(v[j - 1], v[j]);
                is_swap = true;
            }
            for (int i = 0; i < 5; i++)
            {
                cout << v[i] << " ";
            }
            cout << " Swap " << is_swap << endl;
        }
        if (!is_swap)
        {
            cout << "break " << endl;
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}