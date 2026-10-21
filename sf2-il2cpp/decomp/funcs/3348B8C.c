// Nekki.SF2.GUI.Map.ZoneScrollItem$$PNNGGAEAEIE @ RVA 0x3348B8C

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__PNNGGAEAEIE
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,Nekki_SF2_GUI_Map_BattleButton_o *MOIPALCHOPH,
          UnityEngine_Vector2_o FAGFGDBOLDP,MethodInfo *method)

{
  UnityEngine_Vector2_o LHHGNLJGDDD;
  bool bVar1;
  Il2CppObject *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_Collections_Generic_List_object__o *__this_01;
  System_Predicate_BattleButton__o **ppSVar3;
  System_Comparison_T__o *comparison;
  System_Predicate_BattleButton__o *match;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar4;
  System_Collections_Generic_List_BattleButton__o *collection;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 in_d2;
  undefined4 uVar8;
  UnityEngine_Vector3_o UVar9;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  
  uVar8 = (undefined4)((ulong)in_d2 >> 0x20);
  uVar7 = (undefined4)((ulong)register0x00005020 >> 0x20);
  if ((DAT_045679da & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK_JKKDMDHLGNA__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK_TypeInfo);
    FUN_01bab630(&System_Comparison<BattleButton>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BattleButton>_TypeInfo);
    FUN_01bab630(&System_Predicate<BattleButton>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_KPIFPIGJBCJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo);
    DAT_045679da = 1;
  }
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if ((MOIPALCHOPH != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)MOIPALCHOPH,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar9 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      *(float *)&__this_00[1].klass = UVar9.fields.x;
      *(float *)((long)&__this_00[1].klass + 4) = UVar9.fields.y;
      collection = (__this->fields).PGCBEJGMIMA;
      __this_01 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(UVar9.fields.x,CONCAT44(uVar7,UVar9.fields.y),
                                     CONCAT44(uVar8,UVar9.fields.z),
                                     System_Collections_Generic_List<BattleButton>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<BattleButton>__ctor__);
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__Remove
                  (__this_01,(Il2CppObject *)MOIPALCHOPH,
                   Method_System_Collections_Generic_List<BattleButton>_Remove__);
        if ((Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->static_fields->__9__38_0;
        if (match == (System_Predicate_BattleButton__o *)0x0) {
          if ((Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          match = (System_Predicate_BattleButton__o *)
                  thunk_FUN_01bda818(System_Predicate<BattleButton>_TypeInfo);
          System_Predicate<object>___ctor();
          ppSVar3 = &Nekki_SF2_GUI_Map_ZoneScrollItem_<>c_TypeInfo->static_fields->__9__38_0;
          *ppSVar3 = match;
          thunk_FUN_01c20e04(ppSVar3,match);
        }
        System_Collections_Generic_List<object>__RemoveAll
                  (__this_01,(System_Predicate_T__o *)match,
                   Method_System_Collections_Generic_List<BattleButton>_RemoveAll__);
        comparison = (System_Comparison_T__o *)
                     thunk_FUN_01bda818(System_Comparison<BattleButton>_TypeInfo);
        System_Comparison<object>___ctor();
        System_Collections_Generic_List<object>__Sort
                  (__this_01,comparison,Method_System_Collections_Generic_List<BattleButton>_Sort__)
        ;
        fVar5 = LFFOOBFIJHP__BHKAMEOBPEG(FAGFGDBOLDP,(MethodInfo *)0x0);
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,__this_01,
                   Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_88,
                             Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__
                            );
          pNVar4 = (Nekki_SF2_GUI_Map_BattleButton_o *)local_88.fields._current;
          if (!bVar1) {
            pNVar4 = (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
            break;
          }
          if ((Nekki_SF2_GUI_Map_BattleButton_o *)local_88.fields._current ==
              (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LHHGNLJGDDD.fields = (UnityEngine_Vector2_Fields)__this_00[1].klass;
          pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)local_88.fields._current,(MethodInfo *)0x0)
          ;
          if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar9 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
          fVar6 = LFFOOBFIJHP__EHFFMNBMNNF
                            (LHHGNLJGDDD,(UnityEngine_Vector2_o)UVar9.fields._0_8_,(MethodInfo *)0x0
                            );
        } while (50.0 <= ABS(fVar6 - fVar5));
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_88,
                   Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
        return pNVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

