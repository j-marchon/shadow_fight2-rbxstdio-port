// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$DKLDHKNAEBO @ RVA 0x32ED55C

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__DKLDHKNAEBO
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,MethodInfo *method)

{
  System_Action_BNKBGIIJNLF__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  ACHLOMELAJE_o **ppAVar1;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_0456764f & 1) == 0) {
    FUN_01bab630(&System_Action<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMaterialsPanel_LFHIAJBBKGC__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456764f = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  ppAVar1 = &(__this->fields).OKNKKHGBECG;
  *ppAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  thunk_FUN_01c20e04(ppAVar1);
  __this_00 = *ppAVar1;
  CJNHFNHJHPE = (System_Action_BNKBGIIJNLF__o *)
                thunk_FUN_01bda818(System_Action<BNKBGIIJNLF>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__GILENGKAJNN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_MenuMaterialsPanel__CMHFHILJHOL(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

