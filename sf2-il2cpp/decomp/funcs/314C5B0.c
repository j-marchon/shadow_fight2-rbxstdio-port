// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$NCDOMAGEGCF @ RVA 0x314C5B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__NCDOMAGEGCF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  System_Collections_Generic_List_GKLPDMLELJF__o *__this_01;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  UnityEngine_Component_o *__this_02;
  EEGDOGKBLNG_o *__this_03;
  int64_t iVar3;
  int index;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *pNVar4;
  long lVar5;
  
  if ((DAT_045667d2 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ClanRaidPartyPlayerCell>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ClanRaidPartyPlayerCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045667d2 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).PDHMLFAMNCO;
    if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar2,(MethodInfo *)0x0);
      __this_01 = (__this->fields).IAODMBPIAOC;
      if (__this_01 != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) {
        index = 0;
        do {
          if ((__this_01->fields)._size <= index) {
            return;
          }
          HEHMPFLAEGE = (GKLPDMLELJF_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_01,index,
                                   Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Item__);
          pNVar4 = (__this->fields).KFCHMBGIPJK;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          __this_02 = (UnityEngine_Component_o *)
                      UnityEngine_Object__Instantiate<object>
                                ((Il2CppObject *)pNVar4,
                                 Method_UnityEngine_Object_Instantiate<ClanRaidPartyPlayerCell>__);
          if ((__this_02 == (UnityEngine_Component_o *)0x0) ||
             (pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *)
                       UnityEngine_Component__GetComponent<object>
                                 (__this_02,
                                  Method_UnityEngine_Component_GetComponent<ClanRaidPartyPlayerCell>__
                                 ),
             pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *)0x0)) break;
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__Init
                    (pNVar4,HEHMPFLAEGE,(MethodInfo *)0x0);
          if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
            if ((__this->fields).CBFOBEFKNJG == false) {
              bVar1 = false;
            }
            else {
              lVar5 = (HEHMPFLAEGE->fields).ANAJGHJEEOC;
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
              if (__this_03 == (EEGDOGKBLNG_o *)0x0) break;
              iVar3 = EEGDOGKBLNG__APCMGOCHMGC(__this_03,(MethodInfo *)0x0);
              bVar1 = lVar5 != iVar3;
            }
            Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__SetKickable
                      (pNVar4,bVar1,(MethodInfo *)0x0);
          }
          pNVar2 = (__this->fields).PDHMLFAMNCO;
          if (pNVar2 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) break;
          Nekki_SF2_GUI_SimpleScroll__AddItem
                    (pNVar2,(Nekki_SF2_GUI_BaseScrollItem_o *)pNVar4,true,(MethodInfo *)0x0);
          __this_01 = (__this->fields).IAODMBPIAOC;
          index = index + 1;
        } while (__this_01 != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

