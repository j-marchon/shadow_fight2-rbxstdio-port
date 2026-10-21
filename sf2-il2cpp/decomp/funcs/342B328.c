// KJAKJNJODKL$$EPBENPDCBFE @ RVA 0x342B328

/* WARNING: Type propagation algorithm not settling */

bool KJAKJNJODKL__EPBENPDCBFE
               (KJAKJNJODKL_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ECENNHNBAME_o *__this_00;
  System_String_o *b;
  Il2CppObject *pIVar4;
  char *pcVar5;
  byte *pbVar6;
  float *pfVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  char cVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_e0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  
  if ((DAT_04568137 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_5058);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_3508);
    FUN_01bab630(&StringLiteral_5266);
    FUN_01bab630(&StringLiteral_11996);
    FUN_01bab630(&StringLiteral_4893);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568137 = 1;
  }
  bVar3 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) {
    return false;
  }
  if (!bVar3) {
    return false;
  }
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              (PHCGJGCHKCM->fields).IGMDDJFPIJL;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar2) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_01);
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_2968,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      __this_00 = (ECENNHNBAME_o *)
                  System_Collections_Generic_Dictionary<object,_object>__get_Item
                            (__this_01,StringLiteral_2968,
                             Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                            );
      if (__this_00 != (ECENNHNBAME_o *)0x0) {
        bVar2 = (ECENNHNBAME_TypeInfo->_2).naturalAligment;
        if (((((Il2CppClass *)__this_00->klass)->_2).naturalAligment < bVar2) ||
           ((((Il2CppClass *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)ECENNHNBAME_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
      }
    }
    else {
      __this_00 = (ECENNHNBAME_o *)0x0;
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_5266,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      b = (System_String_o *)
          System_Collections_Generic_Dictionary<object,_object>__get_Item
                    (__this_01,StringLiteral_5266,
                     Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if ((b != (System_String_o *)0x0) &&
         ((Il2CppClass *)b->klass != (Il2CppClass *)string_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(b);
      }
    }
    else {
      b = (System_String_o *)0x0;
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_4893,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,StringLiteral_4893,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0352b844;
      if ((pIVar4->klass->_1).element_class != (bool_TypeInfo->_1).element_class) goto LAB_0352b848;
      pcVar5 = (char *)thunk_FUN_01bda96c();
      cVar8 = *pcVar5;
    }
    else {
      cVar8 = '\0';
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_11996,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,StringLiteral_11996,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0352b844;
      if ((pIVar4->klass->_1).element_class != (bool_TypeInfo->_1).element_class) goto LAB_0352b848;
      pbVar6 = (byte *)thunk_FUN_01bda96c();
      uVar9 = (uint)*pbVar6;
    }
    else {
      uVar9 = 0;
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_3508,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,StringLiteral_3508,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0352b844;
      if ((pIVar4->klass->_1).element_class != (bool_TypeInfo->_1).element_class) goto LAB_0352b848;
      pbVar6 = (byte *)thunk_FUN_01bda96c();
      uVar10 = (uint)*pbVar6;
    }
    else {
      uVar10 = 0;
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_5058,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    fVar12 = 0.0;
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,StringLiteral_5058,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) {
LAB_0352b844:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pIVar4->klass->_1).element_class != (float_TypeInfo->_1).element_class) {
LAB_0352b848:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pfVar7 = (float *)thunk_FUN_01bda96c();
      fVar12 = *pfVar7;
    }
    bVar3 = System_String__op_Inequality
                      ((__this->fields)._MELJNLOGJOJ_k__BackingField,StringLiteral_1,
                       (MethodInfo *)0x0);
    if (((!bVar3) ||
        (bVar3 = System_String__op_Inequality
                           ((__this->fields)._MELJNLOGJOJ_k__BackingField,b,(MethodInfo *)0x0),
        !bVar3)) &&
       ((bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                           ((__this->fields)._ILIDNOINMBF_k__BackingField,(MethodInfo *)0x0), bVar3
        || ((__this_00 != (ECENNHNBAME_o *)0x0 &&
            (bVar3 = ECENNHNBAME__CBJGGDFAACP
                               (__this_00,(__this->fields)._ILIDNOINMBF_k__BackingField,
                                (MethodInfo *)0x0), bVar3)))))) {
      uVar1 = (__this->fields)._BJHDPDBPMAL_k__BackingField;
      if ((((int)uVar1 < 0) || (uVar1 == (cVar8 != '\0'))) &&
         (((uVar1 = (__this->fields)._HOKBMPLNBLK_k__BackingField, (int)uVar1 < 0 ||
           (uVar1 == uVar9)) &&
          ((uVar9 = (__this->fields)._AALKLBINCHG_k__BackingField, (int)uVar9 < 0 ||
           (uVar9 == uVar10)))))) {
        local_80.fakeValueActive =
             (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive;
        local_80.inited = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited;
        local_80._18_2_ =
             *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12;
        local_80.hiddenValueOldByte4.fields =
             (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4.fields;
        local_80.fakeValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue;
        local_80.currentCryptoKey =
             (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey;
        local_80.hiddenValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue;
        fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                            (MethodInfo *)0x0);
        if (-1.0 < fVar11) {
          local_a0.fakeValueActive =
               (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive;
          local_a0.inited = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited;
          local_a0._18_2_ =
               *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12;
          local_a0.hiddenValueOldByte4.fields =
               (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4.fields;
          local_a0.fakeValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue;
          local_a0.currentCryptoKey =
               (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey;
          local_a0.hiddenValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue;
          fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,
                              (MethodInfo *)0x0);
          if (fVar12 < fVar11) {
            return false;
          }
        }
        local_c0.fakeValueActive =
             (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive;
        local_c0.inited = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited;
        local_c0._18_2_ =
             *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12;
        local_c0.hiddenValueOldByte4.fields =
             (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4.fields;
        local_c0.fakeValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue;
        local_c0.currentCryptoKey =
             (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey;
        local_c0.hiddenValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue;
        fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_c0,
                            (MethodInfo *)0x0);
        if (-1.0 < fVar11) {
          local_e0.fakeValueActive =
               (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive;
          local_e0.inited = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited;
          local_e0._18_2_ =
               *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12;
          local_e0.hiddenValueOldByte4.fields =
               (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4.fields;
          local_e0.fakeValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue;
          local_e0.currentCryptoKey =
               (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey;
          local_e0.hiddenValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue;
          fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_e0,
                              (MethodInfo *)0x0);
          if (fVar11 < fVar12) {
            return false;
          }
        }
        return true;
      }
    }
  }
  return false;
}

