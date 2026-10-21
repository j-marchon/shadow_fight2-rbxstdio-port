// JMDPBFOCHHP.GIIEJKGFDPL$$KNMENIBLFGF @ RVA 0x2FFBE34

System_Collections_Generic_IReadOnlyDictionary_string__string__o *
JMDPBFOCHHP_GIIEJKGFDPL__KNMENIBLFGF
          (JMDPBFOCHHP_GIIEJKGFDPL_o *__this,System_String_o *DDMGAEHAGMN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  void **ppvVar2;
  Il2CppObject *local_28;
  
  if ((DAT_04565ae2 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_TryGetValue__
                );
    FUN_01bab630(&JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo);
    DAT_04565ae2 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).APLBLNHJCMP;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)DDMGAEHAGMN,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_TryGetValue__
                      );
    if (bVar1) {
      if (local_28 == (Il2CppObject *)0x0) goto LAB_030fbee0;
      ppvVar2 = &local_28[1].monitor;
    }
    else {
      if ((JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppvVar2 = &JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo->static_fields->FFPKMDKAGCE;
    }
    return *ppvVar2;
  }
LAB_030fbee0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

