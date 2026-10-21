// ELBBEAGGAOH$$MergeFrom @ RVA 0x324B548

void ELBBEAGGAOH__MergeFrom(ELBBEAGGAOH_o *__this,ELBBEAGGAOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  KAMBBJFPLGM_o *pKVar3;
  EKCGNICFDEO_o *pEVar4;
  GLPEFEEGCPM_o *pGVar5;
  PGICCMFLDPI_o *pPVar6;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_01;
  Google_Protobuf_UnknownFieldSet_o *pGVar7;
  ELBBEAGGAOH_Fields *pEVar8;
  KAMBBJFPLGM_o **ppKVar9;
  EKCGNICFDEO_o **ppEVar10;
  GLPEFEEGCPM_o **ppGVar11;
  PGICCMFLDPI_o **ppPVar12;
  
  if ((DAT_045670f4 & 1) == 0) {
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Add__);
    DAT_045670f4 = 1;
  }
  if (IBKIPBJJCPG == (ELBBEAGGAOH_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).CBHDCHDBFGB != (KAMBBJFPLGM_o *)0x0) {
    ppKVar9 = &(__this->fields).CBHDCHDBFGB;
    pKVar3 = *ppKVar9;
    if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
      pKVar3 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar3,(MethodInfo *)0x0);
      *ppKVar9 = pKVar3;
      thunk_FUN_01c20e04(ppKVar9,pKVar3);
      pKVar3 = *ppKVar9;
      if (pKVar3 == (KAMBBJFPLGM_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    KAMBBJFPLGM__MergeFrom(pKVar3,(IBKIPBJJCPG->fields).CBHDCHDBFGB,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IFDHENIKFKC != (KAMBBJFPLGM_o *)0x0) {
    ppKVar9 = &(__this->fields).IFDHENIKFKC;
    pKVar3 = *ppKVar9;
    if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
      pKVar3 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar3,(MethodInfo *)0x0);
      *ppKVar9 = pKVar3;
      thunk_FUN_01c20e04(ppKVar9,pKVar3);
      pKVar3 = *ppKVar9;
      if (pKVar3 == (KAMBBJFPLGM_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    KAMBBJFPLGM__MergeFrom(pKVar3,(IBKIPBJJCPG->fields).IFDHENIKFKC,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).DNKENJFJOMD != (EKCGNICFDEO_o *)0x0) {
    ppEVar10 = &(__this->fields).DNKENJFJOMD;
    pEVar4 = *ppEVar10;
    if (pEVar4 == (EKCGNICFDEO_o *)0x0) {
      pEVar4 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo);
      EKCGNICFDEO___ctor(pEVar4,(MethodInfo *)0x0);
      *ppEVar10 = pEVar4;
      thunk_FUN_01c20e04(ppEVar10,pEVar4);
      pEVar4 = *ppEVar10;
      if (pEVar4 == (EKCGNICFDEO_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    EKCGNICFDEO__MergeFrom(pEVar4,(IBKIPBJJCPG->fields).DNKENJFJOMD,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).FFDNNGLMPJJ != (EKCGNICFDEO_o *)0x0) {
    ppEVar10 = &(__this->fields).FFDNNGLMPJJ;
    pEVar4 = *ppEVar10;
    if (pEVar4 == (EKCGNICFDEO_o *)0x0) {
      pEVar4 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo);
      EKCGNICFDEO___ctor(pEVar4,(MethodInfo *)0x0);
      *ppEVar10 = pEVar4;
      thunk_FUN_01c20e04(ppEVar10,pEVar4);
      pEVar4 = *ppEVar10;
      if (pEVar4 == (EKCGNICFDEO_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    EKCGNICFDEO__MergeFrom(pEVar4,(IBKIPBJJCPG->fields).FFDNNGLMPJJ,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).KEIBPDJHHBB != (GLPEFEEGCPM_o *)0x0) {
    ppGVar11 = &(__this->fields).KEIBPDJHHBB;
    pGVar5 = *ppGVar11;
    if (pGVar5 == (GLPEFEEGCPM_o *)0x0) {
      pGVar5 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
      GLPEFEEGCPM___ctor(pGVar5,(MethodInfo *)0x0);
      *ppGVar11 = pGVar5;
      thunk_FUN_01c20e04(ppGVar11,pGVar5);
      pGVar5 = *ppGVar11;
      if (pGVar5 == (GLPEFEEGCPM_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    GLPEFEEGCPM__MergeFrom(pGVar5,(IBKIPBJJCPG->fields).KEIBPDJHHBB,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    ppPVar12 = &(__this->fields).MIINPPOCPCN;
    pPVar6 = *ppPVar12;
    if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
      pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
      *ppPVar12 = pPVar6;
      thunk_FUN_01c20e04(ppPVar12,pPVar6);
      pPVar6 = *ppPVar12;
      if (pPVar6 == (PGICCMFLDPI_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    PGICCMFLDPI__MergeFrom(pPVar6,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
  }
  __this_00 = (IBKIPBJJCPG->fields).DKOBFIICAFM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar2 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      ELBBEAGGAOH__AKKHFOGFIMC(__this,(IBKIPBJJCPG->fields).DKOBFIICAFM,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).EMNNAEAIMNH;
    if (iVar1 != 0) {
      (__this->fields).EMNNAEAIMNH = iVar1;
    }
    __this_01 = (__this->fields).OOPOHLJPBHE;
    if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).OOPOHLJPBHE,
                 Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Add__);
      pEVar8 = &__this->fields;
      pGVar7 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pEVar8->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pEVar8->CKFPENBPNML = pGVar7;
      thunk_FUN_01c20e04(pEVar8,pGVar7);
      return;
    }
  }
LAB_0334b82c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

