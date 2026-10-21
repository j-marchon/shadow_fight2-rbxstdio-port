// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$JOGNKBJCLPL @ RVA 0x344E80C

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__JOGNKBJCLPL
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).BLDIJJGFONK;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 0354e818 to 0364e823 has its CatchHandler @ 0354e8a0 */
                    /* WARNING: Could not recover jumptable at 0x0354e820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

