#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

void print_array(int arr[], int size)
{
    std::cout << "Your guesses => " << std::flush;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << '\t';
    }
    std::cout << '\n';
}

void play_game()
{
    const int SIZE = 100;
    int guesses[SIZE];
    // int guess;
    int guess_count = 0;
    int random = rand() % 11;
    std::cout << random << std::endl;
    std::cout << "Enter your guess: " << std::flush;

    for (int i = 0; i < SIZE; i++)
    {
        if (std::cin >> guesses[i])
        {
            guess_count++;
            if (guesses[i] == random)
            {
                std::cout << "you win xD" << std::endl;
                break;
            }
            else if (guesses[i] < random)
            {
                std::cout << "Too low" << std ::endl;
            }
            else
            {
                std::cout << "Too high" << std::endl;
            }
        }
        else
        {
            break;
        }
    }
    print_array(guesses, guess_count);
}

int show_menu()
{
    int choice;
    bool exp = false;
    std::cout << "Are your ready to play T = 1 / F = 0 ? " << std::flush;
    std::cin >> exp;

    if (exp)
    {
        do
        {
            std::cout
                << "0. Quit \n"
                << "1. Play" << std::endl;
            std::cout << "Enter your Choice: " << std::flush;
            std::cin >> choice;

            switch (choice)
            {
            case 0:
                std::cout << "Thanks for playing, hope to see you again <3" << std::endl;
                return 0;
            case 1:
                std::cout << "yo let\'s play " << std::endl;
                play_game();
                break;
            }
        } while (choice != 0);
    }
    else
    {
        std::cout << "Good Bye.." << std::endl;
        return 0;
    }
}

int main()
{
    srand(time(NULL));
    std::string name;
    std::cout << "Enter your name please: " << std::flush;
    std::getline(std::cin, name);

    std::cout << "Welcome, " << name << "." << std::endl;
    //show_menu();
    if(show_menu() == 0){
        return 0;
    }
    play_game();

    return 0;
}


