// Nekki.SF2.GUI.Map.ZoneScrollItem$$SelectBattle @ RVA 0x3347504

void Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  OOMHDDBCBJP_o *pOVar1;
  System_Action_OOMHDDBCBJP__o *pSVar2;
  
  pOVar1 = (__this->fields).KOGBPIPIKFA;
  if ((pOVar1 == (OOMHDDBCBJP_o *)0x0) || ((pOVar1->fields).HHDBIGKBMEC == false)) {
    Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle(__this,method);
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_ZoneScrollItem__LKLHLGLCEOM(__this,method);
  pSVar2 = (__this->fields).CGHGGKBEHIF;
  if (pSVar2 != (System_Action_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03447548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(__this->fields).KOGBPIPIKFA,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

