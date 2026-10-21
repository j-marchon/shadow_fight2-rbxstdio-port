// Nekki.SF2.GUI.Tutorial.Controls.TutorialButtonTouch$$IMMFEBFFAEA @ RVA 0x326C230

void Nekki_SF2_GUI_Tutorial_Controls_TutorialButtonTouch__IMMFEBFFAEA
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialButtonTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  bool bVar1;
  SFButton_o *__this_00;
  
  if ((DAT_045671ec & 1) == 0) {
    FUN_01bab630(EEGKJKNENDE.fields.x,EEGKJKNENDE.fields.y,
                 &Method_UnityEngine_Component_GetComponent<SFButton>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671ec = 1;
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
      SFButton__ChangeStatePressed(__this_00,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

