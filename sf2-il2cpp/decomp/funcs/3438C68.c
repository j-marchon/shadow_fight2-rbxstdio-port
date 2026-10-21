// AMHFFFODDOC$$MMHFNAEHAKC @ RVA 0x3438C68

UnityEngine_Sprite_array * AMHFFFODDOC__MMHFNAEHAKC(System_String_o *PHLFGGGHGAK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  UnityEngine_Sprite_array *local_28;
  
  if ((DAT_045681db & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_TryGetValue__);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
    DAT_045681db = 1;
    method = extraout_x1;
  }
  local_28 = (UnityEngine_Sprite_array *)0x0;
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (AMHFFFODDOC_TypeInfo->static_fields->HEKGKIBPBPI == false) {
    local_28 = (UnityEngine_Sprite_array *)
               UnityEngine_ResourcesAndBundles__LoadAll<object>
                         (PHLFGGGHGAK,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
  }
  else {
                    /* try { // try from 03538cec to 03638cf3 has its CatchHandler @ 03538f8c */
    if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo,method);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03538da0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03538d14 to 03638d73 has its CatchHandler @ 03538f90 */
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)PHLFGGGHGAK,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_TryGetValue__)
    ;
    if ((!bVar1) &&
       (local_28 = (UnityEngine_Sprite_array *)
                   UnityEngine_ResourcesAndBundles__LoadAll<object>
                             (PHLFGGGHGAK,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__),
       local_28 != (UnityEngine_Sprite_array *)0x0)) {
      if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03538da0;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar2,(Il2CppObject *)PHLFGGGHGAK,&local_28->obj,
                 Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Add__);
    }
  }
  return local_28;
}

