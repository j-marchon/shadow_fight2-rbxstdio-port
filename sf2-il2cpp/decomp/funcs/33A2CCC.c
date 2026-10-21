// PAOMOCCOFDE.IFMANFAJIHA$$MoveNext @ RVA 0x33A2CCC

bool PAOMOCCOFDE_IFMANFAJIHA__MoveNext(PAOMOCCOFDE_IFMANFAJIHA_o *__this,MethodInfo *method)

{
  int iVar1;
  PAOMOCCOFDE_o *__this_00;
  Il2CppObject **ppIVar2;
  
  iVar1 = (__this->fields).__1__state;
                    /* try { // try from 034a2cdc to 035a2ce3 has its CatchHandler @ 034a2d44 */
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (PAOMOCCOFDE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a2d2c to 035a2d5f has its CatchHandler @ 034a2aa8 */
      FUN_01bab8c8();
    }
                    /* try { // try from 034a2d18 to 035a2d1b has its CatchHandler @ 034a2da4 */
                    /* try { // try from 034a2d1c to 035a2d1f has its CatchHandler @ 034a2da0 */
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this_00,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    ppIVar2 = &(__this->fields).__2__current;
                    /* try { // try from 034a2ce4 to 035a2d17 has its CatchHandler @ 034a2aa8 */
    *ppIVar2 = (Il2CppObject *)0x0;
    (__this->fields).__1__state = -1;
    thunk_FUN_01c20e04(ppIVar2,0);
    (__this->fields).__1__state = 1;
    return true;
  }
                    /* try { // try from 034a2d20 to 035a2d23 has its CatchHandler @ 034a2d40 */
                    /* try { // try from 034a2d24 to 035a2d27 has its CatchHandler @ 034a2d3c */
                    /* try { // try from 034a2d28 to 035a2d2b has its CatchHandler @ 034a2d38 */
  return false;
}

