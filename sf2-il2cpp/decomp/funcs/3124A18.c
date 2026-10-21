// Nekki.SF2.GUI.Profile.AchievementsController$$BACIFGCANEA @ RVA 0x3124A18

void Nekki_SF2_GUI_Profile_AchievementsController__BACIFGCANEA
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_KMJDCOABCCG__o *IHEPDIFDBGK;
  MethodInfo *in_x4;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *pSVar3;
  MGNPHCAAEIO_FGHBAEIKNBF_o *pMVar4;
  ACHLOMELAJE_o *pAVar5;
  FEPPOONJCGI_o *pFVar6;
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_01;
  int index;
  System_Collections_Generic_List_PANJAHAFBMD__o *collection;
  System_Collections_Generic_List_EKGDLIKHEMA__o *CNDKPFMIPHH;
  int32_t iVar7;
  Il2CppClass *a;
  int index_00;
  System_Collections_Generic_IEnumerable_T__o *collection_00;
  
  if ((DAT_04566650 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<PANJAHAFBMD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566650 = 1;
  }
  pSVar3 = (__this->fields).OBNPKCCKLIJ;
  if (pSVar3 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    iVar7 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar7) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar7,(MethodInfo *)0x0);
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar4 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
    if (pMVar4 != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) {
      __this_01 = (pMVar4->fields).BJGBOCFLEGO;
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
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
         (pFVar6 = (pAVar5->fields).IMJJJJJMMHL, pFVar6 != (FEPPOONJCGI_o *)0x0)) {
        collection = (pFVar6->fields).MCDCFBOBJGI;
        __this_00 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<PANJAHAFBMD>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                   Method_System_Collections_Generic_List<PANJAHAFBMD>__ctor__);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
            (pFVar6 = (pAVar5->fields).IMJJJJJMMHL, pFVar6 != (FEPPOONJCGI_o *)0x0)) &&
           (__this_01 != (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0)) {
          if (0 < (__this_01->fields)._size) {
            CNDKPFMIPHH = (pFVar6->fields).EBDCADCBPNM;
            index = 0;
            do {
              pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_01,index,
                                  Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
              if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03224d40;
              a = pIVar2[1].klass;
              pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_01,index,
                                  Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
              if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03224d40;
              collection_00 = pIVar2[1].monitor;
              IHEPDIFDBGK = (System_Collections_Generic_List_KMJDCOABCCG__o *)
                            thunk_FUN_01bda818(System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo
                                              );
              System_Collections_Generic_List<object>___ctor
                        ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,collection_00,
                         Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03224d40;
              if (0 < (__this_00->fields)._size) {
                index_00 = 0;
                do {
                  pIVar2 = System_Collections_Generic_List<object>__get_Item
                                     (__this_00,index_00,
                                      Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__
                                     );
                  if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03224d40;
                  bVar1 = System_String__op_Equality
                                    ((System_String_o *)a,pIVar2[1].monitor,(MethodInfo *)0x0);
                  if (bVar1) {
                    iVar7 = *(int32_t *)&pIVar2[2].klass;
                    System_Collections_Generic_List<object>__RemoveAt
                              (__this_00,index_00,
                               Method_System_Collections_Generic_List<PANJAHAFBMD>_RemoveAt__);
                    goto LAB_03224cfc;
                  }
                  index_00 = index_00 + 1;
                } while (index_00 < (__this_00->fields)._size);
              }
              iVar7 = 0;
LAB_03224cfc:
              Nekki_SF2_GUI_Profile_AchievementsController__BNMNJNLMJGO
                        (__this,IHEPDIFDBGK,CNDKPFMIPHH,iVar7,in_x4);
              index = index + 1;
            } while (index < (__this_01->fields)._size);
          }
          return;
        }
      }
    }
  }
LAB_03224d40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

