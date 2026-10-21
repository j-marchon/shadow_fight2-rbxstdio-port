// SFToggle.MHGDIPJANID$$MoveNext @ RVA 0x30D5928

bool SFToggle_MHGDIPJANID__MoveNext(SFToggle_MHGDIPJANID_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar3;
  SFToggle_o *__this_01;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456632a & 1) == 0) {
    auVar4 = FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_0456632a = 1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_01 == (SFToggle_o *)0x0) goto LAB_031d5a00;
    (__this_01->fields).OJFJPPMMDKM = false;
    bVar2 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                      ((UnityEngine_EventSystems_UIBehaviour_o *)__this_01,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
    UnityEngine_UI_Toggle__OnPointerClick
              ((UnityEngine_UI_Toggle_o *)__this_01,(__this->fields).eventData,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_01 != (SFToggle_o *)0x0) {
      (__this_01->fields).OJFJPPMMDKM = true;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,0.22500001,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_031d5a00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
  }
  return false;
}

