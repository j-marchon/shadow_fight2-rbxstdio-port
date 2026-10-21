// Nekki.SF2.GUI.Tutorial.Controls.TutorialButtonTouch$$CGMNBHOHEPO @ RVA 0x326C39C

void Nekki_SF2_GUI_Tutorial_Controls_TutorialButtonTouch__CGMNBHOHEPO
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialButtonTouch_o *__this,MethodInfo *method)

{
  bool bVar1;
  SFButton_o *__this_00;
  
  if ((DAT_045671ee & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<SFButton>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671ee = 1;
  }
  __this_00 = (SFButton_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<SFButton>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 != (SFButton_o *)0x0) {
      SFButton__OriginateChangeState(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

