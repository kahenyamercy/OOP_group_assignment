#ifndef FISH_H
#define FISH_H

#include "Pet.h"

class Fish : public Pet {
public:
    Fish(const std::string& name);
    void feed() override;
    void play() override;
};

#endif // FISH_H
