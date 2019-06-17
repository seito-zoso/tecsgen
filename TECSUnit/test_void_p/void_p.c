#include<stdio.h>
#include<string.h>

struct tecsunit_obj{
  char    type[16]; /* TECSInfoにより型名を格納します */
  void *data;
  int size;
};

int main(void)
{
  struct tecsunit_obj obj[2];
  strcpy(obj[0].type, "int");
  if( !strcmp(obj[0].type, "int") ){
    obj[0].size = 32;
  }
  obj[0].data = 15;
  printf("%d", *obj[0].data);
  // printf("%s\n", obj[0].type);
  return 0;
}