// This program will calculate inflation rates throughout the past two years. It will take the price of the current year, and
// compare it to prices of the past two years. It will then determine whether the inflation rate is increasing, decreasing, or the same

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void calculateInflation(double priceNow, double priceOneYear, double priceTwoYears, double& inflationOneYear, double& inflationTwoYears);
void increase_decrease(double inflationOld, double inflationNew);

int main() {
    double priceNow, priceTwoYears, priceOneYear;

    cout << "Enter the current price of the item: ";
    cin >> priceNow;

    cout << "Enter the price of the item one year ago: ";
    cin >> priceOneYear;

    cout << "Enter the price of the item two years ago: ";
    cin >> priceTwoYears;

    double inflationOneYear, inflationTwoYears;
    calculateInflation(priceNow, priceOneYear, priceTwoYears, inflationOneYear, inflationTwoYears);
    increase_decrease(inflationTwoYears, inflationOneYear);

    return 0;
}

void calculateInflation(double priceNow, double priceOneYear, double priceTwoYears, double& inflationOneYear, double& inflationTwoYears) {
    inflationOneYear = ((priceNow - priceOneYear) / priceOneYear) * 100.0;
    inflationTwoYears = ((priceOneYear - priceTwoYears) / priceTwoYears) * 100.0;
}

void increase_decrease(double inflationOld, double inflationNew) {
    if (inflationNew > inflationOld) {
        cout << "The inflation rate is increasing" << endl;
    }
    else if (inflationNew < inflationOld) {
        cout << "The inflation rate is decreasing" << endl;
    }
    else {
        cout << "There is no change in the inflation rate" << endl;
    }
}


