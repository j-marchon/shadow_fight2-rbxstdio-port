// GGHCLMEFIGO$$HOOJKMPPCMC @ RVA 0x33B71FC

void GGHCLMEFIGO__HOOJKMPPCMC
               (GGHCLMEFIGO_o *__this,AMJMGFCCAKN_o *DLNPKEIJGGG,bool KGICMAKPOOA,MethodInfo *method
               )

{
  uint uVar1;
  long lVar2;
  GGHCLMEFIGO_AHCHAFNJKIH_o *__this_00;
  System_Collections_Generic_List_AMJMGFCCAKN__o *__this_01;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  PKHMIGFEJCL_ELHOKIPELBO_o *pPVar4;
  ACHLOMELAJE_o *__this_02;
  AMJMGFCCAKN_array *pAVar5;
  IGFGDDANEPE_o *pIVar6;
  GGLKHCAIGDI_o *pGVar7;
  PKHMIGFEJCL_o *pPVar8;
  
  if ((DAT_04567d7a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_Invoke__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567d7a = 1;
  }
  __this_00 = (__this->fields).MBIEGCODNMB;
  if (__this_00 == (GGHCLMEFIGO_AHCHAFNJKIH_o *)0x0) goto LAB_034b73f4;
  UnityEngine_Events_UnityEvent<object>__Invoke
            ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)DLNPKEIJGGG,
             Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_Invoke__);
  lVar2 = Method_System_Collections_Generic_List<AMJMGFCCAKN>_Add__;
  if (KGICMAKPOOA) {
    __this_01 = (__this->fields).AAMHHEENLMC;
    if (__this_01 == (System_Collections_Generic_List_AMJMGFCCAKN__o *)0x0) goto LAB_034b73f4;
    pAVar5 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pAVar5 == (AMJMGFCCAKN_array *)0x0) goto LAB_034b73f4;
    uVar1 = (__this_01->fields)._size;
    if (uVar1 < (uint)pAVar5->max_length) {
      (__this_01->fields)._size = uVar1 + 1;
      pAVar5->m_Items[(int)uVar1] = DLNPKEIJGGG;
      thunk_FUN_01c20e04(pAVar5->m_Items + (int)uVar1,DLNPKEIJGGG);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)DLNPKEIJGGG,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((((pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
         (pPVar8 = (pNVar3->fields).QuestParameters, pPVar8 == (PKHMIGFEJCL_o *)0x0)) ||
        (DLNPKEIJGGG == (AMJMGFCCAKN_o *)0x0)) ||
       ((pIVar6 = (DLNPKEIJGGG->fields).MNELBNHIKGH, pIVar6 == (IGFGDDANEPE_o *)0x0 ||
        (pPVar4 = (pPVar8->fields).BJJFDMHOBNB, pPVar4 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0))))
    goto LAB_034b73f4;
    (pPVar4->fields).BMGMGAAPFGO = (pIVar6->fields).NPFMOEOIEKM;
    thunk_FUN_01c20e04();
    pGVar7 = (DLNPKEIJGGG->fields).PHAGOJCOMPN;
    if ((pGVar7 == (GGLKHCAIGDI_o *)0x0) ||
       (pPVar4 = (pPVar8->fields).BJJFDMHOBNB, pPVar4 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0))
    goto LAB_034b73f4;
    (pPVar4->fields).JDKKCDBDNLB = (pGVar7->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04();
    pPVar4 = (pPVar8->fields).BJJFDMHOBNB;
    if (pPVar4 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0) goto LAB_034b73f4;
    (pPVar4->fields).HDGEOJGHEOE = 0;
    (pPVar4->fields).GOKNIOJFFBG = StringLiteral_1;
    thunk_FUN_01c20e04();
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_034b73f4;
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar3,0xe,(MethodInfo *)0x0);
  }
  else if (DLNPKEIJGGG == (AMJMGFCCAKN_o *)0x0) goto LAB_034b73f4;
  pIVar6 = (DLNPKEIJGGG->fields).MNELBNHIKGH;
  if (pIVar6 != (IGFGDDANEPE_o *)0x0) {
    IGFGDDANEPE__ECPOIIMILFO(pIVar6,(MethodInfo *)0x0);
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
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_02 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034b73f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

