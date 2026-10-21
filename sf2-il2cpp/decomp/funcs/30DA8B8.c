// Nekki.SF2.GUI.TableView$$GetNearestCellRow @ RVA 0x30DA8B8

int32_t Nekki_SF2_GUI_TableView__GetNearestCellRow
                  (Nekki_SF2_GUI_TableView_o *__this,float HKLGABDKEOD,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar4;
  int JDEFJPHCNMM;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pNVar4 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
  if (pNVar4 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  JDEFJPHCNMM = (pNVar4->fields).FIMCNHGPCNA;
  if (HKLGABDKEOD != 0.0) {
    fVar7 = (__this->fields).GMCDBHFHFGF + HKLGABDKEOD;
    fVar5 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,in_x2);
    if (HKLGABDKEOD <= 0.0) {
      iVar1 = JDEFJPHCNMM;
      if (JDEFJPHCNMM == 0) {
        JDEFJPHCNMM = 0;
      }
      else {
        do {
          JDEFJPHCNMM = iVar1;
          iVar1 = JDEFJPHCNMM + -1;
          if (iVar1 < 0) {
            return JDEFJPHCNMM;
          }
          fVar6 = Nekki_SF2_GUI_TableView__PositionForRow(__this,iVar1,in_x2);
          fVar2 = fVar7 - fVar5;
          fVar5 = fVar6;
        } while (ABS(fVar7 - fVar6) < ABS(fVar2));
      }
    }
    else {
      iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(__this,method_00);
      method_01 = extraout_x1;
      iVar1 = JDEFJPHCNMM;
      if (JDEFJPHCNMM != iVar3 + -1) {
        do {
          JDEFJPHCNMM = iVar1;
          iVar1 = JDEFJPHCNMM + 1;
          iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(__this,method_01);
          if (iVar3 <= iVar1) {
            return JDEFJPHCNMM;
          }
          fVar6 = Nekki_SF2_GUI_TableView__PositionForRow(__this,iVar1,in_x2);
          fVar2 = fVar7 - fVar5;
          method_01 = extraout_x1_00;
          fVar5 = fVar6;
        } while (ABS(fVar7 - fVar6) < ABS(fVar2));
      }
    }
  }
  return JDEFJPHCNMM;
}

