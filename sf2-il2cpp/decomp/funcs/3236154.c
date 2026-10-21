// PHGPILAOJBI$$DLDNALOFJCL @ RVA 0x3236154

/* WARNING: Type propagation algorithm not settling */

FEFHGAHGKBK_o *
PHGPILAOJBI__DLDNALOFJCL
          (PHGPILAOJBI_o *__this,System_String_o *ACLPFOHLGMN,PHGPILAOJBI_OPNKFPDJLEN_o *param_3,
          MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  DBIINAFCKME_o *pDVar2;
  FEFHGAHGKBK_o *pFVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  MethodInfo_2334730 *pMVar8;
  MethodInfo *in_x4;
  MJPLIICMMGK_o *pMVar9;
  System_Text_StringBuilder_o *__this_01;
  long lVar10;
  undefined8 local_50;
  int64_t iStack_48;
  long local_40;
  int32_t local_34;
  PABDDHCGGID_o *local_28;
  
  if ((DAT_04567026 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_25);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3871);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3872);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3873);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_PABDDHCGGID>_TryGetValue__);
    FUN_01bab630(&IKDJCPOJFNM_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    FUN_01bab630(&System_Nullable<long>_TypeInfo);
    DAT_04567026 = 1;
  }
  local_28 = (PABDDHCGGID_o *)0x0;
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(ACLPFOHLGMN,(MethodInfo *)0x0);
  if (bVar1) {
    return (FEFHGAHGKBK_o *)0x0;
  }
  pMVar9 = (__this->fields)._HINONJDDINO_k__BackingField;
  if ((pMVar9 != (MJPLIICMMGK_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pMVar9->fields)._DFEMDKPPNBB_k__BackingField,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pMVar8 = Method_System_Collections_Generic_Dictionary<string,_PABDDHCGGID>_TryGetValue__;
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)ACLPFOHLGMN,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_PABDDHCGGID>_TryGetValue__
                      );
    if (local_28 == (PABDDHCGGID_o *)0x0) {
      return (FEFHGAHGKBK_o *)0x0;
    }
    if (!bVar1) {
      return (FEFHGAHGKBK_o *)0x0;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar2 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
    if ((pDVar2 != (DBIINAFCKME_o *)0x0) && (local_28 != (PABDDHCGGID_o *)0x0)) {
      if (((local_28->fields)._FHEOHJBNKPO_k__BackingField.fields.hasValue == false) ||
         ((lVar10 = (pDVar2->fields).ELFHKFNFIPL, 0 < lVar10 &&
          (lVar10 <= (local_28->fields)._FHEOHJBNKPO_k__BackingField.fields.value)))) {
        pFVar3 = PHGPILAOJBI__BKDHIJHDDJC
                           (__this,local_28,ACLPFOHLGMN,(PHGPILAOJBI_OPNKFPDJLEN_o *)pMVar8,in_x4);
        if (pFVar3 != (FEFHGAHGKBK_o *)0x0) {
          return pFVar3;
        }
        __this_01 = (param_3->fields).sb;
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3872,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3873,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        if (local_28 == (PABDDHCGGID_o *)0x0) goto LAB_03336480;
        local_50 = CONCAT44(local_50._4_4_,(local_28->fields)._KGGMDODBEMF_k__BackingField);
        pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(IKDJCPOJFNM_TypeInfo,&local_50);
        pSVar6 = System_String__Format(pSVar6,pIVar7,(MethodInfo *)0x0);
      }
      else {
        __this_01 = (param_3->fields).sb;
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3871,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_25,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        if (local_28 == (PABDDHCGGID_o *)0x0) goto LAB_03336480;
        local_34 = (local_28->fields)._KGGMDODBEMF_k__BackingField;
        pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(IKDJCPOJFNM_TypeInfo,&local_34);
        local_40 = lVar10;
        arg1 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_40);
        if (local_28 == (PABDDHCGGID_o *)0x0) goto LAB_03336480;
        local_50 = *(undefined8 *)&(local_28->fields)._FHEOHJBNKPO_k__BackingField.fields;
        iStack_48 = (local_28->fields)._FHEOHJBNKPO_k__BackingField.fields.value;
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(System_Nullable<long>_TypeInfo,&local_50);
        pSVar6 = System_String__Format(pSVar6,pIVar7,arg1,arg2,(MethodInfo *)0x0);
      }
      if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__AppendLine(__this_01,pSVar6,(MethodInfo *)0x0);
        return (FEFHGAHGKBK_o *)0x0;
      }
    }
  }
LAB_03336480:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

