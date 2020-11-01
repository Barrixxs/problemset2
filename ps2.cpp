// Kevin Barrios
// NSHE:2001697903
// CS135 Problem Set 2
#include <iostream> // cout cin
#include <cmath> // math portions
#include <math.h> // pow
#include <iomanip> // setw, setfill, setprecision

using namespace std; // Standard namespace

int main() {
// Defining variables
  double length;
  double perimeter, area;
  double circumcircle_radius, incircle_radius, height;

// Prompt and User input
  cout << "Enter the length of the sides of your octagon (1 side): ";
  cin >> length;

// Calculations
  perimeter = length * 8;
  area = (2 * pow (length, 2.0)) * (1 + sqrt(2.0));
  circumcircle_radius = (.5 * length) * sqrt(4.0 + (2.0 * sqrt(2.0)));
  incircle_radius = (.5 * length) * (1.0 + sqrt(2.0));
  height = 2 * incircle_radius;

// Outputting the information.. neatly :)
  cout << endl << endl;
  cout << fixed;
  cout << setw(23) << left << setfill('.') << "Perimeter" << setw(8) << right << setprecision(2) << perimeter << endl;
  cout << setw(23) << left << setfill('.') << "Area" << setw(8) << right << setprecision(2) << area << endl;
  cout << setw(23) << left << setfill('.') << "Circumcircle Radius" << setw(8) << right << setprecision(2) << circumcircle_radius << endl;
  cout << setw(23) << left << setfill('.') << "Incircle Radius" << setw(8) << right << setprecision(2) << incircle_radius << endl;
  cout << setw(23) << left << setfill('.') << "Height" << setw(8) << right << setprecision(2) << height << endl;

  return 0;
}
