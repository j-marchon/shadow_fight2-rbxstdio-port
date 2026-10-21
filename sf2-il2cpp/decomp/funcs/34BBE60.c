// SFButton.JPGCLGHFPFI$$MoveNext @ RVA 0x34BBE60

bool SFButton_JPGCLGHFPFI__MoveNext(SFButton_JPGCLGHFPFI_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar3;
  SFButton_o *pSVar4;
  float seconds;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_045685df & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>_get_Value__);
    auVar5 = FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045685df = 1;
  }
  iVar1 = (__this->fields).__1__state;
  pSVar4 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pSVar4 == (SFButton_o *)0x0) {
LAB_035bbf6c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
    }
    uVar2 = System_Nullable<Int32Enum>__get_Value
                      ((System_Nullable_Int32Enum__o)&(pSVar4->fields).NLGFKIHALIG,
                       Method_System_Nullable<Selectable_SelectionState>_get_Value__);
    (*(pSVar4->klass->vtable)._26_DoStateTransition.methodPtr)
              (pSVar4,(ulong)uVar2,0,(pSVar4->klass->vtable)._26_DoStateTransition.method);
    (pSVar4->fields).NLGFKIHALIG.fields = (System_Nullable_Selectable_SelectionState__Fields)0x0;
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pSVar4 == (SFButton_o *)0x0) goto LAB_035bbf6c;
    if ((pSVar4->fields).NLGFKIHALIG.fields.hasValue != false) {
      seconds = (__this->fields).delay;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  return false;
}

