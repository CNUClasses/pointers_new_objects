/*
 * Flower.h
 *
 *  Created on: Oct 30, 2019
 *      Author: keith
 */

#ifndef Flower_H1_
#define Flower_H1_

enum color:int {GREEN,RED,YELLOW,BLUE};
class Flower
{
private:
	color mycolor;
	int height;
	void copy(const Flower &other);
public:
	Flower();
	virtual ~Flower();
	Flower(const Flower &other);
	Flower& operator=(const Flower &other);

	void grow();
	void bloom(color aColor);

};

#endif /* Flower_H1_ */
