#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
int n, a[100];
int termen(int n, int a[100])
{
  int nr = 0, aux;
  for (int i = 1; i <= n; i++)
    nr = nr * 10 + a[i];
  aux = a[n];
  for (int i = n; i > 1; i--)
    a[i] = a[i - 1];
  a[1] = aux;
  return nr;
}
int main()
{
  int s = 0;
  fin >> n;
  for (int i = 1; i <= n; i++)
    fin >> a[i];
  cout << "S=";
  for (int i = 1; i <= n; i++)
  {
    s = s + termen(n, a);
    cout << termen(n, a);
    if (i < n)
      cout << "+";
  }
  cout << "=" << s;
  return 0;
}
