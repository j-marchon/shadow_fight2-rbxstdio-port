// TypeDefIndex 2724
// Namespace: Nekki.SF2.GUI.Pvp
// public class PhaseWeapon : PhaseItem, CPFMNHBNOEN, MLIIECFHJAM
// Fields:
//   public TableView _TableView; // 0x48
//   private SFButton _LeftHint; // 0x50
//   private SFButton _RightHint; // 0x58
//   private LabelAlias _ResetToDefaultHint; // 0x60
//   private GameObject _CellPrefab; // 0x68
//   private List<HOOAAGABMBL> LGHNHMJIDIB; // 0x70
//   private HOOAAGABMBL HLIAIMHBACP; // 0x78
//   private HOOAAGABMBL DPPANFCEMLK; // 0x80
//   private int CCOCEGOEFNL; // 0x88
//   private int DJEHNBIGFJD; // 0x8C
//   private bool ACNLMCEJHII; // 0x90
//   private bool FODBFCKBFDF; // 0x91
//   private bool LHNJHBEEBMN; // 0x92
//   private int JOGFBLKFHFG; // 0x94
//   private int AFEOEPFDNLI; // 0x98

// ===== private HOOAAGABMBL ENGNGBHDKLF()  [RVA 0x33DEF10]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$ENGNGBHDKLF @ RVA 0x33DEF10

HOOAAGABMBL_o *
Nekki_SF2_GUI_Pvp_PhaseWeapon__ENGNGBHDKLF
          (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  return (__this->fields).HLIAIMHBACP;
}


// ===== public void Update()  [RVA 0x33DEF18]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$Update @ RVA 0x33DEF18

void Nekki_SF2_GUI_Pvp_PhaseWeapon__Update
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  Nekki_SF2_GUI_TableView_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04567e8c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
    DAT_04567e8c = 1;
  }
  if ((__this->fields).FODBFCKBFDF == false) {
    return;
  }
  __this_00 = (__this->fields)._TableView;
  (__this->fields).FODBFCKBFDF = false;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
    if ((__this->fields).ACNLMCEJHII != false) {
      return;
    }
    __this_01 = (__this->fields).LGHNHMJIDIB;
    if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__;
      DPJIDNBJIBG = System_Collections_Generic_List<object>__IndexOf
                              ((System_Collections_Generic_List_object__o *)__this_01,
                               (Il2CppObject *)(__this->fields).DPPANFCEMLK,
                               (MethodInfo_26E5A4C *)
                               Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
      Nekki_SF2_GUI_Pvp_PhaseWeapon__GNJPFHIGMJB(__this,DPJIDNBJIBG,0.0,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public SFButton get_RightHint()  [RVA 0x33DF0F4]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$get_RightHint @ RVA 0x33DF0F4

SFButton_o *
Nekki_SF2_GUI_Pvp_PhaseWeapon__get_RightHint
          (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
                    /* try { // try from 034df0f4 to 035df103 has its CatchHandler @ 034df12c */
  return (__this->fields)._RightHint;
}


// ===== public override void Init(AMJPDLOCCNP HEHMPFLAEGE)  [RVA 0x33DF0FC]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$Init @ RVA 0x33DF0FC

void Nekki_SF2_GUI_Pvp_PhaseWeapon__Init
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  int32_t index;
  NLPJLHOEAOE_o *pNVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  Item_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  BNAIBAODKAK_array *pBVar5;
  Il2CppObject *pIVar6;
  System_Predicate_T__o *match;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityAction_o *pUVar7;
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  PvpSettings_o *pIVar8;
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
    FUN_01bab630(&StringLiteral_14837/*"WEAPON_DEFAULT_RANDOM"*/);
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
     (pIVar8 = (pNVar2->fields).OMDCNDHOACL, pIVar8 != (PvpSettings_o *)0x0)) {
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
    if (__this_00 != (Item_o *)0x0) {
      pHVar4 = Item__CKKIPBAIEMN(__this_00,StringLiteral_14837/*"WEAPON_DEFAULT_RANDOM"*/,(MethodInfo *)0x0);
      (__this->fields).HLIAIMHBACP = pHVar4;
      thunk_FUN_01c20e04();
      pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (((pNVar2 != (NLPJLHOEAOE_o *)0x0) &&
          (pIVar8 = (pNVar2->fields).OMDCNDHOACL, pIVar8 != (PvpSettings_o *)0x0)) &&
         (pBVar5 = PvpSettings__PPLFNEHDHCM(pIVar8,(MethodInfo *)0x0),
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


// ===== private bool LNBMOMMOHCB(HOOAAGABMBL KEFILECBPMF)  [RVA 0x33DF5F4]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$LNBMOMMOHCB @ RVA 0x33DF5F4

bool Nekki_SF2_GUI_Pvp_PhaseWeapon__LNBMOMMOHCB
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,HOOAAGABMBL_o *KEFILECBPMF,
               MethodInfo *method)

{
  bool bVar1;
  BNAIBAODKAK_o *pBVar2;
  
  if ((KEFILECBPMF != (HOOAAGABMBL_o *)0x0) &&
     (pBVar2 = (__this->fields).super.KPLEAGPMKFD, pBVar2 != (BNAIBAODKAK_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((KEFILECBPMF->fields)._COIPKAKHDFP_k__BackingField,
                       (pBVar2->fields).MHBAKHIIJLP,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PPJKNGDPLOM()  [RVA 0x33DF61C]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$PPJKNGDPLOM @ RVA 0x33DF61C

void Nekki_SF2_GUI_Pvp_PhaseWeapon__PPJKNGDPLOM
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void UpdateContent()  [RVA 0x33DF620]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$UpdateContent @ RVA 0x33DF620

void Nekki_SF2_GUI_Pvp_PhaseWeapon__UpdateContent
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  Il2CppObject *pIVar5;
  System_Predicate_T__o *match;
  HOOAAGABMBL_o *item;
  BNAIBAODKAK_o *pBVar6;
  
                    /* try { // try from 034df620 to 035df653 has its CatchHandler @ 034e0204 */
  if ((DAT_04567e8e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_FindIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
                    /* try { // try from 034df65c to 035df67b has its CatchHandler @ 034e01ac */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Insert__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_LNBMOMMOHCB__);
                    /* try { // try from 034df694 to 035df69b has its CatchHandler @ 034e01e0 */
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 034df6a4 to 035df6af has its CatchHandler @ 034e01c4 */
    FUN_01bab630(&StringLiteral_20433/*"random"*/);
    DAT_04567e8e = 1;
  }
  Nekki_SF2_GUI_Pvp_PhaseItem__UpdateContent
            ((Nekki_SF2_GUI_Pvp_PhaseItem_o *)__this,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).LGHNHMJIDIB;
  if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pIVar5 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,0,
                        Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    pSVar4 = (__this->fields).LGHNHMJIDIB;
    if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar4,0,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAt__);
      pSVar4 = (__this->fields).LGHNHMJIDIB;
                    /* try { // try from 034df704 to 035df727 has its CatchHandler @ 034e0194 */
      if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        System_Collections_Generic_List<object>__Insert
                  ((System_Collections_Generic_List_object__o *)pSVar4,(__this->fields).DJEHNBIGFJD,
                   pIVar5,Method_System_Collections_Generic_List<HOOAAGABMBL>_Insert__);
        pBVar6 = (__this->fields).super.KPLEAGPMKFD;
        if (pBVar6 != (BNAIBAODKAK_o *)0x0) {
                    /* try { // try from 034df738 to 035df73f has its CatchHandler @ 034e01c0 */
          bVar1 = System_String__op_Equality
                            ((pBVar6->fields).PKJEMIDJPAG,StringLiteral_20433/*"random"*/,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).LGHNHMJIDIB;
          if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
            item = (__this->fields).HLIAIMHBACP;
            if (bVar1) {
                    /* try { // try from 034df750 to 035df757 has its CatchHandler @ 034e01bc */
              iVar2 = System_Collections_Generic_List<object>__IndexOf
                                ((System_Collections_Generic_List_object__o *)pSVar4,
                                 (Il2CppObject *)item,
                                 Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
                    /* try { // try from 034df764 to 035df76b has its CatchHandler @ 034e01d8 */
              if (iVar2 < 0) {
                pSVar4 = (__this->fields).LGHNHMJIDIB;
                if (pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)
                goto LAB_034df850;
                    /* try { // try from 034df77c to 035df783 has its CatchHandler @ 034e01b8 */
                System_Collections_Generic_List<object>__Insert
                          ((System_Collections_Generic_List_object__o *)pSVar4,0,
                           (Il2CppObject *)(__this->fields).HLIAIMHBACP,
                           Method_System_Collections_Generic_List<HOOAAGABMBL>_Insert__);
              }
            }
            else {
                    /* try { // try from 034df784 to 035df797 has its CatchHandler @ 034e01b4 */
              System_Collections_Generic_List<object>__Remove
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                         Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
            }
                    /* try { // try from 034df798 to 035df7a3 has its CatchHandler @ 034e01b0 */
            pSVar4 = (__this->fields).LGHNHMJIDIB;
            match = (System_Predicate_T__o *)
                    thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
            System_Predicate<object>___ctor();
            if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
              uVar3 = System_Collections_Generic_List<object>__FindIndex
                                ((System_Collections_Generic_List_object__o *)pSVar4,match,
                                 Method_System_Collections_Generic_List<HOOAAGABMBL>_FindIndex__);
              pSVar4 = (__this->fields).LGHNHMJIDIB;
                    /* try { // try from 034df7e8 to 035df80b has its CatchHandler @ 034e0190 */
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              (__this->fields).DJEHNBIGFJD = uVar3;
              if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                pIVar5 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar4,uVar3,
                                    Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
                pSVar4 = (__this->fields).LGHNHMJIDIB;
                if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                  System_Collections_Generic_List<object>__RemoveAt
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (__this->fields).DJEHNBIGFJD,
                             Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAt__);
                    /* try { // try from 034df81c to 035df81f has its CatchHandler @ 034e014c */
                  pSVar4 = (__this->fields).LGHNHMJIDIB;
                  if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* try { // try from 034df828 to 035df847 has its CatchHandler @ 034e0180 */
                    System_Collections_Generic_List<object>__Insert
                              ((System_Collections_Generic_List_object__o *)pSVar4,0,pIVar5,
                               Method_System_Collections_Generic_List<HOOAAGABMBL>_Insert__);
                    (__this->fields).FODBFCKBFDF = true;
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
LAB_034df850:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void TableViewDoubleClickCellForRow(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x33DF854]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$TableViewDoubleClickCellForRow @ RVA 0x33DF854

void Nekki_SF2_GUI_Pvp_PhaseWeapon__TableViewDoubleClickCellForRow
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
               int32_t JDEFJPHCNMM,MethodInfo *method)

{
  return;
}


// ===== public float SizeForRowInTableView(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x33DF858]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$SizeForRowInTableView @ RVA 0x33DF858

float Nekki_SF2_GUI_Pvp_PhaseWeapon__SizeForRowInTableView
                (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
                int32_t JDEFJPHCNMM,MethodInfo *method)

{
  return 800.0;
}


// ===== public void Scroll(int DPJIDNBJIBG)  [RVA 0x33DF864]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$Scroll @ RVA 0x33DF864

void Nekki_SF2_GUI_Pvp_PhaseWeapon__Scroll
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  bool bVar1;
  BNAIBAODKAK_o *__this_00;
  
                    /* try { // try from 034df864 to 035df86b has its CatchHandler @ 034e01a8 */
  __this_00 = (__this->fields).super.KPLEAGPMKFD;
  if (__this_00 != (BNAIBAODKAK_o *)0x0) {
    bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 034df888 to 035df88f has its CatchHandler @ 034e016c */
      Nekki_SF2_GUI_Pvp_PhaseWeapon__GNJPFHIGMJB
                (__this,(__this->fields).CCOCEGOEFNL + DPJIDNBJIBG,0.3,method);
                    /* try { // try from 034df8a0 to 035df8a7 has its CatchHandler @ 034e0150 */
      (__this->fields).LHNJHBEEBMN = false;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HOOAAGABMBL get_SelectedWeapon()  [RVA 0x33DF8B4]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$get_SelectedWeapon @ RVA 0x33DF8B4

HOOAAGABMBL_o *
Nekki_SF2_GUI_Pvp_PhaseWeapon__get_SelectedWeapon
          (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  HOOAAGABMBL_o *pHVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034df8b4 to 035df8bb has its CatchHandler @ 034e0168 */
  if ((DAT_04567e8f & 1) == 0) {
                    /* try { // try from 034df8cc to 035df8d3 has its CatchHandler @ 034e0170 */
                    /* try { // try from 034df8d4 to 035df8f3 has its CatchHandler @ 034e0188 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    DAT_04567e8f = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).LGHNHMJIDIB;
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar1 = (HOOAAGABMBL_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (__this->fields).CCOCEGOEFNL,
                        Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    return pHVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034df904 to 035df907 has its CatchHandler @ 034e0104 */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor()  [RVA 0x33DF908]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$.ctor @ RVA 0x33DF908

void Nekki_SF2_GUI_Pvp_PhaseWeapon___ctor
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
                    /* try { // try from 034df914 to 035df937 has its CatchHandler @ 034e0118 */
  (__this->fields).ACNLMCEJHII = true;
  (__this->fields).AFEOEPFDNLI = -1;
  Nekki_SF2_GUI_Pvp_PhaseItem___ctor((Nekki_SF2_GUI_Pvp_PhaseItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NNCDBOLMLHK()  [RVA 0x33DF920]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$NNCDBOLMLHK @ RVA 0x33DF920

void Nekki_SF2_GUI_Pvp_PhaseWeapon__NNCDBOLMLHK
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  int32_t BMPJIDHGCBN;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar1;
  MethodInfo *extraout_x1;
  System_String_o *in_x2;
  MethodInfo *in_x4;
  
  if ((DAT_04567e90 & 1) == 0) {
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    DAT_04567e90 = 1;
    method = extraout_x1;
  }
  BMPJIDHGCBN = (__this->fields).AFEOEPFDNLI;
  if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HintSchemeUtility_TypeInfo,method);
  }
                    /* try { // try from 034df968 to 035df96b has its CatchHandler @ 034e0108 */
                    /* try { // try from 034df96c to 035df973 has its CatchHandler @ 034e0174 */
  pMVar1 = HintSchemeUtility__ABOLJGNNGMC(BMPJIDHGCBN,(MethodInfo *)0x0);
  if (pMVar1 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
                    /* try { // try from 034df988 to 035df98f has its CatchHandler @ 034e0164 */
    Nekki_SF2_GUI_Pvp_PhaseWeapon__JCDGMAEDFIF
              (__this,(__this->fields).AFEOEPFDNLI,in_x2,(pMVar1->fields).DOKHHBGJICA,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCDGMAEDFIF(int BMPJIDHGCBN, string LOAHEPDBFAO, ODLJFAIHELG CGLFKKMBHCN)  [RVA 0x33DF994]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$JCDGMAEDFIF @ RVA 0x33DF994

void Nekki_SF2_GUI_Pvp_PhaseWeapon__JCDGMAEDFIF
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,int32_t BMPJIDHGCBN,
               System_String_o *LOAHEPDBFAO,int32_t CGLFKKMBHCN,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  MethodInfo *method_00;
  SFButton_o *pSVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  
                    /* try { // try from 034df9a0 to 035df9df has its CatchHandler @ 034e0184 */
  if ((DAT_04567e91 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    FUN_01bab630(&StringLiteral_12565/*"SwitchControls.ZRArrow"*/);
    FUN_01bab630(&StringLiteral_12561/*"SwitchControls.SLArrow"*/);
    FUN_01bab630(&StringLiteral_12562/*"SwitchControls.SRArrow"*/);
                    /* try { // try from 034df9e8 to 035df9ef has its CatchHandler @ 034e015c */
    FUN_01bab630(&StringLiteral_12564/*"SwitchControls.ZLArrow"*/);
    DAT_04567e91 = 1;
  }
  if (((CGLFKKMBHCN != 0x67) && (iVar2 = (__this->fields).AFEOEPFDNLI, iVar2 != -1)) &&
     (iVar2 == BMPJIDHGCBN)) {
    pSVar5 = (__this->fields)._LeftHint;
    if (pSVar5 != (SFButton_o *)0x0) {
      pNVar6 = (Nekki_SF2_GUI_ResolutionImage_o *)(pSVar5->fields).super.super.m_TargetGraphic;
      bVar4 = IEPJHKEBFEB__MMMKDKHNGLI(CGLFKKMBHCN,(MethodInfo *)0x0);
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 034dfa34 to 035dfa3b has its CatchHandler @ 034e0158 */
                    /* try { // try from 034dfa44 to 035dfa4b has its CatchHandler @ 034e0114 */
        bVar3 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
                    /* try { // try from 034dfa50 to 035dfa57 has its CatchHandler @ 034e010c */
        if ((bVar3 <= (pNVar6->klass->_2).naturalAligment) &&
           ((pNVar6->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
            (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
                    /* try { // try from 034dfa74 to 035dfa7f has its CatchHandler @ 034e0158 */
          puVar1 = &StringLiteral_12561/*"SwitchControls.SLArrow"*/;
                    /* try { // try from 034dfa80 to 035dfccb has its CatchHandler @ 034df29c */
          if (!bVar4) {
            puVar1 = &StringLiteral_12564/*"SwitchControls.ZLArrow"*/;
          }
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar6,(System_String_o *)*puVar1,(MethodInfo *)0x0);
          pSVar5 = (__this->fields)._RightHint;
          if (pSVar5 != (SFButton_o *)0x0) {
            pNVar6 = (Nekki_SF2_GUI_ResolutionImage_o *)(pSVar5->fields).super.super.m_TargetGraphic
            ;
            bVar4 = IEPJHKEBFEB__MMMKDKHNGLI(CGLFKKMBHCN,(MethodInfo *)0x0);
            if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              bVar3 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
              if ((bVar3 <= (pNVar6->klass->_2).naturalAligment) &&
                 ((pNVar6->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
                  (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
                puVar1 = &StringLiteral_12562/*"SwitchControls.SRArrow"*/;
                if (!bVar4) {
                  puVar1 = &StringLiteral_12565/*"SwitchControls.ZRArrow"*/;
                }
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          (pNVar6,(System_String_o *)*puVar1,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Pvp_PhaseWeapon__FDNHGCEFCFK(__this,method_00);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public SFButton get_LeftHint()  [RVA 0x33DFFD4]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$get_LeftHint @ RVA 0x33DFFD4

SFButton_o *
Nekki_SF2_GUI_Pvp_PhaseWeapon__get_LeftHint
          (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  return (__this->fields)._LeftHint;
}


// ===== public void ResetToDefaultWeapon()  [RVA 0x33DFFDC]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$ResetToDefaultWeapon @ RVA 0x33DFFDC

void Nekki_SF2_GUI_Pvp_PhaseWeapon__ResetToDefaultWeapon
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  BNAIBAODKAK_o *__this_00;
  int32_t DPJIDNBJIBG;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  bool_conflict bVar3;
  
                    /* try { // try from 034dffe4 to 035dffeb has its CatchHandler @ 034e0214 */
  __this_00 = (__this->fields).super.KPLEAGPMKFD;
  if (__this_00 == (BNAIBAODKAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034dfff8 to 035e0017 has its CatchHandler @ 034e02e8 */
  if (!bVar2) {
    return;
  }
  if ((__this->fields).LHNJHBEEBMN == false) {
    iVar1 = (__this->fields).CCOCEGOEFNL;
    if (iVar1 == 0) {
      return;
    }
    DPJIDNBJIBG = 0;
    bVar3 = true;
                    /* try { // try from 034e0020 to 035e0037 has its CatchHandler @ 034e02e4 */
    (__this->fields).JOGFBLKFHFG = iVar1;
  }
  else {
    DPJIDNBJIBG = (__this->fields).JOGFBLKFHFG;
    bVar3 = false;
  }
  Nekki_SF2_GUI_Pvp_PhaseWeapon__GNJPFHIGMJB(__this,DPJIDNBJIBG,0.3,in_x2);
  (__this->fields).LHNJHBEEBMN = bVar3;
                    /* try { // try from 034e003c to 035e0047 has its CatchHandler @ 034e0208 */
  Nekki_SF2_GUI_Pvp_PhaseWeapon__FDNHGCEFCFK(__this,method_00);
  return;
}


// ===== public int NumberOfRowsInTableView(TableView HDFMPLDOEJG)  [RVA 0x33E0058]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$NumberOfRowsInTableView @ RVA 0x33E0058

int32_t Nekki_SF2_GUI_Pvp_PhaseWeapon__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
                  MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = HDFMPLDOEJG;
  auVar2._0_8_ = __this;
                    /* try { // try from 034e0058 to 035e005f has its CatchHandler @ 034e01f8 */
                    /* try { // try from 034e0060 to 035e009b has its CatchHandler @ 034df29c */
  if ((DAT_04567e92 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_04567e92 = 1;
  }
  pSVar1 = (__this->fields).LGHNHMJIDIB;
  if (pSVar1 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e009c to 035e009f has its CatchHandler @ 034e0210 */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public HOOAAGABMBL get_ResultWeapon()  [RVA 0x33E00A0]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$get_ResultWeapon @ RVA 0x33E00A0

HOOAAGABMBL_o *
Nekki_SF2_GUI_Pvp_PhaseWeapon__get_ResultWeapon
          (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  Il2CppObject *pIVar5;
  HOOAAGABMBL_o *pHVar6;
  System_Predicate_T__o *match;
  MethodInfo *extraout_x1;
  BNAIBAODKAK_o *pBVar7;
  
                    /* try { // try from 034e00a0 to 035e00a3 has its CatchHandler @ 034e020c */
                    /* try { // try from 034e00a4 to 035e00a7 has its CatchHandler @ 034e01e8 */
                    /* try { // try from 034e00a8 to 035e00ab has its CatchHandler @ 034e01e4 */
                    /* try { // try from 034e00ac to 035e00af has its CatchHandler @ 034e01dc */
                    /* try { // try from 034e00b0 to 035e00b3 has its CatchHandler @ 034e01d0 */
                    /* try { // try from 034e00b4 to 035e00b7 has its CatchHandler @ 034e01c8 */
                    /* try { // try from 034e00b8 to 035e00bf has its CatchHandler @ 034e021c */
                    /* try { // try from 034e00c0 to 035e00c3 has its CatchHandler @ 034e01a4 */
  if ((DAT_04567e93 & 1) == 0) {
                    /* try { // try from 034e00c4 to 035e00c7 has its CatchHandler @ 034e01a0 */
                    /* try { // try from 034e00c8 to 035e00cb has its CatchHandler @ 034e0198 */
                    /* try { // try from 034e00cc to 035e00cf has its CatchHandler @ 034e01d4 */
    FUN_01bab630(&Method_DJNBJHPDKDP_DEICJJOIDDF<HOOAAGABMBL>__);
                    /* try { // try from 034e00d0 to 035e00d7 has its CatchHandler @ 034e01cc */
                    /* try { // try from 034e00d8 to 035e00db has its CatchHandler @ 034e01d4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_FJJIGIKCJNI_PJDMDKNEJJE__);
                    /* try { // try from 034e00dc to 035e00df has its CatchHandler @ 034e0178 */
                    /* try { // try from 034e00e0 to 035e00e7 has its CatchHandler @ 034e018c */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseWeapon_FJJIGIKCJNI_TypeInfo);
                    /* try { // try from 034e00e8 to 035e00eb has its CatchHandler @ 034e0160 */
                    /* try { // try from 034e00ec to 035e00ef has its CatchHandler @ 034e0154 */
                    /* try { // try from 034e00f0 to 035e00f3 has its CatchHandler @ 034e0140 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
                    /* try { // try from 034e00f4 to 035e00f7 has its CatchHandler @ 034e017c */
                    /* try { // try from 034e00f8 to 035e00fb has its CatchHandler @ 034e0128 */
                    /* try { // try from 034e00fc to 035e00ff has its CatchHandler @ 034e017c */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
                    /* try { // try from 034e0100 to 035e0103 has its CatchHandler @ 034e0110 */
                    /* catch() { ... } // from try @ 034df904 with catch @ 034e0104
                       try { // try from 034e0104 to 035e022f has its CatchHandler @ 034df29c */
                    /* catch() { ... } // from try @ 034df968 with catch @ 034e0108 */
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
                    /* catch() { ... } // from try @ 034dfa50 with catch @ 034e010c */
                    /* catch() { ... } // from try @ 034e0100 with catch @ 034e0110 */
                    /* catch() { ... } // from try @ 034dfa44 with catch @ 034e0114 */
    FUN_01bab630(&StringLiteral_14837/*"WEAPON_DEFAULT_RANDOM"*/);
                    /* catch() { ... } // from try @ 034df914 with catch @ 034e0118 */
                    /* catch() { ... } // from try @ 034dfe8c with catch @ 034e011c */
                    /* catch() { ... } // from try @ 034dfe68 with catch @ 034e0120 */
    FUN_01bab630(&StringLiteral_14839/*"WEAPON_RANDOM"*/);
                    /* catch() { ... } // from try @ 034dfe38 with catch @ 034e0124 */
                    /* catch() { ... } // from try @ 034e00f8 with catch @ 034e0128 */
    DAT_04567e93 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 034dfe78 with catch @ 034e012c */
                    /* catch() { ... } // from try @ 034dfe20 with catch @ 034e0130 */
  pIVar3 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PhaseWeapon_FJJIGIKCJNI_TypeInfo,method);
                    /* catch() { ... } // from try @ 034dfe5c with catch @ 034e0134 */
                    /* catch() { ... } // from try @ 034dfdc0 with catch @ 034e0138 */
                    /* catch() { ... } // from try @ 034dfe40 with catch @ 034e013c */
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034e00f0 with catch @ 034e0140 */
                    /* catch() { ... } // from try @ 034dfdf4 with catch @ 034e0144 */
  if ((__this->fields).DPPANFCEMLK == (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 034df96c with catch @ 034e0174 */
    pBVar7 = (__this->fields).super.KPLEAGPMKFD;
                    /* catch() { ... } // from try @ 034e00dc with catch @ 034e0178 */
    if (pBVar7 == (BNAIBAODKAK_o *)0x0) goto LAB_034e0214;
                    /* catch() { ... } // from try @ 034e00f4 with catch @ 034e017c
                       catch() { ... } // from try @ 034e00fc with catch @ 034e017c */
    ppSVar1 = &(pBVar7->fields).MHBAKHIIJLP;
  }
  else {
                    /* catch() { ... } // from try @ 034dfe0c with catch @ 034e0148 */
    pSVar4 = (__this->fields).LGHNHMJIDIB;
                    /* catch() { ... } // from try @ 034df81c with catch @ 034e014c */
                    /* catch() { ... } // from try @ 034df8a0 with catch @ 034e0150 */
                    /* catch() { ... } // from try @ 034e00ec with catch @ 034e0154 */
                    /* catch() { ... } // from try @ 034dfa34 with catch @ 034e0158
                       catch() { ... } // from try @ 034dfa74 with catch @ 034e0158 */
                    /* catch() { ... } // from try @ 034df9e8 with catch @ 034e015c */
                    /* catch() { ... } // from try @ 034e00e8 with catch @ 034e0160 */
                    /* catch() { ... } // from try @ 034df988 with catch @ 034e0164 */
    if ((pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) ||
       (pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,
                            (__this->fields).CCOCEGOEFNL,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__),
       pIVar5 == (Il2CppObject *)0x0)) goto LAB_034e0214;
                    /* catch() { ... } // from try @ 034df8b4 with catch @ 034e0168 */
    ppSVar1 = &pIVar5[1].monitor;
                    /* catch() { ... } // from try @ 034df888 with catch @ 034e016c */
  }
                    /* catch() { ... } // from try @ 034df828 with catch @ 034e0180 */
  if (pIVar3 != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 034df9a0 with catch @ 034e0184 */
    pIVar3 = pIVar3 + 1;
                    /* catch() { ... } // from try @ 034df8d4 with catch @ 034e0188 */
                    /* catch() { ... } // from try @ 034e00e0 with catch @ 034e018c */
                    /* catch() { ... } // from try @ 034df7e8 with catch @ 034e0190 */
                    /* catch() { ... } // from try @ 034df704 with catch @ 034e0194 */
    pIVar3->klass = (Il2CppClass *)*ppSVar1;
                    /* catch() { ... } // from try @ 034e00c8 with catch @ 034e0198 */
                    /* catch() { ... } // from try @ 034dfd4c with catch @ 034e019c */
    thunk_FUN_01c20e04(pIVar3);
                    /* catch() { ... } // from try @ 034e00c4 with catch @ 034e01a0 */
                    /* catch() { ... } // from try @ 034e00c0 with catch @ 034e01a4 */
                    /* catch() { ... } // from try @ 034df864 with catch @ 034e01a8 */
                    /* catch() { ... } // from try @ 034df65c with catch @ 034e01ac */
    bVar2 = System_String__op_Equality
                      ((System_String_o *)pIVar3->klass,StringLiteral_14839/*"WEAPON_RANDOM"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034df798 with catch @ 034e01b0 */
    if (bVar2) {
                    /* catch() { ... } // from try @ 034df784 with catch @ 034e01b4 */
                    /* catch() { ... } // from try @ 034df77c with catch @ 034e01b8 */
                    /* catch() { ... } // from try @ 034df750 with catch @ 034e01bc */
                    /* catch() { ... } // from try @ 034df738 with catch @ 034e01c0 */
                    /* catch() { ... } // from try @ 034df6a4 with catch @ 034e01c4 */
      pHVar6 = (HOOAAGABMBL_o *)
               DJNBJHPDKDP__DEICJJOIDDF<object>
                         ((System_Collections_Generic_List_T__o *)(__this->fields).LGHNHMJIDIB,
                          Method_DJNBJHPDKDP_DEICJJOIDDF<HOOAAGABMBL>__);
                    /* catch() { ... } // from try @ 034e00b4 with catch @ 034e01c8 */
      while (pHVar6 != (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 034df764 with catch @ 034e01d8 */
                    /* catch() { ... } // from try @ 034e00ac with catch @ 034e01dc */
                    /* catch() { ... } // from try @ 034df694 with catch @ 034e01e0 */
                    /* catch() { ... } // from try @ 034e00a8 with catch @ 034e01e4 */
        bVar2 = System_String__op_Equality
                          ((pHVar6->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_14839/*"WEAPON_RANDOM"*/,
                           (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034e00a4 with catch @ 034e01e8 */
                    /* catch() { ... } // from try @ 034dfd14 with catch @ 034e01ec */
                    /* catch() { ... } // from try @ 034dfd28 with catch @ 034e01f0 */
                    /* catch() { ... } // from try @ 034dfcfc with catch @ 034e01f4 */
                    /* catch() { ... } // from try @ 034e0058 with catch @ 034e01f8 */
                    /* catch() { ... } // from try @ 034df5b0 with catch @ 034e01fc */
        if ((!bVar2) &&
           (bVar2 = System_String__op_Equality
                              ((pHVar6->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_14837/*"WEAPON_DEFAULT_RANDOM"*/,
                               (MethodInfo *)0x0), !bVar2)) {
          return pHVar6;
        }
                    /* catch() { ... } // from try @ 034dfccc with catch @ 034e0200 */
                    /* catch() { ... } // from try @ 034df620 with catch @ 034e0204 */
                    /* catch() { ... } // from try @ 034e003c with catch @ 034e0208 */
        pHVar6 = (HOOAAGABMBL_o *)
                 DJNBJHPDKDP__DEICJJOIDDF<object>
                           ((System_Collections_Generic_List_T__o *)(__this->fields).LGHNHMJIDIB,
                            Method_DJNBJHPDKDP_DEICJJOIDDF<HOOAAGABMBL>__);
                    /* catch() { ... } // from try @ 034e00a0 with catch @ 034e020c */
                    /* catch() { ... } // from try @ 034e009c with catch @ 034e0210 */
      }
    }
    else {
                    /* catch() { ... } // from try @ 034dffb4 with catch @ 034e0218 */
                    /* catch() { ... } // from try @ 034e00b8 with catch @ 034e021c */
                    /* catch() { ... } // from try @ 034df5cc with catch @ 034e0220 */
      bVar2 = System_String__op_Equality
                        ((System_String_o *)pIVar3->klass,StringLiteral_14837/*"WEAPON_DEFAULT_RANDOM"*/,(MethodInfo *)0x0);
                    /* try { // try from 034e0230 to 035e0233 has its CatchHandler @ 034e0260 */
      if (bVar2) {
                    /* try { // try from 034e0234 to 035e026f has its CatchHandler @ 034df29c */
        return (__this->fields).HLIAIMHBACP;
      }
      pSVar4 = (__this->fields).LGHNHMJIDIB;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
                    /* catch() { ... } // from try @ 034e0230 with catch @ 034e0260 */
                    /* try { // try from 034e0270 to 035e0283 has its CatchHandler @ 034e0348 */
      System_Predicate<object>___ctor();
      if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* catch() { ... } // from try @ 034dfcdc with catch @ 034e0284
                       try { // try from 034e0284 to 035e029b has its CatchHandler @ 034df29c */
                    /* try { // try from 034e029c to 035e029f has its CatchHandler @ 034e02c0 */
                    /* try { // try from 034e02a0 to 035e02cf has its CatchHandler @ 034df29c */
        pHVar6 = (HOOAAGABMBL_o *)
                 System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)pSVar4,match,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
        return pHVar6;
      }
    }
  }
LAB_034e0214:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034dffe4 with catch @ 034e0214 */
  FUN_01bab8c8();
}


// ===== private void EHPMHOHOPGA(TableViewCell HBHBCBJANIC)  [RVA 0x33E02AC]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$EHPMHOHOPGA @ RVA 0x33E02AC

void Nekki_SF2_GUI_Pvp_PhaseWeapon__EHPMHOHOPGA
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC,
               MethodInfo *method)

{
  int32_t index;
  byte bVar1;
  int32_t iVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  HOOAAGABMBL_o *pHVar6;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TableViewCell_o *pNVar7;
  
                    /* catch() { ... } // from try @ 034e029c with catch @ 034e02c0 */
  if ((DAT_04567e94 & 1) == 0) {
                    /* try { // try from 034e02d0 to 035e02e3 has its CatchHandler @ 034e0348 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
                    /* catch() { ... } // from try @ 034e0020 with catch @ 034e02e4
                       try { // try from 034e02e4 to 035e02fb has its CatchHandler @ 034df29c */
                    /* catch() { ... } // from try @ 034dfff8 with catch @ 034e02e8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
                    /* catch() { ... } // from try @ 034dffc8 with catch @ 034e02ec */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 034e02fc to 035e02ff has its CatchHandler @ 034e0324 */
                    /* try { // try from 034e0300 to 035e032b has its CatchHandler @ 034df29c */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_WeaponPvpCell_TypeInfo);
    DAT_04567e94 = 1;
  }
  if (HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
                    /* catch() { ... } // from try @ 034e02fc with catch @ 034e0324 */
                    /* try { // try from 034e032c to 035e0333 has its CatchHandler @ 034e0348 */
    bVar1 = (Nekki_SF2_GUI_Pvp_WeaponPvpCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 034e0334 to 035e033f has its CatchHandler @ 034df29c */
    if (bVar1 <= (HBHBCBJANIC->klass->_2).naturalAligment) {
                    /* try { // try from 034e0340 to 035e0347 has its CatchHandler @ 034e0348 */
                    /* catch() { ... } // from try @ 034e0270 with catch @ 034e0348
                       catch() { ... } // from try @ 034e02d0 with catch @ 034e0348
                       catch() { ... } // from try @ 034e032c with catch @ 034e0348
                       catch() { ... } // from try @ 034e0340 with catch @ 034e0348 */
      pNVar7 = HBHBCBJANIC;
      if ((HBHBCBJANIC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Pvp_WeaponPvpCell_TypeInfo) {
        pNVar7 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
      }
      goto LAB_034e0354;
    }
  }
  pNVar7 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
LAB_034e0354:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)HBHBCBJANIC,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    if ((pNVar7 != (Nekki_SF2_GUI_TableViewCell_o *)0x0) &&
       (pSVar5 = (__this->fields).LGHNHMJIDIB,
       pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
      iVar4 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)pSVar5,
                         (Il2CppObject *)pNVar7[1].fields.DidSelectEvent,
                         Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
      pSVar5 = (__this->fields).LGHNHMJIDIB;
      if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        iVar2 = (pSVar5->fields)._size + -1;
        if (iVar4 <= iVar2) {
          iVar2 = iVar4;
        }
        index = 0;
        if (-1 < iVar4) {
          index = iVar2;
        }
        (__this->fields).CCOCEGOEFNL = index;
        pHVar6 = (HOOAAGABMBL_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar5,index,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
        (__this->fields).DPPANFCEMLK = pHVar6;
        thunk_FUN_01c20e04();
        Nekki_SF2_GUI_Pvp_PhaseWeapon__FDNHGCEFCFK(__this,method_00);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void FDNHGCEFCFK()  [RVA 0x33DFB28]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$FDNHGCEFCFK @ RVA 0x33DFB28

void Nekki_SF2_GUI_Pvp_PhaseWeapon__FDNHGCEFCFK
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  UnityEngine_UIVertex_array **ppUVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  bool bVar4;
  Nekki_SF2_GUI_Common_Hints_HintCache_o *__this_00;
  System_String_array *values;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  SFButton_o *pSVar7;
  UnityEngine_UIVertex_array *pUVar8;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar9;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  int32_t local_44;
  
  if ((DAT_04567e95 & 1) == 0) {
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22513/*"}{prefabid::"*/);
    FUN_01bab630(&StringLiteral_15820/*"^Return_hint{prefabid::"*/);
    FUN_01bab630(&StringLiteral_15819/*"^Reset_hint{prefabid::"*/);
    FUN_01bab630(&StringLiteral_22504/*"}^"*/);
    DAT_04567e95 = 1;
  }
  pNVar10 = (__this->fields)._ResetToDefaultHint;
  if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pUVar8 = (pNVar10->fields).super.super.m_TempVerts;
    if ((pUVar8 == (UnityEngine_UIVertex_array *)0x0) || ((int)pUVar8->max_length < 2)) {
      __this_00 = Nekki_SF2_GUI_Common_Hints_HintCache__get_Current((MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_GUI_Common_Hints_HintCache_o *)0x0) goto LAB_034dffcc;
      ppUVar1 = &(pNVar10->fields).super.super.m_TempVerts;
      pUVar8 = (UnityEngine_UIVertex_array *)
               Nekki_SF2_GUI_Common_Hints_HintCache__GetAllHints(__this_00,0,(MethodInfo *)0x0);
      *ppUVar1 = pUVar8;
      thunk_FUN_01c20e04(ppUVar1,pUVar8);
      pNVar10 = (__this->fields)._ResetToDefaultHint;
    }
    bVar3 = (__this->fields).LHNJHBEEBMN;
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
    if (values != (System_String_array *)0x0) {
      if (bVar3 == false) {
        if ((int)values->max_length == 0) goto LAB_034dffd0;
                    /* try { // try from 034dfdc0 to 035dfddb has its CatchHandler @ 034e0138 */
        values->m_Items[0] = StringLiteral_15819/*"^Reset_hint{prefabid::"*/;
        thunk_FUN_01c20e04();
        iVar2 = (__this->fields).AFEOEPFDNLI;
        if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 034dfdf4 to 035dfdfb has its CatchHandler @ 034e0144 */
        local_44 = HintSchemeUtility__MICKHLIJECC(0xc,iVar2,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                    /* try { // try from 034dfe0c to 035dfe13 has its CatchHandler @ 034e0148 */
        if ((uint)values->max_length < 2) goto LAB_034dffd0;
        values->m_Items[1] = pSVar5;
                    /* try { // try from 034dfe20 to 035dfe27 has its CatchHandler @ 034e0130 */
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
        if ((uint)values->max_length < 3) goto LAB_034dffd0;
                    /* try { // try from 034dfe38 to 035dfe3f has its CatchHandler @ 034e0124 */
                    /* try { // try from 034dfe40 to 035dfe4f has its CatchHandler @ 034e013c */
        values->m_Items[2] = StringLiteral_22513/*"}{prefabid::"*/;
        thunk_FUN_01c20e04(values->m_Items + 2);
        local_44 = HintSchemeUtility__LOIDNFBMHNN(500,(MethodInfo *)0x0);
                    /* try { // try from 034dfe5c to 035dfe63 has its CatchHandler @ 034e0134 */
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                    /* try { // try from 034dfe68 to 035dfe73 has its CatchHandler @ 034e0120 */
        if ((uint)values->max_length < 4) goto LAB_034dffd0;
                    /* try { // try from 034dfe78 to 035dfe8b has its CatchHandler @ 034e012c */
        values->m_Items[3] = pSVar5;
        thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
                    /* try { // try from 034dfe8c to 035dfe97 has its CatchHandler @ 034e011c */
        if ((uint)values->max_length < 5) goto LAB_034dffd0;
                    /* try { // try from 034dfe98 to 035dffb3 has its CatchHandler @ 034df29c */
        values->m_Items[4] = StringLiteral_22513/*"}{prefabid::"*/;
        thunk_FUN_01c20e04(values->m_Items + 4);
        local_44 = HintSchemeUtility__MICKHLIJECC(0xe,(__this->fields).AFEOEPFDNLI,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        if ((uint)values->max_length < 6) goto LAB_034dffd0;
        values->m_Items[5] = pSVar5;
        thunk_FUN_01c20e04(values->m_Items + 5,pSVar5);
        if ((uint)values->max_length < 7) goto LAB_034dffd0;
        values->m_Items[6] = StringLiteral_22504/*"}^"*/;
        thunk_FUN_01c20e04();
        pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
        if (pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034dffcc;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,pSVar5,(MethodInfo *)0x0);
        pNVar10 = (__this->fields)._ResetToDefaultHint;
        if ((pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034dffcc;
        bVar4 = (__this->fields).CCOCEGOEFNL != 0;
      }
      else {
        if ((int)values->max_length == 0) {
LAB_034dffd0:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[0] = StringLiteral_15820/*"^Return_hint{prefabid::"*/;
        thunk_FUN_01c20e04();
        iVar2 = (__this->fields).AFEOEPFDNLI;
        if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_44 = HintSchemeUtility__MICKHLIJECC(0xc,iVar2,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        if ((uint)values->max_length < 2) goto LAB_034dffd0;
        values->m_Items[1] = pSVar5;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
        if ((uint)values->max_length < 3) goto LAB_034dffd0;
        values->m_Items[2] = StringLiteral_22513/*"}{prefabid::"*/;
        thunk_FUN_01c20e04(values->m_Items + 2);
                    /* try { // try from 034dfccc to 035dfcd3 has its CatchHandler @ 034e0200 */
        local_44 = HintSchemeUtility__LOIDNFBMHNN(500,(MethodInfo *)0x0);
                    /* try { // try from 034dfcdc to 035dfceb has its CatchHandler @ 034e0284 */
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        if ((uint)values->max_length < 4) goto LAB_034dffd0;
        values->m_Items[3] = pSVar5;
                    /* try { // try from 034dfcfc to 035dfd03 has its CatchHandler @ 034e01f4 */
        thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
        if ((uint)values->max_length < 5) goto LAB_034dffd0;
                    /* try { // try from 034dfd14 to 035dfd17 has its CatchHandler @ 034e01ec */
        values->m_Items[4] = StringLiteral_22513/*"}{prefabid::"*/;
        thunk_FUN_01c20e04(values->m_Items + 4);
                    /* try { // try from 034dfd28 to 035dfd47 has its CatchHandler @ 034e01f0 */
        local_44 = HintSchemeUtility__MICKHLIJECC(0xe,(__this->fields).AFEOEPFDNLI,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        if ((uint)values->max_length < 6) goto LAB_034dffd0;
                    /* try { // try from 034dfd4c to 035dfd57 has its CatchHandler @ 034e019c */
        values->m_Items[5] = pSVar5;
        thunk_FUN_01c20e04(values->m_Items + 5,pSVar5);
        if ((uint)values->max_length < 7) goto LAB_034dffd0;
        values->m_Items[6] = StringLiteral_22504/*"}^"*/;
        thunk_FUN_01c20e04();
        pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
        if (pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034dffcc;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,pSVar5,(MethodInfo *)0x0);
        pNVar10 = (__this->fields)._ResetToDefaultHint;
        if ((pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034dffcc;
        bVar4 = true;
      }
      UnityEngine_GameObject__SetActive(pUVar6,bVar4,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._LeftHint;
      if ((pSVar7 != (SFButton_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive
                  (pUVar6,(__this->fields).CCOCEGOEFNL != 0,(MethodInfo *)0x0);
        pSVar7 = (__this->fields)._RightHint;
        if (pSVar7 != (SFButton_o *)0x0) {
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0);
          pSVar9 = (__this->fields).LGHNHMJIDIB;
          if (pSVar9 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
            bVar4 = false;
          }
          else {
            bVar4 = (__this->fields).CCOCEGOEFNL != (pSVar9->fields)._size + -1;
          }
                    /* try { // try from 034dffc8 to 035dffd7 has its CatchHandler @ 034e02ec */
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar6,bVar4,(MethodInfo *)0x0);
                    /* try { // try from 034dffb4 to 035dffbb has its CatchHandler @ 034e0218 */
            return;
          }
        }
      }
    }
  }
LAB_034dffcc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public TableViewCell CellForRowInTableView(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x33E0400]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$CellForRowInTableView @ RVA 0x33E0400

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Pvp_PhaseWeapon__CellForRowInTableView
          (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
          int32_t JDEFJPHCNMM,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this_00;
  HOOAAGABMBL_o *CJNHFNHJHPE;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_04567e96 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<WeaponPvpCell>__);
    DAT_04567e96 = 1;
  }
  if (HDFMPLDOEJG != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_00 = (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (HDFMPLDOEJG,JDEFJPHCNMM,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<WeaponPvpCell>__);
    __this_01 = (__this->fields).LGHNHMJIDIB;
    if ((__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) &&
       (CJNHFNHJHPE = (HOOAAGABMBL_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,JDEFJPHCNMM,
                                 Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__),
       __this_00 != (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *)0x0)) {
      Nekki_SF2_GUI_Pvp_WeaponPvpCell__set_ItemInfo(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_TrackingDeviceID(int CJNHFNHJHPE)  [RVA 0x33E04B0]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$set_TrackingDeviceID @ RVA 0x33E04B0

void Nekki_SF2_GUI_Pvp_PhaseWeapon__set_TrackingDeviceID
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).AFEOEPFDNLI = CJNHFNHJHPE;
  Nekki_SF2_GUI_Pvp_PhaseWeapon__NNCDBOLMLHK(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public int get_TrackingDeviceID()  [RVA 0x33E04B8]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$get_TrackingDeviceID @ RVA 0x33E04B8

int32_t Nekki_SF2_GUI_Pvp_PhaseWeapon__get_TrackingDeviceID
                  (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  return (__this->fields).AFEOEPFDNLI;
}


// ===== private void GNJPFHIGMJB(int DPJIDNBJIBG, float LFJGFLNMBMC = 0.3)  [RVA 0x33DEFAC]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$GNJPFHIGMJB @ RVA 0x33DEFAC

void Nekki_SF2_GUI_Pvp_PhaseWeapon__GNJPFHIGMJB
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,int32_t DPJIDNBJIBG,float LFJGFLNMBMC,
               MethodInfo *method)

{
  int index;
  int iVar1;
  bool bVar2;
  BNAIBAODKAK_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  HOOAAGABMBL_o *pHVar3;
  Nekki_SF2_GUI_TableView_o *__this_02;
  HOOAAGABMBL_o **ppHVar4;
  
  if ((DAT_04567e97 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04567e97 = 1;
  }
  __this_00 = (__this->fields).super.KPLEAGPMKFD;
  if (__this_00 == (BNAIBAODKAK_o *)0x0) {
LAB_034df0f0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(__this_00,(MethodInfo *)0x0);
  if (bVar2) {
    __this_01 = (__this->fields).LGHNHMJIDIB;
    (__this->fields).FODBFCKBFDF = false;
    if (__this_01 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_034df0f0;
    iVar1 = (__this_01->fields)._size + -1;
    if (DPJIDNBJIBG <= iVar1) {
      iVar1 = DPJIDNBJIBG;
    }
    index = 0;
    if (-1 < DPJIDNBJIBG) {
      index = iVar1;
    }
                    /* try { // try from 034df04c to 035df0d7 has its CatchHandler @ 034df04c
                       catch() { ... } // from try @ 034df04c with catch @ 034df04c
                       catch() { ... } // from try @ 034df104 with catch @ 034df04c
                       catch() { ... } // from try @ 034df128 with catch @ 034df04c
                       catch() { ... } // from try @ 034df150 with catch @ 034df04c
                       catch() { ... } // from try @ 034df190 with catch @ 034df04c */
    if ((index != (__this->fields).CCOCEGOEFNL) ||
       (LFJGFLNMBMC <= UnityEngine_Mathf_TypeInfo->static_fields->Epsilon)) {
      (__this->fields).CCOCEGOEFNL = index;
      pHVar3 = (HOOAAGABMBL_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,index,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      ppHVar4 = &(__this->fields).DPPANFCEMLK;
      *ppHVar4 = pHVar3;
      thunk_FUN_01c20e04(ppHVar4,pHVar3);
      __this_02 = (__this->fields)._TableView;
      if (__this_02 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_034df0f0;
      Nekki_SF2_GUI_TableView__ScrollToCell
                (__this_02,(__this->fields).CCOCEGOEFNL,LFJGFLNMBMC,(MethodInfo *)0x0);
      if (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon < LFJGFLNMBMC) {
        (__this->fields).ACNLMCEJHII = (__this->fields).CCOCEGOEFNL == 0;
                    /* try { // try from 034df0d8 to 035df0df has its CatchHandler @ 034df134 */
        EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// ===== public override void Free()  [RVA 0x33E04C0]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$Free @ RVA 0x33E04C0

void Nekki_SF2_GUI_Pvp_PhaseWeapon__Free(Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  
  if ((DAT_04567e98 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_JCDGMAEDFIF__);
    DAT_04567e98 = 1;
  }
  Nekki_SF2_GUI_Pvp_PhaseItem__Free((Nekki_SF2_GUI_Pvp_PhaseItem_o *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
  System_Action<int,_object,_Int32Enum>___ctor();
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLEKKANADII__KJHIBNMCKKG(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== private void DBICODDPEAG()  [RVA 0x33E0570]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$DBICODDPEAG @ RVA 0x33E0570

void Nekki_SF2_GUI_Pvp_PhaseWeapon__DBICODDPEAG
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  (__this->fields).LHNJHBEEBMN = false;
  return;
}


// ===== public void TableViewDidHighlightCellForRow(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x33E0578]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$TableViewDidHighlightCellForRow @ RVA 0x33E0578

void Nekki_SF2_GUI_Pvp_PhaseWeapon__TableViewDidHighlightCellForRow
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
               int32_t JDEFJPHCNMM,MethodInfo *method)

{
  return;
}


// ===== public void TableViewDidSelectCellForRow(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x33E057C]
// Nekki.SF2.GUI.Pvp.PhaseWeapon$$TableViewDidSelectCellForRow @ RVA 0x33E057C

void Nekki_SF2_GUI_Pvp_PhaseWeapon__TableViewDidSelectCellForRow
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
               int32_t JDEFJPHCNMM,MethodInfo *method)

{
  return;
}

