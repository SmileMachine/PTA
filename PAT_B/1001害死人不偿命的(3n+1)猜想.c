https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528

#include <stdio.h>

int main(int argc, char** argv)
{
	int cnt=0;
	int n;
	scanf("%d",&n);
	for(cnt=0;n!=1;cnt++){
		n=(n%2==0)?(n/2):((3*n+1)/2);
	}
	printf("%d",cnt);
	return 0;
} 
