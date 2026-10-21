// OHFEMEPFLLI$$OFPHPMGMCAL @ RVA 0x33CEDF4

System_String_o * OHFEMEPFLLI__OFPHPMGMCAL(OHFEMEPFLLI_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  System_String_o *pSVar2;
  
                    /* try { // try from 034cee20 to 035cee23 has its CatchHandler @ 034cf49c */
  if ((DAT_04567e4b & 1) == 0) {
    FUN_01bab630(&StringLiteral_19959);
                    /* try { // try from 034cee34 to 035cee3f has its CatchHandler @ 034cf498 */
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_19993);
                    /* try { // try from 034cee50 to 035cee5b has its CatchHandler @ 034cf494 */
    DAT_04567e4b = 1;
  }
  puVar1 = &StringLiteral_19959;
  if ((__this->fields).super.field_0x51 != '\0') {
    puVar1 = &StringLiteral_19993;
  }
                    /* try { // try from 034cee6c to 035cee73 has its CatchHandler @ 034cf4d8 */
  pSVar2 = System_String__Concat
                     (*(System_String_o **)&(__this->fields).LOEKILNCFAJ,StringLiteral_167,
                      (System_String_o *)*puVar1,(MethodInfo *)0x0);
  return pSVar2;
}

