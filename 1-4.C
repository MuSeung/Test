#include <stdio.h>



int main()
{
    int count=0;
    int n=0;
    scanf("%d",&n);
    
    for(int k=1;k<n+1;k++){
        if(k<100){
            count++;
        }
        else if((k/100+k%10)==2*((k/10)%10)){
            count++;
        }
    
    }
    
    printf("%d",count);
    
    return 0;
}

