#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 1; i<n; ++i)
    {
        for(int q=0; q<n-i; q++)
        {
            if(a[q]<a[q+1])
            {
                int temp=a[q];
                a[q]=a[q+1];
                a[q+1]=temp;
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
