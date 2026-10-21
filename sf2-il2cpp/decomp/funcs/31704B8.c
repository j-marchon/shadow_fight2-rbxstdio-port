// RaidInfoPrize.Prize$$FGGBGOMEJKM @ RVA 0x31704B8

void RaidInfoPrize_Prize__FGGBGOMEJKM(RaidInfoPrize_Prize_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 *puVar5;
  JKDFEBLBMOF_o *pJVar6;
  int local_2c;
  ulong local_28;
  
  if ((DAT_04566918 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1944);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_1607);
    FUN_01bab630(&StringLiteral_1223);
    FUN_01bab630(&StringLiteral_20417);
    FUN_01bab630(&StringLiteral_1950);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_20416);
    DAT_04566918 = 1;
    method = extraout_x1;
  }
  local_28 = 0;
  local_2c = 0;
  iVar1 = (__this->fields).PrizeNumber;
  if (iVar1 == 2) {
    pJVar6 = (__this->fields)._RaidReward_k__BackingField;
    if (pJVar6 == (JKDFEBLBMOF_o *)0x0) goto LAB_032707ac;
    uVar2 = (pJVar6->fields).OLGNPLGBNDJ;
    local_2c = (__this->fields)._RaidSize_k__BackingField;
    local_28 = (ulong)uVar2;
    if ((int)uVar2 < local_2c) {
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      pSVar3 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
      if (values == (System_String_array *)0x0) goto LAB_032707ac;
      if ((int)values->max_length == 0) {
LAB_032707b0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items,pSVar3);
      if ((uint)values->max_length < 2) goto LAB_032707b0;
      values->m_Items[1] = StringLiteral_1223;
      thunk_FUN_01c20e04(values->m_Items + 1);
      pSVar3 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) goto LAB_032707b0;
      values->m_Items[2] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 2,pSVar3);
      if ((uint)values->max_length < 4) goto LAB_032707b0;
      values->m_Items[3] = StringLiteral_167;
      thunk_FUN_01c20e04(values->m_Items + 3);
      pSVar3 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20417,method_00);
      if ((uint)values->max_length < 5) goto LAB_032707b0;
      values->m_Items[4] = pSVar3;
      thunk_FUN_01c20e04();
      pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
    }
    else {
      pSVar3 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
      pSVar4 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20416,method_01);
      pSVar3 = System_String__Concat(pSVar3,StringLiteral_167,pSVar4,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 1) {
    pJVar6 = (__this->fields)._RaidReward_k__BackingField;
    if (pJVar6 == (JKDFEBLBMOF_o *)0x0) goto LAB_032707ac;
    uVar2 = (pJVar6->fields).OLGNPLGBNDJ;
    local_28 = (ulong)uVar2 << 0x20;
    if ((int)uVar2 < 3) {
      pSVar3 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20416,method);
      puVar5 = &StringLiteral_1944;
      goto LAB_032706cc;
    }
    pSVar3 = System_Int32__ToString((int)&local_28 + 4,(MethodInfo *)0x0);
    pSVar4 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20417,method_02);
    pSVar3 = System_String__Concat
                       (StringLiteral_1950,pSVar3,StringLiteral_167,pSVar4,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = StringLiteral_1;
    if (iVar1 == 0) {
      pSVar3 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20416,method);
      puVar5 = &StringLiteral_1607;
LAB_032706cc:
      pSVar3 = System_String__Concat((System_String_o *)*puVar5,pSVar3,(MethodInfo *)0x0);
    }
  }
  __this_00 = (__this->fields).LineLabel;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,pSVar3,(MethodInfo *)0x0);
    return;
  }
LAB_032707ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

