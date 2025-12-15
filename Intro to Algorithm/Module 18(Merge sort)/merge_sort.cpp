#include <iostream>
using namespace std;

void conquer(int c[], int l, int mid, int r) //O(N)
{
    int n = mid-l+1; //array size
    cin >> n;
    int a[n];
    int k = l;
    for(int i=0;i<n;i++)
    {
        a[i] = c[k];
        k++;
    }
    int m = r-mid;
    cin >> m;
    int b[m];
    k = mid+1;
    for(int i=0;i<m;i++)
    {
        b[i] = c[k];
        k++;
    }

    int i=0,j=0, curr=l;

    while(i<n && j<m)
    {
        if(a[i] < b[j])
        {
            c[curr] = a[i];
            i++;
            curr++;
        }
        else
        {
            c[curr] = b[j];
            j++;
            curr++;
        }
    }

    while(i<n)
    {
        c[curr] = a[i];
        i++;
        curr++;
    }

    while(j<m)
    {
        c[curr] = b[j];
        j++;
        curr++;
    }
}
void divide(int a[], int l, int r)  //O(logN)
{
    if(l==r)
        return;
    int mid = (l+r)/2;
    divide(a,l,mid);
    divide(a,mid+1,r);
    conquer(a,l,mid,r);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    divide(a,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

/*
Complexity: Usually O(N + logN) houar kotha bt divide func er vitore
            conquer func call hsse which means ekhane recursion hsse
            so final complexity O(NlogN)
            eta onno sorting algo like selection sort, bubble sort theke better
*/