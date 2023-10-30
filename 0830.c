#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	double s;
	int k;	
	 
	for(k=0;k<=n;k=k+1){
		s=k*((-1)^(k+1));
		s+=s; 
	} 
	printf("%.2lf", s);
	return 0; 
}
