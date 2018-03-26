#ifndef ELECTRONICS_H
#define ELECTRONICS_H


#include <stdio.h>

const double RATE = .0825;
const double TV = 	400.00;
const double VCR = 220.00;
const double REMOTE_CONTROL = 35.20;
const double CD_PLAYER = 300.00;
const double TAPE_PLAYER = 150.00;


class Electronics
{

public:
	void calculate_total(double price1, double price2, 
						double price3, double price4, double price5);
	void print_total(double subtotal, double tax, double total);
	void calculate_items(int item1, int item2, 
						int item3, int item4, int item5);

};


#endif