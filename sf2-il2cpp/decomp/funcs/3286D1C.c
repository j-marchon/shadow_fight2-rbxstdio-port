// OOMHDDBCBJP$$CCANMOPIFEC @ RVA 0x3286D1C

void OOMHDDBCBJP__CCANMOPIFEC(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  System_Collections_Generic_List_AFFHKININGD__o *pSVar2;
  AFFHKININGD_o *FBFPLEFCDOK;
  AFFHKININGD_o *pAVar3;
  NLPJLHOEAOE_o *__this_00;
  int length;
  PKHMIGFEJCL_o *__this_01;
  PKHMIGFEJCL_o *__this_02;
  
  if ((DAT_045672c1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672c1 = 1;
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    __this_01 = (pNVar1->fields).QuestParameters;
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pSVar2 = (__this->fields).HDDNEKLMLMF,
       pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0)) {
      __this_02 = (pNVar1->fields).QuestParametersBeforeLottery;
      length = 0;
      do {
        while( true ) {
          if (length == (pSVar2->fields)._size) {
            (pSVar2->fields)._size = 0;
            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
            if (0 < length) {
              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,
                                  (MethodInfo *)0x0);
            }
            (__this->fields).KANKFCNHDPA = false;
            (__this->fields).AELJGHFFPPC = 0;
            return;
          }
          FBFPLEFCDOK = (AFFHKININGD_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar2,length,
                                   Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
          if (__this_01 == (PKHMIGFEJCL_o *)0x0) goto LAB_03386e6c;
          pAVar3 = PKHMIGFEJCL__ACPCMCCBDEI(__this_01,(MethodInfo *)0x0);
          if (pAVar3 != FBFPLEFCDOK) break;
LAB_03386e60:
          pSVar2 = (__this->fields).HDDNEKLMLMF;
          length = length + 1;
          if (pSVar2 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) goto LAB_03386e6c;
        }
        if (__this_02 == (PKHMIGFEJCL_o *)0x0) break;
        pAVar3 = PKHMIGFEJCL__ACPCMCCBDEI(__this_02,(MethodInfo *)0x0);
        if (pAVar3 == FBFPLEFCDOK) goto LAB_03386e60;
        pSVar2 = (__this->fields).HDDNEKLMLMF;
        if (pSVar2 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar2,length,
                   Method_System_Collections_Generic_List<AFFHKININGD>_RemoveAt__);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (NLPJLHOEAOE_o *)0x0) break;
        NLPJLHOEAOE__ELJFHKALHPA(__this_00,FBFPLEFCDOK,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).HDDNEKLMLMF;
      } while (pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0);
    }
  }
LAB_03386e6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

