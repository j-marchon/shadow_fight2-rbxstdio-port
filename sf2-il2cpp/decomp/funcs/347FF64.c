// EEMAEBIOIKM$$NDNPGAKJLHM @ RVA 0x347FF64

void EEMAEBIOIKM__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_04568376 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_Clear__
                );
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
    DAT_04568376 = 1;
  }
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           EEMAEBIOIKM_TypeInfo->static_fields->JMCDIEANFCM;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this,
               Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_Clear__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

