// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: Oct 2021
// This is the percentage marker program in c++
// this function uses return values

#include <iostream>
#include <string>

int CalculatePercentageMark(std::string level) {
    // calculate level as percentage mark
    // declare
    int percentage;

    if (level == "4+") {
        percentage = 97;
    } else if (level == "4") {
        percentage = 90;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 74;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 64;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 54;
    } else if (level == "1-") {
        percentage = 51;
    } else if (level == "R") {
        percentage = 24;
    } else {
        percentage = -1;
    }

    return percentage;
}

main() {
    // this function gets the level
    std::string levelFromUser;
    int returenedPercentge;

    // input
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> levelFromUser;
    std::cout << std::endl;

    // call function
    // output

    returenedPercentge = CalculatePercentageMark(levelFromUser);

    if (returenedPercentge == -1) {
        std::cout << levelFromUser << " is an invalid input." << std::endl;
    } else {
        std::cout << "Level " << levelFromUser << " has a middle percentage of "
        << returenedPercentge << "%." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
