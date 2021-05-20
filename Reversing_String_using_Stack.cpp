#include <stdio.h>
#include <string.h>
char stack[100], top=-1;

void push(char element)
{
    
    top++;
    stack[top] = element;
    printf("Successfully pushed %c. \n",element);
}

char pop()
{

    printf("Successfully poped %c. \n",stack[top]);
    return stack[top--];
    
}
   

int main()
{
    int i,j;
    char element;
    char input[50], output[50];
    printf("Enter your String\n");
    scanf("%s", &input);
    
    for(i=0;i<=strlen(input);i++)
    {
        push(input[i]);
    }
    
    for(j=0;j<=strlen(input);j++)
    {
       output[j] = pop();
       
    }
    
    for(j=0;j<=strlen(input);j++)
    {
    
       printf("%c",output[j]);
    }
    
    
    
    return 0;
}
