/**
 * @file main.cpp
 * @author Gelonch Kevin (gelonchkevin@free.fr)
 * @brief 
 * @version 0.1
 * @date 2024-09-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include "define.hpp"
#include "keyboard.hpp"

int main(int argc, char** argv){
    keyboard test;
    test.Init();
    int isRunning = 1;

    while(isRunning){
        char input = test.Read();
        switch (input){
        case QUIT:
            isRunning = 0;
            break;
        default:
            break;
        }
    }

    return 0;
}