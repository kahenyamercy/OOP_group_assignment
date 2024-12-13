#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
public:
    Dog(const std::string& name);
    void feed() override;
    void play() override;
};

#endif // DOG_H
