// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$Init @ RVA 0x3257D84

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__Init
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t DNBBBGEENMM;
  byte bVar1;
  bool bVar2;
  UnityEngine_Events_UnityAction_T0__o *pUVar3;
  Il2CppObject *pIVar4;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  UnityEngine_GameObject_o *pUVar7;
  System_Action_CheckBox_EKFFAMKMBIH__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar8;
  UnityEngine_UI_Slider_o *pUVar9;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  UnityEngine_UI_ScrollRect_o *pUVar10;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  Il2CppClass *GKLEODLEPMA;
  UnityEngine_RectTransform_o *x;
  Nekki_SF2_GUI_Dialogs_ScrollDialogLine_o *x_00;
  System_String_o **ppSVar11;
  
  if ((DAT_04567179 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    FUN_01bab630(&DOKAKKCAHHO_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_CNAFCHHHKGD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_GLEOGMBBLNH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_IODLFAFCALG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_KOHLIOECEFA__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567179 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
LAB_03357ebc:
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1,
               (__this->fields).super.NIEHEOKFPAN,(__this->fields).super.LLBBHINDIDB,0,
               (MethodInfo *)0x0);
  }
  else {
    bVar1 = (DOKAKKCAHHO_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)DOKAKKCAHHO_TypeInfo)) goto LAB_03357ebc;
    (__this->fields).super.NIEHEOKFPAN = (System_String_o *)IMMNELPBGIF[4].klass;
    thunk_FUN_01c20e04();
    (__this->fields).super.FKKACPDDADI = *(int32_t *)((long)&IMMNELPBGIF[5].monitor + 4);
    (__this->fields).super.AHHAONPHEPD = *(bool_conflict *)&IMMNELPBGIF[4].monitor;
    ppSVar11 = &(__this->fields).super.LLBBHINDIDB;
    *ppSVar11 = (System_String_o *)IMMNELPBGIF[5].klass;
    thunk_FUN_01c20e04(ppSVar11);
    pNVar5 = (__this->fields)._checkbox;
    (__this->fields).super.FHLAKGNIFAF = *(int32_t *)&IMMNELPBGIF[6].klass;
    (__this->fields).super.KJLEAJNIFPA = *(bool_conflict *)&IMMNELPBGIF[5].monitor;
    GKLEODLEPMA = IMMNELPBGIF[3].klass;
    (__this->fields).super.FCBFEJDLODF = *(bool_conflict *)&IMMNELPBGIF[3].monitor;
    DNBBBGEENMM = *(int32_t *)((long)&IMMNELPBGIF[3].monitor + 4);
    (__this->fields).MDHEMHAOKPA = *(int32_t *)&IMMNELPBGIF[2].monitor;
    if (pNVar5 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_03358278;
    Nekki_SF2_GUI_Scripts_CheckBox__ClearEventsSubscription(pNVar5,(MethodInfo *)0x0);
    if ((__this->fields).MDHEMHAOKPA == 0) {
      pNVar6 = (__this->fields)._checkboxText;
      if ((pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
         pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03358278;
      UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._checkbox;
      if ((pNVar5 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) ||
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03358278;
      UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
    }
    else {
      pNVar6 = (__this->fields)._checkboxText;
      (__this->fields).NLMBICAKOGJ = *(bool_conflict *)&IMMNELPBGIF[1].monitor;
      if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03358278;
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (pNVar6,(System_String_o *)IMMNELPBGIF[2].klass,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._checkboxText;
      if ((pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
         pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03358278;
      UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._checkbox;
      if ((pNVar5 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) ||
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03358278;
      UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._checkbox;
      if (pNVar5 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_03358278;
      Nekki_SF2_GUI_Scripts_CheckBox__set_State
                (pNVar5,*(int32_t *)((long)&IMMNELPBGIF[2].monitor + 4),(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._checkbox;
      if (pNVar5 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_03358278;
      Nekki_SF2_GUI_Scripts_CheckBox__ClearEventsSubscription(pNVar5,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._checkbox;
      CJNHFNHJHPE = (System_Action_CheckBox_EKFFAMKMBIH__o *)
                    thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (pNVar5 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_03358278;
      pMVar8 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Scripts_CheckBox__add_OnChangedState(pNVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._checkbox;
      if (pNVar5 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_03358278;
      Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__GLEOGMBBLNH
                (__this,(pNVar5->fields).OIKLOAGFFGO,pMVar8);
    }
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(System_String_o *)GKLEODLEPMA,
               (__this->fields).super.NIEHEOKFPAN,(__this->fields).super.LLBBHINDIDB,DNBBBGEENMM,
               (MethodInfo *)0x0);
    if (IMMNELPBGIF[1].klass != (Il2CppClass *)0x0) {
      x = (__this->fields)._scrollContent;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        x_00 = (__this->fields)._ScrollDialogLinePrefab;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pMVar8 = (MethodInfo *)0x0;
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__IFOKEBGLIIM
                    (__this,(System_Collections_Generic_List_NBLEEDEAPHB__o *)IMMNELPBGIF[1].klass,
                     pMVar8);
        }
      }
    }
  }
  pUVar9 = (__this->fields)._slider;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar9 = (__this->fields)._slider;
    if (pUVar9 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_03358278;
    __this_00 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar9->fields).m_OnValueChanged;
    pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (__this_00 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_03358278;
    UnityEngine_Events_UnityEvent<float>__AddListener
              (__this_00,pUVar3,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
  }
  pUVar10 = (__this->fields)._scroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar8 = extraout_x1;
  if (bVar2) {
    pUVar10 = (__this->fields)._scroll;
    if (pUVar10 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar10->fields).m_OnValueChanged;
      pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
      UnityEngine_Events_UnityAction<Vector2>___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
        UnityEngine_Events_UnityEvent<Vector2>__AddListener
                  (__this_01,pUVar3,Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
        pMVar8 = extraout_x1_00;
        goto LAB_03357fcc;
      }
    }
LAB_03358278:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_03357fcc:
  Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__FPBDGBCLCPF(__this,pMVar8);
  (__this->fields).HDJDEJEGLEH = true;
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar4,(MethodInfo *)0x0);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  pIVar4 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)source,onNext,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar4,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

