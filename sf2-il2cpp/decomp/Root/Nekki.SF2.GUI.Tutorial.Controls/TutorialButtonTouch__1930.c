// TypeDefIndex 1930
// Namespace: Nekki.SF2.GUI.Tutorial.Controls
// public class TutorialButtonTouch : TutorialTouch
// Fields:

// ===== protected override void IMMFEBFFAEA(Vector2 EEGKJKNENDE)  [RVA 0x326C230]
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


// ===== protected override void NJHDNHBJPDH(Vector2 EEGKJKNENDE)  [RVA 0x326C2E8]
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


// ===== public void .ctor()  [RVA 0x326C394]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialButtonTouch$$.ctor @ RVA 0x326C394

void Nekki_SF2_GUI_Tutorial_Controls_TutorialButtonTouch___ctor
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialButtonTouch_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch___ctor
            ((Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void CGMNBHOHEPO()  [RVA 0x326C39C]
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

