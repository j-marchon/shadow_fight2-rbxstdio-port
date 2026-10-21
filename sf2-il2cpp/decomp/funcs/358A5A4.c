// OCHIFKHFMAC$$EBACKKEEGEN @ RVA 0x358A5A4

bool OCHIFKHFMAC__EBACKKEEGEN(OCHIFKHFMAC_o *__this,System_String_o *OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_Lazy_Dictionary_string__bool___o *__this_00;
  Il2CppObject *dictionary;
  
  if ((DAT_04568d33 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_bool>__
                );
    FUN_01bab630(&Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    DAT_04568d33 = 1;
  }
  __this_00 = (__this->fields).MDNPGDCCAEA;
  if (__this_00 != (System_Lazy_Dictionary_string__bool___o *)0x0) {
    dictionary = System_Lazy<object>__get_Value
                           ((System_Lazy_object__o *)__this_00,
                            Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    bVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object,_bool>
                      ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)dictionary,
                       (Il2CppObject *)OGPGLGPMEPD,true,
                       Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_bool>__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

