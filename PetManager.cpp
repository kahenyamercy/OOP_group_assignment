#include "PetManager.h"
#include "Dog.h"
#include "Cat.h"
#include "Fish.h"
#include <iostream>
#include <memory>
#include <algorithm>

void PetManager::createPet(const std::string& name, const std::string& type) {
    try {
        if (type == "Dog") {
            pets.push_back(std::make_shared<Dog>(name));
        } else if (type == "Cat") {
            pets.push_back(std::make_shared<Cat>(name));
        } else if (type == "Fish") {
            pets.push_back(std::make_shared<Fish>(name));
        } else {
            throw PetException();
        }
    } catch (const PetException& e) {
        std::cerr << e.what() << " Invalid pet type!" << std::endl;
    }
}

void PetManager::feedPet(const std::string& name) {
    bool found = false;
    for (auto& pet : pets) {
        if (pet->getName() == name) {
            pet->feed();
            found = true;
            break;
        }
    }
    if (!found) {
        std::cerr << "Pet not found!" << std::endl;
    }
}

void PetManager::playWithPet(const std::string& name) {
    bool found = false;
    for (auto& pet : pets) {
        if (pet->getName() == name) {
            pet->play();
            found = true;
            break;
        }
    }
    if (!found) {
        std::cerr << "Pet not found!" << std::endl;
    }
}

void PetManager::viewPetStats(const std::string& name) const {
    bool found = false;
    for (const auto& pet : pets) {
        if (pet->getName() == name) {
            pet->displayStats();
            found = true;
            break;
        }
    }
    if (!found) {
        std::cerr << "Pet not found!" << std::endl;
    }
}

void PetManager::decreaseAllStats() {
    for (auto& pet : pets) {
        pet->decreaseStats();
    }
}
