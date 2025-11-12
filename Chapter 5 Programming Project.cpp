

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file containing the student names: ";
    cin >> filename;

    ifstream in(filename);
    if (!in) {
        cout << "Error: Could not open file.\n";
        return 1;
    }

    
    string name;
    if (!(in >> name)) {
        cout << "Error: The file is empty.\n";
        return 1;
    }

    string firstName = name;  
    string lastName = name;  
    int count = 1;


    while (in >> name) {
        ++count;
        if (name < firstName) firstName = name;
        if (name > lastName)  lastName = name;
    }

   
    cout << "\nNumber of students in class: " << count << '\n';
    cout << "Student at the front of the line: " << firstName << '\n';
    cout << "Student at the end of the line: " << lastName << '\n';

    return 0;
}
