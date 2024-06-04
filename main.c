//
//  main.c
//  eşkenar üçgen
//
//  Created by AHMET BUĞRA DEMİRCAN on 23.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,j,k;
        
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
            {
                for(k=5-i;k>=0 && j==1;k--)
                {
                    printf(" ");
                }
                printf("* ");
            }
            printf("\n");
        }
        
        

    return 0;
}
