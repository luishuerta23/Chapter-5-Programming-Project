#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename, town;
    cout << "Enter data file name: ";
    cin >> filename;
    cout << "Enter town name: ";
    cin >> town;

    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int population, year = 1900;
    cout << "\n" << town << " Population Growth\n";
    cout << "(each * represents 1,000 people)\n";

    while (inputFile >> population) {
        cout << year << " ";
        for (int i = 0; i < population / 1000; i++)
            cout << "*";
        cout << endl;
        year += 20;
    }

    inputFile.close();
    return 0;
}
