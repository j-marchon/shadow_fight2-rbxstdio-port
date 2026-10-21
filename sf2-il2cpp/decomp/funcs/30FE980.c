// AGILEPNENOH$$DGLJCGNHLIG @ RVA 0x30FE980

void AGILEPNENOH__DGLJCGNHLIG(bool EMJBGFAHADK,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  long lVar3;
  Nekki_SF2_GUI_Map_InfoBattle_o *pNVar4;
  System_Collections_Generic_List_AGILEPNENOH__o *__this;
  Nekki_Utils_GlobalTimer_o *__this_00;
  int64_t iVar5;
  ACHLOMELAJE_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  AGILEPNENOH_c *pAVar6;
  UnityEngine_Object_o *pUVar7;
  OOMHDDBCBJP_o *BANHBMINMMP;
  undefined1 auVar8 [16];
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045664ac & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_get_Current__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGILEPNENOH>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045664ac = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  auVar8._8_8_ = method;
  auVar8._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar8 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar8._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar8._8_8_);
  }
  pUVar7 = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  BANHBMINMMP = (OOMHDDBCBJP_o *)0x0;
  if (bVar2) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((**(long **)(lVar3 + 0xb8) == 0) ||
       (pNVar4 = *(Nekki_SF2_GUI_Map_InfoBattle_o **)(**(long **)(lVar3 + 0xb8) + 0xd0),
       pNVar4 == (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0)) goto LAB_031fecd8;
    BANHBMINMMP = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(pNVar4,(MethodInfo *)0x0);
  }
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = AGILEPNENOH_TypeInfo->static_fields->DEKLKEHGJEB;
  if (__this != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<AGILEPNENOH>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_MoveNext__);
      pIVar1 = local_70.fields._current;
      if (!bVar2) break;
      if ((AGILEPNENOH_o *)local_70.fields._current == (AGILEPNENOH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      AGILEPNENOH__CNNNGNLGHHJ((AGILEPNENOH_o *)local_70.fields._current,EMJBGFAHADK,method_00);
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
      if (__this_00 == (Nekki_Utils_GlobalTimer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar5 = Nekki_Utils_GlobalTimer__GetTime(__this_00,(MethodInfo *)0x0);
      pAVar6 = (AGILEPNENOH_c *)pIVar1->klass;
      method_00 = (pAVar6->vtable)._18_NCENBOMEPBN.method;
      (*(pAVar6->vtable)._18_NCENBOMEPBN.methodPtr)(pIVar1,iVar5);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<AGILEPNENOH>_Dispose__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__EFMHMBBCBGM(__this_01,0,(MethodInfo *)0x0);
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      pUVar7 = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        if ((**(long **)(lVar3 + 0xb8) == 0) ||
           (pNVar4 = *(Nekki_SF2_GUI_Map_InfoBattle_o **)(**(long **)(lVar3 + 0xb8) + 0xd0),
           pNVar4 == (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0)) goto LAB_031fecd8;
        Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(pNVar4,BANHBMINMMP,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_031fecd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

