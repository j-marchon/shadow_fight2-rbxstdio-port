// JMDPBFOCHHP.GIIEJKGFDPL$$.cctor @ RVA 0x2FFB920

void JMDPBFOCHHP_GIIEJKGFDPL___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_04565add & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo);
    DAT_04565add = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo->static_fields->FFPKMDKAGCE =
       (System_Collections_Generic_IReadOnlyDictionary_string__string__o *)__this;
  thunk_FUN_01c20e04(JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo->static_fields,__this);
  return;
}

