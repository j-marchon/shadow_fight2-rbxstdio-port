// TypeDefIndex 1904
// Namespace: Nekki.SF2.GUI.Dialogs
// public class MultiLineScrollDialog : BaseDialog
// Fields:
//   private ScrollRect _scroll; // 0xC8
//   private RectTransform _scrollContent; // 0xD0
//   private VerticalLayoutGroup _verticalLayoutGroup; // 0xD8
//   private Slider _slider; // 0xE0
//   private ScrollDialogLine _ScrollDialogLinePrefab; // 0xE8
//   private ScrollDialogButton _ScrollDialogButtonPrefab; // 0xF0
//   private CheckBox _checkbox; // 0xF8
//   private LabelAlias _checkboxText; // 0x100
//   private const float KPIEANCNPGB = 40;
//   private List<ScrollDialogElement> AALHBGHLAGO; // 0x108
//   private bool NLMBICAKOGJ; // 0x110
//   private bool HDJDEJEGLEH; // 0x111
//   private DOKAKKCAHHO.LFAMCHIPCOA MDHEMHAOKPA; // 0x114

// ===== private void HMMKHMODHGF(NBLEEDEAPHB NOLAOGFOPJG)  [RVA 0x3257A5C]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$HMMKHMODHGF @ RVA 0x3257A5C

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__HMMKHMODHGF
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,NBLEEDEAPHB_o *NOLAOGFOPJG,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_ScrollDialogElement__o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Dialogs_ScrollDialogElement_array *pNVar4;
  Nekki_SF2_GUI_Dialogs_ScrollDialogLine_o *pNVar5;
  
  if ((DAT_04567177 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ScrollDialogLine>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567177 = 1;
  }
  pNVar5 = (__this->fields)._ScrollDialogLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pNVar5 = (__this->fields)._ScrollDialogLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar5 = (Nekki_SF2_GUI_Dialogs_ScrollDialogLine_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pNVar5,
                      Method_UnityEngine_Object_Instantiate<ScrollDialogLine>__);
  if (pNVar5 != (Nekki_SF2_GUI_Dialogs_ScrollDialogLine_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_ScrollDialogLine__Init(pNVar5,NOLAOGFOPJG,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._scrollContent;
    if ((__this_02 != (UnityEngine_RectTransform_o *)0x0) &&
       (parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<ScrollDialogElement>_Add__;
      __this_01 = (__this->fields).AALHBGHLAGO;
      if (__this_01 != (System_Collections_Generic_List_ScrollDialogElement__o *)0x0) {
        pNVar4 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pNVar4 != (Nekki_SF2_GUI_Dialogs_ScrollDialogElement_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pNVar4->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pNVar4->m_Items[(int)uVar1] = (Nekki_SF2_GUI_Dialogs_ScrollDialogElement_o *)pNVar5;
            thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,pNVar5);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IODLFAFCALG(Unit HOKBHLPPCAH)  [RVA 0x3257BE4]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$IODLFAFCALG @ RVA 0x3257BE4

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__IODLFAFCALG(long __this)

{
  *(undefined1 *)(__this + 0x111) = 1;
  return;
}


// ===== private void ACICKHKFILK(NBLEEDEAPHB NOLAOGFOPJG)  [RVA 0x3257BFC]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$ACICKHKFILK @ RVA 0x3257BFC

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,NBLEEDEAPHB_o *NOLAOGFOPJG,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_ScrollDialogElement__o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Dialogs_ScrollDialogElement_array *pNVar4;
  Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *pNVar5;
  
  if ((DAT_04567178 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ScrollDialogButton>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567178 = 1;
  }
  pNVar5 = (__this->fields)._ScrollDialogButtonPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pNVar5 = (__this->fields)._ScrollDialogButtonPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar5 = (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pNVar5,
                      Method_UnityEngine_Object_Instantiate<ScrollDialogButton>__);
  if (pNVar5 != (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_ScrollDialogButton__Init(pNVar5,NOLAOGFOPJG,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._scrollContent;
    if ((__this_02 != (UnityEngine_RectTransform_o *)0x0) &&
       (parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<ScrollDialogElement>_Add__;
      __this_01 = (__this->fields).AALHBGHLAGO;
      if (__this_01 != (System_Collections_Generic_List_ScrollDialogElement__o *)0x0) {
        pNVar4 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pNVar4 != (Nekki_SF2_GUI_Dialogs_ScrollDialogElement_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pNVar4->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pNVar4->m_Items[(int)uVar1] = (Nekki_SF2_GUI_Dialogs_ScrollDialogElement_o *)pNVar5;
            thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,pNVar5);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x3257D84]
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
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567179 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
LAB_03357ebc:
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1/*""*/,
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


// ===== private void Update()  [RVA 0x3258814]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$Update @ RVA 0x3258814

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__Update
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_RectTransform_o *pUVar5;
  float fVar6;
  UnityEngine_Vector2_o UVar7;
  
  if ((__this->fields).HDJDEJEGLEH != false) {
    (__this->fields).HDJDEJEGLEH = false;
    Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__FPBDGBCLCPF(__this,method);
  }
  if ((__this->fields).NLMBICAKOGJ == false) {
    return;
  }
  pNVar2 = (__this->fields)._checkbox;
  if ((pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar4 = (__this->fields)._checkboxText;
    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar2 = (__this->fields)._checkbox;
      if ((pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) &&
         (pUVar5 = SFButton__get_RectTransform((SFButton_o *)pNVar2,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                    /* try { // try from 03358894 to 03458897 has its CatchHandler @ 03358a78 */
        UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._checkboxText;
                    /* try { // try from 0335889c to 0345889f has its CatchHandler @ 033588ec */
                    /* try { // try from 033588a4 to 034588a7 has its CatchHandler @ 033588e8 */
        if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pNVar2 = (__this->fields)._checkbox, pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0))
        {
          fVar6 = (pNVar4->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y;
                    /* try { // try from 033588ac to 034588af has its CatchHandler @ 033588d0 */
                    /* try { // try from 033588b4 to 034588b7 has its CatchHandler @ 033588e4 */
                    /* try { // try from 033588b8 to 0345890b has its CatchHandler @ 0335849c */
                    /* catch() { ... } // from try @ 033586c0 with catch @ 033588bc */
          fVar6 = (UVar7.fields.x - (fVar6 + fVar6)) * 0.5;
                    /* catch() { ... } // from try @ 033586c8 with catch @ 033588c0 */
          pUVar5 = SFButton__get_RectTransform((SFButton_o *)pNVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03358690 with catch @ 033588c4 */
                    /* catch() { ... } // from try @ 0335867c with catch @ 033588c8 */
                    /* catch() { ... } // from try @ 03358668 with catch @ 033588cc */
                    /* catch() { ... } // from try @ 033588ac with catch @ 033588d0 */
          UnityEngine_TransformExtensions__SetAnchoredPositionX
                    (pUVar5,fVar6 + -5.0,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._checkboxText;
          if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch() { ... } // from try @ 03358644 with catch @ 033588dc */
                    /* catch() { ... } // from try @ 033585e0 with catch @ 033588e0 */
            pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0335869c with catch @ 033588e4
                       catch() { ... } // from try @ 033588b4 with catch @ 033588e4 */
                    /* catch() { ... } // from try @ 0335863c with catch @ 033588e8
                       catch() { ... } // from try @ 033588a4 with catch @ 033588e8 */
                    /* catch() { ... } // from try @ 03358620 with catch @ 033588ec
                       catch() { ... } // from try @ 0335889c with catch @ 033588ec */
                    /* catch() { ... } // from try @ 03358610 with catch @ 033588f0 */
                    /* catch() { ... } // from try @ 033585f4 with catch @ 033588f4 */
            UnityEngine_TransformExtensions__SetAnchoredPositionX
                      (pUVar5,fVar6 + 5.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x325890C]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$OnDestroy @ RVA 0x325890C

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  System_Collections_Generic_List_ScrollDialogElement__o *pSVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  UnityEngine_UI_ScrollRect_o *pUVar5;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  
                    /* try { // try from 0335890c to 03458923 has its CatchHandler @ 03358bf0 */
                    /* try { // try from 03358924 to 03458a8f has its CatchHandler @ 0335849c */
  if ((DAT_0456717a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>_Clear__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_CNAFCHHHKGD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_KOHLIOECEFA__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_RemoveListener__);
    DAT_0456717a = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).AALHBGHLAGO;
  if (pSVar3 == (System_Collections_Generic_List_ScrollDialogElement__o *)0x0) goto LAB_03358ae4;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._slider;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar4 = (__this->fields)._slider;
    if (pUVar4 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_03358ae4;
    __this_00 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar4->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (__this_00 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_03358ae4;
    UnityEngine_Events_UnityEvent<float>__RemoveListener
              (__this_00,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
  }
  pUVar5 = (__this->fields)._scroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar5 = (__this->fields)._scroll;
                    /* catch() { ... } // from try @ 033585cc with catch @ 03358a78
                       catch() { ... } // from try @ 03358894 with catch @ 03358a78 */
  if (pUVar5 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar5->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
                    /* try { // try from 03358a90 to 03458aa7 has its CatchHandler @ 03358be0 */
                    /* try { // try from 03358aa8 to 03458ba7 has its CatchHandler @ 0335849c */
    UnityEngine_Events_UnityAction<Vector2>___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
      UnityEngine_Events_UnityEvent<Vector2>__RemoveListener
                (__this_01,pUVar2,Method_UnityEngine_Events_UnityEvent<Vector2>_RemoveListener__);
      return;
    }
  }
LAB_03358ae4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IFOKEBGLIIM(List<NBLEEDEAPHB> FCOIPKFOGMM)  [RVA 0x32582E8]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$IFOKEBGLIIM @ RVA 0x32582E8

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__IFOKEBGLIIM
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,
               System_Collections_Generic_List_NBLEEDEAPHB__o *FCOIPKFOGMM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456717b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
    DAT_0456717b = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (FCOIPKFOGMM != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)FCOIPKFOGMM,
               Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
        Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__LBBMPJKOINK(__this,1.0,method_00);
        return;
      }
      if ((NBLEEDEAPHB_o *)local_48.fields._current == (NBLEEDEAPHB_o *)0x0) break;
      iVar1 = ((NBLEEDEAPHB_Fields *)((long)local_48.fields._current + 0x10))->KFHPFEKBDFM;
      if (iVar1 == 0) {
        Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__HMMKHMODHGF
                  (__this,(NBLEEDEAPHB_o *)local_48.fields._current,method);
      }
      else if (iVar1 == 2) {
        Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__ACICKHKFILK
                  (__this,(NBLEEDEAPHB_o *)local_48.fields._current,method);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CNAFCHHHKGD(Vector2 CJNHFNHJHPE)  [RVA 0x3258B28]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$CNAFCHHHKGD @ RVA 0x3258B28

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__CNAFCHHHKGD
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,
               UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Slider_o *pUVar2;
  float fVar3;
  float value;
  
  if ((DAT_0456717c & 1) == 0) {
    FUN_01bab630(CJNHFNHJHPE.fields.x,&UnityEngine_Object_TypeInfo);
    DAT_0456717c = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._slider;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 03358bb8 to 03458bcb has its CatchHandler @ 0335849c */
    return;
  }
  pUVar2 = (__this->fields)._slider;
  if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
    fVar3 = UnityEngine_UI_Slider__get_normalizedValue(pUVar2,(MethodInfo *)0x0);
    value = 1.0 - CJNHFNHJHPE.fields.y;
                    /* try { // try from 03358ba8 to 03458bb7 has its CatchHandler @ 03358bec */
    if (value == fVar3) {
      return;
    }
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* try { // try from 03358bcc to 03458bdb has its CatchHandler @ 03358bdc */
      UnityEngine_UI_Slider__set_normalizedValue(pUVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03358bcc with catch @ 03358bdc */
  FUN_01bab8c8();
}


// ===== private void GLEOGMBBLNH(CheckBox.EKFFAMKMBIH HJEBKCDDBAB)  [RVA 0x325827C]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$GLEOGMBBLNH @ RVA 0x325827C

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__GLEOGMBBLNH
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,int32_t HJEBKCDDBAB,
               MethodInfo *method)

{
  int iVar1;
  LabelButton_o *pLVar2;
  bool value;
  
  iVar1 = (__this->fields).MDHEMHAOKPA;
  if ((HJEBKCDDBAB == 0) && (iVar1 == 2)) {
    value = true;
  }
  else {
    value = HJEBKCDDBAB == 1 && iVar1 == 1;
  }
  pLVar2 = (__this->fields).super._btnOK;
  if (pLVar2 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar2,value,(MethodInfo *)0x0);
    pLVar2 = (__this->fields).super._btnCancel;
    if (pLVar2 != (LabelButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pLVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KOHLIOECEFA(float CJNHFNHJHPE)  [RVA 0x3258BE0]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$KOHLIOECEFA @ RVA 0x3258BE0

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__KOHLIOECEFA
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  
                    /* catch() { ... } // from try @ 03358a90 with catch @ 03358be0 */
                    /* try { // try from 03358be4 to 03458bf7 has its CatchHandler @ 03358c00 */
                    /* catch() { ... } // from try @ 03358ba8 with catch @ 03358bec */
                    /* catch() { ... } // from try @ 0335890c with catch @ 03358bf0 */
                    /* try { // try from 03358bf8 to 03458c03 has its CatchHandler @ 0335849c */
                    /* catch() { ... } // from try @ 03358be4 with catch @ 03358c00 */
  if ((DAT_0456717d & 1) == 0) {
                    /* catch() { ... } // from try @ 03358c68 with catch @ 03358c0c
                       catch() { ... } // from try @ 03358ca4 with catch @ 03358c0c
                       catch() { ... } // from try @ 03358da4 with catch @ 03358c0c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456717d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03358c1c to 03458c23 has its CatchHandler @ 03358c74 */
  pUVar2 = (__this->fields)._scroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03358c2c to 03458c3f has its CatchHandler @ 03358c6c */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = (__this->fields)._scroll;
    if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar3 = UnityEngine_UI_ScrollRect__get_normalizedPosition(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 03358c54 to 03458c5f has its CatchHandler @ 03358c68 */
    if (1.0 - CJNHFNHJHPE != UVar3.fields.y) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03358c1c with catch @ 03358c74
                        */
      Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__LBBMPJKOINK(__this,1.0 - CJNHFNHJHPE,method_00);
      return;
    }
  }
                    /* try { // try from 03358c64 to 03458c67 has its CatchHandler @ 03358c70 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03358c54 with catch @ 03358c68
                       try { // try from 03358c68 to 03458c8b has its CatchHandler @ 03358c0c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03358c2c with catch @ 03358c6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03358c64 with catch @ 03358c70
                        */
  return;
}


// ===== private void GBPDDFOIDPG()  [RVA 0x3257BF0]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$GBPDDFOIDPG @ RVA 0x3257BF0

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__GBPDDFOIDPG
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  (__this->fields).HDJDEJEGLEH = true;
  return;
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x3258C8C]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$LCGFJKFJKJK @ RVA 0x3258C8C

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  LabelButton_o *pLVar1;
  
                    /* try { // try from 03358c8c to 03458ca3 has its CatchHandler @ 03358d9c */
  Nekki_SF2_GUI_Dialogs_BaseDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,DNBBBGEENMM,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).super._btnOK;
  if (pLVar1 != (LabelButton_o *)0x0) {
                    /* try { // try from 03358ca4 to 03458d8b has its CatchHandler @ 03358c0c */
    LabelButton__set_ButtonColor(pLVar1,(__this->fields).super.FKKACPDDADI,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super._btnCancel;
    if (pLVar1 != (LabelButton_o *)0x0) {
      LabelButton__set_ButtonColor(pLVar1,(__this->fields).super.FHLAKGNIFAF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FPBDGBCLCPF()  [RVA 0x3258474]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$FPBDGBCLCPF @ RVA 0x3258474

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__FPBDGBCLCPF
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_ScrollDialogElement__o *pSVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar4;
  UnityEngine_UI_ScrollRect_o *pUVar5;
  UnityEngine_UI_Slider_o *pUVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o UVar10;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456717e & 1) == 0) {
                    /* try { // try from 0335849c to 034585cb has its CatchHandler @ 0335849c
                       catch() { ... } // from try @ 0335849c with catch @ 0335849c
                       catch() { ... } // from try @ 033585e4 with catch @ 0335849c
                       catch() { ... } // from try @ 033586d8 with catch @ 0335849c
                       catch() { ... } // from try @ 033588b8 with catch @ 0335849c
                       catch() { ... } // from try @ 03358924 with catch @ 0335849c
                       catch() { ... } // from try @ 03358aa8 with catch @ 0335849c
                       catch() { ... } // from try @ 03358bb8 with catch @ 0335849c
                       catch() { ... } // from try @ 03358bf8 with catch @ 0335849c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_0456717e = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).AALHBGHLAGO;
  if (pSVar2 != (System_Collections_Generic_List_ScrollDialogElement__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ScrollDialogElement>_GetEnumerator__);
    fVar7 = 0.0;
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_MoveNext__
                             ), __this_00 = local_70.fields._current, bVar1) {
      if ((UnityEngine_Component_o *)local_70.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*((UnityEngine_Component_c *)(local_70.fields._current)->klass)[1]._1.image)
                (local_70.fields._current,
                 ((UnityEngine_Component_c *)(local_70.fields._current)->klass)[1]._1.gc_desc);
      pUVar3 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
        pUVar3 = (UnityEngine_RectTransform_o *)0x0;
      }
      else if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
        pUVar3 = (UnityEngine_RectTransform_o *)0x0;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033585cc to 034585d3 has its CatchHandler @ 03358a78 */
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
        fVar7 = fVar7 + UVar8.fields.m_Height;
      }
    }
                    /* try { // try from 033585e0 to 034585e3 has its CatchHandler @ 033588e0 */
                    /* try { // try from 033585e4 to 034585f3 has its CatchHandler @ 0335849c */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_Dispose__);
    pUVar4 = (__this->fields)._verticalLayoutGroup;
                    /* try { // try from 033585f4 to 03458603 has its CatchHandler @ 033588f4 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
                    /* try { // try from 03358610 to 0345861f has its CatchHandler @ 033588f0 */
      pUVar4 = (__this->fields)._verticalLayoutGroup;
      if ((pUVar4 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) ||
         (pSVar2 = (__this->fields).AALHBGHLAGO,
         pSVar2 == (System_Collections_Generic_List_ScrollDialogElement__o *)0x0))
      goto LAB_03358790;
                    /* try { // try from 03358620 to 03458627 has its CatchHandler @ 033588ec */
      fVar7 = fVar7 + *(float *)&(pUVar4->fields).super.m_ChildScaleWidth *
                      (float)((pSVar2->fields)._size + -1);
    }
    pUVar3 = (__this->fields)._scrollContent;
                    /* try { // try from 0335863c to 0345863f has its CatchHandler @ 033588e8 */
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 03358644 to 0345865b has its CatchHandler @ 033588dc */
      UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._scrollContent;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar9.fields.y = fVar7;
        UnityEngine_RectTransform__set_sizeDelta(pUVar3,UVar9,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__LBBMPJKOINK(__this,1.0,method_00);
                    /* try { // try from 03358668 to 03458673 has its CatchHandler @ 033588cc */
        pUVar5 = (__this->fields)._scroll;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0335867c to 03458687 has its CatchHandler @ 033588c8 */
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        pUVar3 = (UnityEngine_RectTransform_o *)0x0;
                    /* try { // try from 03358690 to 03458697 has its CatchHandler @ 033588c4 */
        if (bVar1) {
          pUVar5 = (__this->fields)._scroll;
          if (pUVar5 == (UnityEngine_UI_ScrollRect_o *)0x0) goto LAB_03358790;
                    /* try { // try from 0335869c to 034586a3 has its CatchHandler @ 033588e4 */
          pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
            pUVar3 = (UnityEngine_RectTransform_o *)0x0;
          }
          else if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
            pUVar3 = (UnityEngine_RectTransform_o *)0x0;
          }
        }
                    /* try { // try from 033586c0 to 034586c7 has its CatchHandler @ 033588bc */
                    /* try { // try from 033586c8 to 034586d7 has its CatchHandler @ 033588c0 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 033586d8 to 03458893 has its CatchHandler @ 0335849c */
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        __this_01 = (__this->fields)._scrollContent;
        if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
           (UVar9 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar10 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._scroll;
          if (pUVar5 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)pUVar5,UVar10.fields.y < UVar9.fields.y,
                       (MethodInfo *)0x0);
            pUVar6 = (__this->fields)._slider;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pUVar6 = (__this->fields)._slider;
              if ((pUVar6 == (UnityEngine_UI_Slider_o *)0x0) ||
                 (__this_02 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
                 __this_02 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03358790;
              UnityEngine_GameObject__SetActive
                        (__this_02,UVar10.fields.y < UVar9.fields.y,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
LAB_03358790:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3258CCC]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$.ctor @ RVA 0x3258CCC

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog___ctor
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ScrollDialogElement__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456717f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ScrollDialogElement>_TypeInfo);
    DAT_0456717f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ScrollDialogElement__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ScrollDialogElement>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ScrollDialogElement>__ctor__);
  (__this->fields).AALHBGHLAGO = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).AALHBGHLAGO,__this_00);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override float OFGMFNANEGD()  [RVA 0x3258D54]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$OFGMFNANEGD @ RVA 0x3258D54

float Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__OFGMFNANEGD
                (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = Nekki_SF2_GUI_Dialogs_BaseDialog__OFGMFNANEGD
                    ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  fVar2 = 0.0;
  if ((__this->fields).MDHEMHAOKPA != 0) {
    fVar2 = 40.0;
  }
  return fVar1 + fVar2;
}


// ===== private void LBBMPJKOINK(float CJNHFNHJHPE)  [RVA 0x3258AE8]
// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$LBBMPJKOINK @ RVA 0x3258AE8

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__LBBMPJKOINK
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  
  pUVar1 = (__this->fields)._scroll;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UVar2 = UnityEngine_UI_ScrollRect__get_normalizedPosition(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      UVar2.fields.y = CJNHFNHJHPE;
      UnityEngine_UI_ScrollRect__set_normalizedPosition(pUVar1,UVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

