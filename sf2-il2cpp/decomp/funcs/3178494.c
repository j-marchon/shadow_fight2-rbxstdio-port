// Nekki.SF2.GUI.Pvp.SelectModule$$COFBGCFPCPM @ RVA 0x3178494

void Nekki_SF2_GUI_Pvp_SelectModule__COFBGCFPCPM
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t FGBMMFIFMGM,MethodInfo *method)

{
  char cVar1;
  System_Action_o *pSVar2;
  
  if (FGBMMFIFMGM == 1) {
    cVar1 = (__this->fields).FODJGPABKLP;
  }
  else {
    if (FGBMMFIFMGM != 0) {
      return;
    }
    cVar1 = (__this->fields).FPFGDOBNLCP;
  }
  if (cVar1 != '\0') {
    return;
  }
  pSVar2 = (__this->fields).KNIDPDCJJLG;
  if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032784d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

