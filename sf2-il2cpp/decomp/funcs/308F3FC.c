// AKOMJPINHEN$$NDINMGLBGDN @ RVA 0x308F3FC

void AKOMJPINHEN__NDINMGLBGDN(AKOMJPINHEN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *in_x2;
  
                    /* catch() { ... } // from try @ 0318ed48 with catch @ 0318f3fc */
                    /* catch() { ... } // from try @ 0318f270 with catch @ 0318f400 */
  if ((DAT_04566084 & 1) == 0) {
                    /* try { // try from 0318f418 to 0328f41b has its CatchHandler @ 0318f430 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Clear__);
    DAT_04566084 = 1;
  }
                    /* catch() { ... } // from try @ 0318f418 with catch @ 0318f430 */
  AKOMJPINHEN__KHFOCHBBBLH(__this,3,in_x2);
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

