#include <iostream>
#include <string>
using namespace std;

int main() {
  string ch;
  cin>>ch;
  ch[0]= towlower(ch[0]);

  cout << ch;

  return 0;
}