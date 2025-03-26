//#include <iostream>

//int main() {
//    double length, width, area;
//
//    std::cout << "Enter length: ";
//    std::cin >> length;
//    std::cout << "Enter width: ";
//    std::cin >> width;
//
//    area = length * width;
//
//    std::cout << "Area of Rectangle: " << area << std::endl;
//
//    return 0;
//}
#include <iostream>

class Rectangle {
public:
    double length, width;

    void setValues(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    double l, w;

    std::cout << "Enter length: ";
    std::cin >> l;
    std::cout << "Enter width: ";
    std::cin >> w;

    rect.setValues(l, w);
    std::cout << "Area of Rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}


//the ability of objects of different classes to respond to the same message (function call) in different ways, enabling code reuse and flexibility
//is called polymorphism m

