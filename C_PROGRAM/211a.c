#include<stdio.h>
#include<math.h>

void stand_devi(float, float, float, float, float,
                float*, float*, float*, float*);

int main()
{
    float a, b, c, d, e;
    float sum = 0, avg = 0, sd = 0, vari = 0;

    printf("Enter 5 numbers\n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    stand_devi(a, b, c, d, e, &sum, &avg, &vari, &sd);

    printf("\nSum = %0.2f\n", sum);
    printf("Mean / Average = %0.2f\n", avg);
    printf("Variance = %0.2f\n", vari);
    printf("Standard Deviation = %0.2f\n", sd);

    return 0;
}

void stand_devi(float a, float b, float c, float d, float e,
                float *sum, float *avg, float *v, float *sd)
{
    *sum = a + b + c + d + e;
    *avg = *sum / 5.0;

    *v   += pow( (a - *avg), 2 );
    *v   += pow( (b - *avg), 2 );
    *v   += pow( (c - *avg), 2 );
    *v   += pow( (d - *avg), 2 );
    *v   += pow( (e - *avg), 2 );

    *v   = *v / 5.0;
    *sd  = sqrt(*v);
}
