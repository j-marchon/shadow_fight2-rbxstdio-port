// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C03F0

System_String_o *
IKCANHIFLGJ__KKGBFEKOKBE
          (IKCANHIFLGJ_o *__this,System_String_o *KGLJICLJHEL,int64_t FKIGDGJPIAC,MethodInfo *method
          )

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__string__o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *str1;
  
  if ((DAT_04568f16 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_26);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3901);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3902);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3903);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>_get_Item__);
    FUN_01bab630(&IONAICHLBOO_TypeInfo);
    DAT_04568f16 = 1;
  }
  if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = IONAICHLBOO__FLLFECJDJHD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return KGLJICLJHEL;
  }
  pSVar2 = (__this->fields).AIOEOHCLJIL;
  if (pSVar2 != (System_Collections_Generic_Dictionary_long__string__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,FKIGDGJPIAC,
                       Method_System_Collections_Generic_Dictionary<long,_string>_ContainsKey__);
    if (bVar1) {
      pSVar2 = (__this->fields).AIOEOHCLJIL;
      if (pSVar2 != (System_Collections_Generic_Dictionary_long__string__o *)0x0) {
        pSVar3 = (System_String_o *)
                 System_Collections_Generic_Dictionary<long,_object>__get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                            FKIGDGJPIAC,
                            Method_System_Collections_Generic_Dictionary<long,_string>_get_Item__);
        return pSVar3;
      }
    }
    else {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3901,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3902,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      str1 = System_Int64__ToString((int64_t)&(__this->fields).KOKABJPFGCA,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).AIOEOHCLJIL;
      (__this->fields).KOKABJPFGCA = (__this->fields).KOKABJPFGCA + 1;
      if (pSVar2 != (System_Collections_Generic_Dictionary_long__string__o *)0x0) {
        System_Collections_Generic_Dictionary<long,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,FKIGDGJPIAC,
                   (Il2CppObject *)pSVar3,
                   Method_System_Collections_Generic_Dictionary<long,_string>_Add__);
        return pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

