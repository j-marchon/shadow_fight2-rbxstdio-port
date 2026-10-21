// EEMAEBIOIKM$$GKMHEGHFEDN @ RVA 0x347FE28

UnityEngine_Sprite_o *
EEMAEBIOIKM__GKMHEGHFEDN
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  int index;
  System_Collections_Generic_KeyValuePair_object__object__o SVar2;
  System_Collections_Generic_List_T__o *local_28;
  
  if ((DAT_04568375 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TryGetValue__
                );
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Sprite>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Sprite>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_get_Item__);
    DAT_04568375 = 1;
  }
  local_28 = (System_Collections_Generic_List_T__o *)0x0;
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (EEMAEBIOIKM_TypeInfo->static_fields->HEKGKIBPBPI == false) {
    return (UnityEngine_Sprite_o *)0x0;
  }
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           EEMAEBIOIKM_TypeInfo->static_fields->JMCDIEANFCM;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this,(Il2CppObject *)OOKEKJMFKPE,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TryGetValue__
                      );
    if (!bVar1) {
      return (UnityEngine_Sprite_o *)0x0;
    }
    if (local_28 != (System_Collections_Generic_List_T__o *)0x0) {
      index = 0;
      do {
        if ((local_28->fields)._size <= index) {
          return (UnityEngine_Sprite_o *)0x0;
        }
        SVar2 = System_Collections_Generic_List<KeyValuePair<object,_object>>__get_Item
                          (local_28,index,
                           Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_get_Item__
                          );
        bVar1 = System_String__op_Equality
                          ((System_String_o *)SVar2.fields.key,HCAAAAMDCNO,(MethodInfo *)0x0);
        if (bVar1) {
          return (UnityEngine_Sprite_o *)SVar2.fields.value;
        }
        index = index + 1;
      } while (local_28 != (System_Collections_Generic_List_T__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

