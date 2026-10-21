// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$BOECPEODFFI @ RVA 0x344E358

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__BOECPEODFFI
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  long CJNHFNHJHPE;
  CNLBMDGLFCJ_o *pCVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  double dVar4;
  
  if ((DAT_0456828b & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_0456828b = 1;
  }
  if ((__this->fields).OKNKKHGBECG == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  pCVar1 = (__this->fields).FADPBJBOBFA;
  if (pCVar1 != (CNLBMDGLFCJ_o *)0x0) {
    CNLBMDGLFCJ__LLCONNGHGKD(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).FADPBJBOBFA;
    if (pCVar1 != (CNLBMDGLFCJ_o *)0x0) {
      dVar4 = (pCVar1->fields)._JPNBHEPPPNP_k__BackingField;
      CJNHFNHJHPE = -0x8000000000000000;
      if (dVar4 != INFINITY) {
        CJNHFNHJHPE = (long)dVar4;
      }
      if ((__this->fields).OGOANIHOCBO == CJNHFNHJHPE) {
        return;
      }
      (__this->fields).OGOANIHOCBO = CJNHFNHJHPE;
      pNVar3 = (__this->fields)._infoBonus;
      if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354e424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

