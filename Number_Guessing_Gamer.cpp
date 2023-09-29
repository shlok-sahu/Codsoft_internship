// NUMBER GUESSING GAME
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\n\t\t\tWelcome to \n\t\tGuess The Number game!!" << endl;
    int number, guess_number, chances = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        cout << "Enter a number that you guess between 1 and 100 : ";
        cin >> guess_number;
        chances++;

        if (guess_number > number)
            cout<<endl<<guess_number<<" is greater than the random number\n\n";
        else if (guess_number < number)
             cout<<endl<<guess_number<<" is lower than the random number\n\n";
        else
            cout << "\nCogratulation! You got it in " << chances << " guesses!\n";
    } while (guess_number != number);
    return 0;
}