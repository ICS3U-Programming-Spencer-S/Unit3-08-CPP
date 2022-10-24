// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Date: Oct 20, 2022
// A program which calculates if the year is a leap year ot not

#include <iostream>

int main() {
    // Initializing year variables
    int userInpYer;
    std::string userInpYearStr;

    // Basic info about the program
    std::cout <<
    "This is a program that is used for calculating a leap year.\n ";

    // Gets the user's year
    std::cout << "Input the year you wish to calculate: ";
    std::cin >> userInpYearStr;
    std::cout << "\n";

    // Tries to catch any invalid inputs
    try {
        userInpYer = std::stoi(userInpYearStr);

    // # Restarts the program is invalided input found
    } catch (std::invalid_argument) {
        std::cout << "Your input  ";
        std::cout << userInpYer << " is not valid (e.g. 2020)\n";
        return main();
    }

    // First check if the user input can be divisible by 4
    if (userInpYer % 4 == 0) {
        // Second check if the user input can be divisible by 100
        if (userInpYer % 100 == 0) {
            // Third check if the user input can be divisible by 400
            if (userInpYer % 400 == 0) {
                std::cout << userInpYer << " is a leap year!\n";
                // Code to be ran if the can't be divided by 400
            } else {
                std::cout << userInpYer << " is not a leap year!\n.";
            }
            // Code to be ran if the can't be divided by 100.
        } else {
            std::cout << userInpYer << " is a leap year!\n";
        }
        // Code to be ran if the can't be divided by 4
    } else {
        std::cout << userInpYer << " is not a leap year!\n";
    }
}
