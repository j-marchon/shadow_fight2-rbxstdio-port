// Nekki.SF2.GUI.Pvp.PhaseWeapon$$Init @ RVA 0x33DF0FC

void Nekki_SF2_GUI_Pvp_PhaseWeapon__Init
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  int32_t index;
  NLPJLHOEAOE_o *pNVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  BNAIBAODKAK_array *pBVar5;
  Il2CppObject *pIVar6;
  System_Predicate_T__o *match;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityAction_o *pUVar7;
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  IFKFDFGNMMN_o *pIVar8;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar9;
  Nekki_SF2_GUI_TableView_o *pNVar10;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar11;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_01;
  UnityEngine_Events_UnityEvent_o *pUVar12;
  HOOAAGABMBL_array *collection;
  ulong uVar13;
  
                    /* try { // try from 034df104 to 035df123 has its CatchHandler @ 034df04c */
                    /* try { // try from 034df124 to 035df127 has its CatchHandler @ 034df130 */
                    /* try { // try from 034df128 to 035df14b has its CatchHandler @ 034df04c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034df0f4 with catch @ 034df12c
                        */
  if ((DAT_04567e8d & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034df124 with catch @ 034df130
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034df0d8 with catch @ 034df134
                        */
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_DJCPEOFGOLJ_EHPIOCDLNEM__);
                    /* try { // try from 034df14c to 035df14f has its CatchHandler @ 034df178 */
                    /* try { // try from 034df150 to 035df187 has its CatchHandler @ 034df04c */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseWeapon_DJCPEOFGOLJ_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_FindIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAt__);
                    /* catch() { ... } // from try @ 034df14c with catch @ 034df178 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
                    /* try { // try from 034df188 to 035df18f has its CatchHandler @ 034df1a4 */
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 034df190 to 035df19b has its CatchHandler @ 034df04c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 034df19c to 035df1a3 has its CatchHandler @ 034df1a4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034df188 with catch @ 034df1a4
                       catch(type#2 @ 00000000) { ... } // from try @ 034df19c with catch @ 034df1a4
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_DBICODDPEAG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_EHPMHOHOPGA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_JCDGMAEDFIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_PPJKNGDPLOM__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
    FUN_01bab630(&StringLiteral_14837);
    DAT_04567e8d = 1;
  }
  (__this->fields).super.EMNHJBCKBKC = HEHMPFLAEGE;
  pNVar10 = (__this->fields)._TableView;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) ||
     (ppSVar11 = &(__this->fields).LGHNHMJIDIB,
     *ppSVar11 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar2 != (NLPJLHOEAOE_o *)0x0) &&
     (pIVar8 = (pNVar2->fields).OMDCNDHOACL, pIVar8 != (IFKFDFGNMMN_o *)0x0)) {
                    /* try { // try from 034df29c to 035df5af has its CatchHandler @ 034df29c
                       catch() { ... } // from try @ 034df29c with catch @ 034df29c
                       catch() { ... } // from try @ 034dfa80 with catch @ 034df29c
                       catch() { ... } // from try @ 034dfe98 with catch @ 034df29c
                       catch() { ... } // from try @ 034e0060 with catch @ 034df29c
                       catch() { ... } // from try @ 034e0104 with catch @ 034df29c
                       catch() { ... } // from try @ 034e0234 with catch @ 034df29c
                       catch() { ... } // from try @ 034e0284 with catch @ 034df29c
                       catch() { ... } // from try @ 034e02a0 with catch @ 034df29c
                       catch() { ... } // from try @ 034e02e4 with catch @ 034df29c
                       catch() { ... } // from try @ 034e0300 with catch @ 034df29c
                       catch() { ... } // from try @ 034e0334 with catch @ 034df29c */
    collection = (pIVar8->fields).HJCHDJBLAAG;
    pSVar3 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar3,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    *ppSVar11 = pSVar3;
    thunk_FUN_01c20e04(ppSVar11,pSVar3);
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this_00 != (DOPEEDABNEK_o *)0x0) {
      pHVar4 = DOPEEDABNEK__CKKIPBAIEMN(__this_00,StringLiteral_14837,(MethodInfo *)0x0);
      (__this->fields).HLIAIMHBACP = pHVar4;
      thunk_FUN_01c20e04();
      pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (((pNVar2 != (NLPJLHOEAOE_o *)0x0) &&
          (pIVar8 = (pNVar2->fields).OMDCNDHOACL, pIVar8 != (IFKFDFGNMMN_o *)0x0)) &&
         (pBVar5 = IFKFDFGNMMN__PPLFNEHDHCM(pIVar8,(MethodInfo *)0x0),
         pBVar5 != (BNAIBAODKAK_array *)0x0)) {
        if (0 < (int)pBVar5->max_length) {
          uVar13 = 0;
          do {
            pIVar6 = (Il2CppObject *)
                     thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PhaseWeapon_DJCPEOFGOLJ_TypeInfo);
            System_Object___ctor(pIVar6,(MethodInfo *)0x0);
            if ((uint)pBVar5->max_length <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            if (pIVar6 == (Il2CppObject *)0x0) goto LAB_034df5e4;
            pIVar6 = pIVar6 + 1;
            pIVar6->klass = (Il2CppClass *)pBVar5->m_Items[uVar13];
            thunk_FUN_01c20e04(pIVar6);
            if (pIVar6->klass == (Il2CppClass *)0x0) goto LAB_034df5e4;
            bVar1 = BNAIBAODKAK__AAAMBLLDPHJ((BNAIBAODKAK_o *)pIVar6->klass,(MethodInfo *)0x0);
            if (!bVar1) {
              pSVar3 = *ppSVar11;
              match = (System_Predicate_T__o *)
                      thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
              System_Predicate<object>___ctor();
              if (pSVar3 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)
              goto LAB_034df5e4;
              index = System_Collections_Generic_List<object>__FindIndex
                                ((System_Collections_Generic_List_object__o *)pSVar3,match,
                                 Method_System_Collections_Generic_List<HOOAAGABMBL>_FindIndex__);
              System_Collections_Generic_List<object>__RemoveAt
                        ((System_Collections_Generic_List_object__o *)pSVar3,index,
                         Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAt__);
            }
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)pBVar5->max_length);
        }
        pNVar10 = (__this->fields)._TableView;
        if (pNVar10 != (Nekki_SF2_GUI_TableView_o *)0x0) {
          (pNVar10->fields).KFCHMBGIPJK = (__this->fields)._CellPrefab;
          thunk_FUN_01c20e04();
          pNVar10 = (__this->fields)._TableView;
          if (pNVar10 != (Nekki_SF2_GUI_TableView_o *)0x0) {
            Nekki_SF2_GUI_TableView__Init
                      (pNVar10,(CPFMNHBNOEN_o *)__this,(MLIIECFHJAM_o *)__this,(MethodInfo *)0x0);
            pNVar10 = (__this->fields)._TableView;
            if (pNVar10 != (Nekki_SF2_GUI_TableView_o *)0x0) {
              __this_01 = (pNVar10->fields).onSelectCell;
              call = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
              UnityEngine_Events_UnityAction<object>___ctor();
              if (__this_01 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent<object>__AddListener
                          ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,
                           Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
                pNVar10 = (__this->fields)._TableView;
                if (pNVar10 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                  pNVar9 = (pNVar10->fields).IDIMFLMKDMD;
                  (pNVar10->fields)._MinScrollVelocity = 100.0;
                  if (pNVar9 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
                    pUVar12 = (pNVar9->fields).onDragBegin;
                    pUVar7 = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    UnityEngine_Events_UnityAction___ctor();
                    if (pUVar12 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                      UnityEngine_Events_UnityEvent__AddListener(pUVar12,pUVar7,(MethodInfo *)0x0);
                      pNVar10 = (__this->fields)._TableView;
                      if ((pNVar10 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
                         (pNVar9 = (pNVar10->fields).IDIMFLMKDMD,
                         pNVar9 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)) {
                        pUVar12 = (pNVar9->fields).onDragEnd;
                        pUVar7 = (UnityEngine_Events_UnityAction_o *)
                                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                        UnityEngine_Events_UnityAction___ctor();
                        if (pUVar12 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                          UnityEngine_Events_UnityEvent__AddListener
                                    (pUVar12,pUVar7,(MethodInfo *)0x0);
                          pNVar10 = (__this->fields)._TableView;
                          if (pNVar10 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                            Nekki_SF2_GUI_TableView__ScrollToCell(pNVar10,0,0.0,(MethodInfo *)0x0);
                            CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                                          thunk_FUN_01bda818(
                                                  System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
                            System_Action<int,_object,_Int32Enum>___ctor();
                    /* try { // try from 034df5b0 to 035df5b7 has its CatchHandler @ 034e01fc */
                            if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564();
                            }
                    /* try { // try from 034df5cc to 035df5df has its CatchHandler @ 034e0220 */
                            JLEKKANADII__HFKKKKBAMGE(CJNHFNHJHPE,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_034df5e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

