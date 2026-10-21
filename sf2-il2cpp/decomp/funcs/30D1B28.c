// BECIPDJBAOG$$MergeFrom @ RVA 0x30D1B28

void BECIPDJBAOG__MergeFrom(BECIPDJBAOG_o *__this,BECIPDJBAOG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *CJNHFNHJHPE;
  BECIPDJBAOG_Fields *pBVar4;
  
  if ((DAT_0456630a & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_0456630a = 1;
  }
  if (IBKIPBJJCPG != (BECIPDJBAOG_o *)0x0) {
    CJNHFNHJHPE = (IBKIPBJJCPG->fields).JPHFGCIDDHE;
    if (CJNHFNHJHPE != (System_String_o *)0x0) {
      if ((CJNHFNHJHPE->fields)._stringLength != 0) {
        BECIPDJBAOG__AOFFLABEAGC(__this,CJNHFNHJHPE,method);
      }
      pGVar2 = (__this->fields).LEJBLHJFJHP;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                   (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).LEJBLHJFJHP,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
        pGVar2 = (__this->fields).AKFPFIHIHOC;
        if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__Add
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                     (System_Collections_Generic_IEnumerable_T__o *)
                     (IBKIPBJJCPG->fields).AKFPFIHIHOC,
                     Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
          iVar1 = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
          if (iVar1 != 0) {
            (__this->fields).EMOLIBOCKJK = iVar1;
          }
          iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
          if (iVar1 != 0) {
            (__this->fields).NLLKMEMKBAF = iVar1;
          }
          pBVar4 = &__this->fields;
          pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                             (pBVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,
                              (MethodInfo *)0x0);
          pBVar4->CKFPENBPNML = pGVar3;
          thunk_FUN_01c20e04(pBVar4,pGVar3);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

