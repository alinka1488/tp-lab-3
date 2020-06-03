﻿#include "Circle.h"
#include <math.h>
const double pi = 3.1415;

Circle::Circle(const double newRadius){
	setRadius(newRadius);
}

Circle::Circle() {
	setRadius(0.0);
}

Circle::~Circle() {

}

void Circle::setRadius(const double newRadius) {
	radius = newRadius;
	ference = 2 * pi* newRadius;
	area = pi * newRadius * newRadius;
}

void Circle::setFerence(const double newFerence) {
	ference = newFerence;
	radius = ference / 2 / pi;
	area = pi * radius * radius;
}

void Circle::setArea(const double newArea) {
	area = newArea;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
}

double Circle::getRadius() {
	return radius;
}

double Circle::getFerence() {
	return ference;
}

double Circle::getArea() {
	return area;
}
