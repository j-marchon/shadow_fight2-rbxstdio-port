// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$HBCBPCIJJJB @ RVA 0x34813B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__HBCBPCIJJJB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,bool NBLGPIMANHP,
               MethodInfo *method)

{
  System_Comparison_IFFFKKMMKFO__o *NGDCHEBEAJK;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_00;
  IFFFKKMMKFO_o *CIBAPJNKHGA;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  MethodInfo *pMVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  CNIFAIKGHKO_o *pCVar2;
  int index;
  
  pMVar1 = (MethodInfo *)(ulong)NBLGPIMANHP;
                    /* catch() { ... } // from try @ 03581380 with catch @ 035813bc
                       catch() { ... } // from try @ 035813b4 with catch @ 035813bc */
  if ((DAT_04568382 & 1) == 0) {
    FUN_01bab630(&System_Comparison<IFFFKKMMKFO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_ALGBNCBBIHJ__);
    DAT_04568382 = 1;
    pMVar1 = extraout_x1;
  }
  if (NBLGPIMANHP) {
    pCVar2 = (__this->fields).JECONAHEKIN;
    NGDCHEBEAJK = (System_Comparison_IFFFKKMMKFO__o *)
                  thunk_FUN_01bda818(System_Comparison<IFFFKKMMKFO>_TypeInfo);
    System_Comparison<object>___ctor();
    if (pCVar2 == (CNIFAIKGHKO_o *)0x0) goto LAB_03581518;
    CNIFAIKGHKO__AOFMCBBKHEE(pCVar2,NGDCHEBEAJK,true,(MethodInfo *)0x0);
    pMVar1 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__BFAFJLCDLGC(__this,pMVar1);
  pCVar2 = (__this->fields).JECONAHEKIN;
  if ((pCVar2 != (CNIFAIKGHKO_o *)0x0) &&
     (__this_00 = CNIFAIKGHKO__ACBMLHJIFMD(pCVar2,(MethodInfo *)0x0),
     __this_00 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0)) {
                    /* try { // try from 03581488 to 0368192f has its CatchHandler @ 03581488
                       catch() { ... } // from try @ 03581488 with catch @ 03581488
                       catch() { ... } // from try @ 035828b0 with catch @ 03581488
                       catch() { ... } // from try @ 035829b8 with catch @ 03581488
                       catch() { ... } // from try @ 035829c0 with catch @ 03581488
                       catch() { ... } // from try @ 03582db8 with catch @ 03581488 */
    pMVar1 = extraout_x1_01;
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        pMVar1 = Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__;
        CIBAPJNKHGA = (IFFFKKMMKFO_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
        if ((CIBAPJNKHGA == (IFFFKKMMKFO_o *)0x0) ||
           (__this_01 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GDHOEDANABL
                                  (__this,(CIBAPJNKHGA->fields)._IPNPNPOLCFO_k__BackingField,pMVar1)
           , __this_01 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)0x0)) goto LAB_03581518;
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__Init
                  (__this_01,CIBAPJNKHGA,(__this->fields)._scroll,(MethodInfo *)0x0);
        __this_02 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Transform_o *)0x0) goto LAB_03581518;
        UnityEngine_Transform__SetSiblingIndex(__this_02,index,(MethodInfo *)0x0);
        index = index + 1;
        pMVar1 = extraout_x1_02;
      } while (index < (__this_00->fields)._size);
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ELGDDCNOLJL(__this,pMVar1);
    return;
  }
LAB_03581518:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

