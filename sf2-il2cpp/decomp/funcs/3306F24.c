// Nekki.SF2.Core.Quests.QuestsManager$$AddActionQuest @ RVA 0x3306F24

void Nekki_SF2_Core_Quests_QuestsManager__AddActionQuest
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,
               System_Collections_Generic_List_FPPKHNNABAD__o *IHBNELGLLEB,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  FPPKHNNABAD_o *__this_00;
  PKHMIGFEJCL_o *pPVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  KCFIOKDFHIB_o *JMCEAKJCJLH;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567763 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
                    /* try { // try from 03406f5c to 03506f87 has its CatchHandler @ 03407254 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    DAT_04567763 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IHBNELGLLEB != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    method_01 = Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__;
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)IHBNELGLLEB,0,
                        (MethodInfo_26E4ADC *)
                        Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    if (pIVar2 != (Il2CppObject *)0x0) {
      if (pIVar2[2].klass != (Il2CppClass *)0x0) {
        method_01 = Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__;
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)IHBNELGLLEB,0,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
                    /* try { // try from 03406fcc to 03506fd3 has its CatchHandler @ 03407240 */
        if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[2].klass == (Il2CppClass *)0x0))
        goto LAB_034070b4;
        JMCEAKJCJLH = (KCFIOKDFHIB_o *)((pIVar2[2].klass)->_1).name;
                    /* try { // try from 03406fdc to 03506fe3 has its CatchHandler @ 03407244 */
        if (JMCEAKJCJLH != (KCFIOKDFHIB_o *)0x0) {
                    /* try { // try from 03406fe4 to 03506fef has its CatchHandler @ 03407250 */
          __this_00 = (FPPKHNNABAD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)IHBNELGLLEB,0,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
                    /* try { // try from 03406ff0 to 03507217 has its CatchHandler @ 03406d98 */
          if (__this_00 == (FPPKHNNABAD_o *)0x0) goto LAB_034070b4;
          method_01 = (MethodInfo *)0x0;
          pPVar3 = FPPKHNNABAD__LGJMJMJJGIM(__this_00,JMCEAKJCJLH,(MethodInfo *)0x0);
          (__this->fields).QuestParameters = pPVar3;
          thunk_FUN_01c20e04();
        }
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)IHBNELGLLEB,
                 Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__
                          );
        pIVar2 = local_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
          Nekki_SF2_Core_Quests_QuestsManager__PHHDBNIKFDK(__this,method_00);
          return;
        }
        if ((FPPKHNNABAD_o *)local_48.fields._current == (FPPKHNNABAD_o *)0x0) break;
        if ((((FPPKHNNABAD_Fields *)((long)local_48.fields._current + 0x10))->
             _FIEEJDGCLKH_k__BackingField != (MEMHEPBAJJA_o *)0x0) &&
           (bVar1 = Nekki_SF2_Core_Quests_QuestsManager__HGKKAHIMGFI
                              (__this,(FPPKHNNABAD_o *)local_48.fields._current,method_01), !bVar1))
        {
          method_01 = (MethodInfo *)0x0;
          FPPKHNNABAD__MLKGFGDCLIF
                    ((FPPKHNNABAD_o *)pIVar2,(__this->fields).QuestParameters,(MethodInfo *)0x0);
          Nekki_SF2_Core_Quests_QuestsManager__LFENGGKOJDO(__this,(FPPKHNNABAD_o *)pIVar2,method_01)
          ;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_034070b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

