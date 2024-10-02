#include <iostream>
#include <thread>
#include <atomic>
#include <conio.h> // Pour _kbhit() et _getch()
#include "../include/keyboard.hpp"

std::atomic<bool> running(true);
std::string input;

void readInput() {
    while (running) {
        if (_kbhit()) { // Vérifie si une touche a été pressée
            char ch = _getch(); // Lit le caractère sans attendre Entrée
            input += ch; // Ajoute le caractère à la chaîne d'entrée
            std::cout << "Input: " << input << std::endl;
        }
    }
}

void keyboard::Init(){
    std::cout<<"init"<<std::endl;
}


char keyboard::Read(){
std::thread inputThread(readInput);

    // Simulation d'une tâche principale
    std::this_thread::sleep_for(std::chrono::seconds(10));

    running = false; // Arrête le thread d'entrée
    inputThread.join(); // Attend la fin du thread

    std::cout << "Final input: " << input << std::endl;
}

void keyboard::Free(){

}