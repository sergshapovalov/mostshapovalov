#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include <memory>
#include <iostream>
#include "implementor.h"

class Flower {
public:
    Flower(std::unique_ptr<PetalImplementor> petalImplementor)
        : petalImplementor(std::move(petalImplementor)) {}
    virtual ~Flower() = default;
    virtual void draw() = 0;

protected:
    std::unique_ptr<PetalImplementor> petalImplementor;
};

#endif // ABSTRACTION_H
