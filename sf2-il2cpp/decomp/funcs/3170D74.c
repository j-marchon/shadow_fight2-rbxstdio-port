// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$.ctor @ RVA 0x3170D74

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch___ctor
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *pNVar1;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o **ppNVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_0456691e & 1) == 0) {
    FUN_01bab630(&
                 Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_TypeInfo
                );
    DAT_0456691e = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_TypeInfo
                              ,method);
  pNVar1 = auVar3._0_8_;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent___ctor
            (pNVar1,auVar3._8_8_);
  ppNVar2 = &(__this->fields)._OnPressed;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  auVar3 = thunk_FUN_01bda818(
                             Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_TypeInfo
                             );
  pNVar1 = auVar3._0_8_;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent___ctor
            (pNVar1,auVar3._8_8_);
  ppNVar2 = &(__this->fields)._OnReleased;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  (__this->fields).CEPACCGIINO = true;
  (__this->fields).PNDDALIFKEK.fields.r = 0.0;
  (__this->fields).PNDDALIFKEK.fields.g = 0.0;
  (__this->fields).PNDDALIFKEK.fields.b = 0.0;
  (__this->fields).PNDDALIFKEK.fields.a = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

