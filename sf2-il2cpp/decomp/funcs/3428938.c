// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$AGKAANKJCPM @ RVA 0x3428938

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__AGKAANKJCPM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int32_t DLOFGOGAGAA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  MethodInfo *method_00;
  
  pNVar1 = (__this->fields)._icon;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              ((__this->fields).PIDNBPCOAOM.fields.r,(__this->fields).PIDNBPCOAOM.fields.g,
               (__this->fields).PIDNBPCOAOM.fields.b,(__this->fields).PIDNBPCOAOM.fields.a,pNVar1,
               (pNVar1->klass->vtable)._23_set_color.method);
    if ((__this->fields).KOPPGDKAEBP == DLOFGOGAGAA) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__EKLNAPJNGEA(__this,method_00);
    }
    else if (2 < DLOFGOGAGAA) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__OCCNCPHMCIH(__this,method_00);
    }
    EDFDANKEBGF__PELKGCAGICG((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

