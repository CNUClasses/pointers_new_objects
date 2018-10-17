/*
 * main.cpp
 *
 *  Created on: Oct 20, 2017
 *      Author: keith
 */
#include <vector>
#include <iostream>
#include <string.h>
#include "Flower.h"

using namespace std;

void pointers_new_objects() {
	Flower* newFlower;
	newFlower = new Flower;

	(*newFlower).grow();	//equivs
	newFlower->grow();

	delete newFlower;

	//what about when you add pointers to a vector
	std::vector<Flower*> mv;

	//add 10 pointers to the vector
	for (int i = 0; i < 10; i++) {
		newFlower = new Flower;
		mv.push_back(newFlower);
	}

	//clean up the memory stored in vector
	for (std::vector<Flower*>::iterator myIter = mv.begin(); myIter < mv.end(); myIter++)
		delete (*myIter);
}


int main()
{
	Flower newFlower;
	newFlower.grow();
	newFlower.bloom(YELLOW);

	std::vector<Flower> mv;
	mv.push_back(newFlower);

	pointers_new_objects();
}




