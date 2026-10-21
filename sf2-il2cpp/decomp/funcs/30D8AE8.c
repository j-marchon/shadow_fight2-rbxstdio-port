// Nekki.SF2.GUI.TableView$$GetCurrentCellRow @ RVA 0x30D8AE8

int32_t Nekki_SF2_GUI_TableView__GetCurrentCellRow
                  (Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  
  if ((DAT_0456634c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456634c = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (pNVar3->fields).FIMCNHGPCNA;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

