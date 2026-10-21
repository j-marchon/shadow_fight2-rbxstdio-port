// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$MGLJMKKFNKK @ RVA 0x3176634

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__MGLJMKKFNKK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  NDPMLPGANCI_o *pNVar2;
  EEOMEMBBGNA_o *pEVar3;
  System_Action_NLFLMJPNOLF__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *pNVar4;
  OHDDKGHEEPA_o *__this_00;
  CJFBGEEIPBA_o *__this_01;
  
                    /* try { // try from 03276638 to 0337663f has its CatchHandler @ 0327665c */
                    /* try { // try from 03276640 to 03376643 has its CatchHandler @ 03276270 */
                    /* try { // try from 03276644 to 03376647 has its CatchHandler @ 03276650 */
                    /* try { // try from 03276648 to 0337667f has its CatchHandler @ 03276270 */
  if ((DAT_04566958 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276644 with catch @ 03276650
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276578 with catch @ 03276654
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276524 with catch @ 03276658
                        */
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276638 with catch @ 0327665c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276628 with catch @ 03276660
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276448 with catch @ 03276664
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_BODABJMGNDG__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032763ec with catch @ 03276668
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276630 with catch @ 0327666c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032764b0 with catch @ 03276670
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03276680 to 03376683 has its CatchHandler @ 03276694 */
    FUN_01bab630(&StringLiteral_4857);
    DAT_04566958 = 1;
  }
                    /* catch() { ... } // from try @ 03276680 with catch @ 03276694 */
  pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0327669c to 03376703 has its CatchHandler @ 03276718 */
  if (pNVar2 != (NDPMLPGANCI_o *)0x0) {
    iVar1 = NDPMLPGANCI__FFIOCEOHPEM(pNVar2,(MethodInfo *)0x0);
    if (iVar1 != 5) {
      pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar2 == (NDPMLPGANCI_o *)0x0) goto LAB_032767a8;
      NDPMLPGANCI__EKPAFDJIAGI
                (pNVar2,5,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,(MethodInfo *)0x0)
      ;
    }
    pNVar4 = (__this->fields).IOOHHPDCNCM;
    if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
      __this_00 = (pNVar4->fields)._battle;
      if (__this_00 == (OHDDKGHEEPA_o *)0x0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_4857,(MethodInfo *)0x0);
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar3 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 03276704 to 0337670f has its CatchHandler @ 03276270 */
      if (pEVar3 != (EEOMEMBBGNA_o *)0x0) {
                    /* try { // try from 03276710 to 03376717 has its CatchHandler @ 03276718 */
        __this_01 = (pEVar3->fields).GMNJEBCECDA;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0327669c with catch @ 03276718
                       catch(type#2 @ 00000000) { ... } // from try @ 03276710 with catch @ 03276718
                        */
        iVar1 = OHDDKGHEEPA__DCAKAGILMOF(__this_00,(MethodInfo *)0x0);
        IELDNEAAPBE = (System_Action_NLFLMJPNOLF__o *)
                      thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (CJFBGEEIPBA_o *)0x0) {
          CJFBGEEIPBA__JHMPJEBHKMP(__this_01,iVar1,IELDNEAAPBE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_032767a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

