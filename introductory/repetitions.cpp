#include <iostream>

using namespace std;

int main() {
  unsigned int count = 0, max_count = 1;

  string dna;

  cin >> dna;

  for (int i = 1; i < dna.size(); i++) {
    if (dna[i] == dna[i - 1]) count++;
    else count = 0;

    max_count = max(max_count, count + 1);
  }

  cout << max_count << endl;

  return 0;
}