// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$PLAIIFOBHLP @ RVA 0x307CC74

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__PLAIIFOBHLP
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *pUVar2;
  
  if ((DAT_04565fe9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565fe9 = 1;
  }
  pUVar2 = (__this->fields)._animationFinishButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._animationFinishButton;
    if ((pUVar2 != (UnityEngine_UI_Button_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CMPKOOEKFKF,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

