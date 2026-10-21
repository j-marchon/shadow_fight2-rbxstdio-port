// EEGDOGKBLNG$$LMIIHKLCBKD @ RVA 0x3070A60

bool EEGDOGKBLNG__LMIIHKLCBKD(EEGDOGKBLNG_o *__this,int32_t MJIEPACBNBI,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *pKVar2;
  
  pKVar2 = (__this->fields).MLAAJICBOAD;
  bVar1 = false;
  if (pKVar2 != (KAMBBJFPLGM_o *)0x0) {
    bVar1 = KAMBBJFPLGM__KILBJDNIPBK(pKVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pKVar2 = (__this->fields).MLAAJICBOAD;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (MJIEPACBNBI & ((pKVar2->fields).IJBBNNHJPLF ^ 0xffffffffU)) == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

