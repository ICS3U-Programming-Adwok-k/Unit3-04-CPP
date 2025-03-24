// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: March 21st, 2025
// This program asks the user to enter an integer

#include <iostream>

int main() {
    // Get the user_input(number)
    int user_number;

    // Enter the number
    std::cout << "Enter an integer: ";
    std::cin >> user_number;

    if (user_number > 0) {
        // If the user_number is greater than 0, then it's positive
        std::cout << "The number is a positive number." << std::endl;
}  else if (user_number < 0) {
        // If the user_number is less than 0, then it's negative
        std::cout << "The number is a negative number." << std::endl;
}  else {
         // If the number is 0, then it's just zero
        std::cout << "The number is just zero! " << std::endl;
    }
}
