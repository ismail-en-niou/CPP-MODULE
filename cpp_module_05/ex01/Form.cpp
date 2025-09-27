#include "Form.hpp"

Form::Form(): name("no_name") , grade_to_exec(1) , grade_to_sign(1) , is_signed(false){}

Form::Form(const std::string name , const int grade_to_sign , const int grade_to_exec) : 
name(name) , grade_to_exec(grade_to_exec) , grade_to_sign(grade_to_sign){}

Form::Form(const Form &copy):
name(copy.name) , grade_to_exec(copy.grade_to_exec) , grade_to_sign(copy.grade_to_sign)
{
    is_signed = copy.is_signed;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Your Grade is so hight to do that";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Your Grade is so Low to do that";
}

std::string Form::get_name()
{
    return name;
}

bool Form::get_signed()
{
    return is_signed;
}

int Form::get_gradeToSigne()
{
    return grade_to_sign;
}

int Form::get_gradeToExecute()
{
    return grade_to_exec;
}
