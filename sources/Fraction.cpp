//
// Created by asaf7 on 4/14/2023.
//

#include "Fraction.hpp"

namespace ariel {
    Fraction::Fraction(int numerator, int denominator) {
        if (denominator == 0) {
            throw std::invalid_argument("denominator can't be 0");
        }
        this->numerator = numerator;
        this->denominator = denominator;
        this->value = (float) numerator / denominator;
    }
    Fraction::Fraction(float value) {
        this->value = value;
        this->numerator = (int) value;
        this->denominator = 1;
    }
    int Fraction::getNumerator() const {
        return this->numerator;
    }
    int Fraction::getDenominator() const {
        return this->denominator;
    }

    //implement the operators
    Fraction operator+(const Fraction &a, const Fraction &b) {
        return Fraction(a.numerator * b.denominator + b.numerator * a.denominator, a.denominator * b.denominator);

    }

    Fraction operator+(const Fraction &a, const float &b) {
        return Fraction(a.numerator + b * a.denominator, a.denominator);
    }

    Fraction operator-(const Fraction &a, const Fraction &b) {
        return Fraction(a.numerator * b.denominator - b.numerator * a.denominator, a.denominator * b.denominator);
    }

    Fraction operator*(const Fraction &a, const Fraction &b) {
        return Fraction(a.numerator * b.numerator, a.denominator * b.denominator);
    }

    Fraction operator/(const Fraction &a, const Fraction &b) {
        return Fraction(a.numerator * b.denominator, a.denominator * b.numerator);
    }

    bool operator==(const Fraction &a, const Fraction &b) {
        return a.numerator * b.denominator == b.numerator * a.denominator;
    }

    bool operator!=(const Fraction &a, const Fraction &b) {
        return a.numerator * b.denominator != b.numerator * a.denominator;
    }

    bool operator>(const Fraction &a, const Fraction &b) {
        return a.numerator * b.denominator > b.numerator * a.denominator;
    }

    bool operator<(const Fraction &a, const Fraction &b) {
        return a.numerator * b.denominator < b.numerator * a.denominator;
    }

    bool operator>=(const Fraction &a, const Fraction &b) {
        return a.numerator * b.denominator >= b.numerator * a.denominator;
    }

    bool operator<=(const Fraction &a, const Fraction &b) {
        return a.numerator * b.denominator <= b.numerator * a.denominator;
    }

    ostream &operator<<(ostream &os, const Fraction &fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }

    istream &operator>>(istream &is, Fraction &fraction) {
        char c;
        is >> fraction.numerator >> c >> fraction.denominator;
        return is;
    }

    Fraction operator+(const float &a, const Fraction &b) {
        return Fraction(a * b.denominator + b.numerator, b.denominator);
    }

    Fraction operator-(const float &a, const Fraction &b) {
        return Fraction(a * b.denominator - b.numerator, b.denominator);
    }

    Fraction operator*(const float &a, const Fraction &b) {
        return Fraction(a * b.numerator, b.denominator);
    }

    Fraction operator/(const float &a, const Fraction &b) {
        return Fraction(a * b.denominator, b.numerator);
    }

    bool operator==(const float &a, const Fraction &b) {
        return a * b.denominator == b.numerator;
    }

    bool operator!=(const float &a, const Fraction &b) {
        return a * b.denominator != b.numerator;
    }

    bool operator>(const float &a, const Fraction &b) {
        return a * b.denominator > b.numerator;
    }

    bool operator<(const float &a, const Fraction &b) {
        return a * b.denominator < b.numerator;
    }

    bool operator>=(const float &a, const Fraction &b) {
        return a * b.denominator >= b.numerator;
    }

    bool operator<=(const float &a, const Fraction &b) {
        return a * b.denominator <= b.numerator;
    }


    Fraction &Fraction::operator++() {
        this->numerator += this->denominator;
        return *this;
    }

    Fraction Fraction::operator++(int) {
        Fraction temp = *this;
        this->numerator += this->denominator;
        return temp;
    }

    Fraction &Fraction::operator--() {
        this->numerator -= this->denominator;
        return *this;
    }

    Fraction Fraction::operator--(int) {
        Fraction temp = *this;
        this->numerator -= this->denominator;
        return temp;
    }

    Fraction operator-(const Fraction &a, const float &b) {

        return Fraction(b * a.denominator, a.numerator);
    }

    Fraction operator*(const Fraction &a, const float &b) {

        return Fraction(b * a.denominator, a.numerator);
    }

    Fraction operator/(const Fraction &a, const float &b) {

        return Fraction(b * a.denominator, a.numerator);
    }

    bool operator==(const Fraction &a, const float &b) {

        return 1;
    }

    bool operator!=(const Fraction &a, const float &b) {
        return 1;


    }

    bool operator>(const Fraction &a, const float &b) {

        return 1;
    }

    bool operator<(const Fraction &a, const float &b) {

        return 1;
    }

    bool operator>=(const Fraction &a, const float &b) {

        return 1;
    }

    bool operator<=(const Fraction &a, const float &b) {

        return 1;
    }


} // ariel