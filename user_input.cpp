#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "choice_mapping.h"


using namespace std;

/**
 * @brief Checks if a string is a number.
 *
 * This function determines whether a given string is a number.
 *
 * @param str The string to be checked.
 * @return true if the string is a digit , false otherwise.
 */
bool check_number(string str) {
   for (int i = 0; i < str.length(); i++) {
    if (isdigit(str[i]) == false) {
        return false;
    }    
   }
   return true;
}

/**
 * @brief returns user input in a string vector.
 *
 * This function takes user input in a space separated string,
 * checks input to be matching choice mappings,
 * and returns a vector of strings, -1 if not found in choice mappings
 *
 */
vector<string> generate_user_input() {
    std::cout << "Please enter your name, number of repetitions,"<< std::endl;
    std::cout << "and your chosen steps"<< std::endl;
    std::cout << "1 - Rock,\n" << "2 - Paper,\n" << "3 - Scissors\n" << std::endl << ">";
    string userInput;
    string word;
    vector<string> words;
    getline(cin, userInput);
    stringstream ss(userInput);
    while (getline(ss, word, ' ')) {
        // Add the word to the vector
        words.push_back(word);
    }
    for (int i = 2; i < words.size(); i++)
    if (!check_number(words[i])) {
        words[i][0] = toupper(words[i][0]);
        if (Choices.find(words[i]) == Choices.end()) {
            words[i] = "-1";
        } else {
            words[i] = Choices.at(words[i]);
        }
    }
    return words;
}