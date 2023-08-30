#include <stdio.h>
#include <windows.h>

int main(){
    system("cls");
    int num1, num2, res;
    printf("Hello World\n");
    
    printf("Indique um n£mero: ");
    scanf("%d", &num1);
    printf("Indique um n£mero: ");
    scanf("%d", &num2);

    // somando os valores
    res = num1 + num2;

    printf("Resultado: %d", res);

    if(res > 10){
        printf("\n\nO Resultado ‚ maior que 10");
    }
    else if(res < 10){
        printf("\n\nO Resultado ‚ menor que 10");
    }
    else{
        printf("\n\nO Resultado ‚ igual a 10");
    }

    for (int i = res; i >= 0; i--)
    {
        printf("\n=> %d ", i);
    }

    return 0;
}
