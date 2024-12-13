#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
public:
    Cat(const std::string& name);
    void feed() override;
    void play() override;
};

#endif // CAT_H
