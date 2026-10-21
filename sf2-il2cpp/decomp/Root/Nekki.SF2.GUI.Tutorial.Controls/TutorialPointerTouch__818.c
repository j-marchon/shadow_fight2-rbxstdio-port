// TypeDefIndex 818
// Namespace: Nekki.SF2.GUI.Tutorial.Controls
// public class TutorialPointerTouch : TutorialTouch
// Fields:

// ===== public void .ctor()  [RVA 0x3078A28]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialPointerTouch$$.ctor @ RVA 0x3078A28

void Nekki_SF2_GUI_Tutorial_Controls_TutorialPointerTouch___ctor
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialPointerTouch_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch___ctor
            ((Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void NJHDNHBJPDH(Vector2 EEGKJKNENDE)  [RVA 0x3078A30]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialPointerTouch$$NJHDNHBJPDH @ RVA 0x3078A30

void Nekki_SF2_GUI_Tutorial_Controls_TutorialPointerTouch__NJHDNHBJPDH
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialPointerTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  VirtualInvokeData *pVVar3;
  Il2CppClass *pIVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04565fc2 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<IPointerClickHandler>__);
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_IPointerClickHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04565fc2 = 1;
  }
  pIVar2 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<IPointerClickHandler>__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    eventSystem = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    __this_00 = (UnityEngine_EventSystems_PointerEventData_o *)
                thunk_FUN_01bda818(UnityEngine_EventSystems_PointerEventData_TypeInfo);
    UnityEngine_EventSystems_PointerEventData___ctor(__this_00,eventSystem,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this_00->fields)._position_k__BackingField.fields.x = EEGKJKNENDE.fields.x;
    (__this_00->fields)._position_k__BackingField.fields.y = EEGKJKNENDE.fields.y;
    pIVar4 = pIVar2->klass;
    uVar1._0_1_ = (pIVar4->_2).rank;
    uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pIVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)UnityEngine_EventSystems_IPointerClickHandler_TypeInfo) {
          pVVar3 = pIVar4->vtable + *piVar6;
          goto LAB_03178b54;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(pIVar2,UnityEngine_EventSystems_IPointerClickHandler_TypeInfo,0);
LAB_03178b54:
    (*pVVar3->methodPtr)(pIVar2,__this_00,pVVar3->method);
  }
                    /* WARNING: Could not recover jumptable at 0x03178b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._4_CGMNBHOHEPO.methodPtr)
            (__this,(__this->klass->vtable)._4_CGMNBHOHEPO.method);
  return;
}

