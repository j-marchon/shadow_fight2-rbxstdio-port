// Nekki.SF2.Core.Quests.QuestsManager$$GetQuestByName @ RVA 0x33061B0

FPPKHNNABAD_o *
Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
          (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *HBDNGIDONHG,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  FPPKHNNABAD_o *pFVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  
  if ((DAT_04567756 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Find__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP_JGKPIIALJJN__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP_TypeInfo);
    FUN_01bab630(&System_Predicate<FPPKHNNABAD>_TypeInfo);
    DAT_04567756 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)HBDNGIDONHG;
    thunk_FUN_01c20e04(__this_00 + 1,HBDNGIDONHG);
    __this_01 = (__this->fields).QuestsAll;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FPPKHNNABAD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
      pFVar1 = (FPPKHNNABAD_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<FPPKHNNABAD>_Find__);
      return pFVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

