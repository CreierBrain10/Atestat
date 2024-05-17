#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
int n, x;
int fibo(int n)
{
  long a = 1, b = 1, c;
  if (n <= 3)
    return 1;
  while (a + b <= n)
  {
    c = a + b;
    a = b;
    b = c;
  }
  return (c == n);
}
int main()
{
  fin >> n;
  while (n > 0)
  {
    fin >> x;
    if (fibo(x))
      ;
    cout << x << " ";
    n--;
  }
  fin.close();
  return 0;
}
