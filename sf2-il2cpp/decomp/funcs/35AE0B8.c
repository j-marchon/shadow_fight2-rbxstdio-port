// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$EGNLFEGLGPK @ RVA 0x35AE0B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__EGNLFEGLGPK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  SFButton_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  
  __this_00 = (__this->fields)._blameButton;
  if (__this_00 != (SFButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._blameIcon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0,0,0x3f800000,pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._blameIcon;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar1,1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

