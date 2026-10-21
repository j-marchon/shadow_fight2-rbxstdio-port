// NAEFACJHPAL$$CGOFELFENKA @ RVA 0x30A6A98

TMPro_TMP_FontAsset_o * NAEFACJHPAL__CGOFELFENKA(System_String_o *BJNENMJKEKF,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_FontAsset_o *exists;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  NAEFACJHPAL_StaticFields *pNVar2;
  TMPro_TMP_FontAsset_o *local_28;
  
  if ((DAT_04566173 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_TryGetValue__)
    ;
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<TMP_FontAsset>__);
    DAT_04566173 = 1;
    method = extraout_x1;
  }
  local_28 = (TMPro_TMP_FontAsset_o *)0x0;
  if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo,method);
    method = extraout_x1_00;
  }
  pNVar2 = NAEFACJHPAL_TypeInfo->static_fields;
  if (pNVar2->HEKGKIBPBPI == false) {
    local_28 = (TMPro_TMP_FontAsset_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (BJNENMJKEKF,Method_UnityEngine_ResourcesAndBundles_Load<TMP_FontAsset>__);
  }
  else {
    if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo,method);
      pNVar2 = NAEFACJHPAL_TypeInfo->static_fields;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pNVar2->NAODGIJCPFA ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_031a6c08:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       pNVar2->NAODGIJCPFA,(Il2CppObject *)BJNENMJKEKF,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_TryGetValue__
                      );
    if (!bVar1) {
      exists = (TMPro_TMP_FontAsset_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (BJNENMJKEKF,Method_UnityEngine_ResourcesAndBundles_Load<TMP_FontAsset>__);
      local_28 = exists;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
      if (bVar1) {
        if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 NAEFACJHPAL_TypeInfo->static_fields->NAODGIJCPFA;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_031a6c08;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this,(Il2CppObject *)BJNENMJKEKF,(Il2CppObject *)local_28,
                   Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_Add__);
      }
    }
  }
  return local_28;
}

