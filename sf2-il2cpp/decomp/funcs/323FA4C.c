// OJHODFIGFMA$$KJILDIMFOME @ RVA 0x323FA4C

bool OJHODFIGFMA__KJILDIMFOME(OJHODFIGFMA_o *__this,System_String_o *FPGABKDNDPG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  NLPJLHOEAOE_o *__this_00;
  IFBJEEAJGEO_o *pIVar4;
  ulong uVar5;
  
  if ((DAT_0456709f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456709f = 1;
  }
  if ((FPGABKDNDPG == (System_String_o *)0x0) ||
     (bVar1 = System_String__op_Equality(FPGABKDNDPG,StringLiteral_1,(MethodInfo *)0x0), bVar1)) {
    bVar1 = true;
  }
  else {
    pSVar3 = System_String__Split(FPGABKDNDPG,0x7c,0,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) {
LAB_0333fb60:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0333fb60 to 0343fb67 has its CatchHandler @ 0333fd5c */
      FUN_01bab8c8();
    }
    if ((int)pSVar3->max_length < 1) {
      bVar1 = false;
    }
    else {
      uVar5 = 0;
      do {
                    /* try { // try from 0333faf8 to 0343faff has its CatchHandler @ 0333fd08 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if ((uint)pSVar3->max_length <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (__this_00 == (NLPJLHOEAOE_o *)0x0) goto LAB_0333fb60;
                    /* try { // try from 0333fb20 to 0343fb27 has its CatchHandler @ 0333fd00 */
                    /* try { // try from 0333fb28 to 0343fb5f has its CatchHandler @ 0333f990 */
        iVar2 = NLPJLHOEAOE__JCFMJBBOPMH(__this_00,pSVar3->m_Items[uVar5],(MethodInfo *)0x0);
        pIVar4 = (__this->fields).APPPNIFKKCH;
        if (pIVar4 == (IFBJEEAJGEO_o *)0x0) goto LAB_0333fb60;
        bVar1 = iVar2 == (pIVar4->fields).COALAGILPBO;
      } while ((!bVar1) && (uVar5 = uVar5 + 1, (long)uVar5 < (long)(int)pSVar3->max_length));
    }
  }
  return bVar1;
}

