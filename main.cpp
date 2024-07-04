#include <QCoreApplication>
#include "refinedabstraction.h"
#include "concreteimplementors.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Создание лепестков с разными формами и цветами
    std::unique_ptr<PetalImplementor> simplePetal = std::make_unique<SimplePetal>();
    simplePetal->setColor("red");
    simplePetal->setShape("round");

    std::unique_ptr<PetalImplementor> detailedPetal = std::make_unique<DetailedPetal>();
    detailedPetal->setColor("blue");
    detailedPetal->setShape("pointed");

    std::unique_ptr<PetalImplementor> ghoticPetal = std::make_unique<GhoticPetal>();
    ghoticPetal->setColor("black");
    ghoticPetal->setShape("bone drawing");

    // Создание цветков с лепестками
    SimpleFlower simpleFlower(std::move(simplePetal));
    DetailedFlower detailedFlower(std::move(detailedPetal));
    GhoticFlower ghoticFlower(std::move(ghoticPetal));

    // Отрисовка цветков
    simpleFlower.draw();
    detailedFlower.draw();
    ghoticFlower.draw();

    return a.exec();
}
