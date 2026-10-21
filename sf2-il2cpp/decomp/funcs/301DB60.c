// Nekki.SF2.GUI.Profile.ItemsController$$UpdateTable @ RVA 0x301DB60

void Nekki_SF2_GUI_Profile_ItemsController__UpdateTable
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  (*(__this->klass->vtable)._26_unknown.methodPtr)
            (__this,(__this->klass->vtable)._26_unknown.method);
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

