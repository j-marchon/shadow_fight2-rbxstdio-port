// EAJJPPPJENA$$MergeFrom @ RVA 0x32D5BB8

void EAJJPPPJENA__MergeFrom(EAJJPPPJENA_o *__this,EAJJPPPJENA_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  JMCDPBKILIN_o *pJVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  EAJJPPPJENA_Fields *pEVar4;
  JMCDPBKILIN_o **ppJVar5;
  
  if ((DAT_04567586 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_04567586 = 1;
  }
  if (IBKIPBJJCPG != (EAJJPPPJENA_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
    if (iVar1 != 0) {
      (__this->fields).EMOLIBOCKJK = iVar1;
    }
    if ((IBKIPBJJCPG->fields).NCFPAHCCDBB != (JMCDPBKILIN_o *)0x0) {
      ppJVar5 = &(__this->fields).NCFPAHCCDBB;
      pJVar2 = *ppJVar5;
      if (pJVar2 == (JMCDPBKILIN_o *)0x0) {
        pJVar2 = (JMCDPBKILIN_o *)thunk_FUN_01bda818(JMCDPBKILIN_TypeInfo);
        JMCDPBKILIN___ctor(pJVar2,(MethodInfo *)0x0);
        *ppJVar5 = pJVar2;
        thunk_FUN_01c20e04(ppJVar5,pJVar2);
        pJVar2 = *ppJVar5;
        if (pJVar2 == (JMCDPBKILIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      JMCDPBKILIN__MergeFrom(pJVar2,(IBKIPBJJCPG->fields).NCFPAHCCDBB,(MethodInfo *)0x0);
    }
    pEVar4 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pEVar4->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pEVar4,pGVar3);
    return;
  }
  return;
}

