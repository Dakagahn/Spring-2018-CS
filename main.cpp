#include <stdio.h>
#include "Electronics.h"
int main()
{
	//input();
	int tv_sold, vcr_sold, remote_sold, cd_sold, tape_sold;

	Electronics use;
	
	printf("How many TVs were sold? ");
	scanf("%d", &tv_sold);

	printf("How many VCRs were sold? ");
	scanf("%d", &vcr_sold);

	printf("How many Remote Controls were sold? ");
	scanf("%d", &remote_sold);

	printf("How many CDs were sold? ");
	scanf("%d", &cd_sold);

	printf("How many Tape Controllers were sold? ");
	scanf("%d", &tape_sold);

	use.calculate_items(tv_sold, vcr_sold, remote_sold, cd_sold, tape_sold);



	return 0;

}
