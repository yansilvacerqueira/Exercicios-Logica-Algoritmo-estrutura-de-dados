#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
   int n;
   cin >> n;

   double rai[n];

   for (int i = 0; i < n; i++) {
      cin >> rai[i];
      cout << fixed << setprecision(4) << sqrt(rai[i]) << endl;
   }

}