// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$IFPBLGAHOML @ RVA 0x330BC30

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__IFPBLGAHOML
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  
  pNVar1 = (__this->fields)._buttonIcon;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0340bc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar1,
               (pNVar1->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

