#ifndef MATR_H
#define MATR_H

#pragma once

class matr
{
public:
    matr();
    void input();
    void output();
    double det();
    ~matr();

 private:
    unsigned int n;
    double **arr = new double *[n];
    int A, B;
};

#endif