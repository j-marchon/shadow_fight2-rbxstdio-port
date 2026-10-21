// ELBBEAGGAOH$$.ctor @ RVA 0x324B888

void ELBBEAGGAOH___ctor(ELBBEAGGAOH_o *__this,ELBBEAGGAOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  EKCGNICFDEO_o *pEVar2;
  GLPEFEEGCPM_o *pGVar3;
  PGICCMFLDPI_o *pPVar4;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  ELBBEAGGAOH_o *extraout_x1;
  ELBBEAGGAOH_o *method_00;
  Google_Protobuf_ByteString_o **ppGVar7;
  
  method_00 = IBKIPBJJCPG;
  if ((DAT_04567100 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Clone__);
    DAT_04567100 = 1;
    method_00 = extraout_x1;
  }
  ELBBEAGGAOH___ctor(__this,(MethodInfo *)method_00);
  if (IBKIPBJJCPG != (ELBBEAGGAOH_o *)0x0) {
    pKVar1 = (IBKIPBJJCPG->fields).CBHDCHDBFGB;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)0x0;
    }
    else {
      pKVar1 = KAMBBJFPLGM__Clone(pKVar1,(MethodInfo *)0x0);
    }
    if (__this != (ELBBEAGGAOH_o *)0x0) {
      (__this->fields).CBHDCHDBFGB = pKVar1;
      thunk_FUN_01c20e04();
      pKVar1 = (IBKIPBJJCPG->fields).IFDHENIKFKC;
      if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
        pKVar1 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar1 = KAMBBJFPLGM__Clone(pKVar1,(MethodInfo *)0x0);
      }
      (__this->fields).IFDHENIKFKC = pKVar1;
      thunk_FUN_01c20e04();
      pEVar2 = (IBKIPBJJCPG->fields).DNKENJFJOMD;
      if (pEVar2 == (EKCGNICFDEO_o *)0x0) {
        pEVar2 = (EKCGNICFDEO_o *)0x0;
      }
      else {
        pEVar2 = EKCGNICFDEO__Clone(pEVar2,(MethodInfo *)0x0);
      }
      (__this->fields).DNKENJFJOMD = pEVar2;
      thunk_FUN_01c20e04();
      pEVar2 = (IBKIPBJJCPG->fields).FFDNNGLMPJJ;
      if (pEVar2 == (EKCGNICFDEO_o *)0x0) {
        pEVar2 = (EKCGNICFDEO_o *)0x0;
      }
      else {
        pEVar2 = EKCGNICFDEO__Clone(pEVar2,(MethodInfo *)0x0);
      }
      (__this->fields).FFDNNGLMPJJ = pEVar2;
      thunk_FUN_01c20e04();
      pGVar3 = (IBKIPBJJCPG->fields).KEIBPDJHHBB;
      if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
        pGVar3 = (GLPEFEEGCPM_o *)0x0;
      }
      else {
        pGVar3 = GLPEFEEGCPM__Clone(pGVar3,(MethodInfo *)0x0);
      }
      (__this->fields).KEIBPDJHHBB = pGVar3;
      thunk_FUN_01c20e04();
      pPVar4 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
      if (pPVar4 == (PGICCMFLDPI_o *)0x0) {
        pPVar4 = (PGICCMFLDPI_o *)0x0;
      }
      else {
        pPVar4 = PGICCMFLDPI__Clone(pPVar4,(MethodInfo *)0x0);
      }
      (__this->fields).MIINPPOCPCN = pPVar4;
      thunk_FUN_01c20e04();
      ppGVar7 = &(__this->fields).DKOBFIICAFM;
      *ppGVar7 = (IBKIPBJJCPG->fields).DKOBFIICAFM;
      thunk_FUN_01c20e04(ppGVar7);
      (__this->fields).EMNNAEAIMNH = (IBKIPBJJCPG->fields).EMNNAEAIMNH;
      pGVar5 = (IBKIPBJJCPG->fields).OOPOHLJPBHE;
      if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
        pGVar5 = (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,
                            Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Clone__);
        (__this->fields).OOPOHLJPBHE = pGVar5;
        thunk_FUN_01c20e04();
        pGVar6 = Google_Protobuf_UnknownFieldSet__Clone
                           ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        (__this->fields).CKFPENBPNML = pGVar6;
        thunk_FUN_01c20e04(&__this->fields,pGVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

