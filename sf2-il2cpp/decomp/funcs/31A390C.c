// HGADMOBFBBF$$MergeFrom @ RVA 0x31A390C

void HGADMOBFBBF__MergeFrom(HGADMOBFBBF_o *__this,HGADMOBFBBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  KDADMJGPAOM_o *pKVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  HGADMOBFBBF_Fields *pHVar3;
  KDADMJGPAOM_o **ppKVar4;
  
  if ((DAT_04566af1 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04566af1 = 1;
  }
  if (IBKIPBJJCPG != (HGADMOBFBBF_o *)0x0) {
    if ((IBKIPBJJCPG->fields).LHFLMBNKPHF != (KDADMJGPAOM_o *)0x0) {
      ppKVar4 = &(__this->fields).LHFLMBNKPHF;
      pKVar1 = *ppKVar4;
      if (pKVar1 == (KDADMJGPAOM_o *)0x0) {
        pKVar1 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
        KDADMJGPAOM___ctor(pKVar1,(MethodInfo *)0x0);
        *ppKVar4 = pKVar1;
        thunk_FUN_01c20e04(ppKVar4,pKVar1);
        pKVar1 = *ppKVar4;
        if (pKVar1 == (KDADMJGPAOM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      KDADMJGPAOM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0);
    }
    pHVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pHVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pHVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pHVar3,pGVar2);
    return;
  }
  return;
}

