/*19. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um algoritmo para ler os dados necessários
e calcular a altura do prédio.
*/

#include <stdio.h>

int main(){

    float sombrapredio, sombra, altura, tamanhopredio;

    printf("Informe o tamanho da sombra do predio (Em metros): ");
    scanf("%f", &sombrapredio);

    printf("Informe da sua sombra (Em metros): ");
    scanf("%f", &sombra);

    printf("Informe a sua altura (Em metros): ");
    scanf("%f", &altura);

    tamanhopredio = (altura / sombra) * sombrapredio;

    printf("O tamanho do predio e %.2f", tamanhopredio);
}