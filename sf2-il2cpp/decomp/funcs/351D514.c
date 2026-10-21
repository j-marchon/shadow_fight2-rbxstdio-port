// JLEKKANADII$$FLOKKOHDLLG @ RVA 0x351D514

/* WARNING: Removing unreachable block (ram,0x0361d754) */

void JLEKKANADII__FLOKKOHDLLG(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar4;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this;
  System_Collections_Generic_IEnumerator_T__o *pSVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerator_T__c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_0456899e & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_GetEnumerator__
                );
    DAT_0456899e = 1;
  }
  pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    if (DAT_0456647c == '\0') {
      FUN_01bab630(&InControl_InputManager_TypeInfo);
      DAT_0456647c = '\x01';
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = InControl_InputManager_TypeInfo->static_fields->Devices;
    if (__this != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
      pSVar5 = System_Collections_ObjectModel_ReadOnlyCollection<object>__GetEnumerator
                         ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this,
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_GetEnumerator__
                         );
      if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        pSVar7 = pSVar5->klass;
        uVar1._0_1_ = (pSVar7->_2).rank;
        uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar6 = pSVar7->vtable + *piVar9;
              goto LAB_0361d64c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0)
        ;
LAB_0361d64c:
        uVar8 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        if ((uVar8 & 1) == 0) goto LAB_0361d6d4;
        pSVar7 = pSVar5->klass;
        uVar2._0_1_ = (pSVar7->_2).rank;
        uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar2;
        if (uVar8 != 0) {
          piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo) {
              pVVar6 = pSVar7->vtable + *piVar9;
              goto LAB_0361d6a8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar6 = (VirtualInvokeData *)
                 FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo,0)
        ;
LAB_0361d6a8:
        auVar10 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        method_00 = auVar10._8_8_;
        if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1;
        }
        JLEKKANADII__ICCLMLBDKHJ(auVar10._0_8_,method_00);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_0361d6d4:
  if (pSVar5 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
    pSVar7 = pSVar5->klass;
    uVar3._0_1_ = (pSVar7->_2).rank;
    uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar3;
    if (uVar8 != 0) {
      piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar6 = pSVar7->vtable + *piVar9;
          goto LAB_0361d728;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_IDisposable_TypeInfo,0);
LAB_0361d728:
    (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
  }
  return;
}

