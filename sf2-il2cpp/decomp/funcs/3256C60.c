// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF.JEGBGHPBFOH$$MoveNext @ RVA 0x3256C60

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH__MoveNext
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar3;
  System_Collections_IEnumerator_o **ppSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_0456716c & 1) == 0) {
    auVar5 = FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_0456716c = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pNVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
    }
    (*(pNVar3->klass->vtable)._18_Close.methodPtr)(pNVar3,(pNVar3->klass->vtable)._18_Close.method);
    ppSVar4 = &(pNVar3->fields).OALIOADCDAP;
    *ppSVar4 = (System_Collections_IEnumerator_o *)0x0;
    thunk_FUN_01c20e04(ppSVar4,0);
    EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.05,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}

