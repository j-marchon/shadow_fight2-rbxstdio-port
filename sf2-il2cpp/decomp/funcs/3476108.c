// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$OnDestroy @ RVA 0x3476108

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  HCKCBFOGMMJ_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_04568329 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Clear__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_OHDOIFLJMMF__);
    DAT_04568329 = 1;
  }
                    /* try { // try from 03576164 to 03676173 has its CatchHandler @ 03576178 */
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03576174 to 0367617b has its CatchHandler @ 03575d7c */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03575fb8 with catch @ 03576178
                       catch() { ... } // from try @ 03576164 with catch @ 03576178 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0357617c to 0367617f has its CatchHandler @ 03576188 */
                    /* try { // try from 03576180 to 0367618b has its CatchHandler @ 03575d7c */
  __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  if (__this_00 != (HCKCBFOGMMJ_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0357617c with catch @ 03576188
                        */
                    /* try { // try from 0357618c to 0367630b has its CatchHandler @ 0357618c
                       catch() { ... } // from try @ 0357618c with catch @ 0357618c
                       catch() { ... } // from try @ 035763f4 with catch @ 0357618c
                       catch() { ... } // from try @ 035764b0 with catch @ 0357618c
                       catch() { ... } // from try @ 03576578 with catch @ 0357618c
                       catch() { ... } // from try @ 03576594 with catch @ 0357618c
                       catch() { ... } // from try @ 035766d8 with catch @ 0357618c */
    JICOLGELJGE<object>__OHDOIFLJMMF
              ((JICOLGELJGE_T__o *)__this_00,(Il2CppObject *)__this,
               Method_JICOLGELJGE<LFELBGMCDHD>_OHDOIFLJMMF__);
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).ODLKEJCKMPD;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int,_object>__Clear
                (pSVar1,Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_Clear__
                );
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).BGMOJHCPOND;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary<int,_object>__Clear
                  (pSVar1,
                   Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Clear__
                  );
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__StopFillPlayers(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

