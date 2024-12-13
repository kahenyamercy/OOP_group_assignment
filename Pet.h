#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>

class Pet {
protected:
    std::string name;
    int hunger;
    int happiness;

public:
    Pet(const std::string& name);
    virtual void feed() = 0;
    virtual void play() = 0;
    void displayStats() const;
    void decreaseStats();
    std::string getName() const;
};

class PetException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Pet-related error occurred!";
    }
};

#endif // PET_H
