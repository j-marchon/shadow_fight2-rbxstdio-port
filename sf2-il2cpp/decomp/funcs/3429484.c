// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite.APOBIODFIMP$$FJKJNBBNBMG @ RVA 0x3429484

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP__FJKJNBBNBMG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *__this,
               UnityEngine_Vector3_o newPos,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if (((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) &&
      (__this_00 = (pNVar1->fields)._icon, __this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)__this_01,newPos,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

