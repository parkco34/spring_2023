#include <iostream>
#include <cmath>
#include <string>
#include <symengine/basic.h>
#include <symengine/symbol.h>
#include <symengine/mul.h>
#include <symengine/add.h>

using namespace std;
using SymEngine::Basic;
using SymEngine::symbol;
using SymEngine::mul;
using SymEngine::add;

double eval(Basic expr, double x)
{
    if (expr->__eq__(*symbol("x"))) {
        return x;
    } else if (mul_downcast(expr)) {
        double result = 1.0;
        for (auto arg : mul_downcast(expr)->get_args()) {
            result *= eval(arg, x);
        }
        return result;
    } else if (add_downcast(expr)) {
        double result = 0.0;
        for (auto arg : add_downcast(expr)->get_args()) {
            result += eval(arg, x);
        }
        return result;
    } else {
        return expr->evalf({{"x", SymEngine::real_double(x)}});
    }
}

int main()
{
    // prompt the user to enter an equation
    cout << "Enter an equation (e.g. x^2 + sin(x)):\n";
    string equation;
    getline(cin, equation);
    
    // define the range and step size for x and y
    double xmin = -10, xmax = 10, ymin = -10, ymax = 10, step = 0.1;
    
    // loop through the range of x and y values and evaluate the equation at each point
    for (double y = ymax; y >= ymin; y -= step)
    {
        for (double x = xmin; x <= xmax; x += step)
        {
            double z = eval(SymEngine::parse(equation), x);
            
            // map the z value to a row in the coordinate system and print the corresponding character
            int row = round(10 - ((z - ymin) / (ymax - ymin)) * 20);
            if (row < 0 || row > 20) {
                cout << ' ';
            } else if (x == 0 && y == 0) {
                cout << '+';
            } else if (row == 0) {
                cout << '-';
            } else if (x == 0) {
                cout << '|';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    
    return 0;
}

