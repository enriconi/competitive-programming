#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int a;

    cin >> a;

    if (a > 0 && a % 2 == 0) cout << "EVEN POSITIVE" << endl;
    else if (a > 0 && a % 2 != 0) cout << "ODD POSITIVE" << endl;
    else if (a < 0 && a % 2 == 0) cout << "EVEN NEGATIVE" << endl;
    else if (a < 0 && a % 2 != 0) cout << "ODD NEGATIVE" << endl;
    else cout << "NULL" << endl;
  }
  
  return 0;
}