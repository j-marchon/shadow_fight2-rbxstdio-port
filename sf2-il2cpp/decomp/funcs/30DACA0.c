// Nekki.SF2.GUI.TableView$$DFKBPGLFOPK @ RVA 0x30DACA0

void Nekki_SF2_GUI_TableView__DFKBPGLFOPK(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  KMAKOOHEKNB_o *__this_00;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_TableViewCell_o **ppNVar2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  Nekki_SF2_GUI_TableViewCell_o *y;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04566353 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
    DAT_04566353 = 1;
    method = extraout_x1;
  }
  if (ABS((__this->fields).PLICNBJGDFL) <= 50.0) {
    ppNVar2 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
    pNVar3 = *ppNVar2;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    method_01 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_00;
    if (bVar1) {
      if (*ppNVar2 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) goto LAB_031dae08;
      fVar6 = (__this->fields).GMCDBHFHFGF;
      fVar4 = Nekki_SF2_GUI_TableView__PositionForRow
                        (__this,((*ppNVar2)->fields).FIMCNHGPCNA,method_01);
      pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
      if ((pNVar3 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) ||
         (__this_00 = (__this->fields).HCLHHHKCABP, __this_00 == (KMAKOOHEKNB_o *)0x0))
      goto LAB_031dae08;
      fVar5 = KMAKOOHEKNB__HGJGLBLDDHF(__this_00,(pNVar3->fields).FIMCNHGPCNA,(MethodInfo *)0x0);
      method_00 = extraout_x1_01;
      if (ABS(fVar6 - fVar4) <= fVar5 * 0.5 + (__this->fields)._spacing * 0.5) {
        return;
      }
    }
    pNVar3 = Nekki_SF2_GUI_TableView__MNKOGBDLIHK(__this,method_00);
    y = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._LDAHBFIIBJJ_k__BackingField = pNVar3;
      thunk_FUN_01c20e04(ppNVar2,pNVar3);
      __this_01 = (__this->fields).onSelectCell;
      if (__this_01 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(Il2CppObject *)*ppNVar2,
                   Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
        return;
      }
LAB_031dae08:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

