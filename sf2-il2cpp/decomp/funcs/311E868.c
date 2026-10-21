// Nekki.SF2.GUI.Profile.SealsController$$ScrollToItem @ RVA 0x311E868

bool Nekki_SF2_GUI_Profile_SealsController__ScrollToItem
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,System_String_o *JEPIGCLHAMI,
               float GGMALJLKHHB,MethodInfo *method)

{
  int32_t JDEFJPHCNMM;
  int32_t iVar1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  
  JDEFJPHCNMM = Nekki_SF2_GUI_Profile_SealsController__DJNMONPCOAP(__this,JEPIGCLHAMI,method);
  if (JDEFJPHCNMM < 0) {
    return false;
  }
  pNVar2 = (__this->fields).super._TableView;
  if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar2,(MethodInfo *)0x0);
    if (iVar1 <= JDEFJPHCNMM) {
      return false;
    }
    pNVar2 = (__this->fields).super._TableView;
    if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(pNVar2,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

