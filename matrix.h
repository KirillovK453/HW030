﻿#pragma once

#include <iostream>
#include <cstdlib>
#include <stdexcept>

class Vector;

class Matrix {
    double** A;
    int row, col;

public:
    Matrix(int row = 1, int col = 1);
    Matrix(const Matrix& B);
    ~Matrix();
    Matrix Plus(const Matrix& B);
    Matrix operator+(const Matrix& B);
    Matrix operator-(const Matrix& B);
    Matrix& operator=(const Matrix& B);
    Matrix& operator+=(const Matrix& B);
    Matrix& operator-=(const Matrix& B);
    Matrix operator*(const Matrix& B);
    double& operator()(int i, int j);
    friend std::ostream& operator<<(std::ostream& os, const Matrix& B);
    friend std::istream& operator>>(std::istream& is, const Matrix& B);
    void Generate(double lg, double ug);
    void NullMatrix();
    Vector multiplyVector(Vector& v);
};

class Vector {
    double** C;
    int size;

public:
    Vector(int s = 1);
    Vector(const Vector& B);
    ~Vector();
    Vector& operator=(const Vector& B);
    Vector& operator+=(const Vector& B);
    Vector& operator-=(const Vector& B);
    Vector operator+(const Vector& B);
    Vector operator-(const Vector& B);
    double& operator[](int i);
    int GiveSize() const;
    void Generate(double lg, double ug);
    void NullVector();
    friend std::ostream& operator<<(std::ostream& osin, const Vector& B);
    friend std::istream& operator>>(std::istream& isin, const Vector& B);
};