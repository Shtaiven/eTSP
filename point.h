// Credit: http://sandbox.mc.edu/~bennet/cs220/codeex/cl0_cc.html

#include <iostream>
#include <math.h>
using namespace std;

class point
{
private:
		double xval, yval;

public:
        // Constructor uses default arguments to allow calling with zero, one,
        // or two values.
        point(double x = 0.0, double y = 0.0) {
                xval = x;
                yval = y;
        }

        // Extractors.
        double x() { return xval; }
        double y() { return yval; }

        // Distance to another point.  Pythagorean thm.
        double dist(point other) {
                double xd = xval - other.xval;
                double yd = yval - other.yval;
                return sqrt(xd*xd + yd*yd);
        }

        // Add or subtract two points.
        point add(point b)
        {
                return point(xval + b.xval, yval + b.yval);
        }
        point sub(point b)
        {
                return point(xval - b.xval, yval - b.yval);
        }

        // Move the existing point.
        void move(double a, double b)
        {
                xval += a;
                yval += b;
        }

        // Print the point on the stream.  The class ostream is a base class
        // for output streams of various types.
        void print(ostream &strm)
        {
                strm << "(" << xval << "," << yval << ")";
        }
};