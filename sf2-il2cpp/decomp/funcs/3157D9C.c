// HPEENDCCJND$$ALPMDLFPJEH @ RVA 0x3157D9C

System_String_o *
HPEENDCCJND__ALPMDLFPJEH(HPEENDCCJND_o *__this,System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Random_o *pSVar4;
  System_String_o *pSVar5;
  uint16_t local_24 [2];
  
                    /* try { // try from 03257d9c to 03357da7 has its CatchHandler @ 03258000 */
                    /* try { // try from 03257dac to 03357dbb has its CatchHandler @ 03257ff4 */
  if ((DAT_0456684d & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
                    /* try { // try from 03257dcc to 03357dd7 has its CatchHandler @ 03257ff0 */
    DAT_0456684d = 1;
  }
  if ((DIHAKADKIKM != (System_String_o *)0x0) &&
     (pSVar4 = (__this->fields).NBAAKDGJIEI, pSVar4 != (System_Random_o *)0x0)) {
                    /* try { // try from 03257ddc to 03357def has its CatchHandler @ 03257fec */
    iVar2 = (DIHAKADKIKM->fields)._stringLength + -1;
    iVar3 = (*(pSVar4->klass->vtable)._5_Next.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._5_Next.method);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
                    /* try { // try from 03257e00 to 03357e0b has its CatchHandler @ 03257fe8 */
    local_24[0] = System_String__get_Chars(DIHAKADKIKM,iVar3 - iVar1 * iVar2,(MethodInfo *)0x0);
                    /* try { // try from 03257e10 to 03357e23 has its CatchHandler @ 03257fe4 */
    if ((char_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(char_TypeInfo);
    }
                    /* try { // try from 03257e24 to 03357faf has its CatchHandler @ 03257784 */
    pSVar5 = System_Char__ToString((uint16_t)local_24,(MethodInfo *)0x0);
    return pSVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

