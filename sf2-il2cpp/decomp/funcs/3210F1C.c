// NGCBNMBJMOE$$NOKPFOHGGEB @ RVA 0x3210F1C

UnityEngine_Sprite_array *
NGCBNMBJMOE__NOKPFOHGGEB(UnityEngine_Sprite_array *OPHAPNEAKKH,MethodInfo *method)

{
  System_Func_Sprite__int__o **ppSVar1;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  UnityEngine_Sprite_array *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Func_Sprite__int__o *keySelector;
  
  if ((DAT_04566e8c & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<Sprite,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<Sprite>__);
    FUN_01bab630(&System_Func<Sprite,_int>_TypeInfo);
    FUN_01bab630(&Method_NGCBNMBJMOE_<>c_PDHFIPANFCA__);
    FUN_01bab630(&NGCBNMBJMOE_<>c_TypeInfo);
    DAT_04566e8c = 1;
    method = extraout_x1;
  }
  if (OPHAPNEAKKH != (UnityEngine_Sprite_array *)0x0) {
    if ((NGCBNMBJMOE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_<>c_TypeInfo,method);
      method = extraout_x1_00;
    }
    keySelector = NGCBNMBJMOE_<>c_TypeInfo->static_fields->__9__4_1;
    if (keySelector == (System_Func_Sprite__int__o *)0x0) {
      if ((NGCBNMBJMOE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NGCBNMBJMOE_<>c_TypeInfo,method);
      }
      keySelector = (System_Func_Sprite__int__o *)
                    thunk_FUN_01bda818(System_Func<Sprite,_int>_TypeInfo);
      System_Func<object,_int>___ctor();
      ppSVar1 = &NGCBNMBJMOE_<>c_TypeInfo->static_fields->__9__4_1;
      *ppSVar1 = keySelector;
      thunk_FUN_01c20e04(ppSVar1,keySelector);
    }
    source = System_Linq_Enumerable__OrderBy<object,_int>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)OPHAPNEAKKH,
                        (System_Func_TSource__TKey__o *)keySelector,
                        Method_System_Linq_Enumerable_OrderBy<Sprite,_int>__);
    pUVar2 = (UnityEngine_Sprite_array *)
             System_Linq_Enumerable__ToArray<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        Method_System_Linq_Enumerable_ToArray<Sprite>__);
    return pUVar2;
  }
  return (UnityEngine_Sprite_array *)0x0;
}

