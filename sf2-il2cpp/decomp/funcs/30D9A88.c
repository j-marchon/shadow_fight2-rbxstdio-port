// Nekki.SF2.GUI.TableView$$GFECOLFOILC @ RVA 0x30D9A88

void Nekki_SF2_GUI_TableView__GFECOLFOILC
               (Nekki_SF2_GUI_TableView_o *__this,float NNEOOGABAAB,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewScroll_o *__this_00;
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  if (((__this->fields).BPELPEAHGHL == false) &&
     (fVar1 = (__this->fields).GMCDBHFHFGF, fVar1 != NNEOOGABAAB)) {
    (__this->fields).FNIBBMLOJIJ = true;
    (__this->fields).PLICNBJGDFL = NNEOOGABAAB - fVar1;
    (__this->fields).GMCDBHFHFGF = NNEOOGABAAB;
    fVar1 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method);
    fVar2 = Nekki_SF2_GUI_TableView__get_ContentSize(__this,method_00);
    __this_00 = (__this->fields).IDIMFLMKDMD;
    if (__this_00 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
      fVar2 = (NNEOOGABAAB + fVar1 * -0.5) / fVar2;
      fVar1 = 1.0 - fVar2;
      if ((__this->fields).tableViewOrientation != 0) {
        fVar1 = fVar2;
      }
      Nekki_SF2_GUI_TableViewScroll__SetNormalizedPosition(__this_00,fVar1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

