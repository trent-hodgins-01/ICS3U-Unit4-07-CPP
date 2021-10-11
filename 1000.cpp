// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/06/2021
// This is the RGB program
// This program displays all numbers from 1000 to 2000

#include <iostream>

int main() {
    // this function does addition
    int counter = 1000;

    // process and output
    for (counter = 1000; counter <= 2000; counter++) {
        ((counter % 5) == 4) ?
        std::cout << counter << "\n" :
        std::cout << counter << " ";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
