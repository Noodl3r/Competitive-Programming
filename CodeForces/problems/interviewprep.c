#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Q1 :
void my_itoa(int num, char *buffer) {
  int length = 0;
  int copy = num;
  if (num < 1) {
    buffer[0] = '-';
    length++;
    num = -1 * num;
  }
  copy = num;
  while (copy) {
    length++;
    copy /= 10;
  }
  copy = num;

  while (copy) {
  }
}

// Q2 :

void merge_sorted(int *a, n, int *b, m, int *out) {
  if (n == 0) {
    out = b;
  }
  if (m == 0) {
    out = a;
  }
  if (*a > *b) {
    merge_sorted((a + 1), n - 1, b, m, out);
  }
  if (*b > *a) {
    merge_sorted(a, n, (b + 1), m - 1, out);
  }
}

// Q3 :
int my_strcp(const char *s1, const char *s2) {
  int total1 = 0, total2 = 0;
  while (s1 != NULL) {
    total1 += (int)(s1);
    s1++;
  }
}
int main() {}
