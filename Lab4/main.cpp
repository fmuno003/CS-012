#include <iostream>

using namespace std;

class Rational
{
    private:
        int numerator, denominator;
    public:
        Rational(); // done
        Rational(int); // done
        Rational(int,int); // done
        const Rational add(const Rational &) const;
        const Rational subtract(const Rational &) const;
        const Rational multiply(const Rational &) const;
        const Rational divide(const Rational &) const;
        void display() const;
};
int main()
{
	Rational n, d, a, b, c, e;
	a = n.add(d);
	b = n.subtract(d);
	c = n.multiply(d);
	e = n.divide(d);
	j.Rational(5,3);
	return 0;
}
Rational::Rational()
{
	numerator = 0;
	denominator = 1;
}
Rational::Rational(int n, int d)
{
	numerator = n;
	denominator = d;
}
Rational::Rational(int n)
{
	numerator = n;
	denominator = 1;
}
const Rational Rational::add(const Rational &d) const
{
    Rational j;
    j.numerator = ((numerator * d.denominator) + (denominator * d.numerator));
    j.denominator = denominator * d.denominator;
    return j;
}
const Rational Rational::subtract(const Rational &d) const
{
    Rational j;
    j.numerator = ((numerator * d.denominator) - (denominator * d.numerator));
    j.denominator = denominator * d.denominator;
    return j;
}
const Rational Rational::multiply(const Rational &d) const
{
	Rational J;
	J.numerator = numerator * d.numerator;
	J.denominator = denominator * d.denominator;
	return J;
}
const Rational Rational::divide(const Rational &d) const
{
	Rational J;
	J.numerator = numerator * d.denominator;
	J.denominator = denominator * d.numerator;
	return J;
}
void Rational::display() const
{
	cout << numerator << '/' << denominator;
	return;
}
