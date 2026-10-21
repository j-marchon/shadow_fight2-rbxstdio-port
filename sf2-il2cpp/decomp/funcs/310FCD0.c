// Nekki.SF2.GUI.Shop.ItemsPanel$$SliderValueChanged @ RVA 0x310FCD0

void Nekki_SF2_GUI_Shop_ItemsPanel__SliderValueChanged
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int JDEFJPHCNMM;
  int32_t iVar1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  double dVar3;
  double __x;
  float fVar4;
  double local_18;
  
  pNVar2 = (__this->fields)._TableView;
  if (pNVar2 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_0320fe08;
  iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar2,(MethodInfo *)0x0);
  if (DAT_04561501 == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04561501 = '\x01';
  }
  fVar4 = (float)(iVar1 + -1) * CJNHFNHJHPE;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __x = (double)fVar4;
  dVar3 = modf(__x,&local_18);
  if (0.0 <= fVar4) {
    if (dVar3 == 0.5) {
      dVar3 = 1.0;
      goto LAB_0320fd7c;
    }
    local_18 = (double)(long)(__x + 0.5);
  }
  else if (dVar3 == -0.5) {
    dVar3 = -1.0;
LAB_0320fd7c:
    if (((long)local_18 & 1U) != 0) {
      local_18 = local_18 + dVar3;
    }
  }
  else {
    local_18 = (double)(long)(__x + -0.5);
  }
  pNVar2 = (__this->fields)._TableView;
  JDEFJPHCNMM = -0x80000000;
  if (local_18 != INFINITY) {
    JDEFJPHCNMM = (int)local_18;
  }
  if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_TableView__GetCurrentCellRow(pNVar2,(MethodInfo *)0x0);
    if (JDEFJPHCNMM == iVar1) {
      return;
    }
    pNVar2 = (__this->fields)._TableView;
    if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(pNVar2,JDEFJPHCNMM,0.0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0320fe08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

