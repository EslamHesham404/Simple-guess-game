#include <iostream>
#include <cstdlib>
#include <ctime>

void play_game()
{
    int random = rand() % 251;
    int guess;
    std::cout << "Enter your guess: " << std::flush;

    while (true)
    {
        if (guess == random)
        {
            std::cout << "you got it right xD" << std::endl;
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low" << std::endl;
        }
        else
        {
            std::cout << "Two high" << std::endl;
        }
    }
}

int main()
{
    srand(time(NULL));
    int choice;
    std::cout << "Enter your choice: " << std::flush;
    std::cin >> choice;
    do
    {
        switch (choice)
        {
        case 0:
            std::cout << "0. Quit." << std::endl;
            return 0;
        case 1:
            std::cout << "yo let\'s play" << std::endl;
            break;
        default:
            std::cout << "Invalid Option" << std::endl;
            break;
        }
    } while (choice != 0);

    return 0;