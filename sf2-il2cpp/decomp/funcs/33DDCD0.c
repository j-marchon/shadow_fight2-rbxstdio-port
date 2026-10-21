// BHOHBAAKHOJ$$EHGBFKKDEIE @ RVA 0x33DDCD0

System_String_o * BHOHBAAKHOJ__EHGBFKKDEIE(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  System_RuntimeFieldHandle_o fldHandle;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567e80 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4932);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4933);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4934);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4935);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04567e80 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar2 == (JMDPBFOCHHP_o *)0x0) ||
     (pJVar4 = (pJVar2->fields).OFMMMBIIDAE, pJVar4 == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4932,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    fldHandle.fields.value =
         (System_RuntimeFieldHandle_Fields)
         (System_RuntimeFieldHandle_Fields)
         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4933.value;
  }
  else {
    __this_00 = (pJVar4->fields).NPGALOBDIHL;
    if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                             ), bVar1) {
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined1 *)((long)&local_38.fields._current[4].monitor + 1) = 0;
      local_38.fields._current[0xc].klass = (Il2CppClass *)string_TypeInfo->static_fields->Empty;
      thunk_FUN_01c20e04();
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__)
    ;
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4934,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    fldHandle.fields.value =
         (System_RuntimeFieldHandle_Fields)
         (System_RuntimeFieldHandle_Fields)
         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4935.value;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,fldHandle,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar3;
}

