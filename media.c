#include <stdio.h>
#include <math.h>

int main() {
    int n ;   
    // Numero di numeri da inserire da tastiera da parte dell'utente
    printf("Scegli il numero di quanti numeri si deve fare la media, che non siano meno di tre: ");
    scanf("%d", &n);
    
    double numeri[n];
    double somma = 0.0;
    double media;
    int media_arrotondata;
    
    // Inserimento dei numeri
   
    printf("Inserisci %d numeri reali:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%lf", &numeri[i]);
        somma += numeri[i];
    }

    // Calcolo della media aritmetica
    media = somma / n;
    media_arrotondata = (int)round(media);

    // Calcolo delle aree usando la media
    double area_quadrato_decimale = media * media;
    double area_quadrato_arrotondata = media_arrotondata * media_arrotondata;

    double raggio_decimale = media / 2.0;
    double raggio_arrotondata = media_arrotondata / 2.0;
    double area_cerchio_decimale = M_PI * raggio_decimale * raggio_decimale;
    double area_cerchio_arrotondata = M_PI * raggio_arrotondata * raggio_arrotondata;

    double area_triangolo_decimale = (sqrt(3) / 4) * media * media;
    double area_triangolo_arrotondata = (sqrt(3) / 4) * media_arrotondata * media_arrotondata;

    // Stampa dei risultati
    printf("Media aritmetica: %.2f\n", media);
    printf("Media arrotondata: %d\n\n", media_arrotondata);

    printf("Area del quadrato (decimale): %.2f\n", area_quadrato_decimale);
    printf("Area del quadrato (arrotondata): %d\n\n", (int)round(area_quadrato_arrotondata));

    printf("Area del cerchio (decimale): %.2f\n", area_cerchio_decimale);
    printf("Area del cerchio (arrotondata): %d\n\n", (int)round(area_cerchio_arrotondata));

    printf("Area del triangolo equilatero (decimale): %.2f\n", area_triangolo_decimale);
    printf("Area del triangolo equilatero (arrotondata): %d\n", (int)round(area_triangolo_arrotondata));

    return 0;
}