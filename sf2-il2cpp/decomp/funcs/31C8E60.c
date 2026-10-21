// DBNIPENAEKO$$MergeFrom @ RVA 0x31C8E60

void DBNIPENAEKO__MergeFrom(DBNIPENAEKO_o *__this,DBNIPENAEKO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  AFLJMCMKCIG_o *pAVar2;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  DBNIPENAEKO_Fields *pDVar4;
  AFLJMCMKCIG_o **ppAVar5;
  
  if ((DAT_04566c4a & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__);
    DAT_04566c4a = 1;
  }
  if (IBKIPBJJCPG == (DBNIPENAEKO_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).LCAENFFHHEI;
  if (iVar1 != 0) {
    (__this->fields).LCAENFFHHEI = iVar1;
  }
  if ((IBKIPBJJCPG->fields).HBCNHAMIMGF != (AFLJMCMKCIG_o *)0x0) {
    ppAVar5 = &(__this->fields).HBCNHAMIMGF;
    pAVar2 = *ppAVar5;
    if (pAVar2 == (AFLJMCMKCIG_o *)0x0) {
      pAVar2 = (AFLJMCMKCIG_o *)thunk_FUN_01bda818(AFLJMCMKCIG_TypeInfo);
      AFLJMCMKCIG___ctor(pAVar2,(MethodInfo *)0x0);
      *ppAVar5 = pAVar2;
      thunk_FUN_01c20e04(ppAVar5,pAVar2);
      pAVar2 = *ppAVar5;
      if (pAVar2 == (AFLJMCMKCIG_o *)0x0) goto LAB_032c8f74;
    }
    AFLJMCMKCIG__MergeFrom(pAVar2,(IBKIPBJJCPG->fields).HBCNHAMIMGF,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).BMMFCMJLFKN;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
    method_00 = Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__;
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).BMMFCMJLFKN,
               (MethodInfo_295F02C *)
               Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__);
    CJNHFNHJHPE = (IBKIPBJJCPG->fields).BHMHGIBMMMB;
    if (CJNHFNHJHPE != (System_String_o *)0x0) {
      if ((CJNHFNHJHPE->fields)._stringLength != 0) {
        DBNIPENAEKO__JGAPLKDDCOI(__this,CJNHFNHJHPE,method_00);
      }
      pDVar4 = &__this->fields;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pDVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pDVar4->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pDVar4,pGVar3);
      return;
    }
  }
LAB_032c8f74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

