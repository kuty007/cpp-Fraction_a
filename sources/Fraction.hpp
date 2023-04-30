//
// Created by asaf7 on 4/14/2023.
//
#include <iostream>
using namespace std;
#ifndef CPP_FRACTION_A_FRACTION_H
#define CPP_FRACTION_A_FRACTION_H

namespace ariel {

    class Fraction {
    private:
        int numerator;
        int denominator;
        float value;
    public:
        Fraction(int numerator, int denominator);
        Fraction(float value);
        int getNumerator() const;
        int getDenominator() const;

        Fraction& operator++();
        Fraction& operator--();
        Fraction operator++(int);
        Fraction operator--(int);
        friend Fraction operator+(const Fraction& a, const Fraction& b);
        friend Fraction operator+(const Fraction& a, const float& b);
        friend Fraction operator-(const Fraction& a, const Fraction& b);
        friend Fraction operator*(const Fraction& a, const Fraction& b);
        friend Fraction operator/(const Fraction& a, const Fraction& b);
        friend bool operator==(const Fraction& a, const Fraction& b);
        friend bool operator!=(const Fraction& a, const Fraction& b);
        friend bool operator>(const Fraction& a, const Fraction& b);
        friend bool operator<(const Fraction& a, const Fraction& b);
        friend bool operator>=(const Fraction& a, const Fraction& b);
        friend bool operator<=(const Fraction& a, const Fraction& b);
        friend ostream& operator<<(ostream& os, const Fraction& fraction);
        friend istream& operator>>(istream& is, Fraction& fraction);
        //do all the operators with float
        friend  Fraction operator+(const float& a, const Fraction& b);
        friend  Fraction operator-(const float& a, const Fraction& b);
        friend  Fraction operator*(const float& a, const Fraction& b);
        friend  Fraction operator/(const float& a, const Fraction& b);
        friend bool operator==(const float& a, const Fraction& b);
        friend bool operator!=(const float& a, const Fraction& b);
        friend bool operator>(const float& a, const Fraction& b);
        friend bool operator<(const float& a, const Fraction& b);
        friend bool operator>=(const float& a, const Fraction& b);
        friend bool operator<=(const float& a, const Fraction& b);
        //do all the operators with Fraction and float
        friend  Fraction operator-(const Fraction& a, const float& b);
        friend  Fraction operator*(const Fraction& a, const float& b);
        friend  Fraction operator/(const Fraction& a, const float& b);
        friend bool operator==(const Fraction& a, const float& b);
        friend bool operator!=(const Fraction& a, const float& b);
        friend bool operator>(const Fraction& a, const float& b);
        friend bool operator<(const Fraction& a, const float& b);
        friend bool operator>=(const Fraction& a, const float& b);
        friend bool operator<=(const Fraction& a, const float& b);

    };

} // ariel

#endif //CPP_FRACTION_A_FRACTION_H
