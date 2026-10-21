// EPCCNLNOALL$$MergeFrom @ RVA 0x32FBC80

void EPCCNLNOALL__MergeFrom(EPCCNLNOALL_o *__this,EPCCNLNOALL_o *IBKIPBJJCPG,MethodInfo *method)

{
  OJEHKJHEBID_o *pOVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  EPCCNLNOALL_Fields *pEVar4;
  OJEHKJHEBID_o **ppOVar5;
  KAMBBJFPLGM_o **ppKVar6;
  
  if ((DAT_045676e2 & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    DAT_045676e2 = 1;
  }
  if (IBKIPBJJCPG == (EPCCNLNOALL_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).KOGEBALMCBB != (OJEHKJHEBID_o *)0x0) {
    ppOVar5 = &(__this->fields).KOGEBALMCBB;
    pOVar1 = *ppOVar5;
    if (pOVar1 == (OJEHKJHEBID_o *)0x0) {
      pOVar1 = (OJEHKJHEBID_o *)thunk_FUN_01bda818(OJEHKJHEBID_TypeInfo);
      OJEHKJHEBID___ctor(pOVar1,(MethodInfo *)0x0);
      *ppOVar5 = pOVar1;
      thunk_FUN_01c20e04(ppOVar5,pOVar1);
      pOVar1 = *ppOVar5;
      if (pOVar1 == (OJEHKJHEBID_o *)0x0) goto LAB_033fbda8;
    }
    OJEHKJHEBID__MergeFrom(pOVar1,(IBKIPBJJCPG->fields).KOGEBALMCBB,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar6 = &(__this->fields).OPHCNELIOLD;
    pKVar2 = *ppKVar6;
    if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
      pKVar2 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar2,(MethodInfo *)0x0);
      *ppKVar6 = pKVar2;
      thunk_FUN_01c20e04(ppKVar6,pKVar2);
      pKVar2 = *ppKVar6;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
LAB_033fbda8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KAMBBJFPLGM__MergeFrom(pKVar2,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  pEVar4 = &__this->fields;
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pEVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pEVar4->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pEVar4,pGVar3);
  return;
}

