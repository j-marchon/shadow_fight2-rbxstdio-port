// ACHLOMELAJE$$HKIEGNBOFCD @ RVA 0x3061928

MEMHEPBAJJA_HIAEDCDJJDJ_o *
ACHLOMELAJE__HKIEGNBOFCD
          (ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,int32_t BFGGBPNAMBD,MethodInfo *method
          )

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *__this_01;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  
                    /* try { // try from 03161948 to 0326196f has its CatchHandler @ 03161a98 */
  if ((DAT_04565ed3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Remove__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    DAT_04565ed3 = 1;
  }
  if (BFGGBPNAMBD == 0) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NMJCKHHGODA
    ;
    pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03161b50;
                    /* try { // try from 031619ec to 032619f7 has its CatchHandler @ 03161a8c */
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                      );
    if (!bVar1) {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).MAIMKHHEANI;
      pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                           Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                          );
        if (!bVar1) {
          return (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).MAIMKHHEANI;
        pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
        if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* try { // try from 03161a74 to 03261a77 has its CatchHandler @ 03161a90 */
                    /* try { // try from 03161a78 to 03261a7b has its CatchHandler @ 03161838 */
          __this_01 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)
                      System_Collections_Generic_Dictionary<object,_object>__get_Item
                                (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Item__
                                );
                    /* try { // try from 03161a7c to 03261a7f has its CatchHandler @ 03161a88 */
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).MAIMKHHEANI;
                    /* try { // try from 03161a80 to 03261aa7 has its CatchHandler @ 03161838 */
          pMVar2 = __this_01;
          if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03161a7c with catch @ 03161a88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031619ec with catch @ 03161a8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03161a74 with catch @ 03161a90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031619a4 with catch @ 03161a94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03161948 with catch @ 03161a98
                        */
            bVar1 = System_Collections_Generic_Dictionary<object,_object>__Remove
                              (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                               Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Remove__
                              );
            pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)(ulong)bVar1;
            if (__this_01 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
                    /* try { // try from 03161aa8 to 03261aab has its CatchHandler @ 03161abc */
              MEMHEPBAJJA_HIAEDCDJJDJ__HDHFINMNJCC(__this_01,(MethodInfo *)0x0);
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).NMJCKHHGODA;
              pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* catch() { ... } // from try @ 03161aa8 with catch @ 03161abc */
                System_Collections_Generic_Dictionary<object,_object>__Add
                          (pSVar3,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject *)__this_01,
                           Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Add__
                          );
                CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
                return (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
              }
            }
          }
        }
      }
      goto LAB_03161b50;
    }
  }
  else {
                    /* try { // try from 031619a4 to 032619cb has its CatchHandler @ 03161a94 */
    if (BFGGBPNAMBD != 1) {
      if (BFGGBPNAMBD != 2) {
        return (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
      }
      __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
      if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        pMVar2 = Nekki_SF2_Core_Quests_QuestsManager__GetLocalVariable
                           (__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
        return pMVar2;
      }
      goto LAB_03161b50;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).MAIMKHHEANI
    ;
    pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03161b50;
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                      );
    if (bVar1) {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).MAIMKHHEANI;
      pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03161b50;
      goto LAB_03161a28;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NMJCKHHGODA
    ;
    pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03161b50;
                    /* try { // try from 03161af4 to 03261b1b has its CatchHandler @ 03161b30 */
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                      );
    if (!bVar1) {
      return (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
    }
    pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FBOGNJINOIF;
    pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
    if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03161b50;
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar4,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    if (!bVar1) {
                    /* try { // try from 03161b1c to 03261b27 has its CatchHandler @ 03161838 */
      pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FBOGNJINOIF;
      pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
      if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03161b50;
                    /* try { // try from 03161b28 to 03261b2f has its CatchHandler @ 03161b30 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03161af4 with catch @ 03161b30
                       catch(type#2 @ 00000000) { ... } // from try @ 03161b28 with catch @ 03161b30
                        */
      System_Collections_Generic_HashSet<object>__Add
                (pSVar4,(Il2CppObject *)KGLJICLJHEL,
                 Method_System_Collections_Generic_HashSet<string>_Add__);
    }
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NMJCKHHGODA;
                    /* try { // try from 031619f8 to 03261a73 has its CatchHandler @ 03161838 */
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03161a28:
    pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Item
                       (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                        Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Item__
                       );
    return pMVar2;
  }
  pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
LAB_03161b50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pMVar2);
}

