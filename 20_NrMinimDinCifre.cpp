#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int a, b, i, k, fr[10];
int main()
{
  fin >> a >> b;
  while (a > 0)
  {
    fr[a % 10]++;
    a = a / 10;
  }
  while (b > 0)
  {
    fr[b % 10]++;
    b = b / 10;
  }
  for (i = 0; i <= 9; i++)
    if (fr[i] > 0)
      for (k = 1; k <= fr[i]; k++)
        fout << i;
  fin.close();
  fout.close();
  return 0;
}
