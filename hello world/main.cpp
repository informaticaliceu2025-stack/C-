#include <iostream>
#include <vector>

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

    return 0;
}