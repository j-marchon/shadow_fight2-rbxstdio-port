// Nekki.SF2.Core.Quests.QuestsManager$$ClearStack @ RVA 0x3307C70

void Nekki_SF2_Core_Quests_QuestsManager__ClearStack
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar2;
  FPPKHNNABAD_o *__this_00;
  MEMHEPBAJJA_o *__this_01;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  ACHLOMELAJE_o *__this_02;
  int index;
  
  if ((DAT_0456776d & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PHBFKBEHGIK__);
    DAT_0456776d = 1;
  }
  pSVar2 = (__this->fields).GOAJEJNPDFA;
  if (pSVar2 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    index = (pSVar2->fields)._size + -1;
    if (index < 0) {
LAB_03407ddc:
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
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0)
      {
        return;
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
      __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_02 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      do {
        __this_00 = (FPPKHNNABAD_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
        if (__this_00 == (FPPKHNNABAD_o *)0x0) break;
        if (((__this_00->fields)._GJKDJKAKJAP_k__BackingField != 1) &&
           ((bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                               ((System_Collections_Generic_List_T__o *)FPEHEJBLCAO,
                                Method_DJNBJHPDKDP_OBECCOPBADO<string>__), bVar1 ||
            (bVar1 = FPPKHNNABAD__GAKCJNGGBFC(__this_00,FPEHEJBLCAO,(MethodInfo *)0x0), bVar1)))) {
          __this_01 = (__this_00->fields)._FIEEJDGCLKH_k__BackingField;
          if (__this_01 != (MEMHEPBAJJA_o *)0x0) {
            MEMHEPBAJJA__MAMEMHEFIKB(__this_01,(MethodInfo *)0x0);
          }
          CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                        thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
          System_Action<object>___ctor();
          FPPKHNNABAD__HAFNHPBMIBI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).GOAJEJNPDFA;
          if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) break;
          System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar2,index,
                     Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
        }
        index = index + -1;
        if (index < 0) goto LAB_03407ddc;
        pSVar2 = (__this->fields).GOAJEJNPDFA;
      } while (pSVar2 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

