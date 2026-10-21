// Nekki.SF2.GUI.Tutorial.Controls.TutorialScrollTouch$$CGMNBHOHEPO @ RVA 0x3448C38

void Nekki_SF2_GUI_Tutorial_Controls_TutorialScrollTouch__CGMNBHOHEPO
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialScrollTouch_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03548c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._7_NJHDNHBJPDH.methodPtr)
            (UVar1.fields.x,UVar1.fields.y,UVar1.fields.z,__this,
             (__this->klass->vtable)._7_NJHDNHBJPDH.method);
  return;
}

