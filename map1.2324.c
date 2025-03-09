#include <stdio.h>

void F1(char *msg, int mov) // funcao 1
{
    if (*msg == '\0')
    {
        return; // sair da funcao ao chegar no caracter final
    }
    *msg += mov;
    F1(msg + 1, mov);
    printf("\n"); // valor da mensagem
    printf("\n"); // valor do movimento
}
int main()
{
    char msg[] = "abcd"; // string mensagem
    F1(msg, 4);          // invocacao da funcao 1
    printf("%c\n", msg);
    return 0;
}