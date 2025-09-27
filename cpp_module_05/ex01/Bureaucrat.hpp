#pragma once 

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const   std::string name;
        int  grade;
    public:
        Bureaucrat();
        ~Bureaucrat();

        Bureaucrat(std::string name , int grade);
        Bureaucrat(const Bureaucrat &B);
        Bureaucrat &operator=(const Bureaucrat &b);

        std::string get_name() const ;
        int get_grade() const ;

        void increment();
        void decrement();
        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw ();
        };
        class GradeTooLowException : public std::exception{
            public :
                const char* what() const throw ();
        };
};

std::ostream &operator<<( std::ostream &file , const Bureaucrat &b);