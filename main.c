#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int c;
 printf("Enter Your Name : ");
    gets(str);
    c = strlen(str);
     for(int i = 0 ; i<c ; i++){

        if(str[i]>= 'a' && str[i]<= 'z'){
            str[i]= str[i]-32;
        }
        else if(str[i]>= 'A' && str[i]<= 'Z'){
            str[i]= str[i]+32;
        }

     }

         printf("Your Name is %s", str);








    return 0;
}
