#include <bits/stdc++.h>
using namespace std;

int a[100006];

void merge(int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        merge_sort(left, mid);
        merge_sort(mid + 1, right);

        merge(left, mid, right);
    }
}
void print(int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}

int main()
{
    int n, i = 0;
    while(cin >> n) {
        a[i++] = n;
    }
    merge_sort(0, n - 1);
    print(n);
}