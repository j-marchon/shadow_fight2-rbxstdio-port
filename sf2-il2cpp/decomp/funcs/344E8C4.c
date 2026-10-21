// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$UpdateBar @ RVA 0x344E8C4

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateBar
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  StepBar_o *pSVar2;
  float fVar3;
  
                    /* try { // try from 0354e8d8 to 0364e8db has its CatchHandler @ 0354e8fc */
                    /* try { // try from 0354e8dc to 0364e903 has its CatchHandler @ 0354e5f0 */
  if ((DAT_04568290 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568290 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0354e8d8 with catch @ 0354e8fc */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0354e904 to 0364e90b has its CatchHandler @ 0354e920 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 0354e90c to 0364e917 has its CatchHandler @ 0354e5f0 */
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 0354e918 to 0364e91f has its CatchHandler @ 0354e920 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 0354e904 with catch @ 0354e920
                       catch() { ... } // from try @ 0354e918 with catch @ 0354e920 */
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__FMNEFEMHCGG(__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._bar;
    if (pSVar2 != (StepBar_o *)0x0) {
      fVar3 = (float)(*(pSVar2->klass->vtable)._5_get_Value.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._5_get_Value.method);
      if (fVar3 == (float)iVar1) {
        return;
      }
      pSVar2 = (__this->fields)._bar;
      if (pSVar2 != (StepBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354e9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._7_set_Value.methodPtr)
                  (pSVar2,(pSVar2->klass->vtable)._7_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

