#include <locale.h>

#include <stdio.h>

#include <wchar.h>

int main(void)

{
   setlocale(LC_ALL, "");

   wchar_t grinning_face = 0x1F600;

   printf("%lc\n", grinning_face);

}