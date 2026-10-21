// Nekki.SF2.GUI.TableView$$get_ContentSize @ RVA 0x30D9658

float Nekki_SF2_GUI_TableView__get_ContentSize(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewScroll_o *__this_00;
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  __this_00 = (__this->fields).IDIMFLMKDMD;
  if (__this_00 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
    fVar1 = Nekki_SF2_GUI_TableViewScroll__get_Size(__this_00,(MethodInfo *)0x0);
    fVar2 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
    return fVar1 - fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

