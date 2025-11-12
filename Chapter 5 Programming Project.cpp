
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double beginningSize;
    double dailyGrowth;
    int numDays;

    cout << " Enter the beginning count of organisms discovered: ";
    cin >> beginningSize;

    while (beginningSize < 2) {
        cout << "Error encountered, starting number must be at least 2. Resubmit your results: ";
        cin >> beginningSize;
    }
    cout << "Enter the average daily growth increase (percentage) rate: ";
    cin >> dailyGrowth;

    while (dailyGrowth < 0) {
        cout << "Growth is positive. Try your results again: ";
        cin >> dailyGrowth;
    }

    cout << "Enter the number of days the organism will grow for: ";
    cin >> numDays;

    cout << fixed << setprecision(2);
    cout << "\nDay\tPopulation\n";
    cout << "-----------------\n";

    double population = beginningSize;
    for (int day = 1; day <= numDays; day++) {
        cout << day << "\t" << population << endl;
        population += population * (dailyGrowth / 100.0);
    }

}