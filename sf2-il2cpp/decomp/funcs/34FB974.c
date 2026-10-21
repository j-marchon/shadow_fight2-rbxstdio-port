// Nekki.SF2.GUI.Common.Hints.HintGroup$$LNHEPKHHOLB @ RVA 0x34FB974

void Nekki_SF2_GUI_Common_Hints_HintGroup__LNHEPKHHOLB
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Object_o *__this_00;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar2;
  System_String_o **ppSVar3;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04568822 & 1) == 0) {
    FUN_01bab630(&FEEECOADFNH_TypeInfo);
    FUN_01bab630(&StringLiteral_7108);
    DAT_04568822 = 1;
  }
  local_38.klass = (System_Enum_c *)FEEECOADFNH_TypeInfo;
  pNVar2 = (__this->fields)._TutorialNode;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = (__this->fields)._ID;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
    ppSVar3 = &(pNVar2->fields)._ID;
    *ppSVar3 = pSVar1;
    thunk_FUN_01c20e04(ppSVar3,pSVar1);
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._TutorialNode;
    if ((pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) &&
       (pSVar1 = System_String__Concat(StringLiteral_7108,(pNVar2->fields)._ID,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Object_o *)0x0)) {
      UnityEngine_Object__set_name(__this_00,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

