#include <iostream>


int main() {
    int choice;
    float num1;
    float num2;

    std::cout << "---------------\n";
    std::cout << "Insert Number 1\n";
    std::cout << "---------------\n";
        std::cin >> num1;

    std::cout << "---------------\n";
    std::cout << "Insert Number 2\n";
    std::cout << "---------------\n";
        std::cin >> num2;

    std::cout << "---------------\n";
    std::cout << "Write which operation to use :\n";
        std::cout << "Add - 1\n";
        std::cout << "Subtract - 2\n";
        std::cout << "Multiply - 3\n";
        std::cout << "Divide - 4\n";
    std::cout << "---------------\n";

    std::cin >> choice;

    if (choice == 1)
        {
            std::cout << "---------------\n";
            std::cout << "Result of Operation is :\n";
            std::cout << num1 + num2;
        }

    else if (choice == 2)
        {
            std::cout << "---------------\n";
            std::cout << "Result of Operation is :\n";
            std::cout << num1 - num2;
        }

    else if (choice == 3)
        {
            std::cout << "---------------\n";
            std::cout << "Result of Operation is :\n";
            std::cout << num1 * num2;
        }

    else if (choice == 4)
        {
            std::cout << "---------------\n";
            std::cout << "Result of Operation is :\n";
            std::cout << num1 / num2;
        }

    return 0;
}
