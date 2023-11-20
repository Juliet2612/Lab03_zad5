#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float main(int argc, char **argv) {
    double x1, x2, x3, y1, y2, y3;

    system("chcp 65001 > nul");

    printf("Podaj współrzędne trzech punktów w kolejności: x1, y1, x2, y2, x3, y3: ");
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);

    printf("Odległość punktów 1 i 2 wynosi: %.2lf\n", sqrt(pow((x1 - x2), 2.0) + pow((y1 - y2), 2.0)));
    printf("Odległość punktów 1 i 3 wynosi: %.2lf\n", sqrt(pow((x1 - x3), 2.0) + pow((y1 - y3), 2.0)));
    printf("Odległość punktów 2 i 3 wynosi: %.2lf\n", sqrt(pow((x2 - x3), 2.0) + pow((y2 - y3), 2.0)));

    printf("Naciśnij klawisz ENTER aby zakończyć ...");
    fflush(stdin);
    system("pause");
    return 0;
}
