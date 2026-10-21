// NAEFACJHPAL$$FFDEIMBGICG @ RVA 0x30A6880

UnityEngine_Font_o * NAEFACJHPAL__FFDEIMBGICG(System_String_o *BJNENMJKEKF,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_Font_o *exists;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  UnityEngine_Font_o *local_28;
  
  if ((DAT_04566171 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Font>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Font>_TryGetValue__);
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Font>__);
    DAT_04566171 = 1;
    method = extraout_x1;
  }
  local_28 = (UnityEngine_Font_o *)0x0;
  if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (NAEFACJHPAL_TypeInfo->static_fields->HEKGKIBPBPI == false) {
    local_28 = (UnityEngine_Font_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (BJNENMJKEKF,Method_UnityEngine_ResourcesAndBundles_Load<Font>__);
  }
  else {
    if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo,method);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             NAEFACJHPAL_TypeInfo->static_fields->AFFKEJIKNPN;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_031a69f0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)BJNENMJKEKF,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_Font>_TryGetValue__);
    if (!bVar1) {
      exists = (UnityEngine_Font_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (BJNENMJKEKF,Method_UnityEngine_ResourcesAndBundles_Load<Font>__);
      local_28 = exists;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
      if (bVar1) {
        if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 NAEFACJHPAL_TypeInfo->static_fields->AFFKEJIKNPN;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_031a69f0;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)BJNENMJKEKF,(Il2CppObject *)local_28,
                   Method_System_Collections_Generic_Dictionary<string,_Font>_Add__);
      }
    }
  }
  return local_28;
}

