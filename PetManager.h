#ifndef PET_MANAGER_H
#define PET_MANAGER_H

#include <vector>
#include <memory>
#include "Pet.h"

class PetManager {
private:
    std::vector<std::shared_ptr<Pet>> pets;

public:
    void createPet(const std::string& name, const std::string& type);
    void feedPet(const std::string& name);
    void playWithPet(const std::string& name);
    void viewPetStats(const std::string& name) const;
    void decreaseAllStats();
};

#endif // PET_MANAGER_H
