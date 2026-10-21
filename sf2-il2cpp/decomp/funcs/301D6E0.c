// Nekki.SF2.GUI.Profile.ItemsController$$UpdateSelection @ RVA 0x301D6E0

void Nekki_SF2_GUI_Profile_ItemsController__UpdateSelection
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0311d700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._31_EHPMHOHOPGA.methodPtr)
              (__this,(pNVar1->fields)._LDAHBFIIBJJ_k__BackingField,
               (__this->klass->vtable)._31_EHPMHOHOPGA.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

