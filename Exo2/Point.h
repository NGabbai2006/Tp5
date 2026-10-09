#pragma once
#include "iostream"
using namespace std;
class Point
{
public:
	Point(float x1, float y1);
	~Point();
	void deplace(float d1, float d2);
	float abscisse();
	float ordonnee();
private:
	float x, y;
};

