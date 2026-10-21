// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$CKEPJKFKCEG @ RVA 0x352CF1C

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__CKEPJKFKCEG
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  UnityEngine_UI_ScrollRect_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04568a33 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04568a33 = 1;
  }
  pUVar1 = (__this->fields)._ScrollRect;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    fVar2 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
    fVar4 = (__this->fields)._AutoScrollSpeed;
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
              (pUVar1,fVar2 - fVar4 * fVar3,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._ScrollRect;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      fVar2 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
      if (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon < fVar2) {
        return;
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

