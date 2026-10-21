// Nekki.SF2.GUI.Fight.EndFightContent$$OLNJFJCEDGA @ RVA 0x309AFAC

void Nekki_SF2_GUI_Fight_EndFightContent__OLNJFJCEDGA
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,LabelButton_o *BECCOGAMKJL,
               int64_t DCDLMCEEOCC,MethodInfo *method)

{
  undefined8 *puVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_ValueTuple_long__long__o SVar7;
  int64_t local_50;
  int64_t iStack_48;
  
  method_00 = (MethodInfo *)DCDLMCEEOCC;
  if ((DAT_0456611b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22506);
    FUN_01bab630(&StringLiteral_15854);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_15836);
    FUN_01bab630(&StringLiteral_15810);
    FUN_01bab630(&StringLiteral_5735);
    FUN_01bab630(&StringLiteral_15849);
    FUN_01bab630(&StringLiteral_1377);
    __this = (Nekki_SF2_GUI_Fight_EndFightContent_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_0456611b = 1;
  }
  SVar7 = Nekki_SF2_GUI_Fight_EndFightContent__KAJJINHAMII(__this,DCDLMCEEOCC,method_00);
  local_50 = SVar7.fields.Item2;
  iStack_48 = SVar7.fields.Item1;
  if (DCDLMCEEOCC < 1000) {
    pSVar2 = System_Int64__ToString((int64_t)&iStack_48,(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)0x0;
LAB_0319b128:
    pSVar3 = (System_String_o *)0x0;
  }
  else {
    puVar1 = (undefined8 *)&StringLiteral_15836;
    if (DCDLMCEEOCC < 1000000000) {
      puVar1 = &StringLiteral_15849;
    }
    if (DCDLMCEEOCC < 1000000) {
      puVar1 = &StringLiteral_15854;
    }
    pSVar5 = (System_String_o *)*puVar1;
    pSVar2 = System_Int64__ToString((int64_t)&iStack_48,(MethodInfo *)0x0);
    if (pSVar5 == (System_String_o *)0x0) goto LAB_0319b128;
    pSVar3 = System_Int64__ToString((int64_t)&local_50,StringLiteral_1567,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(pSVar2,StringLiteral_1377,pSVar3,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_15810;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
    pSVar6 = (pAVar4->fields).FAAJGHKHEBI;
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar3;
        thunk_FUN_01c20e04(values->m_Items,pSVar3);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = StringLiteral_5735;
          thunk_FUN_01c20e04(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar6;
            thunk_FUN_01c20e04(values->m_Items + 2,pSVar6);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = StringLiteral_22506;
              thunk_FUN_01c20e04(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar2;
                thunk_FUN_01c20e04(values->m_Items + 4,pSVar2);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = StringLiteral_22500;
                  thunk_FUN_01c20e04(values->m_Items + 5);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = pSVar3;
                    thunk_FUN_01c20e04(values->m_Items + 6,pSVar3);
                    if (7 < (uint)values->max_length) {
                      values->m_Items[7] = pSVar5;
                      thunk_FUN_01c20e04(values->m_Items + 7,pSVar5);
                      pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                      if (BECCOGAMKJL != (LabelButton_o *)0x0) {
                        LabelButton__set_Alias(BECCOGAMKJL,pSVar2,(MethodInfo *)0x0);
                        return;
                      }
                      goto LAB_0319b2e8;
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0319b2e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

