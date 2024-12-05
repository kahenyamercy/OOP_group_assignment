#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>

class Pet {
protected:
    std::string name;
    int hunger;
    int happiness;

public:
    Pet(const std::string& name) : name(name), hunger(50), happiness(50) {}

    virtual void feed() = 0;
    virtual void play() = 0;

    void displayStats() const {
        std::cout << "Name: " << name << "\nHunger: " << hunger 
                  << "\nHappiness: " << happiness << std::endl;
    }

    void decreaseStats() {
        hunger = std::min(100, hunger + 5);
        happiness = std::max(0, happiness - 5);
    }

    std::string getName() const {
        return name;
    }
};

class Dog : public Pet {
public:
    Dog(const std::string& name) : Pet(name) {}

    void feed() override {
        hunger = std::max(0, hunger - 15);
    }

    void play() override {
        happiness = std::min(100, happiness + 20);
    }
};

class Cat : public Pet {
public:
    Cat(const std::string& name) : Pet(name) {}

    void feed() override {
        hunger = std::max(0, hunger - 20);
    }

    void play() override {
        happiness = std::min(100, happiness + 10);
    }
};

class Fish : public Pet {
public:
    Fish(const std::string& name) : Pet(name) {}

    void feed() override {
        hunger = std::max(0, hunger - 10);
    }

    void play() override {
        happiness = std::min(100, happiness + 15);
    }
};

class PetManager {
private:
    std::vector<std::shared_ptr<Pet>> pets;

public:
    void createPet(const std::string& name, const std::string& type) {
        if (type == "Dog") {
            pets.push_back(std::make_shared<Dog>(name));
        } else if (type == "Cat") {
            pets.push_back(std::make_shared<Cat>(name));
        } else if (type == "Fish") {
            pets.push_back(std::make_shared<Fish>(name));
        } else {
            std::cerr << "Invalid pet type!" << std::endl;
        }
    }

    void feedPet(const std::string& name) {
        for (auto& pet : pets) {
            if (pet->getName() == name) {
                pet->feed();
                return;
            }
        }
        std::cerr << "Pet not found!" << std::endl;
    }

    void playWithPet(const std::string& name) {
        for (auto& pet : pets) {
            if (pet->getName() == name) {
                pet->play();
                return;
            }
        }
        std::cerr << "Pet not found!" << std::endl;
    }

    void viewPetStats(const std::string& name) const {
        for (const auto& pet : pets) {
            if (pet->getName() == name) {
                pet->displayStats();
                return;
            }
        }
        std::cerr << "Pet not found!" << std::endl;
    }

    void decreaseAllStats() {
        for (auto& pet : pets) {
            pet->decreaseStats();
        }
    }
};

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
