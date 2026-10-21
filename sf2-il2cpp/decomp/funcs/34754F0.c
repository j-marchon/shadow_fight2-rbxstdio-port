// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$LKBALCKCEEJ @ RVA 0x34754F0

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LKBALCKCEEJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               JMDPBFOCHHP_HKDMLOKOJPH_o *EMPKHNEPHPO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  
  if ((DAT_04568327 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Values__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Contains<JMDPBFOCHHP_HKDMLOKOJPH>__);
    DAT_04568327 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).OCKAMMNDKCJ;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    source = System_Collections_Generic_Dictionary<int,_object>__get_Values
                       (__this_00,
                        Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Values__
                       );
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (Il2CppObject *)EMPKHNEPHPO,
                       Method_System_Linq_Enumerable_Contains<JMDPBFOCHHP_HKDMLOKOJPH>__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

