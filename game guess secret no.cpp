#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int userGuess, attempts = 0, maxAttempts = 5;

    cout << "Welcome to the Guess the Number Game!\nTry to guess the number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < secretNumber) cout << "Too low! Try again.\n";
        else if (userGuess > secretNumber) cout << "Too high! Try again.\n";
        else cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";

    } while (userGuess != secretNumber && attempts < maxAttempts);

    return 0;
}

