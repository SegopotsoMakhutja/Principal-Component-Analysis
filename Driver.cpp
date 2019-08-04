/**
 * 
 * Driver program
 * Author: Segopotso Makhutja
 * Date: Aug 2019
 * 
 **/

#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <sstream>
#include <vector>
#include <fstream>

#define tol 0.1e-20  //tolerance

using namespace std;
using namespace Eigen; 

// container for a point
struct Point
{
    double x, y;
    string id;
    Point(string id, double x, double y) : id(id), x(x), y(x) {}
    
    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

    void center(double aX, double aY)
    {
        x = x - aX;
        y = y - aY;
    }
};

//calculating Eigenvalues
void calcEig();

int main()
{

}

void calcEig(double Ax, double Bx, double Cy, double Dy, double &ansX,double &ansY)
{

}

