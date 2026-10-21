// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$HNKCOMGNDHP @ RVA 0x34288BC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HNKCOMGNDHP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,
               UnityEngine_Vector3_o KGHODFICMMC,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_RectTransform_o *__this_00;
  
  pNVar1 = (__this->fields)._icon;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar1,
               (pNVar1->klass->vtable)._23_set_color.method);
    pNVar1 = (__this->fields)._icon;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition
                ((UnityEngine_Transform_o *)__this_00,KGHODFICMMC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

