     #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <time.h>
     
    int main (void)
    {
    int i=0,N=0,seed=0;
    double sum=0.0 , sum2=0.0 , dist=2.0 , x=0.0 , fx=0.0,ran=0.0; ;
    scanf("%d",&N);
    scanf("%d",&seed);
    srand(seed);
    ran=rand() % 1;
	printf("%lf", ran);
   
    for(i=0;i<N;i++)
    {
    x=1+2*ran;
    fx = exp(x);
    sum= sum+fx;
    sum2= sum2+fx*fx;
    ran=x;
    }
    sum=sum/N;
    sum2=sum2/N;
    printf("sum %lf sum2 %lf",sum,sum2);
    
    double esum, integ, einteg ;
    esum=0.0;
    integ=0.0;
    einteg=0.0;
    esum=sqrt((sum2-sum*sum)/N);
    integ=sum*dist;
    einteg=esum*dist;
    printf (" %lf +- %lf \n",integ,einteg);
    return 0;
    }
