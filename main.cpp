
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <ctime>
void play_game()
{
    std::cout << "game is being played\n";
    int random = rand() % 251;
    int guess;
    std::cout << random << std::endl;
    std::cout << "Enter your guess: " << std::flush;
    while (true)
    {
        std::cin >> guess;
        if (guess == random)
        {
            std::cout << "you got it right xD.." << std::endl;
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low" << std::endl;
        }
        else
        {
            std::cout << "Too high" << std::endl;
        }
    }
}
int main()
{
    //to prevent repition of sequence.
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "1. Play \n"
                  << "2. Quit\n";
        std::cout << "Enter your Choice: " << std::flush;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "yo let\'s play" << std::endl;
            play_game();
            break;
        case 2:
            std::cout << "Thanks, Hope you to play again" << std::endl;
            return 0;
        default:
            std::cout << "Invalid Option" << std::endl;
        }
    } while (choice != 2);

    EXIT_SUCCESS;
}
