#include <iostream>
#include<stdlib.h>
#include<math.h>

int main()
{
    system("chcp 65001");


    unsigned int inputtype;
    unsigned int Unit = 0; std::string LengthUnit;
    
    const float pi = 3.14159F;
    double radius = 0.0, diameter = 0.0;
    bool Exception= true;
    do {
        LengthUnit = "km";

        std::cout << "你现在输入的长度单位是多少" << "(请输入英文缩写)" << std::endl;
        std::cin >> LengthUnit;
        if (LengthUnit == "mm"|| LengthUnit == "MM") {
            Unit = 1;
            break;
        }
        if (LengthUnit == "cm" || LengthUnit == "CM") {
            Unit = 2;
            break;
        }
        if (LengthUnit == "dm" || LengthUnit == "DM") {
            Unit = 3;
            break;
        }
        if (LengthUnit == "m" || LengthUnit == "M") {
            Unit = 4;
            break;
        }
        if (LengthUnit == "km" || LengthUnit == "KM") {
            Unit = 7;
            break;
        }
        else {
            std::cout << "输入非法" << std::endl;
        }
    } while (Exception == true);

    do {
        inputtype = 1;
        std::cout << "你现在输入的是直径还是半径，半径请输入1，直径请输入2" << std::endl;
        std::cin >> inputtype;
        if (inputtype == 1) {
            std::cout << "请输入圆的半径" << std::endl;
            std::cin >> radius;

            diameter = radius * 2;
            std::cout << "圆的直径是：" << diameter << LengthUnit << std::endl;
            break;
        }
        if (inputtype == 2) {
            std::cout << "请输入圆的直径" << std::endl;
            std::cin >> diameter;

            radius = diameter / 2;
            std::cout << "圆的半径是：" << radius << LengthUnit << std::endl;
            break;
        }
        else {
            std::cout << "输入非法" << std::endl;
        }

    } while (Exception == true);

    double area, perimeter;
    perimeter = 2 * pi * radius;
    area = pi * radius * radius;
    std::cout << "圆的周长是：" << perimeter << LengthUnit << std::endl;
    std::cout << "圆的面积是：" << area << LengthUnit << "²" << std::endl;

    std::string conversion = "no";
    std::cout << "\n" << "是否要换算单位（yes or no）" << std::endl;
    std::cin >> conversion;

    if (conversion == "yes")
    {
        double radius2 = 0.0, diameter2 = 0.0;
        double area2, perimeter2;
        unsigned int Unit2 = 0; std::string LengthUnit2;

        do {
            LengthUnit2 = "km";

            std::cout << "请输入要换算的单位缩写" << std::endl;
            std::cin >> LengthUnit2;
            if (LengthUnit2 == "mm" || LengthUnit2 == "MM") {
                Unit2 = 1;
                break;
            }
            if (LengthUnit2 == "cm" || LengthUnit2 == "CM") {
                Unit2 = 2;
                break;
            }
            if (LengthUnit2 == "dm" || LengthUnit2 == "DM") {
                Unit2 = 3;
                break;
            }
            if (LengthUnit2 == "m" || LengthUnit2 == "M") {
                Unit2 = 4;
                break;
            }
            if (LengthUnit2 == "km"||LengthUnit2 == "KM") {
                Unit2 = 7;
                break;
            }
            else {
                std::cout << "输入非法" << std::endl;
            }
        } while (Exception == true);

        int distance = Unit - Unit2;

        if (distance > 0) {

            radius2 = radius * pow(10, distance);
            diameter2 = diameter * pow(10, distance);
            perimeter2 = perimeter * pow(10, distance);
            area2 = area * pow(100, distance);
            
        }

        if (distance < 0) {
            distance = abs(distance);
           
            radius2 = radius / pow(10, distance);
            diameter2 = diameter / pow(10, distance);
            perimeter2 = perimeter / pow(10, distance);
            area2 = area / pow(100, distance);
        }
        std::cout << "换算后圆的半径是：" << radius2 << LengthUnit2 << std::endl;
        std::cout << "换算后圆的直径是：" << diameter2 << LengthUnit2 << std::endl;
        std::cout << "圆换算后的周长是：" << perimeter2 << LengthUnit2 << std::endl;
        std::cout << "圆换算后的面积是：" << area2 << LengthUnit2 << "²" << std::endl;
        
        std::cout << "程序运行结束";


    }

    return 0;
}