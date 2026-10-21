// OOMEDFCGKJB$$CILBNJBGPHI @ RVA 0x32D2C60

void OOMEDFCGKJB__CILBNJBGPHI(OOMEDFCGKJB_o *__this,JBGPNJEDALF_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Collections_Generic_List_BCGLDKLKKDA__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  System_Collections_Generic_List_T__o *collection;
  MethodInfo *method_00;
  
  if ((DAT_04567563 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DOCLKKFHECI<BCGLDKLKKDA>_DOOBINMKNBI__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Count__);
    DAT_04567563 = 1;
  }
  if (CJNHFNHJHPE != (JBGPNJEDALF_o *)0x0) {
    collection = (CJNHFNHJHPE->fields).super._ADKGNPMECHK_k__BackingField;
    if ((collection == (System_Collections_Generic_List_T__o *)0x0) ||
       ((collection->fields)._size < 1)) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5,(MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6,(MethodInfo *)0x0);
      message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (__this->fields).DKPBPBKGKCK;
    if (__this_00 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<BCGLDKLKKDA>_AddRange__);
      OOMEDFCGKJB__JMIAPNDCAIB(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

