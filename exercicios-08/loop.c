#include <Windows.h>

int main() {
  int i=0;

  while (i++ < 10) {
      Sleep(500); // Sleep 0,5 segundo
      printf(".");
  }

  return 0;
}
