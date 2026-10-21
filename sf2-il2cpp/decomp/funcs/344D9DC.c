// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$MHOOOLECDKK @ RVA 0x344D9DC

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__MHOOOLECDKK
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  int64_t iVar1;
  CNLBMDGLFCJ_o *__this_01;
  
  if ((DAT_04568282 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9900);
    DAT_04568282 = 1;
  }
  __this_00 = (__this->fields).OKNKKHGBECG;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    __this_01 = (__this->fields).FADPBJBOBFA;
    iVar1 = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (CNLBMDGLFCJ_o *)0x0) {
      CNLBMDGLFCJ__FOOHBJNHOKK(__this_01,(double)iVar1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_9900,(MethodInfo *)0x0);
  return;
}

