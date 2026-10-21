// Nekki.SF2.GUI.Map.ZoneScrollItem$$SelectBattleByDirection @ RVA 0x33485DC

void Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattleByDirection
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,UnityEngine_Vector2_o FAGFGDBOLDP,
               MethodInfo *method)

{
  OOMHDDBCBJP_o **ppOVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  System_Action_OOMHDDBCBJP__o *pSVar3;
  
  pOVar2 = (__this->fields).KOGBPIPIKFA;
  ppOVar1 = &(__this->fields).KOGBPIPIKFA;
  if ((pOVar2 == (OOMHDDBCBJP_o *)0x0) || ((pOVar2->fields).HHDBIGKBMEC == false)) {
    Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle(__this,(MethodInfo *)pOVar2);
    method_00 = extraout_x1_00;
  }
  else {
    pOVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__HONFCKEHAGD(__this,pOVar2,FAGFGDBOLDP,in_x2);
    if (pOVar2 == (OOMHDDBCBJP_o *)0x0) {
      return;
    }
    *ppOVar1 = pOVar2;
    thunk_FUN_01c20e04(ppOVar1,pOVar2);
    EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_Map_ZoneScrollItem__LKLHLGLCEOM(__this,method_00);
  pSVar3 = (__this->fields).CGHGGKBEHIF;
  if (pSVar3 != (System_Action_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03448658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,*ppOVar1,(pSVar3->fields).super.super.method
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

