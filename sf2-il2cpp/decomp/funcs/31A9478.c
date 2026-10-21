// Nekki.SF2.GUI.Map.ShardsButtonView$$DFAIHDKINDN @ RVA 0x31A9478

void Nekki_SF2_GUI_Map_ShardsButtonView__DFAIHDKINDN
               (Nekki_SF2_GUI_Map_ShardsButtonView_o *__this,MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04566b23 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566b23 = 1;
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__JFGHGKCDHMA(__this_00,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapButtonViewBase__DFAIHDKINDN
              ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

