// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$ODGHIBFMFAG @ RVA 0x3028900

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__ODGHIBFMFAG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04565ca1 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Count__);
    DAT_04565ca1 = 1;
  }
  iVar2 = (__this->fields).DIONJIKONHC;
  pSVar3 = (__this->fields).KPKPCPFOGAP;
  iVar1 = iVar2 + 1;
  (__this->fields).OLECEBGAGMI = iVar2;
  (__this->fields).DIONJIKONHC = iVar1;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    if ((pSVar3->fields)._size == iVar1) {
      (__this->fields).DIONJIKONHC = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

