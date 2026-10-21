// PBGDDCFGPJI$$MergeFrom @ RVA 0x34BCF78

void PBGDDCFGPJI__MergeFrom(PBGDDCFGPJI_o *__this,PBGDDCFGPJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  GLPEFEEGCPM_o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  PBGDDCFGPJI_Fields *pPVar3;
  GLPEFEEGCPM_o **ppGVar4;
  
  if ((DAT_045685f3 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_045685f3 = 1;
  }
  if (IBKIPBJJCPG != (PBGDDCFGPJI_o *)0x0) {
    if ((IBKIPBJJCPG->fields).KEIBPDJHHBB != (GLPEFEEGCPM_o *)0x0) {
      ppGVar4 = &(__this->fields).KEIBPDJHHBB;
      pGVar1 = *ppGVar4;
      if (pGVar1 == (GLPEFEEGCPM_o *)0x0) {
        pGVar1 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
        GLPEFEEGCPM___ctor(pGVar1,(MethodInfo *)0x0);
        *ppGVar4 = pGVar1;
        thunk_FUN_01c20e04(ppGVar4,pGVar1);
        pGVar1 = *ppGVar4;
        if (pGVar1 == (GLPEFEEGCPM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      GLPEFEEGCPM__MergeFrom(pGVar1,(IBKIPBJJCPG->fields).KEIBPDJHHBB,(MethodInfo *)0x0);
    }
    pPVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pPVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pPVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pPVar3,pGVar2);
    return;
  }
  return;
}

