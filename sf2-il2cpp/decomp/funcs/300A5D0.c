// Nekki.SF2.GUI.Shop.InfoPanelContent$$OJCGBHPFEOJ @ RVA 0x300A5D0

bool Nekki_SF2_GUI_Shop_InfoPanelContent__OJCGBHPFEOJ
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,
               MethodInfo *method)

{
  bool bVar1;
  DNELIPCHKLK_o *pDVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  DNELIPCHKLK_o **ppDVar3;
  DNELIPCHKLK_o *pDVar4;
  
  if ((DAT_04565b6e & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04565b6e = 1;
  }
  if (AAJBIMFNMBB != (PKHMIGFEJCL_o *)0x0) {
    ppDVar3 = &(AAJBIMFNMBB->fields).NMHCLFFOMJH;
    pDVar4 = *ppDVar3;
    pDVar2 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    *ppDVar3 = pDVar2;
    thunk_FUN_01c20e04(ppDVar3,pDVar2);
    (AAJBIMFNMBB->fields).PNPKEKHEMCD = StringLiteral_1;
    thunk_FUN_01c20e04();
    (AAJBIMFNMBB->fields).LOLFFJGLKLD = StringLiteral_1;
    thunk_FUN_01c20e04();
    (AAJBIMFNMBB->fields).CJLNOJMBNPN = (__this->fields).BBODGCMLKFP;
    thunk_FUN_01c20e04(&AAJBIMFNMBB->fields);
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (__this_00,0xc,(MethodInfo *)0x0);
      *ppDVar3 = pDVar4;
      thunk_FUN_01c20e04(ppDVar3,pDVar4);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

