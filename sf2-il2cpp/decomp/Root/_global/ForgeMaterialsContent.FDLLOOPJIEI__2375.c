// TypeDefIndex 2375
// Namespace: 
// [CompilerGenerated]
// private sealed class ForgeMaterialsContent.FDLLOOPJIEI : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public ForgeMaterialsContent <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x332EFB8]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent.FDLLOOPJIEI$$.ctor @ RVA 0x332EFB8

void Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI___ctor
               (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x332F188]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent.FDLLOOPJIEI$$System.IDisposable.Dispose @ RVA 0x332F188

void Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x332F18C]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent.FDLLOOPJIEI$$MoveNext @ RVA 0x332F18C

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI__MoveNext
               (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar2;
  Il2CppObject **ppIVar3;
  UnityEngine_Events_UnityEvent_o *__this_03;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *pNVar4;
  float time;
  
  if ((DAT_045678f6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent_Invoke__);
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_045678f6 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pNVar4 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (((pNVar4 != (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) &&
        (pLVar2 = (pNVar4->fields)._buttonOk, pLVar2 != (LabelButton_o *)0x0)) &&
       (__this_01 = (pLVar2->fields).super.super.super.m_OnClick,
       __this_01 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
      pLVar2 = (pNVar4->fields)._buttonOk;
      if (pLVar2 != (LabelButton_o *)0x0) {
        __this_03 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
          pLVar2 = (pNVar4->fields)._buttonOk;
          if ((pLVar2 != (LabelButton_o *)0x0) &&
             (__this_02 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pLVar2,(MethodInfo *)0x0),
             __this_02 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
            return false;
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (pNVar4 != (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) {
      time = (pNVar4->fields)._animationTime;
      __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo,method);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_00,time,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x332F2E8]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent.FDLLOOPJIEI$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x332F2E8

Il2CppObject *
Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x332F2F0]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent.FDLLOOPJIEI$$System.Collections.IEnumerator.Reset @ RVA 0x332F2F0

void Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x332F328]
// Nekki.SF2.GUI.Fight.ForgeMaterialsContent.FDLLOOPJIEI$$System.Collections.IEnumerator.get_Current @ RVA 0x332F328

Il2CppObject *
Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

