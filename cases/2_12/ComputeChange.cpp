#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    // read the money required
    double amount;
    cout << "Enter an amount in double, for example 11.56 : ";
    cin >> amount;
    // transport the amount to cents
    int remainingAmount = static_cast<int>(amount * 100);
    // compute dollars - 100
    int dollars = remainingAmount / 100;
    remainingAmount %= 100;
    // compute quaters - 25
    int quaters = remainingAmount / 25;
    remainingAmount %= 25;
    // compute dimes - 10
    int dimes = remainingAmount / 10;
    remainingAmount %= 10;
    // compute nickles - 5
    int nickles = remainingAmount / 5;
    remainingAmount %= 5;
    // compute cents - 1
    int cents = remainingAmount;
    // output the results
    cout << dollars << " dollars " << quaters << " quaters " << dimes << " dimes " << nickles << " nickes " << cents << " cents " << endl;
    return 0;
}