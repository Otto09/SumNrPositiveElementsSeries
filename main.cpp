#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 5, 4, 6, 3, 9, 5 ,-1,-3, 11, 10, 0};
    int n = sizeof(a)/sizeof(a[0]);
    int i, contor = 0, suma = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            suma += a[i];
            contor++;
        }
    }

    cout << "Suma elementelor pozitive din sir este: " << suma << endl;
    cout << "In sir sunt " << contor << " valori pozitive" << endl;
    return 0;
}
