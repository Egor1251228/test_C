#include <math.h>
#include <stdio.h>

#define TASK_1

#ifdef TASK_1

int main()
{
  int b1 = 0, b3 = 0;
  double b2 = 0, q = 0;
  scanf("%d%d", &b1, &b3);
  q = sqrt(b3 / b1);
  b2 = b1 * q;
  
  printf("%.0lf %.0lf\n", b2, q);
  printf("%.0lf %.0lf\n", b2, q);
  return 0;
}
#endif
