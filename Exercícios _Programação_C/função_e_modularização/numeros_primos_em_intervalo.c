/*Escreva uma função `bool ehPrimo(int n)` e use-a para listar todos 
os primos entre dois números dados pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo(int n);
void imprimeIntervalo(int n1, int n2);

int main(){
    int numberOne, numberTwo;

    do{
        printf("Digite o primeiro numero: ");
        scanf("%d",&numberOne);

        printf("Digite o segundo numero: ");
        scanf("%d",&numberTwo);
    }while(numberOne <= 0 || numberTwo <=0);

    imprimeIntervalo(numberOne,numberTwo);

    return 0;
}


 bool ehPrimo(int n){
    int cont = 0;
    if(n <= 1){
        return false;
    }

    for(int i = 2; i <= n/2;i++){
        if(n % i == 0){
            cont++;
            break;
        }
    }  

    if(cont == 0){
        return true;
    }
    return false;
    
 }

 void imprimeIntervalo(int n1, int n2){
    while(n1 <= n2){
        if(ehPrimo(n1)){
            printf("%d",n1);
        }
        n1++;
      
    }

    printf("\n");
    return;


 }