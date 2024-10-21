#include "../header/RPN.hpp"

/*
private:
    std::stack<int> operands;
public:
    void push(int value);
    void evaluate(const std::string &expression);
    void perform_operation(char op);
    int pop();
*/

void RPN::push(int value)
{
    operands.push(value);
}

int RPN::pop()
{
    int num;
    if (operands.empty())
        throw std::runtime_error("Error: No operands to pop");

    num = operands.top();
    operands.pop();
    return (num);
}

void RPN::perform_operation(char op)
{

    //check that we have nore than 2 numbers
    if (operands.size() < 2)
        throw std::runtime_error("Error: not enough operands");

    int b = pop();
    int a = pop();
    int res;

    switch (op)
    {
    case '+':
        res = a + b;
        break;
    
    case '-':
        res = a - b;
        break;

    case '*':
        res = a * b;
        break;
    
    case '/':
        if (b == 0)
            throw std::runtime_error("Error: cannot divid by zero");
        res = a / b;
        break;
    default:
        throw std::runtime_error("Error: Invalid operator");
    }
    push(res);
}


int RPN::stringToInt(const std::string& tok)
{
    std::stringstream ss(tok);
    int num;

    ss >> num;
    if (ss.fail() || !ss.eof())
        throw std::runtime_error("Error: Invalid number format");
    return num;
}
bool RPN::isNumber(const std::string &s)
{
    if (s.empty())
        return false;
    
    for (size_t i = 0; i < s.length(); ++i) {
        if (!std::isdigit(s[i]))
            return false;
    }
    return true;
}

void RPN::evaluate(const std::string &expression)
{
    std::istringstream iss(expression); //create an input string stream from the 'expression'
    std::string tok;

    while (iss >> tok)
    {
        if (isNumber(tok))
            push(stringToInt(tok)); //convert str to int and push
        else if (tok.size() == 1 && (tok[0] == '+' || tok[0] == '-' || tok[0] == '*' || tok[0] == '/')) 
            perform_operation(tok[0]);
        else 
            throw std::runtime_error("Error: Invalid token");
    }

    if (operands.size() != 1)
        throw std::runtime_error("Error: the user input is invalid, too many args\n");

    std::cout << "Result: " << pop() << std::endl;
}