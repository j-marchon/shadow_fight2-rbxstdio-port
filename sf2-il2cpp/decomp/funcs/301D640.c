// Nekki.SF2.GUI.Profile.ItemsController$$OCJPPKAPACH @ RVA 0x301D640

void Nekki_SF2_GUI_Profile_ItemsController__OCJPPKAPACH
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  System_String_o *KGLJICLJHEL;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  MGNPHCAAEIO_ACENADIGHII_o *__this_01;
  
  if ((DAT_04565c26 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565c26 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->HBBGCIHPDFG;
  KGLJICLJHEL = (System_String_o *)
                (*(__this->klass->vtable)._35_unknown.methodPtr)
                          (__this,(__this->klass->vtable)._35_unknown.method);
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    DPJIDNBJIBG = Nekki_SF2_GUI_TableView__GetCurrentCellRow(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (MGNPHCAAEIO_ACENADIGHII_o *)0x0) {
      MGNPHCAAEIO_ACENADIGHII__GOBKBHNCANP(__this_01,KGLJICLJHEL,DPJIDNBJIBG,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

