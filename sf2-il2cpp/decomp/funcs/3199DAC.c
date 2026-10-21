// Nekki.SF2.GUI.Map.RaidToggleButton$$GPLIGCNNIED @ RVA 0x3199DAC

void Nekki_SF2_GUI_Map_RaidToggleButton__GPLIGCNNIED
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x2;
  System_Action_o *pSVar2;
  
  bVar1 = Nekki_SF2_GUI_Map_RaidToggleButton__OAFBFGNBJJF(__this,method);
  if (!bVar1) {
    return;
  }
  EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  if ((__this->fields).DIGKFGIEOAJ == false) {
    Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this,0,in_x2);
    pSVar2 = (__this->fields).NONLFGDHNJB;
  }
  else {
    pSVar2 = (__this->fields).BKHIDCLCICL;
  }
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    pSVar2 = (__this->fields).ANGJCCIONDI;
    if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03299e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

