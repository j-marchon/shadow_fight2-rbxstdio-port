// Nekki.SF2.GUI.TableView$$ScrollToCell @ RVA 0x30D9EB4

void Nekki_SF2_GUI_TableView__ScrollToCell
               (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,float LFJGFLNMBMC,
               MethodInfo *method)

{
  MethodInfo *method_00;
  float NNEOOGABAAB;
  
  NNEOOGABAAB = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method);
  Nekki_SF2_GUI_TableView__SetPosition(__this,NNEOOGABAAB,LFJGFLNMBMC,method_00);
  return;
}

