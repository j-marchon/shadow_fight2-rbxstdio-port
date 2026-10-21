// Nekki.SF2.GUI.Map.ZoneScrollItem$$MHGPPDDCAPI @ RVA 0x33481B0

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__MHGPPDDCAPI
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar2;
  System_Collections_Generic_List_BattleButton__o *pSVar3;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  int index;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045679d3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_set_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5419);
    DAT_045679d3 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pNVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,BANHBMINMMP,method);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_5419,(MethodInfo *)0x0);
    return (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
  }
  pSVar3 = (__this->fields).PGCBEJGMIMA;
  if (pSVar3 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    index = 0;
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__
                             ), x = local_70.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0)
      ;
      if (bVar1) break;
      index = index + 1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    if (pNVar2 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      pNVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__BEAPAMLLBOM(__this,BANHBMINMMP,method_00);
      if ((pNVar2 != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         BANHBMINMMP != (OOMHDDBCBJP_o *)0x0)) {
        fVar4 = (BANHBMINMMP->fields).BBCFCIAPOKE.fields.x;
        fVar5 = (BANHBMINMMP->fields).BBCFCIAPOKE.fields.y;
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UVar6 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UVar6.fields.y = fVar5 + fVar5;
            UVar6.fields.x = fVar4 + fVar4;
            UnityEngine_Transform__set_localPosition(__this_00,UVar6,(MethodInfo *)0x0);
            bVar1 = OOMHDDBCBJP__EFLKILFFJKH(BANHBMINMMP,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_BattleButton__set_Hidden(pNVar2,bVar1,(MethodInfo *)0x0);
            pSVar3 = (__this->fields).PGCBEJGMIMA;
            if (pSVar3 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
              System_Collections_Generic_List<object>__set_Item
                        ((System_Collections_Generic_List_object__o *)pSVar3,index,
                         (Il2CppObject *)pNVar2,
                         Method_System_Collections_Generic_List<BattleButton>_set_Item__);
              return pNVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

