#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
int n, maxim, maxi, i, fr[100];
int main()
{
    while (fin >> n)
    {
        fr[n]++;
    }
    maxim = fr[0];
    for (i = 1; i <= 99; i++)
        if (fr[i] > maxim)
        {
            maxim = fr[i];
            maxi = i;
        }
    cout << "Nr care se repeta de cele mai multe ori (" << maxim << ") este: " << maxi;
    return 0;
}