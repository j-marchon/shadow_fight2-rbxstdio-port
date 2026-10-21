// LDHBHPILNMA$$RandomizeObscuredVars @ RVA 0x31A2314

void LDHBHPILNMA__RandomizeObscuredVars(MethodInfo *method)

{
  System_Action_ECENNHNBAME__o **ppSVar1;
  System_Action_ABNLGBHKOCE__o **ppSVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_00;
  System_Action_ECENNHNBAME__o *action;
  System_Action_ABNLGBHKOCE__o *action_00;
  
  if ((DAT_04566ae9 & 1) == 0) {
    FUN_01bab630(&System_Action<ABNLGBHKOCE>_TypeInfo);
    FUN_01bab630(&System_Action<ECENNHNBAME>_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_ForEach__);
    FUN_01bab630(&Method_LDHBHPILNMA_<>c_CEOPGMFFAAE__);
    FUN_01bab630(&Method_LDHBHPILNMA_<>c_MILKNFHIGIM__);
    FUN_01bab630(&LDHBHPILNMA_<>c_TypeInfo);
    DAT_04566ae9 = 1;
  }
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo);
  }
  __this = LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB;
  if ((LDHBHPILNMA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = LDHBHPILNMA_<>c_TypeInfo->static_fields->__9__24_0;
  if (action == (System_Action_ECENNHNBAME__o *)0x0) {
    if ((LDHBHPILNMA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_ECENNHNBAME__o *)thunk_FUN_01bda818(System_Action<ECENNHNBAME>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &LDHBHPILNMA_<>c_TypeInfo->static_fields->__9__24_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<ECENNHNBAME>_ForEach__);
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo);
    }
    __this_00 = LDHBHPILNMA_TypeInfo->static_fields->MHKDMKDBMBE;
    if ((LDHBHPILNMA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_00 = LDHBHPILNMA_<>c_TypeInfo->static_fields->__9__24_1;
    if (action_00 == (System_Action_ABNLGBHKOCE__o *)0x0) {
      if ((LDHBHPILNMA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_00 = (System_Action_ABNLGBHKOCE__o *)
                  thunk_FUN_01bda818(System_Action<ABNLGBHKOCE>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &LDHBHPILNMA_<>c_TypeInfo->static_fields->__9__24_1;
      *ppSVar2 = action_00;
      thunk_FUN_01c20e04(ppSVar2,action_00);
    }
    if (__this_00 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Action_T__o *)action_00,
                 Method_System_Collections_Generic_List<ABNLGBHKOCE>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

