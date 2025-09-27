#include "Bureaucrat.hpp"
#include <string>
class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_exec;

    public:
        Form();
        ~Form();
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        Form(const std::string name, const int grade_to_signe, const int grade_to_exec);

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        std::string get_name();
        bool get_signed();
        int get_gradeToSigne();
        int get_gradeToExecute();

        void beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(const std::ostream &file , const Form &copy);
