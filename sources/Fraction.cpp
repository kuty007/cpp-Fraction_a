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
    void Fraction::setNumerator(int numerator) {
        this->numerator = numerator;
    }
    void Fraction::setDenominator(int denominator) {
        this->denominator = denominator;
    }

    //implement the operators
    Fraction operator+(const Fraction &frac_a, const Fraction &frac_b) {
        return Fraction(frac_a.numerator * frac_b.denominator + frac_b.numerator * frac_a.denominator, frac_a.denominator * frac_b.denominator);

    }

    Fraction operator+(const Fraction &frac_a, const float &frac_b) {
        return Fraction(frac_a.numerator + frac_b * frac_a.denominator, frac_a.denominator);
    }

    Fraction operator-(const Fraction &frac_a, const Fraction &frac_b) {
        return Fraction(frac_a.numerator * frac_b.denominator - frac_b.numerator * frac_a.denominator, frac_a.denominator * frac_b.denominator);
    }

    Fraction operator*(const Fraction &frac_a, const Fraction &frac_b) {
        return Fraction(frac_a.numerator * frac_b.numerator, frac_a.denominator * frac_b.denominator);
    }

    Fraction operator/(const Fraction &frac_a, const Fraction &frac_b) {
        return Fraction(frac_a.numerator * frac_b.denominator, frac_a.denominator * frac_b.numerator);
    }

    bool operator==(const Fraction &frac_a, const Fraction &frac_b) {
        return frac_a.numerator * frac_b.denominator == frac_b.numerator * frac_a.denominator;
    }

    bool operator!=(const Fraction &frac_a, const Fraction &frac_b) {
        return frac_a.numerator * frac_b.denominator != frac_b.numerator * frac_a.denominator;
    }

    bool operator>(const Fraction &frac_a, const Fraction &b) {
        return frac_a.numerator * b.denominator > b.numerator * frac_a.denominator;
    }

    bool operator<(const Fraction &frac_a, const Fraction &frac_b) {
        return frac_a.numerator * frac_b.denominator < frac_b.numerator * frac_a.denominator;
    }

    bool operator>=(const Fraction &frac_a, const Fraction &frac_b) {
        return frac_a.numerator * frac_b.denominator >= frac_b.numerator * frac_a.denominator;
    }

    bool operator<=(const Fraction &frac_a, const Fraction &frac_b) {
        return frac_a.numerator * frac_b.denominator <= frac_b.numerator * frac_a.denominator;
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

    Fraction operator+(const float &flo_a, const Fraction &frac_b) {
        return Fraction(flo_a * frac_b.denominator + frac_b.numerator, frac_b.denominator);
    }

    Fraction operator-(const float &flo_a, const Fraction &frac_b) {
        return Fraction(flo_a * frac_b.denominator - frac_b.numerator, frac_b.denominator);
    }

    Fraction operator*(const float &flo_a, const Fraction &frac_b) {
        return Fraction(flo_a * frac_b.numerator, frac_b.denominator);
    }

    Fraction operator/(const float &flo_a, const Fraction &frac_b) {
        return Fraction(flo_a * frac_b.denominator, frac_b.numerator);
    }

    bool operator==(const float &flo_a, const Fraction &frac_b) {
        return flo_a * frac_b.denominator == frac_b.numerator;
    }

    bool operator!=(const float &flo_a, const Fraction &frac_b) {
        return flo_a * frac_b.denominator != frac_b.numerator;
    }

    bool operator>(const float &flo_a, const Fraction &frac_b) {
        return flo_a * frac_b.denominator > frac_b.numerator;
    }

    bool operator<(const float &flo_a, const Fraction &frac_b) {
        return flo_a * frac_b.denominator < frac_b.numerator;
    }

    bool operator>=(const float &flo_a, const Fraction &frac_b) {
        return flo_a * frac_b.denominator >= frac_b.numerator;
    }

    bool operator<=(const float &flo_a, const Fraction &frac_b) {
        return flo_a * frac_b.denominator <= frac_b.numerator;
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

    Fraction operator-(const Fraction &frac_a, const float &flo_b) {

        return Fraction(flo_b * frac_a.denominator, frac_a.numerator);
    }

    Fraction operator*(const Fraction &frac_a, const float &flo_b) {

        return Fraction(flo_b * frac_a.denominator, frac_a.numerator);
    }

    Fraction operator/(const Fraction &frac_a, const float &flo_b) {

        return Fraction(flo_b * frac_a.denominator, frac_a.numerator);
    }

    bool operator==(const Fraction &frac_a, const float &flo_b) {

        return 1;
    }

    bool operator!=(const Fraction &frac_a, const float &flo_b) {
        return 1;


    }

    bool operator>(const Fraction &frac_a, const float &flo_b) {

        return 1;
    }

    bool operator<(const Fraction &frac_a, const float &flo_b) {

        return 1;
    }

    bool operator>=(const Fraction &frac_a, const float &flo_b) {

        return 1;
    }

    bool operator<=(const Fraction &frac_a, const float &flo_b) {

        return 1;
    }


} // ariel