#include <Windows.h>
#include <iostream>

// Function to display the cheat menu
void displayMenu() {
    std::cout << "Grand Theft Auto 6 Cheat Menu" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "1. Unlimited Health" << std::endl;
    std::cout << "2. Unlimited Ammo" << std::endl;
    std::cout << "3. No Reload" << std::endl;
    std::cout << "4. One Hit Kill" << std::endl;
    std::cout << "5. Exit" << std::endl;
}

// Function to handle user input
void handleInput(int choice) {
    switch (choice) {
        case 1:
            // Code for unlimited health
            break;
        case 2:
            // Code for unlimited ammo
            break;
        case 3:
            // Code for no reload
            break;
        case 4:
            // Code for one hit kill
            break;
        case 5:
            // Exit the program
            exit(0);
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }
}

int main() {
    int choice;
    while (true) {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        handleInput(choice);
    }
    return 0;
}