// PNHGEFAOFFE$$POGAGHOPPEI @ RVA 0x31817D8

void PNHGEFAOFFE__POGAGHOPPEI(PNHGEFAOFFE_o *__this,System_String_o *KKDELPFMDFM,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *key;
  
  if ((DAT_045669c0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3815);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3816);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    DAT_045669c0 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
  MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_00,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3815,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3816,(MethodInfo *)0x0);
  key = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,(Il2CppObject *)key,(Il2CppObject *)KKDELPFMDFM,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    NFNBHPOJFNJ__OKNENPNMIKP(0xf,(MDNLIFLBFNO_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

