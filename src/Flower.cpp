/*
 * Flower.cpp
 *
 *  Created on: Oct 20, 2017
 *      Author: keith
 */
#include "Flower.h"

void Flower::bloom(color aColor) {
	//color ac = color(rand() % 4);
	mycolor = aColor;
}
void Flower::grow() {
	height++;
}
Flower::Flower(): mycolor(GREEN),height(0) {
	// TODO Auto-generated constructor stub

}

Flower::~Flower() {
	// TODO Auto-generated destructor stub
}

Flower::Flower(const Flower &other) {
	copy(other);
}

Flower& Flower::operator=(const Flower &other) {
	if (this !=&other)
		copy(other);

	return *this;

}
void Flower::copy(const Flower &other){
		this->height=other.height;
			this->mycolor=other.mycolor;
}

