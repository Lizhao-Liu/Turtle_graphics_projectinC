#include "../General/general.h"
#include "../General/bool.h"

#define SCALEFACTOR 2
#define INITSIZE 20



typedef struct program{
  char** str;
  unsigned int cw; /*current word*/
  unsigned int size;
  unsigned int capacity;
  void* library;
}Prog;

Prog* prog_init(void);
bool prog_add(Prog* p, char* s);
bool prog_free(Prog* p);
