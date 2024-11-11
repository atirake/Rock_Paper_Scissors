#include <iostream>
#include <vector>
#include "system_input.cpp"
#include "user_input.cpp"
#include "execute_game.cpp"


int main() {
    int ans;
    do {
        std::cout << "Welcome to the Rock, Paper, Scissors Game!" << std::endl << std::endl;

        // Generate user input and check validity
        std::vector<std::string> choiceUser = generate_user_input();
        if (choiceUser.size() < 2) {
            std::cerr << "Invalid user input received. Exiting..." << std::endl;
            break;
        }

        int rounds = 0;
        try {
            rounds = std::stoi(choiceUser[1]);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Invalid number of rounds provided. Please enter a valid integer." << std::endl;
            continue;
        } catch (const std::out_of_range& e) {
            std::cerr << "Number of rounds provided is out of range. Please enter a valid integer." << std::endl;
            continue;
        }

        // Generate system input
        std::vector<int> choiceSystem = generate_system_input(rounds);

        // Run the game
        game_play(choiceUser, choiceSystem);

        // Ask if user wants to play again
        std::cout << "Would you like to play again? (1 - yes / 2 - no) ";
        std::cin >> ans;

        // skip just past the end of the line
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (ans == 2) {
            break;
        } 
    } while (true);
    system("pause");
    return 0;  
}
