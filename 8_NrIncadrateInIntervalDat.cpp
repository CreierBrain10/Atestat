#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
int n, k, i;
float aux, x[100];
int main()
{
  fin >> n;
  k = 0;
  for (i = 1; i <= n; i++)
    fin >> x[i];
  if (x[1] > x[n])
  {
    aux = x[1];
    x[1] = x[n];
    x[n] = aux;
  }
  for (i = 2; i < n; i++)
    if (x[i] <= x[1] || x[i] >= x[n])
      k++;
  cout << k;
  return 0;
}
