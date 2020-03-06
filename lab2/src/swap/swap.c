#include "swap.h"

void Swap(char *left, char *right)
{
    char buff1;
    char buff2;
    buff1=*left;
    buff2=*right;
    *right=buff1;
    *left=buff2;
	// ваш код здесь
}
