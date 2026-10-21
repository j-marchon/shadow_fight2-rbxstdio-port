// Nekki.SF2.GUI.Map.ZoneScrollItem$$DMPINOLCLCB @ RVA 0x3347EC4

void Nekki_SF2_GUI_Map_ZoneScrollItem__DMPINOLCLCB
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *BANHBMINMMP;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  System_Collections_Generic_List_BattleButton__o *__this_04;
  undefined8 uVar6;
  MethodInfo *in_x2;
  MEJIKMPNBNL_o *pMVar7;
  Nekki_SF2_GUI_Map_BattleButton_array *pNVar8;
  OOMHDDBCBJP_o *pOVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  undefined1 auVar13 [16];
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = __this;
  if ((DAT_045679dd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    auVar13 = FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    DAT_045679dd = 1;
  }
  uVar6 = auVar13._0_8_;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pMVar7 = (__this->fields).IAJBEJGMIMM;
  if (pMVar7 != (MEJIKMPNBNL_o *)0x0) {
    __this_00 = (pMVar7->fields).BDCBJJGNPMC;
    uVar6 = 0;
    if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        do {
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                            );
          BANHBMINMMP = local_80.fields._current;
          if (!bVar4) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
            return;
          }
          if ((OOMHDDBCBJP_o *)local_80.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
          if ((((OOMHDDBCBJP_c *)(local_80.fields._current)->klass)->_2).naturalAligment < bVar1) {
            pOVar9 = (OOMHDDBCBJP_o *)0x0;
          }
          else {
            pOVar9 = (OOMHDDBCBJP_o *)local_80.fields._current;
            if ((((OOMHDDBCBJP_c *)(local_80.fields._current)->klass)->_2).typeHierarchy
                [(ulong)bVar1 - 1] != (Il2CppClass *)OHDDKGHEEPA_TypeInfo) {
              pOVar9 = (OOMHDDBCBJP_o *)0x0;
            }
          }
          iVar5 = OOMHDDBCBJP__NHGGBEACKBD
                            ((OOMHDDBCBJP_o *)local_80.fields._current,(MethodInfo *)0x0);
        } while (((iVar5 == 0xf) ||
                 (((OOMHDDBCBJP_Fields *)((long)BANHBMINMMP + 0x10))->CILMHNDFBPH != false)) ||
                ((pOVar9 != (OOMHDDBCBJP_o *)0x0 && (*(int *)&pOVar9[1].fields.LFJPDELEIHG == 1))));
        __this_01 = Nekki_SF2_GUI_Map_ZoneScrollItem__BEAPAMLLBOM
                              (__this,(OOMHDDBCBJP_o *)BANHBMINMMP,in_x2);
        if (__this_01 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        fVar10 = (((OOMHDDBCBJP_Fields *)((long)BANHBMINMMP + 0x10))->BBCFCIAPOKE).fields.x;
        fVar11 = (((OOMHDDBCBJP_Fields *)((long)BANHBMINMMP + 0x10))->BBCFCIAPOKE).fields.y;
        __this_03 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_Transform_o *)0x0) break;
        UVar12 = UnityEngine_Transform__get_localPosition(__this_03,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(UVar12.fields.x,UVar12.fields.y);
        }
        UVar12.fields.y = fVar11 + fVar11;
        UVar12.fields.x = fVar10 + fVar10;
        UnityEngine_Transform__set_localPosition(__this_02,UVar12,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<BattleButton>_Add__;
        __this_04 = (__this->fields).PGCBEJGMIMA;
        if (__this_04 == (System_Collections_Generic_List_BattleButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pNVar8 = (__this_04->fields)._items;
        (__this_04->fields)._version = (__this_04->fields)._version + 1;
        if (pNVar8 == (Nekki_SF2_GUI_Map_BattleButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pNVar8->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pNVar8->m_Items[(int)uVar2] = __this_01;
          thunk_FUN_01c20e04(pNVar8->m_Items + (int)uVar2,__this_01);
        }
        else {
          in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,
                     (Il2CppObject *)__this_01,(MethodInfo_26E4DAC *)in_x2);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar6,auVar13._8_8_);
}

