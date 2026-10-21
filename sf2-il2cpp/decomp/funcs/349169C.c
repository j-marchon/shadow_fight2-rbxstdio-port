// Nekki.SF2.GUI.UIModule.IIIELPJHPPP$$MoveNext @ RVA 0x349169C

bool Nekki_SF2_GUI_UIModule_IIIELPJHPPP__MoveNext
               (Nekki_SF2_GUI_UIModule_IIIELPJHPPP_o *__this,MethodInfo *method)

{
  System_Action_UIModule__o *pSVar1;
  Nekki_SF2_GUI_UIModule_o *pNVar2;
  int iVar3;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
                    /* catch() { ... } // from try @ 035915fc with catch @ 035916a0
                       catch() { ... } // from try @ 03591684 with catch @ 035916a0
                       catch() { ... } // from try @ 03591698 with catch @ 035916a0 */
  if ((DAT_04568421 & 1) == 0) {
    auVar5 = FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_04568421 = 1;
  }
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 1) {
    pSVar1 = (__this->fields).p_event;
    pNVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar1 == (System_Action_UIModule__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,pNVar2);
    }
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,pNVar2,(pSVar1->fields).super.super.method);
  }
  else if (iVar3 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)
                thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,auVar5._8_8_);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar4 = &(__this->fields).__2__current;
    *ppIVar4 = __this_00;
    thunk_FUN_01c20e04(ppIVar4,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}

