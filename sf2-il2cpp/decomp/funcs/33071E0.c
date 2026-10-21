// Nekki.SF2.Core.Quests.QuestsManager$$IsQuestForEventTypeInQueue @ RVA 0x33071E0

bool Nekki_SF2_Core_Quests_QuestsManager__IsQuestForEventTypeInQueue
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t FGCDFELEGGN,MethodInfo *method
               )

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  Il2CppClass *a;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567767 & 1) == 0) {
                    /* try { // try from 03407218 to 0350721f has its CatchHandler @ 0340725c */
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<FPPKHNNABAD>__);
                    /* try { // try from 03407220 to 03507223 has its CatchHandler @ 0340724c */
                    /* try { // try from 03407224 to 03507227 has its CatchHandler @ 03407248 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
                    /* try { // try from 03407228 to 0350722b has its CatchHandler @ 03406d98 */
                    /* try { // try from 0340722c to 0350722f has its CatchHandler @ 03407238 */
                    /* try { // try from 03407230 to 0350726b has its CatchHandler @ 03406d98 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340722c with catch @ 03407238
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406fcc with catch @ 03407240
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406fdc with catch @ 03407244
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03407224 with catch @ 03407248
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03407220 with catch @ 0340724c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406fe4 with catch @ 03407250
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406f5c with catch @ 03407254
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406f00 with catch @ 03407258
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03407218 with catch @ 0340725c
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    DAT_04567767 = 1;
  }
                    /* try { // try from 0340726c to 0350726f has its CatchHandler @ 03407280 */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).GOAJEJNPDFA,
                     Method_DJNBJHPDKDP_OBECCOPBADO<FPPKHNNABAD>__);
                    /* catch() { ... } // from try @ 0340726c with catch @ 03407280 */
  if (bVar1) {
    bVar1 = false;
                    /* try { // try from 03407288 to 035072ef has its CatchHandler @ 03407304 */
  }
  else {
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__GetQuests(__this,FGCDFELEGGN,method);
    __this_01 = (__this->fields).GOAJEJNPDFA;
    if (__this_01 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__
                             ), bVar1) {
                    /* try { // try from 034072f0 to 035072fb has its CatchHandler @ 03406d98 */
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_00 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034072fc to 03507303 has its CatchHandler @ 03407304 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03407288 with catch @ 03407304
                       catch(type#2 @ 00000000) { ... } // from try @ 034072fc with catch @ 03407304
                        */
      if (0 < (__this_00->fields)._size) {
        a = local_60.fields._current[1].klass;
        iVar4 = 0;
        do {
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,iVar4,
                              Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
          if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            ((System_String_o *)a,(System_String_o *)pIVar3[1].klass,
                             (MethodInfo *)0x0);
          if (bVar2) {
            iVar4 = 8;
            goto LAB_03407350;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (__this_00->fields)._size);
      }
    }
    iVar4 = 9;
LAB_03407350:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
    bVar1 = bVar1 && iVar4 == 8;
  }
  return bVar1;
}

