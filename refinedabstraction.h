#ifndef REFINEDABSTRACTION_H
#define REFINEDABSTRACTION_H

#include "abstraction.h"

class SimpleFlower : public Flower {
public:
    SimpleFlower(std::unique_ptr<PetalImplementor> petalImplementor)
        : Flower(std::move(petalImplementor)) {}

    void draw() override {
        std::cout << "Drawing a simple flower with: " << std::endl;
        petalImplementor->drawPetal();
    }
};

class DetailedFlower : public Flower {
public:
    DetailedFlower(std::unique_ptr<PetalImplementor> petalImplementor)
        : Flower(std::move(petalImplementor)) {}

    void draw() override {
        std::cout << "Drawing a detailed flower with: " << std::endl;
        petalImplementor->drawPetal();
    }
};
class GhoticFlower : public Flower {
public:
    GhoticFlower(std::unique_ptr<PetalImplementor> petalImplementor)
        : Flower(std::move(petalImplementor)) {}

    void draw() override {
        std::cout << "Drawing a ghotic flower with: " << std::endl;
        petalImplementor->drawPetal();
    }
};

#endif // REFINEDABSTRACTION_H
