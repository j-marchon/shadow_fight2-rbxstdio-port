// SFButton.NLBDFBJDJDH$$MoveNext @ RVA 0x34BBFBC

bool SFButton_NLBDFBJDJDH__MoveNext(SFButton_NLBDFBJDJDH_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  SFButton_o *pSVar3;
  UnityEngine_WaitForSeconds_o *__this_00;
  MethodInfo *extraout_x1;
  SFButton_c *pSVar4;
  Il2CppObject **ppIVar5;
  
  if ((DAT_045685e0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045685e0 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pSVar3 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pSVar3 == (SFButton_o *)0x0) goto LAB_035bc09c;
    pSVar4 = pSVar3->klass;
    (pSVar3->fields).HGLJOEEEGNL = false;
    (*(pSVar4->vtable)._50_OnClick.methodPtr)
              (pSVar3,(__this->fields).p_eventData,(pSVar4->vtable)._50_OnClick.method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pSVar3 != (SFButton_o *)0x0) {
      bVar2 = (pSVar3->fields).super.super.m_Interactable;
      (pSVar3->fields).HGLJOEEEGNL = true;
      if (bVar2 != false) {
        (*(pSVar3->klass->vtable)._48_DHDHDICMLCD.methodPtr)
                  (pSVar3,(pSVar3->klass->vtable)._48_DHDHDICMLCD.method);
      }
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,0.22500001,(MethodInfo *)0x0);
      ppIVar5 = &(__this->fields).__2__current;
      *ppIVar5 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar5,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_035bc09c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(pSVar3,method);
  }
  return false;
}

