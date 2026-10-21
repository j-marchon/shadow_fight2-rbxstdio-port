// Nekki.SF2.GUI.Profile.ItemsController$$MBMAFJIBBAB @ RVA 0x301DFBC

void Nekki_SF2_GUI_Profile_ItemsController__MBMAFJIBBAB
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  int32_t JDEFJPHCNMM;
  int32_t iVar1;
  System_String_o *KGLJICLJHEL;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_ACENADIGHII_o *__this_00;
  
  if ((DAT_04565c2c & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565c2c = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->HBBGCIHPDFG;
  KGLJICLJHEL = (System_String_o *)
                (*(__this->klass->vtable)._35_unknown.methodPtr)
                          (__this,(__this->klass->vtable)._35_unknown.method);
  if (__this_00 != (MGNPHCAAEIO_ACENADIGHII_o *)0x0) {
    JDEFJPHCNMM = MGNPHCAAEIO_ACENADIGHII__MHONHGBIHDO(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    if (JDEFJPHCNMM < 0) {
      return;
    }
    pNVar2 = (__this->fields)._TableView;
    if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar2,(MethodInfo *)0x0);
      if (iVar1 <= JDEFJPHCNMM) {
        return;
      }
      pNVar2 = (__this->fields)._TableView;
      if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        Nekki_SF2_GUI_TableView__ScrollToCell(pNVar2,JDEFJPHCNMM,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

