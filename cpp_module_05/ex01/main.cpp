#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        std::cout << "=== Test 1: Valid Bureaucrat ===" << std::endl;
        Bureaucrat b1("Alice", 42);
        std::cout << b1 << std::endl;

        std::cout << "\n=== Test 2: Increment ===" << std::endl;
        b1.increment();
        std::cout << b1 << std::endl;

        std::cout << "\n=== Test 3: Decrement ===" << std::endl;
        b1.decrement();
        std::cout << b1 << std::endl;

        std::cout << "\n=== Test 4: Too High (grade 0) ===" << std::endl;
        Bureaucrat b2("Bob", 0);
        std::cout << b2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "\n=== Test 5: Too Low (grade 151) ===" << std::endl;
        Bureaucrat b3("Charlie", 151);
        std::cout << b3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "\n=== Test 6: Increment past limit ===" << std::endl;
        Bureaucrat b4("Diana", 1);
        std::cout << b4 << std::endl;
        b4.increment();
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "\n=== Test 7: Decrement past limit ===" << std::endl;
        Bureaucrat b5("Eve", 150);
        std::cout << b5 << std::endl;
        b5.decrement();
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
