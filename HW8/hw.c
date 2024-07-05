#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void){
    int r[100]={0},n[51]={0},i,j,sum=0;
    srand(time(0));
    for(i=0;i<100;i++){
        r[i]=rand()%50+1;
        printf("%4d",r[i]);
        if(i%10==9)printf("\n");
        n[r[i]]++;
        sum+=r[i];
    }
    printf("\n");
    
    for(i=1;i<=50;i++){
        printf("%4d:%3d",i,n[i]);
        if(i%5==0)printf("\n");
    }
    printf("\n");
    
    
    float mean;
    mean=sum/100.0;
    printf("Mean: %f\n",mean);
    
    int mode_t=0;
    for(i=1;i<=50;i++){
    	if(n[i]>mode_t){
    		mode_t=n[i];
		}
	}
    printf("Mode: ");
    for(i=1;i<=50;i++)
    	if(n[i]==mode_t)
    		printf("%d ",i);
    printf("\n");
    
    int t=0,m;
    i=0;
    while(t<50)
    	t+=n[++i];
    m=i;
	while(t<51)
		t+=n[++i];
	printf("Median: %f\n",(m+i)/2.0);
	
	double d=0;
	for(i=0;i<100;i++)
		d+=pow((r[i]-mean),2);
	printf("Standard Deviation: %lf\n",sqrt(d/100));
	
	int k=0;
	printf("\nodd:\n");
	for(i=1;i<=50;i+=2){
		for(j=0;j<n[i];j++){
			printf("%4d",i);
			if((++k)%10==0)
				printf("\n");
		}
	}
	k=0;
    printf("\n");
	printf("\neven:\n");
	for(i=2;i<=50;i+=2){
		for(j=0;j<n[i];j++){
			printf("%4d",i);
			if((++k)%10==0)
				printf("\n");
		}
	}
	
	return 0;
}
