#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
}d1 , d2, sum;

int main() {
    cin >> d1.feet;
    cin >> d1.inch;
    sum.feet = d1.feet;
    sum.inch = d1.inch;
     int extra = sum.inch / 12;
     sum.feet += extra;
        sum.inch -= (extra * 12);
   
    cout << endl << "distances = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}
