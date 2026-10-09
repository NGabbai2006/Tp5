#include "Point.h"
using namespace std;

Point::Point(float x1, float y1) {
	x = x1;
	y = y1;
}
Point::~Point() {

}

void Point::deplace(float d1, float d2) {

	x += d1;
	y += d2;
}

float Point::abscisse() {
	return y;
}

float Point::ordonnee() {
	return x;
}