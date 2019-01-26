#include <stdio.h>
#include<math.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,v,w;
		float t,ti;
		scanf("%d %d %d",&n,&v,&w);
		t=2*n/w;
		ti=sqrt(2)*n/v;
		if(t>=ti)
			printf("Stairs\n");
		else
			printf("Elevator\n");
		}

	
	return 0;
}
