// IFKFDFGNMMN$$APFHFNJDAJG @ RVA 0x31B93F4

BNAIBAODKAK_o *
IFKFDFGNMMN__APFHFNJDAJG(IFKFDFGNMMN_o *__this,System_String_o *JAKHFEHMBIC,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  BNAIBAODKAK_o *pBVar3;
  BNAIBAODKAK_array *pBVar4;
  uint uVar5;
  
  pBVar4 = (__this->fields).OFNAAFHJIOB;
  if (pBVar4 == (BNAIBAODKAK_array *)0x0) {
LAB_032b9470:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)pBVar4->max_length;
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pBVar3 = pBVar4->m_Items[(int)uVar5];
      if (pBVar3 == (BNAIBAODKAK_o *)0x0) goto LAB_032b9470;
      bVar2 = System_String__op_Equality((pBVar3->fields).NLAHDEDCAEI,JAKHFEHMBIC,(MethodInfo *)0x0)
      ;
      if (bVar2) {
        return pBVar3;
      }
      uVar1 = (uint)pBVar4->max_length;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar1);
  }
  return (BNAIBAODKAK_o *)0x0;
}

