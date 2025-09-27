#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

Bureaucrat::Bureaucrat(): name("no_name") , grade(150) {}

Bureaucrat::Bureaucrat(std::string name , int grade): name(name) , grade(grade){
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what()
const throw()
{
    return "is to Hight";
}

const char *Bureaucrat::GradeTooLowException::what()
const throw()
{
    return "is to low";
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) :
name(copy.name) , grade(copy.grade){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    if (this != &copy)
    {
        grade = copy.grade;
    }
    return *this;
}

std::string Bureaucrat::get_name() const{
    return name;
}

int Bureaucrat::get_grade() const {
    return grade;
}

void Bureaucrat::increment()
{
    grade--;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::decrement()
{
    grade++;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &file , const Bureaucrat &b)
{
    file << "grade : " << b.get_grade() << " and the name is: " << b.get_name();
    return file; 
}
