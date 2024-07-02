#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

#include <string>
#include <iostream>

class PetalImplementor {
public:
    virtual ~PetalImplementor() = default;
    virtual void drawPetal() = 0;
    virtual void setColor(const std::string& color) = 0;
    virtual void setShape(const std::string& shape) = 0;
};

#endif // IMPLEMENTOR_H
