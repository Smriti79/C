#include <stdio.h>
#include <string.h>

void deblank(char *output, char *input)
{
    int i, j = 0;

    for (i = 0; input[i] != '\0'; i++)
    {

        if (input[i] != ' ')
        {

            output[j++] = input[i];
        }
    }

    output[j] = '\0';
}

int main()
{
   
    char input[100];
    char output[100];

    
    printf("Enter a string: ");
    scanf("%[^\n]", input);

    
    deblank(output, input);

    
    printf("Original string: %s\n", input);
    printf("Deblanked string: %s\n", output);

    return 0;
}