// Nekki.SF2.GUI.Tutorial.Controls.TutorialButtonTouch$$NJHDNHBJPDH @ RVA 0x326C2E8

void Nekki_SF2_GUI_Tutorial_Controls_TutorialButtonTouch__NJHDNHBJPDH
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialButtonTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *PFNMDNHEFEC;
  
  if ((DAT_045671ed & 1) == 0) {
    FUN_01bab630(EEGKJKNENDE.fields.x,EEGKJKNENDE.fields.y,
                 &Method_UnityEngine_Component_GetComponent<Button>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671ed = 1;
  }
  PFNMDNHEFEC = (UnityEngine_UI_Selectable_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,
                           Method_UnityEngine_Component_GetComponent<Button>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)PFNMDNHEFEC,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    LJLLAKHOFFF__AKKDDJDBIBD(PFNMDNHEFEC,(MethodInfo *)0x0);
  }
                    /* WARNING: Could not recover jumptable at 0x0336c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._4_CGMNBHOHEPO.methodPtr)
            (__this,(__this->klass->vtable)._4_CGMNBHOHEPO.method);
  return;
}

