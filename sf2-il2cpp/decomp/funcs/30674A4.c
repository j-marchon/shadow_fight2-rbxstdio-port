// ACHLOMELAJE$$HHLHDCPKLON @ RVA 0x30674A4

MEMHEPBAJJA_HIAEDCDJJDJ_o *
ACHLOMELAJE__HHLHDCPKLON(ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  
  if ((DAT_04565ef1 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Item__
                );
    DAT_04565ef1 = 1;
  }
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    pMVar2 = Nekki_SF2_Core_Quests_QuestsManager__GetLocalVariable
                       (__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    if (pMVar2 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
      return pMVar2;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).MAIMKHHEANI
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                         Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                        );
      if (bVar1) {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).MAIMKHHEANI;
      }
      else {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).NMJCKHHGODA;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03167578;
        bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                           Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                          );
        if (!bVar1) {
          return (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).NMJCKHHGODA;
      }
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar2 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                            Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Item__
                           );
        return pMVar2;
      }
    }
  }
LAB_03167578:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

