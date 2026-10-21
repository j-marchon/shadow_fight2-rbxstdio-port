// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$EMMBGNGIHED @ RVA 0x352CDE4

/* WARNING: Removing unreachable block (ram,0x0362ce30) */

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__EMMBGNGIHED
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 == (UnityEngine_UI_ScrollRect_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar1 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(__this_00,(MethodInfo *)0x0);
  fVar3 = (__this->fields)._ManualSrollSpeed;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 + fVar3 * fVar2;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_00,fVar1,(MethodInfo *)0x0);
  return;
}

