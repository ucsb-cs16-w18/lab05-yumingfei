#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1;

  initBox(&b1,3.123456,4.123456,5.123456,7.123456);  
  assertEquals("ul=(3,4), w=5,h=7", boxToString(b1,1), "boxToString(b1,1)");
 
  assertEquals("ul=(3.1,4.1), w=5.1,h=7.1", boxToString(b1,2), "boxToString(b1,2)");
  assertEquals("ul=(3.12,4.12), w=5.12,h=7.12", boxToString(b1,3), "boxToString(b1,3)");
  assertEquals("ul=(3.123,4.123), w=5.123,h=7.123", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("ul=(3.1235,4.1235), w=5.1235,h=7.1235", boxToString(b1,5), "boxToString(b1,5)");
  assertEquals("ul=(3.12346,4.12346), w=5.12346,h=7.12346", boxToString(b1,6), "boxToString(b1,6)");



     
  return 0;
}
