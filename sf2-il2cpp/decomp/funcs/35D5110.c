// GGLDGAAPKCF$$LFNNJOLBMHN @ RVA 0x35D5110

void GGLDGAAPKCF__LFNNJOLBMHN
               (GGLDGAAPKCF_o *__this,System_Collections_Generic_List_JSONNode__o *NHIEAGIJAOF,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  SimpleJSON_JSONNode_o *pSVar7;
  GGLDGAAPKCF_c *method_00;
  System_String_o *b;
  KKLJIDJBFEI_o *pKVar8;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  int IDPMJOKDHNP;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568ff2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_822);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_823);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_824);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_825);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JSONNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JSONNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JSONNode>_get_Current__);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    __this = (GGLDGAAPKCF_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<JSONNode>_GetEnumerator__);
    DAT_04568ff2 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (NHIEAGIJAOF != (System_Collections_Generic_List_JSONNode__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)NHIEAGIJAOF,
               Method_System_Collections_Generic_List<JSONNode>_GetEnumerator__);
    IDPMJOKDHNP = 0;
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<JSONNode>_MoveNext__
                             ), pIVar1 = local_80.fields._current, bVar2) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_822,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_823,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(pSVar6,pSVar6);
      }
      pSVar7 = (SimpleJSON_JSONNode_o *)
               (*pIVar1->klass->vtable[7].methodPtr)(pIVar1,pSVar6,pIVar1->klass->vtable[7].method);
      pSVar6 = OGMFFOMHGIA__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        method_00 = GGLDGAAPKCF_TypeInfo;
        if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
        }
        b = GGLDGAAPKCF__NGBJPMHMIIJ((MethodInfo *)method_00);
        bVar2 = System_String__op_Equality(pSVar6,b,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_824,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_825,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar7 = (SimpleJSON_JSONNode_o *)
                   (*pIVar1->klass->vtable[7].methodPtr)
                             (pIVar1,pSVar6,pIVar1->klass->vtable[7].method);
          iVar3 = OGMFFOMHGIA__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
          IDPMJOKDHNP = iVar3 + IDPMJOKDHNP;
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<JSONNode>_Dispose__);
    if (0 < IDPMJOKDHNP) {
      pKVar8 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      __this = (GGLDGAAPKCF_o *)0x0;
      if (pKVar8 == (KKLJIDJBFEI_o *)0x0) goto LAB_036d53cc;
      method_01 = extraout_x1;
      if ((pKVar8->fields).super._MGGBEPKMPCF_k__BackingField != false) {
        pKVar8 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        __this = (GGLDGAAPKCF_o *)0x0;
        if (pKVar8 == (KKLJIDJBFEI_o *)0x0) goto LAB_036d53cc;
        KKLJIDJBFEI__LIKCPEBFCEC(pKVar8,(MethodInfo *)0x0);
        method_01 = extraout_x1_00;
      }
      if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_01 = extraout_x1_01;
      }
      GGLDGAAPKCF__OJPAHKOPAAI(IDPMJOKDHNP,method_01);
    }
    return;
  }
LAB_036d53cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

