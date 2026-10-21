// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$KKILPMCGFMD @ RVA 0x344D26C

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__KKILPMCGFMD
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).BPHEMMPAJGO;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354d280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

