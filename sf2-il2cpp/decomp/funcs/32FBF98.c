// Nekki.SF2.GUI.Menu.MenuExpPanel$$EPPLHMKADOJ @ RVA 0x32FBF98

void Nekki_SF2_GUI_Menu_MenuExpPanel__EPPLHMKADOJ
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  uint32_t uVar2;
  ACHLOMELAJE_o *pAVar3;
  MethodInfo *method_00;
  
  pAVar3 = (__this->fields).OKNKKHGBECG;
  if (pAVar3 == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  uVar1 = ACHLOMELAJE__LFOIBFFCBCL(pAVar3,(MethodInfo *)0x0);
  pAVar3 = (__this->fields).OKNKKHGBECG;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    uVar2 = ACHLOMELAJE__KKAOKMLLBGL(pAVar3,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_MenuExpPanel__BKDODKNEHIM(__this,(float)uVar1,(float)uVar2,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

