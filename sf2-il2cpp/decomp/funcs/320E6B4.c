// FPMAFHGLPOB$$CCHGPNLCKFI @ RVA 0x320E6B4

void FPMAFHGLPOB__CCHGPNLCKFI(SimpleJSON_JSONObject_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  ACHLOMELAJE_o *pAVar4;
  System_String_o *s;
  SimpleJSON_JSONNode_o *pSVar5;
  int64_t iVar6;
  int64_t iVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_48;
  
  if ((DAT_04566e81 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3463);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3464);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3465);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3466);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3467);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3468);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e81 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3463,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3464,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
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
    local_48 = ACHLOMELAJE__IMLCNMCBEEN(pAVar4,(MethodInfo *)0x0);
    s = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar5 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar3,pSVar5,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3465,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3466,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
        local_70.fields.hiddenValue = (pAVar4->fields).MBINFANFLMC.fields.hiddenValue;
        local_70.fields.currentCryptoKey = (pAVar4->fields).MBINFANFLMC.fields.currentCryptoKey;
        local_70.fields.fakeValueActive = (pAVar4->fields).MBINFANFLMC.fields.fakeValueActive;
        local_70.fields.inited = (pAVar4->fields).MBINFANFLMC.fields.inited;
        local_70.fields._26_6_ = *(undefined6 *)&(pAVar4->fields).MBINFANFLMC.fields.field_0x1a;
        local_70.fields.fakeValue = (pAVar4->fields).MBINFANFLMC.fields.fakeValue;
        iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_70,(MethodInfo *)0x0);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(iVar6,(MethodInfo *)0x0);
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,pSVar3,pSVar5,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3467,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3468,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
          iVar6 = ACHLOMELAJE__HEHFNBKGJLP(pAVar4,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
            local_90.fields.hiddenValue = (pAVar4->fields).MBINFANFLMC.fields.hiddenValue;
            local_90.fields.currentCryptoKey = (pAVar4->fields).MBINFANFLMC.fields.currentCryptoKey;
            local_90.fields.fakeValueActive = (pAVar4->fields).MBINFANFLMC.fields.fakeValueActive;
            local_90.fields.inited = (pAVar4->fields).MBINFANFLMC.fields.inited;
            local_90.fields._26_6_ = *(undefined6 *)&(pAVar4->fields).MBINFANFLMC.fields.field_0x1a;
            local_90.fields.fakeValue = (pAVar4->fields).MBINFANFLMC.fields.fakeValue;
            iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                              (&local_90,(MethodInfo *)0x0);
            pSVar5 = SimpleJSON_JSONNode__op_Implicit(iVar6 - iVar7,(MethodInfo *)0x0);
            (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                      (JHMENEKPIBO,pSVar3,pSVar5,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

