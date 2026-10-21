// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelInfoCell$$SetBackgroundColor @ RVA 0x314C378

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell__SetBackgroundColor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *__this,
               UnityEngine_Color_o EFJKPCADGJH,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  
  pUVar1 = (__this->fields)._background;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0324c394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(EFJKPCADGJH.fields.r,EFJKPCADGJH.fields.g,EFJKPCADGJH.fields.b,EFJKPCADGJH.fields.a);
}

