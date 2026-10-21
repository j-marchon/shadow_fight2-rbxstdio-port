// PCNNBADGEGD$$OPHALLPMFHB @ RVA 0x349C58C

LLGIDMGDNPG_o *
PCNNBADGEGD__OPHALLPMFHB(PCNNBADGEGD_o *__this,int32_t EIMPAMOIHNM,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  LLGIDMGDNPG_o *pLVar3;
  LLGIDMGDNPG_array *pLVar4;
  
  pLVar4 = (__this->fields).EGNNBHJHNON;
  if (pLVar4 == (LLGIDMGDNPG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)pLVar4->max_length;
  uVar2 = EIMPAMOIHNM - (__this->fields).LKJAKLDAIOK;
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = 0xffffffff;
  }
  if ((int)uVar2 < 0) {
    pLVar3 = (LLGIDMGDNPG_o *)0x0;
  }
  else {
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pLVar3 = pLVar4->m_Items[uVar2];
  }
  return pLVar3;
}

