// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program identifies months

#include <iostream>
#include <string>

int main() {
    // this function identifies months
    std:string monthNumString;
        int monthNum;

        // input
        std::cout << "This program converts numbers to months." << std::endl;
        std::cout << "Enter an number (ex. 1 for January): ";
        std::cin >> monthNumString;

        // process
        switch (monthNum) {
            case '1':
                std::cout << "This month is: January." << std::endl;
                break;
            case '2':
                std::cout << "This month is: February." << std::endl;
                break;
            case '3':
                std::cout << "This month is: March." << std::endl;
                break;
            case '4':
                std::cout << "This month is: April." << std::endl;
                break;
            case '5':
                std::cout << "Better try again" << std::endl;
                break;
            default:
                std::cout << "Invalid month." << std::endl;
        }
    }


