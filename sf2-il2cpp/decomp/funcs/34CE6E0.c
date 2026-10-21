// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$LIHMJBBBEPC @ RVA 0x34CE6E0

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__LIHMJBBBEPC
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar2;
  PLIIGOCLJDL_o *__this_00;
  JCFJFJCKLKG_o *DJFFMPLBCKC;
  BANPLPOPIGI_o *pBVar3;
  BANPLPOPIGI_o **ppBVar4;
  UnityEngine_GameObject_o *pUVar5;
  
  if ((DAT_04568698 & 1) == 0) {
    FUN_01bab630(&BANPLPOPIGI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568698 = 1;
  }
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
      if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar1,true,(MethodInfo *)0x0)
        ;
        pNVar2 = (__this->fields)._prevSeasonLeaderboard;
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Init
                    (pNVar2,(Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0,
                     (__this->fields)._loadMessage,(__this->fields)._loadCircle,
                     (__this->fields)._scroll,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
          if (__this_00 != (PLIIGOCLJDL_o *)0x0) {
            DJFFMPLBCKC = PLIIGOCLJDL__MACEOHOPNGP(__this_00,1,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._prevSeasonLeaderboard;
            pNVar1 = (__this->fields)._scroll;
            pUVar5 = (__this->fields)._cellPlayerPrefab;
            pBVar3 = (BANPLPOPIGI_o *)thunk_FUN_01bda818(BANPLPOPIGI_TypeInfo);
            BANPLPOPIGI___ctor(pBVar3,pNVar2,pNVar1,pUVar5,false,(MethodInfo *)0x0);
            ppBVar4 = &(__this->fields).KGCCGHDBPFM;
            *ppBVar4 = pBVar3;
            thunk_FUN_01c20e04(ppBVar4,pBVar3);
            pBVar3 = *ppBVar4;
            if (pBVar3 != (BANPLPOPIGI_o *)0x0) {
              (pBVar3->fields).FFLNLBEPNNH = 3;
              BANPLPOPIGI__LPNCEHPFOAF(pBVar3,DJFFMPLBCKC,(System_Action_o *)0x0,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._prevSeasonLeaderboard;
              if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) &&
                 (pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                 pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
                if (DJFFMPLBCKC != (JCFJFJCKLKG_o *)0x0) {
                  pNVar2 = (__this->fields)._prevSeasonLeaderboard;
                  if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0)
                  goto LAB_035ce858;
                  (pNVar2->fields).HOKHHIBHFBM = true;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_035ce858:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

