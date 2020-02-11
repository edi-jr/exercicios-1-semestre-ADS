#include <stdio.h>
#include <math.h>

void calc_raio(float r, float *area, float *volume);

int main()
{
  float r, a, v;
  printf("Digite o valor do raio: ");
  scanf("%f", &r);
  calc_raio(r, &a, &v);
  printf("Area da superficie: %.2f\n", a);
  printf("Volume da superficie: %.2f\n", v);
  return 0;
}

void calc_raio(float r, float *area, float *volume)
{
  *area = 4 * 3.14 * pow(r, 2);
  *volume = (4.0 / 3.0) * 3.14 * pow(r, 3);
}