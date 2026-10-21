// DEKKGJNMFEB$$IKBILKIMBCB @ RVA 0x322E7F8

bool DEKKGJNMFEB__IKBILKIMBCB
               (DEKKGJNMFEB_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,GGLKHCAIGDI_o *NDLOGJOGFCA,
               int32_t DPCEFBCDHPA,int32_t DLNKPJMDPJI,MethodInfo *method)

{
  System_Collections_Generic_List_PKKLIJLIKGF__o *AEFIPJLKAFI;
  System_Collections_Generic_List_object__o *__this_00;
  ACHLOMELAJE_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Action_IGFGDDANEPE__o *pSVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar2;
  
  if ((DAT_04566fc3 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_18029);
    FUN_01bab630(&StringLiteral_20464);
    FUN_01bab630(&StringLiteral_21887);
    FUN_01bab630(&StringLiteral_18028);
    DAT_04566fc3 = 1;
  }
  if ((NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) || (NDLOGJOGFCA == (GGLKHCAIGDI_o *)0x0)) {
    return false;
  }
  AEFIPJLKAFI = GGLKHCAIGDI__KALLJLOAGJN(NDLOGJOGFCA,NKCMBEFHFII,DPCEFBCDHPA,(MethodInfo *)0x0);
  if (AEFIPJLKAFI != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
    if ((AEFIPJLKAFI->fields)._size == 0) {
      return false;
    }
    pSVar2 = (NKCMBEFHFII->fields).PAPANCDPPIF;
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar2,
               Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    IGFGDDANEPE__JJPJJDHOFLE(NKCMBEFHFII,AEFIPJLKAFI,DPCEFBCDHPA,DLNKPJMDPJI,(MethodInfo *)0x0);
    pSVar2 = (NKCMBEFHFII->fields).PAPANCDPPIF;
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
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,false,(MethodInfo *)0x0);
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                  thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
      MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_02,(MethodInfo *)0x0);
      if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_02,StringLiteral_21887,(Il2CppObject *)NKCMBEFHFII,
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_02,StringLiteral_20464,(Il2CppObject *)NDLOGJOGFCA,
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_02,StringLiteral_18029,(Il2CppObject *)__this_00,
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_02,StringLiteral_18028,(Il2CppObject *)pSVar2,
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        NFNBHPOJFNJ__NOJIAJPLOKB(0xd,(MDNLIFLBFNO_o *)__this_02,false,(MethodInfo *)0x0);
        if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar1 = DEKKGJNMFEB_TypeInfo->static_fields->BNKPDJFNJKP;
        if (pSVar1 != (System_Action_IGFGDDANEPE__o *)0x0) {
          (*(code *)(pSVar1->fields).super.super.invoke_impl)
                    ((pSVar1->fields).super.super.method_code,NKCMBEFHFII,
                     (pSVar1->fields).super.super.method);
          return true;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

