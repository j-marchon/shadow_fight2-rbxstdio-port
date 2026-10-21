// InControl.InputManager$$OnApplicationFocus @ RVA 0x32169F0

void InControl_InputManager__OnApplicationFocus(bool focusState,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  InControl_InputControl_o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_InputDevice__o *pSVar3;
  char *pcVar4;
  ulong uVar5;
  int index;
  Il2CppClass *pIVar6;
  ulong uVar7;
  
  if ((DAT_04566eca & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    DAT_04566eca = 1;
    method = extraout_x1;
  }
  if (!focusState) {
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    }
    pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
    if (pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) {
LAB_03316b34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
        if (((pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) ||
            (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 Method_System_Collections_Generic_List<InputDevice>_get_Item__),
            pIVar2 == (Il2CppObject *)0x0)) ||
           (pIVar6 = pIVar2[3].klass, pIVar6 == (Il2CppClass *)0x0)) goto LAB_03316b34;
        pcVar4 = (pIVar6->_1).namespaze;
        if (0 < (int)pcVar4) {
          uVar5 = (ulong)pcVar4 & 0xffffffff;
          if (uVar5 == 0) {
LAB_03316b30:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          uVar7 = 0;
          while( true ) {
            __this = (&(pIVar6->_1).byval_arg.data)[uVar7];
            if (__this != (InControl_InputControl_o *)0x0) {
              InControl_InputControl__SetZeroTick(__this,(MethodInfo *)0x0);
            }
            if (uVar5 - 1 == uVar7) break;
            uVar7 = uVar7 + 1;
            if (*(uint *)&(pIVar6->_1).namespaze <= uVar7) goto LAB_03316b30;
          }
        }
        index = index + 1;
      } while (index != iVar1);
    }
  }
  return;
}

