/*
 * UML DIAGRAM
 * ------------
 * 1 -> Denominator not zero
 * 2 -> Operations: (+, -, /, *)
 * 3 -> Reduce
 * 4 -> Convert to decimal
 * 5 -> Conditionals: (<, >, <=, >=, !=, ==)
 * 6 -> Input/Output
 * 7 -> Constructors
 *  ==> EUCLIDEAN Algorithm and QUOTIENT REMAINDER-THEOREM
 */

class Fraction
{
    private:
        int num;
        int denom;
    public:
        Fraction();
        Fraction(int n);
        Fraction(int n, int d);
        Fraction add(Fraction frac);
        Fraction subtract(Fraction frac);
        Fraction multiply(Fraction frac);
        Fraction divide(Fraction frac);
        void output();
        void input();
        bool lessThan(Fraction frac);
        bool greaterThan(Fraction frac);
        bool lessThanEqual(Fraction frac);
        bool greaterThanEqual(Fraction frac);
        bool equal(Fraction frac);
        void reduce();
}
