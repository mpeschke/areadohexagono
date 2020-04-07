#include <stdio.h>
#include <math.h>

void calc_hexa(float l, float *area, float *perimetro);

int main()
{
    float l = 0.0f, area = 0.0f, perimetro = 0.0f;

    scanf("%f", &l);
    while(l >= 0.0f)
    {
        calc_hexa(l, &area, &perimetro);
        printf("Área do hexágono de lado %f: %f\n", l, area);
        printf("Perímetro do hexágono de lado %f: %f\n", l, perimetro);
        scanf("%f", &l);
    }

    return 0;
}

void calc_hexa(float l, float *area, float *perimetro)
{
    *area = ((3.0f * sqrtf(3.0f)) / 2.0f) * (l * 2.0f);
    *perimetro = 6.0f * l;
}
