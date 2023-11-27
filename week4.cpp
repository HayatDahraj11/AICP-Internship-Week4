#include <iostream>
#include <cmath>
using namespace std;



enum class MenuOption
 {
    Hexagon = 1,
    Square = 2,
    Exit = 3
};

// Hexagon class
class Hexagon {
private:
    double side;

public:
    Hexagon(double s) : side(s) 
    {


    }

    double calcArea()
    
     {
        return 1.5 * 1.732 * side * side;
    }

    double calcPeri() 
    {
        return 6 * side;
    }

    double calcAngleSum()
     {
        return 6 * 120; 

    }

    void display()
    
     {
        cout << "Hexagon - Area: " << calcArea() 
                  << ", Perimeter: " << calcPeri() 
                  << ", Sum of Angles: " << calcAngleSum() << std::endl;
    }
};

// Square class
class Square {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double calcAreaSquare()
     {
        return side * side;
    }

    double calcPeriSquare() 
    {
        return 4 * side;
    }

    void display() 
    {
        cout << "Square - Area: " << calcAreaSquare() 
                  << ", Perimeter: " << calcPeriSquare() << endl;
    }
};

// Main function
int main() 
{
   
    int lastDigitCNIC = 1;

    Hexagon hexagon(lastDigitCNIC);
    Square square(lastDigitCNIC + 1);

    int choice;
    do 
    {
        cout << "Enter 1 for Hexagon, 2 for Square, 3 to Exit: ";
        cin >> choice;

        //casting is fun when done correctly 
        MenuOption option = static_cast<MenuOption>(choice);

        switch (option)
         {
            case MenuOption::Hexagon:
                hexagon.display();
                break;
            case MenuOption::Square:
                square.display();
                break;
            case MenuOption::Exit:
                std::cout << "Exiting program." << endl;
                break;
            default:
                std::cout << "Invalid option. Please try again." << endl;
        }
    } 
    while (choice != 3);

    return 0;
}
