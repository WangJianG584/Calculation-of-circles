#include <iostream>
#include<stdlib.h>
#include<math.h>

int main()
{
    system("chcp 65001");


    unsigned int inputtype;
    unsigned int Unit = 0; std::string LengthUnit;
    bool Exception;
    const float pi = 3.14159F;
    float radius = 0.0F, diameter = 0.0F;

    Exception = true;
    do {
        LengthUnit = "km";

        std::cout << "你现在输入的长度单位是多少" << "(请输入英文缩写)" << std::endl;
        std::cin >> LengthUnit;
        if (LengthUnit == "mm") {
            Unit = 1;
            break;
        }
        if (LengthUnit == "cm") {
            Unit = 2;
            break;
        }
        if (LengthUnit == "dm") {
            Unit = 3;
            break;
        }
        if (LengthUnit == "m") {
            Unit = 4;
            break;
        }
        if (LengthUnit == "km") {
            Unit = 7;
            break;
        }
        else {
            std::cout << "输入非法" << std::endl;
        }
    } while (Exception == true);
    do {
        inputtype = 0;
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
        float radius2 = 0.0F, diameter2 = 0.0F;
        double area2, perimeter2;
        unsigned int Unit2 = 0; std::string LengthUnit2;

        do {
            LengthUnit2 = "km";

            std::cout << "请输入要换算的单位缩写" << std::endl;
            std::cin >> LengthUnit2;
            if (LengthUnit2 == "mm") {
                Unit2 = 1;
                break;
            }
            if (LengthUnit2 == "cm") {
                Unit2 = 2;
                break;
            }
            if (LengthUnit2 == "dm") {
                Unit2 = 3;
                break;
            }
            if (LengthUnit2 == "m") {
                Unit2 = 4;
                break;
            }
            if (LengthUnit2 == "km") {
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
            std::cout << "换算后圆的半径是：" << radius2 << LengthUnit2 << std::endl;
            std::cout << "换算后圆的直径是：" << diameter2 << LengthUnit2 << std::endl;
            perimeter2 = perimeter * pow(10, distance);
            area2 = area * pow(10, distance + distance);
            std::cout << "圆换算后的周长是：" << perimeter2 << LengthUnit2 << std::endl;
            std::cout << "圆换算后的面积是：" << area2 << LengthUnit2 << "²" << std::endl;

        }

        if (distance < 0) {
            distance = abs(distance);
            radius2 = radius / pow(10, distance);
            diameter2 = diameter / pow(10, distance);
            std::cout << "换算后圆的半径是：" << radius2 << LengthUnit2 << std::endl;
            std::cout << "换算后圆的直径是：" << diameter2 << LengthUnit2 << std::endl;
            perimeter2 = perimeter / pow(10, distance);
            area2 = area / pow(10, distance + distance);
            std::cout << "圆换算后的周长是：" << perimeter2 << LengthUnit2 << std::endl;
            std::cout << "圆换算后的面积是：" << area2 << LengthUnit2 << "²" << std::endl;

        }
        std::cout << "程序运行结束，你可以安全的关闭了";







    }



    return 0;
}