#include "Point.h"
Point::Point(float x1, float y1) {
	x = x1;
	y = y1;
}
Point::~Point() {

}

void Point::affiche() {
	cout  << "x : " << x << " y : "<< y <<endl;
}

void Point::deplace(float d1, float d2) {

	x += d1;
	y += d2;
}