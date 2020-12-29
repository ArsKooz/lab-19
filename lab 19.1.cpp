#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Vvedite razmer massiva\n";
    cin >> n;
    int* a = new int[n]; 
    int* r = new int[n];
    cout << "Vvedite znacheniya massiva\n";
   
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    int j = 0;
    r[j] = a[j];
    j++;
    for (i = 1; i < n; i++)
    {
        if (a[i - 1] != a[i]) {
            r[j] = a[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++)
        cout << r[i]<<" ";
    return 0;
}