#include <iostream>
#include <cmath>
using std::cout

;double absoluteDifference(double a, double b) {
    return std::abs(a - b);
}

double circleArea(double radius) {
    return M_PI * radius * radius;
}
bool isEven(int n) {
    return n % 2 == 0;
}
int main() {
    
    double num1, num2;
    cout << "Enter two numbers to find their absolute difference: ";
    std::cin >> num1 >> num2;
    double diff = absoluteDifference(num1, num2);
    std::cout << "Absolute difference between " << num1 << " and " << num2 << " is " << diff << std::endl;

    
    double radius;
    cout << "\nEnter the radius of the circle to calculate its area: ";
    std::cin >> radius;
    double area = circleArea(radius);
    std::cout << "Area of the circle with radius " << radius << " is " << area << std::endl;

    
    int number;
    cout << "\nEnter a number to check if it's even or odd: ";
    std::cin >> number;
    if (isEven(number)) {
        std::cout << number << " is an even number" << std::endl;
    } else {
        std::cout << number << " is an odd number" << std::endl;
    }

    return 0;
}

