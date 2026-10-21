// ECENNHNBAME.HJPFANEPGJF$$ELCEMOBLANG @ RVA 0x3015D3C

void ECENNHNBAME_HJPFANEPGJF__ELCEMOBLANG(ECENNHNBAME_HJPFANEPGJF_o *__this,MethodInfo *method)

{
  int iVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar4;
  int32_t iVar5;
  System_String_o *__this_00;
  
  pEVar4 = (__this->fields).EJNDOMGCGFL;
  if (pEVar4 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0) goto LAB_03115de4;
  __this_00 = (pEVar4->fields).OBBONHJFLBG;
  if ((__this_00 != (System_String_o *)0x0) &&
     (iVar1 = (__this_00->fields)._stringLength, 2 < iVar1)) {
    uVar2 = System_String__get_Chars(__this_00,iVar1 + -1,(MethodInfo *)0x0);
    uVar3 = System_String__get_Chars(__this_00,iVar1 + -2,(MethodInfo *)0x0);
    if ((uVar2 == 0x31) && (uVar3 == 0x5f)) {
      pEVar4 = (__this->fields).EJNDOMGCGFL;
      if (pEVar4 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0) {
LAB_03115de4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar5 = 1;
    }
    else {
      if (uVar2 != 0x32) {
        return;
      }
      if (uVar3 != 0x5f) {
        return;
      }
      pEVar4 = (__this->fields).EJNDOMGCGFL;
      if (pEVar4 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0) goto LAB_03115de4;
      iVar5 = 2;
    }
    (pEVar4->fields).ONFAKNEMEGC = iVar5;
  }
  return;
}

