// BANPLPOPIGI$$MEFLMPHJJCE @ RVA 0x33C7A74

int32_t BANPLPOPIGI__MEFLMPHJJCE(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar1;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_04567dff & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    DAT_04567dff = 1;
  }
  pSVar1 = (__this->fields).JKBONEFMACI;
  if (pSVar1 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
    index = 0;
    do {
      if ((pSVar1->fields)._size <= index) {
        return -1;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                         );
      if (pIVar2 != (Il2CppObject *)0x0) {
        pSVar1 = (__this->fields).JKBONEFMACI;
        if ((pSVar1 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
           || (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                   Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                                  ), pIVar2 == (Il2CppObject *)0x0)) break;
        if (*(char *)((long)&pIVar2[2].klass + 4) != '\0') {
          return index;
        }
      }
      pSVar1 = (__this->fields).JKBONEFMACI;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
    ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

