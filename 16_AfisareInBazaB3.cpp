#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int b1, b2, b3;
long x, y;
long conv_b_10(long n, int b)
{
  long nr = 0, p = 1;
  do
  {
    nr = nr + n % 10 * p;
    p *= b;
    n /= 10;
  } while (n);
  return nr;
}
long conv_10_b(long n, int b)
{
  long nr = 0, p = 1;
  do
  {
    nr = nr + n % b * p;
    p *= 10;
    n /= b;
  } while (n);
  return nr;
}
int main()
{
  fin >> b1 >> b2 >> b3;
  fin >> x >> y;
  x = conv_b_10(x, b1);
  y = conv_b_10(y, b2);
  fout << conv_10_b(x + y, b3);
  fin.close();
  fout.close();
  return 0;
}
