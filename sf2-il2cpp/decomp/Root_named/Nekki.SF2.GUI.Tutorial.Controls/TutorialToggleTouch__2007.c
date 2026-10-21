// TypeDefIndex 2007
// Namespace: Nekki.SF2.GUI.Tutorial.Controls
// public class TutorialToggleTouch : TutorialTouch
// Fields:

// ===== public void .ctor()  [RVA 0x3295DD0]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialToggleTouch$$.ctor @ RVA 0x3295DD0

void Nekki_SF2_GUI_Tutorial_Controls_TutorialToggleTouch___ctor
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialToggleTouch_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialControl___ctor
            ((Nekki_SF2_GUI_Tutorial_TutorialControl_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void NJHDNHBJPDH(Vector2 EEGKJKNENDE)  [RVA 0x3295DD8]
// Nekki.SF2.GUI.Tutorial.Controls.TutorialToggleTouch$$NJHDNHBJPDH @ RVA 0x3295DD8

void Nekki_SF2_GUI_Tutorial_Controls_TutorialToggleTouch__NJHDNHBJPDH
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialToggleTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *PFNMDNHEFEC;
  
  if ((DAT_04567367 & 1) == 0) {
    FUN_01bab630(EEGKJKNENDE.fields.x,EEGKJKNENDE.fields.y,
                 &Method_UnityEngine_Component_GetComponent<Toggle>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567367 = 1;
  }
  PFNMDNHEFEC = (UnityEngine_UI_Selectable_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,
                           Method_UnityEngine_Component_GetComponent<Toggle>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)PFNMDNHEFEC,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    LJLLAKHOFFF__AKKDDJDBIBD(PFNMDNHEFEC,(MethodInfo *)0x0);
    return;
  }
  return;
}

