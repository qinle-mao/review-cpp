#include<cmath>
#include<cstdlib>
#include<iostream>
using namespace std;

#define PI 3.14159
#define E 2.718282

int main(int argc, char *argv[]) {
    // trigonometric functions - sin() cos() tan() asin() acos() atan()
    double radians = PI / 6;
    cout << sin(radians) << " " << cos(radians) << " " << tan(radians) << endl; // 0.5 0.866026 0.57735
    double a = 0.5;
    cout << asin(a) << " " << acos(a) << " " << atan(a) << endl; // 0.523599 1.0472 0.463648

    // exponent functions - log() log2() log10() exp() pow() sqrt()
    cout << log(E) << " " << log2(8) << " " << log10(100) << " " << endl; // 1 3 2
    cout << exp(2) << " " << pow(3, 4) << endl; // 7.38906 81
    cout << sqrt(36) << endl; // 6

    // rounding functions - floor() ceil()
    cout << floor(2.1) << " " << ceil(2.1) << endl; // 2 3
    cout << floor(-2.1) << " " << ceil(-2.1) << endl; // -3 -2

    // other functions - fmin() fmax() fabs()
    // note: min() max() abs() are in <utility>
    cout << fmin(1, 2) << " " << fmax(1, 2) << endl; // 1 2
    cout << fabs(-2.3) << endl; // 2.3

    // macro constants - INFINITY NAN
    float inf = INFINITY; // infinite number - float
    cout << inf << endl; // inf
    float nan = NAN; // not a number - float 
    cout << (nan > 0) << " " << (nan == 0) << " " << (nan < 0) << endl; // 0 0 0
    cout << isnan(nan) << endl; // 1

    system("pause");
    return 0;
}