// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ForceUpdateCoins @ RVA 0x344D948

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ForceUpdateCoins
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  int64_t CJNHFNHJHPE;
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04568281 & 1) == 0) {
                    /* try { // try from 0354d964 to 0364d96f has its CatchHandler @ 0354dac8 */
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_04568281 = 1;
  }
  __this_00 = (__this->fields).OKNKKHGBECG;
                    /* try { // try from 0354d978 to 0364d983 has its CatchHandler @ 0354dacc */
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    CJNHFNHJHPE = ACHLOMELAJE__IMLCNMCBEEN(__this_00,(MethodInfo *)0x0);
    (__this->fields).DIIHKNHKKIJ = CJNHFNHJHPE;
    pNVar2 = (__this->fields)._infoCoins;
                    /* try { // try from 0354d99c to 0364d9a7 has its CatchHandler @ 0354dabc */
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0354d9a8 to 0364da93 has its CatchHandler @ 0354d590 */
    pSVar1 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354d9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

