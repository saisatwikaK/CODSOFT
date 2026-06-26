#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    cout << "LET'S START!!" << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if(num < guess)
        {
            cout << "Smaller oneeee!!" << endl;
        }
        else if(num > guess)
        {
            cout << "Try larger val" << endl;
        }

    } while(num != guess);

    cout << "HURRAYYYY!!! You guessed the correct number." << endl;

    return 0;
}