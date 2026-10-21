// NJNCPNBIPCD$$MADPDGHGHKB @ RVA 0x3139C0C

System_String_o *
NJNCPNBIPCD__MADPDGHGHKB(NJNCPNBIPCD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  NJNCPNBIPCD_c *method_00;
  bool bVar1;
  KKEKJDLEJIL_o **ppKVar2;
  HOOAAGABMBL_o **ppHVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Nullable_float__o SVar6;
  System_Nullable_int__o SVar7;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  int iVar8;
  float fVar9;
  
  if ((DAT_0456671b & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&StringLiteral_19959);
    FUN_01bab630(&StringLiteral_19993);
    FUN_01bab630(&StringLiteral_21069);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_9833);
    FUN_01bab630(&StringLiteral_17129);
    DAT_0456671b = 1;
  }
  (__this->fields).HMDOBHEEHKM = 0;
  (__this->fields).FDCEMGNCPCI = 0;
  (__this->fields).LCJAAPPDFJJ = 0;
  (__this->fields).PACHINKIODC = 1.0;
  (__this->fields).ICOPCAKPPCJ = 1;
  ppKVar2 = &(__this->fields).MFFEOOLICJE;
  *ppKVar2 = (KKEKJDLEJIL_o *)0x0;
  thunk_FUN_01c20e04(ppKVar2,0);
  (__this->fields).LEDBMKOBNDM = (KJNCNBJIJPC_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  ppHVar3 = &(__this->fields).PJKFHNAHDEK;
  *ppHVar3 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar3,0);
  pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  pSVar5 = StringLiteral_1;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar5 = pSVar4;
  }
  if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
  method_02 = (MethodInfo *)0x0;
  bVar1 = System_String__op_Equality(pSVar5,StringLiteral_19959,(MethodInfo *)0x0);
  if (bVar1) {
    NJNCPNBIPCD__HJNOLAEOPJF((NJNCPNBIPCD_o *)(ulong)bVar1,(System_String_o *)0x0,method_02);
    pSVar5 = StringLiteral_19959;
  }
  else {
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_19993,(MethodInfo *)0x0);
    if (bVar1) {
      SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      fVar9 = 8.0;
      if (((ulong)SVar6.fields & 0xff) != 0) {
        fVar9 = SVar6.fields.value;
      }
      (__this->fields).PACHINKIODC = fVar9;
      SVar7 = AJAMDCEKAFE__NANCFCIGNEE(2,OPAEPDIIOEB,(MethodInfo *)0x0);
      iVar8 = SVar7.fields.value;
      if (((ulong)SVar7.fields & 0xff) == 0) {
        iVar8 = 1;
      }
      (__this->fields).ICOPCAKPPCJ = iVar8;
      SVar7 = AJAMDCEKAFE__NANCFCIGNEE(3,OPAEPDIIOEB,(MethodInfo *)0x0);
      (__this->fields).FDCEMGNCPCI = iVar8 * SVar7.fields.value;
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566743 == '\0') {
        FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
        DAT_04566743 = '\x01';
      }
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = NJNCPNBIPCD_TypeInfo;
      NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField = true;
      NJNCPNBIPCD__GNIBFOOLMHK((MethodInfo *)method_00);
      pSVar5 = NJNCPNBIPCD__DDNFHFMBOMD(__this,method_01);
      pSVar5 = System_String__Concat(StringLiteral_9833,pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_17129,(MethodInfo *)0x0);
    pSVar5 = StringLiteral_21069;
    if (bVar1) {
      pSVar5 = NJNCPNBIPCD__OBKJNJBOBJA(__this,1,OPAEPDIIOEB,in_x3);
      return pSVar5;
    }
  }
  return pSVar5;
}

