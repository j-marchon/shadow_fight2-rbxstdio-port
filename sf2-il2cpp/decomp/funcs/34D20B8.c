// BBBBKBBFNOG$$MFABNNHHJMB @ RVA 0x34D20B8

int64_t BBBBKBBFNOG__MFABNNHHJMB(MethodInfo *method)

{
  System_String_array *values;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  int64_t iVar4;
  BBBBKBBFNOG_c *method_00;
  BBBBKBBFNOG_StaticFields *pBVar5;
  System_Action_long__o *pSVar6;
  float __this;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  int64_t local_60;
  int64_t iStack_58;
  int64_t iStack_50;
  undefined8 uStack_48;
  
  if ((DAT_045686be & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6658);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6659);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6660);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6661);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6662);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6663);
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_045686be = 1;
  }
  iStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  iStack_50 = 0;
  local_80.fields.hiddenValue = 0;
  local_80.fields.currentCryptoKey = 0;
  local_80.fields.fakeValueActive = false;
  local_80.fields.inited = false;
  local_80.fields._26_6_ = 0;
  local_80.fields.fakeValue = 0;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6658,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6659,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar3;
      thunk_FUN_01c20e04();
      if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pBVar5 = BBBBKBBFNOG_TypeInfo->static_fields;
      local_80.fields.fakeValueActive = (pBVar5->HEINPMAGCOD).fields.fakeValueActive;
      local_80.fields.inited = (pBVar5->HEINPMAGCOD).fields.inited;
      local_80.fields._26_6_ = *(undefined6 *)&(pBVar5->HEINPMAGCOD).fields.field_0x1a;
      local_80.fields.fakeValue = (pBVar5->HEINPMAGCOD).fields.fakeValue;
      local_80.fields.hiddenValue = (pBVar5->HEINPMAGCOD).fields.hiddenValue;
      local_80.fields.currentCryptoKey = (pBVar5->HEINPMAGCOD).fields.currentCryptoKey;
      pSVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString(&local_80,(MethodInfo *)0x0)
      ;
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar3;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6660,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6661,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar3;
          __this = (float)thunk_FUN_01c20e04(values->m_Items + 2,pSVar3);
          pSVar3 = System_Single__ToString
                             (__this,(MethodInfo *)&BBBBKBBFNOG_TypeInfo->static_fields->AHCKJLKAKMN
                             );
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar3;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
            pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar1,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6662,
                       (MethodInfo *)0x0);
            pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar2,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6663,
                       (MethodInfo *)0x0);
            pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar3;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar3);
              pSVar3 = System_Int64__ToString
                                 ((int64_t)&BBBBKBBFNOG_TypeInfo->static_fields->CLGHDPOCECK,
                                  (MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar3;
                thunk_FUN_01c20e04();
                pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
                pBVar5 = BBBBKBBFNOG_TypeInfo->static_fields;
                uStack_48._0_1_ = (pBVar5->HEINPMAGCOD).fields.fakeValueActive;
                uStack_48._1_1_ = (pBVar5->HEINPMAGCOD).fields.inited;
                uStack_48._2_6_ = *(undefined6 *)&(pBVar5->HEINPMAGCOD).fields.field_0x1a;
                iStack_50 = (pBVar5->HEINPMAGCOD).fields.fakeValue;
                iStack_58 = (pBVar5->HEINPMAGCOD).fields.hiddenValue;
                local_60 = (pBVar5->HEINPMAGCOD).fields.currentCryptoKey;
                pSVar6 = pBVar5->GIBFOOLLACF;
                if (pSVar6 != (System_Action_long__o *)0x0) {
                  local_a0.fields.currentCryptoKey = local_60;
                  local_a0.fields.hiddenValue = iStack_58;
                  local_a0.fields.fakeValue = iStack_50;
                  local_a0.fields._24_8_ = uStack_48;
                  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                    (&local_a0,(MethodInfo *)0x0);
                  (*(code *)(pSVar6->fields).super.super.invoke_impl)
                            ((pSVar6->fields).super.super.method_code,iVar4,
                             (pSVar6->fields).super.super.method);
                }
                method_00 = BBBBKBBFNOG_TypeInfo;
                if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
                  method_00 = (BBBBKBBFNOG_c *)thunk_FUN_01ba7564();
                }
                BBBBKBBFNOG__NDNPGAKJLHM((MethodInfo *)method_00);
                local_c0.fields.hiddenValue = iStack_58;
                local_c0.fields.currentCryptoKey = local_60;
                local_c0.fields.fakeValueActive = uStack_48._0_1_;
                local_c0.fields.inited = uStack_48._1_1_;
                local_c0.fields._26_6_ = uStack_48._2_6_;
                local_c0.fields.fakeValue = iStack_50;
                iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                  (&local_c0,(MethodInfo *)0x0);
                return iVar4;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

