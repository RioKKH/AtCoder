#include <iostream>
#include <string>

using namespace std;

int N;
int main() {
  char c1, c2;
  string S;

  cin >> N >> c1 >> c2;
  cin >> S;

  for (int i = 0; i < N; i++) {
    if (S[i] != c1) {
      S[i] = c2;
    }
  }

  cout << S << endl;

  return 0;
}
