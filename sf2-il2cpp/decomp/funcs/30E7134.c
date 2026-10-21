// Nekki.SF2.Core.InputControllers.GamePadController$$VibrateAllDevices @ RVA 0x30E7134

/* WARNING: Removing unreachable block (ram,0x031e7358) */

void Nekki_SF2_Core_InputControllers_GamePadController__VibrateAllDevices
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               GCAKLDNBADP_o OKBIKHHKOEN,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  InControl_InputDevice_o *DMEEIIKHKDH;
  MethodInfo *in_x4;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_045663f3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_GetEnumerator__
                );
    DAT_045663f3 = 1;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 == (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = System_Collections_ObjectModel_ReadOnlyCollection<object>__GetEnumerator
                     ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                      Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_GetEnumerator__
                     );
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar6 = pSVar4->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_031e7258;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031e7258:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) break;
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_031e72b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo,0);
LAB_031e72b4:
    DMEEIIKHKDH = (InControl_InputDevice_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    Nekki_SF2_Core_InputControllers_GamePadController__Vibrate(__this,DMEEIIKHKDH,OKBIKHHKOEN,in_x4)
    ;
  } while( true );
  if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
    pSVar6 = pSVar4->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar3;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_031e732c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_031e732c:
    (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  }
  return;
}

