#include<stdio.h>
#include<stdlib.h>

typedef struct{
              double re;
              double im;
			  }complex;
			  
double image(complex Z);
double real(complex Z);
complex mul(complex Z,complex Y);		  
int main(){
	complex z1,z2,z3;
	double a,b;
	printf("donner un nbre complxe z1=x+iy :");
	scanf("%lf%lf",&z1.re,&z1.im);
	printf("donner un nbre complxe z2=x+iy :");
	scanf("%lf%lf",&z2.re,&z2.im);
	printf("\nles deux parties de z1:\n");
	a=real(z1);printf("reel :%lf\n",a);
	b=image(z1);printf("imaginaire :%lf\n",b);
	printf("\nles deux parties de z2:\n");
	a=real(z2);printf("reel :%lf\n",a);
	b=image(z2);printf("imaginaire :%lf\n",b);
	z3=mul(z1,z2);
	printf("%lf+i%lf",z3.re,z3.im);
}
double image(complex Z){
	return Z.im;
}
double real(complex Z){
	return Z.re;
}
complex mul(complex Z,complex Y){
	complex C;
	printf("la multiplication de z1 et z2 :");
	C.re=Z.re*Y.re-Z.im*Y.im;
	C.im=Z.im*Y.re+Z.re*Y.im;
    return C;
}