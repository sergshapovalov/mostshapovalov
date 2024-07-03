#ifndef CONCRETEIMPLEMENTORS_H
#define CONCRETEIMPLEMENTORS_H

#include "implementor.h"

class SimplePetal : public PetalImplementor {
public:
    void drawPetal() override {
        std::cout << "Drawing " << color << " " << shape << " petal" << std::endl;
    }

    void setColor(const std::string& color) override {
        this->color = color;
    }

    void setShape(const std::string& shape) override {
        this->shape = shape;
    }

private:
    std::string color;
    std::string shape;
};

class DetailedPetal : public PetalImplementor {
public:
    void drawPetal() override {
        std::cout << "Drawing detailed " << color << " " << shape << " petal with veins" << std::endl;
    }

    void setColor(const std::string& color) override {
        this->color = color;
    }

    void setShape(const std::string& shape) override {
        this->shape = shape;
    }

private:
    std::string color;
    std::string shape;
};

class GhoticPetal : public PetalImplementor {
public:
    void drawPetal() override {
        std::cout << "Drawing ghotic " << color << " " << shape << " petal with veins" << std::endl;
    }

    void setColor(const std::string& color) override {
        this->color = color;
    }

    void setShape(const std::string& shape) override {
        this->shape = shape;
    }

private:
    std::string color;
    std::string shape;
};

#endif // CONCRETEIMPLEMENTORS_H
