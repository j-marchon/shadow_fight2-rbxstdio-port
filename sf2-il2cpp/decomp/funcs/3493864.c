// FLBBKMOHIOG$$LDEMFDHJOFH @ RVA 0x3493864

Sfs2X_Entities_Data_SFSObject_o *
FLBBKMOHIOG__LDEMFDHJOFH
          (FLBBKMOHIOG_o *__this,System_String_o *NNNFAACIHBK,System_String_o *ACLOBCBNDIJ,
          int32_t CEHOJOFLMFF,PGICCMFLDPI_o *LFJGFLNMBMC,SimpleJSON_JSONObject_o *NKLHCIIJBLL,
          MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  DBNIPENAEKO_o *__this_00;
  FLBBKMOHIOG_o *__this_01;
  AFLJMCMKCIG_o *pAVar4;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *pGVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *s;
  SimpleJSON_JSONNode_o *pSVar8;
  Sfs2X_Entities_Data_SFSObject_o *__this_02;
  MethodInfo *pMVar9;
  undefined1 auVar10 [16];
  Sfs2X_Entities_Data_SFSObject_o *local_48;
  
  pMVar9 = (MethodInfo *)(ulong)(uint)CEHOJOFLMFF;
  if ((DAT_04568440 & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_247);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_248);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_249);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_250);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_251);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_252);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Clear__);
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    DAT_04568440 = 1;
  }
  local_48 = (Sfs2X_Entities_Data_SFSObject_o *)0x0;
  pSVar3 = System_String__Concat(NNNFAACIHBK,ACLOBCBNDIJ,(MethodInfo *)0x0);
  pSVar3 = Sfs2X_Util_PasswordUtil__MD5Password(pSVar3,(MethodInfo *)0x0);
  __this_00 = (DBNIPENAEKO_o *)thunk_FUN_01bda818(DBNIPENAEKO_TypeInfo);
  DBNIPENAEKO___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (DBNIPENAEKO_o *)0x0) goto LAB_03593ce4;
  (__this_00->fields).LCAENFFHHEI = CEHOJOFLMFF;
  pAVar4 = FLBBKMOHIOG__DHKKOOOACPH(__this_01,ACLOBCBNDIJ,pSVar3,pMVar9);
  (__this_00->fields).HBCNHAMIMGF = pAVar4;
  auVar10 = thunk_FUN_01c20e04();
  iVar2 = FLBBKMOHIOG__BCGPEHGEBCM(auVar10._0_8_,auVar10._8_8_);
  pSVar3 = IMAPABEJECG__ADBBGOBBAJA((MethodInfo *)0x0);
  KJKALEDHEIK__GDDGDGNIKPK(pSVar3,LFJGFLNMBMC,(MethodInfo *)0x0);
  if ((iVar2 != 0) && (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar3,(MethodInfo *)0x0), !bVar1)) {
    pGVar5 = (__this_00->fields).BMMFCMJLFKN;
    if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0)
    goto LAB_03593ce4;
    Google_Protobuf_Collections_RepeatedField<object>__Clear
              ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,
               Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Clear__);
    pGVar5 = (__this_00->fields).BMMFCMJLFKN;
    pAVar4 = (AFLJMCMKCIG_o *)thunk_FUN_01bda818(AFLJMCMKCIG_TypeInfo);
    AFLJMCMKCIG___ctor(pAVar4,(MethodInfo *)0x0);
    if (pAVar4 == (AFLJMCMKCIG_o *)0x0) goto LAB_03593ce4;
    (pAVar4->fields).EMDNDLOODLG = iVar2;
    AFLJMCMKCIG__IIKPNGJAJIH(pAVar4,pSVar3,(MethodInfo *)0x0);
    if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0)
    goto LAB_03593ce4;
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,(Il2CppObject *)pAVar4,
               Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__);
  }
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality
                    ((SimpleJSON_JSONNode_o *)NKLHCIIJBLL,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_247,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pMVar9 = (MethodInfo *)0x0;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_248,(MethodInfo *)0x0);
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,pMVar9);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    NKLHCIIJBLL = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
    SimpleJSON_JSONObject___ctor(NKLHCIIJBLL,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_249,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pMVar9 = (MethodInfo *)0x0;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_250,(MethodInfo *)0x0);
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,pMVar9);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    s = EOAOCPLIKOI__GLFGHFIEIPL((MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar8 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    if (NKLHCIIJBLL == (SimpleJSON_JSONObject_o *)0x0) {
LAB_03593ce4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(NKLHCIIJBLL->klass->vtable)._8_set_Item.methodPtr)
              (NKLHCIIJBLL,pSVar3,pSVar8,(NKLHCIIJBLL->klass->vtable)._8_set_Item.method);
  }
  else if (NKLHCIIJBLL == (SimpleJSON_JSONObject_o *)0x0) goto LAB_03593ce4;
  pSVar3 = (System_String_o *)
           (*(NKLHCIIJBLL->klass->vtable)._3_ToString.methodPtr)
                     (NKLHCIIJBLL,(NKLHCIIJBLL->klass->vtable)._3_ToString.method);
  DBNIPENAEKO__JGAPLKDDCOI(__this_00,pSVar3,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_251,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pMVar9 = (MethodInfo *)0x0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_252,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,pMVar9);
  pMVar9 = (MethodInfo *)0x0;
  pSVar3 = System_String__Concat(pSVar3,(__this_00->fields).BHMHGIBMMMB,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  __this_02 = (Sfs2X_Entities_Data_SFSObject_o *)
              thunk_FUN_01bda818(Sfs2X_Entities_Data_SFSObject_TypeInfo);
  Sfs2X_Entities_Data_SFSObject___ctor(__this_02,(MethodInfo *)0x0);
  local_48 = __this_02;
  FLBBKMOHIOG__IPIICMBKHLK(&local_48,(Google_Protobuf_IMessage_o *)__this_00,pMVar9);
  return __this_02;
}

