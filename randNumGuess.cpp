// Created by: Hiab G
// Date: Wed, Feb. 28th
// This program creates a number guessing game where users try to guess a random number between (450, 9078)
#include <iostream>
#include <random>


int main() {
    // Generate random number
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(450, 9078);
    someRandomNumber = idist(rgen);
    
    // Get player's guess
    int playerGuess;
    std::cout << "Guess the random number between 450 and 9078: ";
    std::cin >> playerGuess;
    
    // Check if guess is correct
    if (playerGuess == someRandomNumber) {
        std::cout << "Correct!" << std::endl;
    } else {
        std::cout << "Wrong! The number was " << someRandomNumber << std::endl;
    }
    
    return 0;
}