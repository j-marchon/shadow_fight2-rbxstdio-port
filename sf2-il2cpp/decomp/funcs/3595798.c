// DebugSimpleScroll$$DHLFPKECJCF @ RVA 0x3595798

void DebugSimpleScroll__DHLFPKECJCF(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Action_DebugSimpleScroll_ScrollItem__o **ppSVar4;
  Il2CppObject *pIVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *pSVar6;
  System_Action_DebugSimpleScroll_ScrollItem__o *action;
  
  if ((DAT_04568d9c & 1) == 0) {
    FUN_01bab630(&System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Item__);
    FUN_01bab630(&Method_DebugSimpleScroll_<>c_HLHKOPBGNBE__);
    FUN_01bab630(&DebugSimpleScroll_<>c_TypeInfo);
    DAT_04568d9c = 1;
    method = extraout_x1;
  }
  pSVar6 = (__this->fields).ScrollItems;
  iVar1 = (__this->fields).ALCCHKDCBEN + 1;
  (__this->fields).ALCCHKDCBEN = iVar1;
  if (pSVar6 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) {
    iVar2 = (pSVar6->fields)._size;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    (__this->fields).ALCCHKDCBEN = iVar1 - iVar3 * iVar2;
    if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
      method = extraout_x1_00;
    }
    action = DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__34_0;
    if (action == (System_Action_DebugSimpleScroll_ScrollItem__o *)0x0) {
      if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
      }
      action = (System_Action_DebugSimpleScroll_ScrollItem__o *)
               thunk_FUN_01bda818(System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar4 = &DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__34_0;
      *ppSVar4 = action;
      thunk_FUN_01c20e04(ppSVar4,action);
    }
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar6,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    pSVar6 = (__this->fields).ScrollItems;
    if (((pSVar6 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) &&
        (pIVar5 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar6,
                             (__this->fields).ALCCHKDCBEN,
                             Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Item__
                            ), pIVar5 != (Il2CppObject *)0x0)) &&
       (pIVar5[1].klass != (Il2CppClass *)0x0)) {
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)pIVar5[1].klass,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

