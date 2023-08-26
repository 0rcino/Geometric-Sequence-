// Geometric Sequence
#include <iostream>
using namespace std;

int main()
{

  int n, a, r, i;
  cout << "Enter the number: ";
  cin >> n;
  cout << "Enter the First term :";
  cin >> a;
  cout << "Enter the common ratio :";
  cin >> r;

  for (i = 1; i <= n; i++)
  {
    cout << " " << a << "";
    a = a * r;
  }
}
