// Nekki.SF2.GUI.Profile.SealsController$$BACIFGCANEA @ RVA 0x311E530

void Nekki_SF2_GUI_Profile_SealsController__BACIFGCANEA
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  GGHCLMEFIGO_o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar5;
  ACHLOMELAJE_o *pAVar6;
  IGFGDDANEPE_array *pIVar7;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456660d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11751);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456660d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields).BMEJJFBFFIH;
  if (pSVar5 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    iVar4 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < iVar4) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar4,(MethodInfo *)0x0);
    }
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
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
        (__this_00 = (pAVar6->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) &&
       (pSVar5 = GGHCLMEFIGO__IAHEDEMPGPE
                           (__this_00,StringLiteral_11751,StringLiteral_1,true,(MethodInfo *)0x0),
       pSVar5 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                            );
          item = local_50.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
            return;
          }
          if ((IGFGDDANEPE_o *)local_50.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar4 = IGFGDDANEPE__LDJLMEFOMLG
                            ((IGFGDDANEPE_o *)local_50.fields._current,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
        } while (iVar4 < 1);
        pSVar5 = (__this->fields).BMEJJFBFFIH;
        if (pSVar5 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pIVar7 == (IGFGDDANEPE_array *)0x0) break;
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pIVar7->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pIVar7->m_Items[(int)uVar1] = (IGFGDDANEPE_o *)item;
          thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

