#include <stdio.h>

void F1(char *msg, int mov) 
{
    if (*msg == '\0')
    {
        return; 
    }
    *msg += mov;
    F1(msg + 1, mov); 
}
int main()
{
    char msg[] = "abcd"; 
    F1(msg, 4);          
    return 0;
}