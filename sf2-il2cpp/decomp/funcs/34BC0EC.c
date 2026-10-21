// SFButton.FLGPNLOPAJN$$MoveNext @ RVA 0x34BC0EC

bool SFButton_FLGPNLOPAJN__MoveNext(SFButton_FLGPNLOPAJN_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_WaitForEndOfFrame_o *__this_00;
  UnityEngine_WaitForEndOfFrame_o **ppUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  SFButton_c *pSVar4;
  Il2CppObject **ppIVar5;
  SFButton_o *pSVar6;
  
  if ((DAT_045685e1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_045685e1 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pSVar6 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (pSVar6 == (SFButton_o *)0x0) goto LAB_035bc1f0;
    bVar2 = (pSVar6->fields).super.super.m_Interactable;
    (pSVar6->fields).HGLJOEEEGNL = true;
    if (bVar2 != false) {
      (*(pSVar6->klass->vtable)._48_DHDHDICMLCD.methodPtr)
                (pSVar6,(pSVar6->klass->vtable)._48_DHDHDICMLCD.method);
      method = extraout_x1_00;
    }
    __this_00 = (UnityEngine_WaitForEndOfFrame_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,method);
    UnityEngine_WaitForEndOfFrame___ctor(__this_00,(MethodInfo *)0x0);
    ppUVar3 = &(__this->fields)._delay_5__2;
    *ppUVar3 = __this_00;
    thunk_FUN_01c20e04(ppUVar3,__this_00);
  }
  iVar1 = (__this->fields).frames + -1;
  (__this->fields).frames = iVar1;
  if (-1 < iVar1) {
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)(__this->fields)._delay_5__2;
    thunk_FUN_01c20e04(ppIVar5);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (pSVar6 != (SFButton_o *)0x0) {
    pSVar4 = pSVar6->klass;
    (pSVar6->fields).HGLJOEEEGNL = false;
    (*(pSVar4->vtable)._50_OnClick.methodPtr)
              (pSVar6,(__this->fields).p_eventData,(pSVar4->vtable)._50_OnClick.method);
    return false;
  }
LAB_035bc1f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

