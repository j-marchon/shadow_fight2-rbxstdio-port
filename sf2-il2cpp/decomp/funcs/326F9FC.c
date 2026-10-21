// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$Init @ RVA 0x326F9FC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_IObservable_object__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *pIVar3;
  CloseButton_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  EEGDOGKBLNG_o *pEVar5;
  System_Action_o *CJNHFNHJHPE;
  ProgressLabelButton_o *pPVar6;
  UnityEngine_Events_UnityAction_o *call;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE_00;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  NDPMLPGANCI_o *__this_02;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar9;
  UnityEngine_Events_UnityEvent_o *__this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567214 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_get_Values__
                );
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_get_Current__
                );
    FUN_01bab630(&FCBPECGCJLN_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<object>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BHLHBBKAFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BJOEGEFLFND__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_GBODNEDLIDF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_JNKINOCEKIE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_BuyConsContainer>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_6981);
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_10045);
    FUN_01bab630(&StringLiteral_21200);
    FUN_01bab630(&StringLiteral_17348);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567214 = 1;
  }
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._currentValue = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_17348,
             StringLiteral_21200,StringLiteral_3640,1,(MethodInfo *)0x0);
  source = HABIFHOHHOF__ELOBMGDKLPK((__this->fields)._closeButton,(MethodInfo *)0x0);
                    /* try { // try from 0336fbe0 to 0346fe4b has its CatchHandler @ 0336fbe0
                       catch() { ... } // from try @ 0336fbe0 with catch @ 0336fbe0
                       catch() { ... } // from try @ 0336fe70 with catch @ 0336fbe0
                       catch() { ... } // from try @ 0336ffc8 with catch @ 0336fbe0
                       catch() { ... } // from try @ 03370008 with catch @ 0336fbe0
                       catch() { ... } // from try @ 03370038 with catch @ 0336fbe0 */
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  pIVar3 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     ((System_IObservable_T__o *)source,onNext,
                      Method_UniRx_ObservableExtensions_Subscribe<object>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar3,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).HBJPBPBIOOB,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  __this_00 = (__this->fields)._closeButton;
  if (__this_00 != (CloseButton_o *)0x0) {
    CloseButton__PlayIdleAnimation(__this_00,(MethodInfo *)0x0);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FEBICCAKJMD
    ;
    (__this->fields).HODAIAEDHBL = 0;
    if ((pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (System_Collections_Generic_Dictionary<object,_object>__Clear
                  (pSVar4,
                   Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_Clear__),
       IMMNELPBGIF != (Il2CppObject *)0x0)) {
      bVar1 = (FCBPECGCJLN_TypeInfo->_2).naturalAligment;
      if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
         ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)FCBPECGCJLN_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(IMMNELPBGIF);
      }
      (__this->fields).NENHDBKCMFE = (int64_t)IMMNELPBGIF[1].klass;
      (__this->fields).PAAIEEFEBKK = IMMNELPBGIF[1].monitor;
      thunk_FUN_01c20e04(&(__this->fields).PAAIEEFEBKK);
      (__this->fields).LGHANMDEKPA = (OHDDKGHEEPA_o *)IMMNELPBGIF[2].klass;
      thunk_FUN_01c20e04(&(__this->fields).LGHANMDEKPA);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar5 != (EEGDOGKBLNG_o *)0x0) {
        (pEVar5->fields).PDHCLFKCAAE = StringLiteral_1;
        thunk_FUN_01c20e04();
        CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)0x0;
        LJLLAKHOFFF__JAEOMHIAHJB
                  ((UnityEngine_UI_Button_o *)(__this->fields).super.super._btnOK,2,true,
                   (MethodInfo *)0x0);
        pPVar6 = (__this->fields)._btnFight;
        if (pPVar6 != (ProgressLabelButton_o *)0x0) {
          ProgressLabelButton__Init(pPVar6,(MethodInfo *)0x0);
          pPVar6 = (__this->fields)._btnFight;
          if (pPVar6 != (ProgressLabelButton_o *)0x0) {
            LabelButton__set_Alias((LabelButton_o *)pPVar6,StringLiteral_21200,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__SetBtnFightValueBorders_MS
                      (__this,0,1000,pMVar9);
            pPVar6 = (__this->fields)._btnFight;
            if (pPVar6 != (ProgressLabelButton_o *)0x0) {
              __this_03 = (UnityEngine_Events_UnityEvent_o *)
                          (pPVar6->fields).super.super.super.super.m_OnClick;
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
                pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                CJNHFNHJHPE_00 =
                     (System_Action_IList_PIADCKMDDAK___o *)
                     thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
                pMVar9 = (MethodInfo *)0x0;
                System_Action<object>___ctor();
                if (pEVar5 != (EEGDOGKBLNG_o *)0x0) {
                  method_01 = (MethodInfo *)0x0;
                  EEGDOGKBLNG__KODPPOKHKML(pEVar5,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__BPKMFPHJDPM
                            (__this,2,method_01);
                  pUVar7 = (__this->fields)._buyConsContainer1Pos;
                  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                    Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__BBLNNJBABKO
                              (__this,StringLiteral_8722,pUVar8,pMVar9);
                    pUVar7 = (__this->fields)._buyConsContainer2Pos;
                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0336fe4c to 0346fe53 has its CatchHandler @ 0336ffec */
                      pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__BBLNNJBABKO
                                (__this,StringLiteral_10045,pUVar8,pMVar9);
                    /* try { // try from 0336fe6c to 0346fe6f has its CatchHandler @ 0336ffe8 */
                      pUVar7 = (__this->fields)._buyConsContainer3Pos;
                    /* try { // try from 0336fe70 to 0346ffbf has its CatchHandler @ 0336fbe0 */
                      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                        Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__BBLNNJBABKO
                                  (__this,StringLiteral_6981,pUVar8,pMVar9);
                        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields).FEBICCAKJMD;
                        if ((pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)
                                       0x0) &&
                           (__this_01 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                                                  (pSVar4,
                                                  Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_get_Values__
                                                  ),
                           __this_01 !=
                           (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                           0x0)) {
                          System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                                    (&local_88,__this_01,
                                     Method_System_Collections_Generic_Dictionary_ValueCollection<string,_BuyConsContainer>_GetEnumerator__
                                    );
                          local_70.fields._index = local_88.fields._index;
                          local_70.fields._version = local_88.fields._version;
                          local_70.fields._dictionary = local_88.fields._dictionary;
                          local_70.fields._currentValue = local_88.fields._currentValue;
                          while( true ) {
                            bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                                              (&local_70,
                                               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_MoveNext__
                                              );
                            pIVar3 = local_70.fields._currentValue;
                            if (!bVar2) break;
                            if ((Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)
                                local_70.fields._currentValue ==
                                (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336ffc0 to 0346ffc3 has its CatchHandler @ 0336ffe4 */
                              FUN_01bab8c8();
                            }
                            pUVar8 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)
                                                local_70.fields._currentValue,(MethodInfo *)0x0);
                            if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336ffc4 to 0346ffc7 has its CatchHandler @ 0336ffe0 */
                              FUN_01bab8c8();
                            }
                            pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
                            if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
                            Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ChangeHintDescriptionParent
                                      ((Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)pIVar3,
                                       pUVar8,(MethodInfo *)0x0);
                          }
                          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                                    (&local_70,
                                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_Dispose__
                                    );
                          __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                          CJNHFNHJHPE_01 =
                               (System_Action_DBMPKPJGIPI__o *)
                               thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                          System_Action<Int32Enum>___ctor();
                          if (__this_02 != (NDPMLPGANCI_o *)0x0) {
                            NDPMLPGANCI__FKFIIDIJIEI(__this_02,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                            Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__CIHKNMDAPBG
                                      (__this,0.0001,method_00);
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
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336ffc8 to 03470003 has its CatchHandler @ 0336fbe0 */
  FUN_01bab8c8();
}

