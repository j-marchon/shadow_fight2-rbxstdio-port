// Nekki.SF2.GUI.Map.ZoneScrollItem$$OnDestroy @ RVA 0x334849C

void Nekki_SF2_GUI_Map_ZoneScrollItem__OnDestroy
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BattleButton__o *__this_00;
  Il2CppObject *pIVar1;
  int index;
  
  if ((DAT_045679d4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Item__);
    DAT_045679d4 = 1;
  }
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        (__this->fields).CGHGGKBEHIF = (System_Action_OOMHDDBCBJP__o *)0x0;
        thunk_FUN_01c20e04(&(__this->fields).CGHGGKBEHIF,0);
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<BattleButton>_get_Item__);
      if ((pIVar1 == (Il2CppObject *)0x0) || (pIVar1[0x10].klass == (Il2CppClass *)0x0)) break;
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pIVar1[0x10].klass,(MethodInfo *)0x0);
      __this_00 = (__this->fields).PGCBEJGMIMA;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

