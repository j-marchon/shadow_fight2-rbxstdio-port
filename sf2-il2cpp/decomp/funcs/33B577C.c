// GGHCLMEFIGO$$AFPDMLCLGJM @ RVA 0x33B577C

void GGHCLMEFIGO__AFPDMLCLGJM(GGHCLMEFIGO_o *__this,IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  GGHCLMEFIGO_OLAINNIFOGG_o *__this_01;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  PKHMIGFEJCL_o *pPVar7;
  ACHLOMELAJE_o *pAVar8;
  IGFGDDANEPE_array *pIVar9;
  
  if ((DAT_04567d6e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_Invoke__);
    DAT_04567d6e = 1;
  }
  if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
    return;
  }
  bVar3 = IGFGDDANEPE__DABHOGHGNBB(ENHJPOHLMCL,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
  if (bVar3) {
    __this_00 = (__this->fields).JAKMLPIMLCK;
  }
  else {
    __this_00 = (__this->fields).MKPLNDNGHEB;
  }
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    pIVar9 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar9 != (IGFGDDANEPE_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pIVar9->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pIVar9->m_Items[(int)uVar1] = ENHJPOHLMCL;
        thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar1,ENHJPOHLMCL);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)ENHJPOHLMCL,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      __this_01 = (__this->fields).JCCJCOCADKI;
      if (__this_01 != (GGHCLMEFIGO_OLAINNIFOGG_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(Il2CppObject *)ENHJPOHLMCL,
                   Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_Invoke__);
        pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if ((pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
           (pPVar7 = (pNVar6->fields).QuestParameters, pPVar7 != (PKHMIGFEJCL_o *)0x0)) {
          (pPVar7->fields).CJLNOJMBNPN = (ENHJPOHLMCL->fields).PCBECBEFJOI;
          thunk_FUN_01c20e04();
          pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar6,0xe,(MethodInfo *)0x0);
            iVar4 = IGFGDDANEPE__LDJLMEFOMLG(ENHJPOHLMCL,(MethodInfo *)0x0);
            if (iVar4 < 1) {
              IGFGDDANEPE__PICGGLNNJFA(ENHJPOHLMCL,1,(MethodInfo *)0x0);
              IGFGDDANEPE__DOOKHLFKCAI(ENHJPOHLMCL,-1,(MethodInfo *)0x0);
            }
            iVar4 = IGFGDDANEPE__IJNIFKFEGND(ENHJPOHLMCL,(MethodInfo *)0x0);
            if (0 < iVar4) {
              iVar4 = IGFGDDANEPE__IJNIFKFEGND(ENHJPOHLMCL,(MethodInfo *)0x0);
              iVar5 = IGFGDDANEPE__LGIMDOAMCNG(ENHJPOHLMCL,(MethodInfo *)0x0);
              if (iVar5 < iVar4) {
                iVar4 = IGFGDDANEPE__IJNIFKFEGND(ENHJPOHLMCL,(MethodInfo *)0x0);
                IGFGDDANEPE__DJJHOOKLHHL(ENHJPOHLMCL,iVar4,(MethodInfo *)0x0);
                IGFGDDANEPE__DOOKHLFKCAI(ENHJPOHLMCL,-1,(MethodInfo *)0x0);
              }
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
            pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
              iVar4 = ACHLOMELAJE__EOEAKGGDBFH(pAVar8,(MethodInfo *)0x0);
              IGFGDDANEPE__GIIJHCLHFDK(ENHJPOHLMCL,iVar4,(MethodInfo *)0x0);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
                CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar8,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

