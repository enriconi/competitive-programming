#include <iostream>

using namespace std;

int main()
{
  int n;
  string s = "LIFE IS NOT A PROBLEM TO BE SOLVED";

  cin >> n;
  
  for (int i = 0; i < n; i++) cout << s[i];
  cout << endl;
  
  return 0;
}