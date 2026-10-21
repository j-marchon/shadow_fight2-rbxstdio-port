// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$SetTextColor @ RVA 0x30E2B04

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetTextColor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  MethodInfo *extraout_x1;
  
  pNVar1 = (__this->fields).super._label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    pNVar1 = (__this->fields)._IndexSlotAlias;
    method = extraout_x1;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e2b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (CONCAT44((int)((ulong)EFJKPCADGJH.fields._0_8_ >> 0x20),EFJKPCADGJH.fields.r),
                 CONCAT44((int)((ulong)EFJKPCADGJH.fields._4_8_ >> 0x20),EFJKPCADGJH.fields.g),
                 CONCAT44((int)((ulong)EFJKPCADGJH.fields._8_8_ >> 0x20),EFJKPCADGJH.fields.b),
                 CONCAT44((int)((ulong)register0x00005060 >> 0x20),EFJKPCADGJH.fields.a),pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

