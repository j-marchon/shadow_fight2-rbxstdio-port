// GLPEFEEGCPM$$MergeFrom @ RVA 0x32251F0

void GLPEFEEGCPM__MergeFrom(GLPEFEEGCPM_o *__this,GLPEFEEGCPM_o *IBKIPBJJCPG,MethodInfo *method)

{
  FADHMEJJCPO_o *pFVar1;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  GLPEFEEGCPM_Fields *pGVar4;
  FADHMEJJCPO_o **ppFVar5;
  
  if ((DAT_04566f73 & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Add__);
    DAT_04566f73 = 1;
  }
  if (IBKIPBJJCPG == (GLPEFEEGCPM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).PBBGNHKFEPG != (FADHMEJJCPO_o *)0x0) {
    ppFVar5 = &(__this->fields).PBBGNHKFEPG;
    pFVar1 = *ppFVar5;
    if (pFVar1 == (FADHMEJJCPO_o *)0x0) {
      pFVar1 = (FADHMEJJCPO_o *)thunk_FUN_01bda818(FADHMEJJCPO_TypeInfo);
      FADHMEJJCPO___ctor(pFVar1,(MethodInfo *)0x0);
      *ppFVar5 = pFVar1;
      thunk_FUN_01c20e04(ppFVar5,pFVar1);
      pFVar1 = *ppFVar5;
      if (pFVar1 == (FADHMEJJCPO_o *)0x0) goto LAB_033252ec;
    }
    FADHMEJJCPO__MergeFrom(pFVar1,(IBKIPBJJCPG->fields).PBBGNHKFEPG,(MethodInfo *)0x0);
  }
  lVar3 = (IBKIPBJJCPG->fields).LAEGCKIFDOC;
  if (lVar3 != 0) {
    (__this->fields).LAEGCKIFDOC = lVar3;
  }
  __this_00 = (__this->fields).MPAIPMANDEO;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).MPAIPMANDEO,
               Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Add__);
    pGVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pGVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pGVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pGVar4,pGVar2);
    return;
  }
LAB_033252ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

