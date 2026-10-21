// JMCDPBKILIN$$MergeFrom @ RVA 0x31292B8

void JMCDPBKILIN__MergeFrom(JMCDPBKILIN_o *__this,JMCDPBKILIN_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  KAMBBJFPLGM_o *pKVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  JMCDPBKILIN_Fields *pJVar3;
  KAMBBJFPLGM_o **ppKVar4;
  
  if ((DAT_0456667c & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Add__);
    DAT_0456667c = 1;
  }
  if (IBKIPBJJCPG == (JMCDPBKILIN_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).MJIIHOLHNCK;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,
               Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Add__);
    if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
      ppKVar4 = &(__this->fields).OPHCNELIOLD;
      pKVar1 = *ppKVar4;
      if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
        pKVar1 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
        KAMBBJFPLGM___ctor(pKVar1,(MethodInfo *)0x0);
        *ppKVar4 = pKVar1;
        thunk_FUN_01c20e04(ppKVar4,pKVar1);
        pKVar1 = *ppKVar4;
        if (pKVar1 == (KAMBBJFPLGM_o *)0x0) goto LAB_032293a8;
      }
      KAMBBJFPLGM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
    }
    pJVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pJVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pJVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pJVar3,pGVar2);
    return;
  }
LAB_032293a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

