#include <stdio.h>
#include <string.h>
char stack[100], top=-1;

void push(char element)
{
    
    top++;
    stack[top] = element;
    printf("Successfully pushed. \n");
}

void pop()
{
	top--;
    printf("Successfully poped. \n");
    
}
   

int main()
{
    int i;
    char input[50];
    printf("Enter your expression\n");
    scanf("%s", &input);
    
    for(i=0;i<=strlen(input);i++)
    {
        if(input[i]== '(')
        {
        	 push(input[i]);
		}
		else if(input[i]== ')')
		{
			pop();
		}
	}
    
    if(top==-1)
    printf("Balanced");
    else
    printf("Unbalanced");
    
	return 0;
}
