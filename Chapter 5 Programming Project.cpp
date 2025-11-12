#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed random number
    int randomNum = rand() % 100 + 1;
    int guess, count = 0;

    cout << "Guess a random number between 1 and 100!\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        count++;

        if (guess > randomNum)
            cout << "Too high, try again.\n";
        else if (guess < randomNum)
            cout << "Too low, try again.\n";
        else
            cout << "Correct! You guessed it in " << count << " tries.\n";

    } while (guess != randomNum);

    return 0;
}
