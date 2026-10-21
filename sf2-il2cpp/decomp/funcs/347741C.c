// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$.ctor @ RVA 0x347741C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456832f & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__ctor__
                );
                    /* try { // try from 03577498 to 036777ab has its CatchHandler @ 03577498
                       catch() { ... } // from try @ 03577498 with catch @ 03577498
                       catch() { ... } // from try @ 03577910 with catch @ 03577498
                       catch() { ... } // from try @ 03577a5c with catch @ 03577498
                       catch() { ... } // from try @ 03577a8c with catch @ 03577498
                       catch() { ... } // from try @ 03577b00 with catch @ 03577498
                       catch() { ... } // from try @ 03577b08 with catch @ 03577498
                       catch() { ... } // from try @ 03577b60 with catch @ 03577498
                       catch() { ... } // from try @ 03577ba0 with catch @ 03577498
                       catch() { ... } // from try @ 03577c48 with catch @ 03577498 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_TypeInfo
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_Selectable_TypeInfo);
    DAT_0456832f = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_TypeInfo
                              ,method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>__ctor__);
  (__this->fields).OCKAMMNDKCJ =
       (System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).OCKAMMNDKCJ,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>__ctor__);
  (__this->fields).ODLKEJCKMPD =
       (System_Collections_Generic_Dictionary_int__List_KGBIBHEFBHA___o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).ODLKEJCKMPD,pSVar1);
  __this_00 = (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__);
  (__this->fields).JKBONEFMACI = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).JKBONEFMACI,__this_00);
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__ctor__
            );
  (__this->fields).BGMOJHCPOND =
       (System_Collections_Generic_Dictionary_int__List_RaidLeaguesLeaderboard_OIMJFDFDMMM___o *)
       pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).BGMOJHCPOND,pSVar1);
  if ((UnityEngine_UI_Selectable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  return;
}

