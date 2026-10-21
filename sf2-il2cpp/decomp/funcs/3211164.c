// NGCBNMBJMOE$$CBLIMOEFGGL @ RVA 0x3211164

UnityEngine_Sprite_o * NGCBNMBJMOE__CBLIMOEFGGL(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  NGCBNMBJMOE_StaticFields *pNVar2;
  UnityEngine_Object_o *local_28;
  
  if ((DAT_04566e8e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite>_TryGetValue__);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
    DAT_04566e8e = 1;
    method = extraout_x1;
  }
  local_28 = (UnityEngine_Object_o *)0x0;
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  pNVar2 = NGCBNMBJMOE_TypeInfo->static_fields;
  if (pNVar2->HEKGKIBPBPI == false) {
    local_28 = (UnityEngine_Object_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (AAIHDEKMIJG,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
  }
  else {
    if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo,method);
      pNVar2 = NGCBNMBJMOE_TypeInfo->static_fields;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pNVar2->DKNBHLFHKNH ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_033112d8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       pNVar2->DKNBHLFHKNH,(Il2CppObject *)AAIHDEKMIJG,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_Sprite>_TryGetValue__);
    if (!bVar1) {
      x = (UnityEngine_Object_o *)
          UnityEngine_ResourcesAndBundles__Load<object>
                    (AAIHDEKMIJG,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
      local_28 = x;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 NGCBNMBJMOE_TypeInfo->static_fields->DKNBHLFHKNH;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_033112d8;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this,(Il2CppObject *)AAIHDEKMIJG,(Il2CppObject *)local_28,
                   Method_System_Collections_Generic_Dictionary<string,_Sprite>_Add__);
      }
    }
  }
  return (UnityEngine_Sprite_o *)local_28;
}

