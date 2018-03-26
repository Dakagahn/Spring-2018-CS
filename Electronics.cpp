#ifndef ELECTRONICS_CPP
#define ELECTRONICS_CPP

#include <stdio.h>
#include "Electronics.h"

void Electronics::print_total(double subtotal, double tax, double total)
{
	printf("\t\t\t------------ \t -------\n");
	printf("\t\t\t%s\t%.2lf\n","SUBTOTAL", subtotal);
	printf("\t\t\t%s\t\t%.2lf\n","TAX", tax);
	printf("\t\t\t%s\t\t%.2lf\n","TOTAL", total);

}


void Electronics::calculate_total(double price1, double price2, 
						double price3, double price4, double price5)
{
	double subtotal = price1 + price2 + price3 + price4 + price5;
	double tax = subtotal * RATE;
	double total = subtotal + tax;

	print_total(subtotal, tax, total);

}
void Electronics::calculate_items(int item1, int item2, 
						int item3, int item4, int item5)
{
	double tv_price = item1 * TV;
	double vcr_price = item2 * VCR;
	double remote_price = item3 * REMOTE_CONTROL;
	double cd_price = item4 * CD_PLAYER;
	double tape_price = item5 * TAPE_PLAYER;

	
	printf("QTY\tDESCRIPTION\t UNIT PRICE \t TOTAL\n");
	printf("---\t-----------\t ----------  \t -----\n");

	//printf("%f", tv_price);
	printf("%d\t %s\t\t %.2lf\t\t  %.2lf\t\n", item1, "TV", TV, tv_price);
	printf("%d\t %s\t\t %.2lf\t\t  %.2lf\t\n", item2, "VCR", VCR, vcr_price);
	printf("%d\t %s\t\t %.2lf\t\t  %.2lf\t\n", item3, "REMOTE", REMOTE_CONTROL, remote_price);
	printf("%d\t %s\t\t %.2lf\t\t  %.2lf\t\n", item4, "CD", CD_PLAYER, cd_price);
	printf("%d\t %s\t %.2lf\t\t  %.2lf\n", item5, "TAPE PLAYER", TAPE_PLAYER, tape_price);




	
	calculate_total(tv_price, vcr_price, remote_price, cd_price, tape_price);
}

#endif