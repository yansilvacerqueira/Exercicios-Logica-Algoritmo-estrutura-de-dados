#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int nums[N];
    int soma = 0;
    int count = 0;

    for (int i =0; i < N; i++) {
      cin >> nums[i];
      soma += nums[i];
      count++;
      if (soma >= 1000000) {
        break;
      }
    }
      cout << count << endl;
}