#include <stdio.h>
 
int main(void) {
float l,b,h,vol,surarea;
scanf("%f %f %f",&l,&b,&h);
surarea=2*(l*h+l*b+b*h);
vol=l*b*h;
printf("surface area and volume is %.3f and %.3f",surarea,vol);
	return 0;
}
