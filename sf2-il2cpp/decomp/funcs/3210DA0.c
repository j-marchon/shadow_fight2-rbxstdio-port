// NGCBNMBJMOE$$FNHMJPBMICG @ RVA 0x3210DA0

UnityEngine_Sprite_array * NGCBNMBJMOE__FNHMJPBMICG(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_Sprite_array *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar4;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  UnityEngine_Sprite_array *local_28;
  
  if ((DAT_04566e8b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_TryGetValue__);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
    DAT_04566e8b = 1;
    method = extraout_x1;
  }
  local_28 = (UnityEngine_Sprite_array *)0x0;
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (NGCBNMBJMOE_TypeInfo->static_fields->HEKGKIBPBPI == false) {
    pUVar3 = (UnityEngine_Sprite_array *)
             UnityEngine_ResourcesAndBundles__LoadAll<object>
                       (AAIHDEKMIJG,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
    pMVar4 = extraout_x1_03;
    if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
      pMVar4 = extraout_x1_04;
    }
    local_28 = NGCBNMBJMOE__NOKPFOHGGEB(pUVar3,pMVar4);
  }
  else {
    if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo,method);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             NGCBNMBJMOE_TypeInfo->static_fields->IABCHDDPNMF;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03310f18:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)AAIHDEKMIJG,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_TryGetValue__)
    ;
    if (!bVar1) {
      pUVar3 = (UnityEngine_Sprite_array *)
               UnityEngine_ResourcesAndBundles__LoadAll<object>
                         (AAIHDEKMIJG,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
      pMVar4 = extraout_x1_01;
      if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
        pMVar4 = extraout_x1_02;
      }
      local_28 = NGCBNMBJMOE__NOKPFOHGGEB(pUVar3,pMVar4);
      if (local_28 != (UnityEngine_Sprite_array *)0x0) {
        if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 NGCBNMBJMOE_TypeInfo->static_fields->IABCHDDPNMF;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03310f18;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)AAIHDEKMIJG,&local_28->obj,
                   Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Add__);
      }
    }
  }
  return local_28;
}

