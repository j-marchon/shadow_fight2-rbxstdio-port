// EEMAEBIOIKM$$.cctor @ RVA 0x347FD70

void EEMAEBIOIKM___cctor(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
                    /* catch() { ... } // from try @ 0357fd38 with catch @ 0357fd74
                       catch() { ... } // from try @ 0357fd6c with catch @ 0357fd74 */
  if ((DAT_04568374 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TypeInfo
                );
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
    DAT_04568374 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,
             Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>__ctor__
            );
  EEMAEBIOIKM_TypeInfo->static_fields->JMCDIEANFCM =
       (System_Collections_Generic_Dictionary_string__List_KeyValuePair_string__Sprite____o *)__this
  ;
  thunk_FUN_01c20e04(EEMAEBIOIKM_TypeInfo->static_fields,__this);
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  EEMAEBIOIKM_TypeInfo->static_fields->HEKGKIBPBPI = (bool_conflict)(~bVar1 & 1);
  return;
}

