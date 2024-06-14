#include <stdio.h>
#include <math.h> 

int main() {
    double d;  // Variabile per memorizzare il numero reale inserito dall'utente

    // Chiede all'utente di inserire un numero reale
    printf("Inserisci un numero reale D: ");
    scanf("%lf", &d);

    // Calcolo dell'area del quadrato di lato D
    double area_quadrato = d * d;
    
    // Calcolo dell'area del cerchio di diametro D
    double raggio = d / 2.0;
    double area_cerchio = M_PI * raggio * raggio;
    
    // Calcolo dell'area del triangolo equilatero di lato D
    double area_triangolo = (sqrt(3) / 4) * d * d;
    
    // Stampa dei risultati
    printf("Area del quadrato di lato %.2f: %.2f\n", d, area_quadrato);
    printf("Area del cerchio di diametro %.2f: %.2f\n", d, area_cerchio);
    printf("Area del triangolo equilatero di lato %.2f: %.2f\n", d, area_triangolo);

    return 0;
}