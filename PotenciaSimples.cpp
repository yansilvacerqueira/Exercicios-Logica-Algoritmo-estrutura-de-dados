#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
    double x, y;
    cin >> x >> y;

    double r = pow(x,y);

    cout << fixed << setprecision(4) << r;

}