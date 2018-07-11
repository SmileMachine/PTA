//https://pintia.cn/problem-sets/14/problems/734

#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main() {
	int n, i;
	double a[MAXN], x;

	scanf("%d %lf", &n, &x);
	for ( i=0; i<=n; i++ )
		scanf("%lf", &a[i]);
	printf("%.1f\n", f(n, a, x));
	return 0;
}
double power(double x,int pow) {
/*	if(pow>0)
		return x*power(x,pow-1);
	else
		return 1;*/
	if (pow=0) return 1;
	for(pow>0;pow>0;pow--){
		x*=x;
	}
	return x;
}
 
double f( int n, double a[], double x ) {
	int i;
	double sum=0;
	for(i=0; i<=n; i++) {
		sum+=a[i]*power(x,i);
	}
	/*
	else:
	double sum=a[0];
	for(i=1;i<=n;i++){
		sum+=a[i]*x;
		x=x*x;
	}
	eend;
	*/
	return sum;
}
