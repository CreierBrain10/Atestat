#include <fstream>
using namespace std;
ifstream fin("eur.in");
ofstream fout("eur.out");
int n, e, nr, i;
long s, p;
int main()
{
  fin >> s >> n >> e;
  nr = 0;
  p = 1;
  for (i = 1; i <= n; i++)
    p = p * e;
  while (s > 0)
  {
    if (s / p != 0)
    {
      fout << s / p << " bancnote de valoare " << p << '\n';
      nr = nr + s / p;
    }
    s = s % p;
    p = p / e;
  }
  fout << nr;
  fin.close();
  fout.close();
  return 0;
}
