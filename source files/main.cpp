#include "../boundingCircle/boundingCircle.h"

int main() {
    BoundingCircle b0;
    b0.print();
    b0.printCalculatedValues();
    BoundingCircle b(9);
    b.print();
    b.printCalculatedValues();

    return 0;
}
