#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// typedef
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    using namespace second;

    std::cout<< "Hello world!" << '\n';
    //Comment
    /*Comment*/

    // integers
    int a = 5;
    int y = 6;
    int sum = a + y;
    int age = 20;

    // numbers including decimal
    double days = 7.5;
    double price = 10.99;

    // one character
    char grade = '9';
    char initial = 'B';

    //true false
    bool student = true;
    bool forSale = false;

    //string
    std::string name = "John";
    std::string day = "Friday";

    // read only const
    const double PI = 3.14159;
    const int HEIGHT = 4020;

    /*
    std::cout << y << '\n';
    std::cout << days << '\n';
    std::cout << price << '\n';
    std::cout << grade << '\n';
    std::cout << name << '\n';
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    */

    // Namespaces

    int x = 0;

    std::cout << first::x << '\n';
    std::cout << x << '\n';

    //typedef
    text_t firstName = "John";

    std::cout << firstName << "\n";

    // type conversion

    char c = 100;
    std::cout << c << "\n";

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%" << "\n";

    // input

    std::string nameInput;
    std::cout << "What is your name?" << "\n";
    //std::getline(std::cin >> std::ws, nameInput);
    std::cout << nameInput << "\n";

    int ageInput;
    //std::cin >> nameInput;

    std::cout << "Hello " << nameInput << "\n" << "What's your age?" << "\n";
    //std::cin >> ageInput;
    std::cout << nameInput << ": " << ageInput << " years" << '\n';

    // Useful math related functions

    double d = 3.99;
    double r = 4;
    double z;

    //z = std::max(d, r);
    //z = std::min(d, r);
    //z = pow(2,3);
    //z = sqrt(4);
    //z = abs(-3);
    //z = round(d);
    z = floor(d);

    std::cout << z << "\n";

    std::cout << "what's 17 more years?" << "\n";

    double s = 0;
    double f = 0;
    double g;

    std::cout << "Enter side A: ";
    //std::cin >> s;

    std::cout << "Enter side B: ";
    //std::cin >> f;

    s = pow(s, 2);
    f = pow(f, 2);
    g = sqrt(s + f);

    std::cout << "Side C: " << g << "\n";

    // if statements

    int ageAgain;

    std::cout << "Enter age: ";
    std::cin >> ageAgain;

    if (age >= 18) {}



    return 0;
}
