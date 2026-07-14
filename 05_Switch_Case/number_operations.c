#include<stdio.h>

int main() {
    int num,  choice ;
    
    printf("enter a number: ");
    scanf("%d", &num);
    
    printf("1. Square\n2. Cube\n3. even/odd\n");
    printf("enter the choice:");
    scanf("%d", &choice);
    
    switch(choice){
    case 1:
            printf("%d\n",num*num);
            break;
    
    case 2:
            printf("%d\n" ,num*num*num);
            break;
            
    case 3: 
           if (num%2== 0){
           printf("even\n");
           }
           else {
           printf("odd\n");
           }
           break;
    default :
    printf("invalid data");
    
}
return 0;
}

