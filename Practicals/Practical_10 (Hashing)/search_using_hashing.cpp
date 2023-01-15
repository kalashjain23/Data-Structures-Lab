/* Given a limited range array containing both positive and non-positive numbers, i.e, elements are in the
range from -MAX to +MAX. Our task is to search if some number is present in the array or not in O(1) time. */

#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 1000

int arr[MAX + MAX + 1];

void insert(int a[], int n)
{
    for (int i = 0; i < n; i++)
        arr[a[i] + MAX] = 1;
}

int search(int x)
{
    if (arr[x + MAX] == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int a[] = { -1, 9, -5, -8, -5, -2 };
    int n = sizeof(a) / sizeof(a[0]);
    insert(a, n);
    int x = -5;
    if (search(x) == 1)
        cout << "Present";
    else
        cout << "Not Present";
    return 0;
}

