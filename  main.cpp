#include <iostream>
#include "PetManager.h"

int main() {
    PetManager manager;
    int choice;
    std::string name, type;

    while (true) {
        std::cout << "Welcome to Pixel Pals!\n";
        std::cout << "1. Create a Pet\n";
        std::cout << "2. Feed a Pet\n";
        std::cout << "3. Play with a Pet\n";
        std::cout << "4. View Pet Stats\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter pet name: ";
                std::cin >> name;
                std::cout << "Enter pet type (Dog, Cat, Fish): ";
                std::cin >> type;
                manager.createPet(name, type);
                break;
            case 2:
                std::cout << "Enter pet name to feed: ";
                std::cin >> name;
                manager.feedPet(name);
                break;
            case 3:
                std::cout << "Enter pet name to play with: ";
                std::cin >> name;
                manager.playWithPet(name);
                break;
            case 4:
                std::cout << "Enter pet name to view stats: ";
                std::cin >> name;
                manager.viewPetStats(name);
                break;
            case 5:
                return 0;
            default:
                std::cerr << "Invalid choice!" << std::endl;
        }

        manager.decreaseAllStats();
    }

    return 0;
}
