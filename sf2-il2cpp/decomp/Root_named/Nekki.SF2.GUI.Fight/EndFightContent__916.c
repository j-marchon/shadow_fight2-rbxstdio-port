// TypeDefIndex 916
// Namespace: Nekki.SF2.GUI.Fight
// public class EndFightContent : MonoBehaviour
// Fields:
//   private string goldPrizeAlias; // 0x20
//   private string goldPerfectAlias; // 0x28
//   private string goldFirstStrikeAlias; // 0x30
//   private string goldComboAlias; // 0x38
//   private string goldShockAlias; // 0x40
//   private GameObject _rewardCurrencyPrefab; // 0x48
//   private GameObject _rewardItemPrefab; // 0x50
//   private GameObject _textAndMoneyLinePrefab; // 0x58
//   private GameObject _expAndMoneyLinePrefab; // 0x60
//   private LabelButton _buttonOk; // 0x68
//   private LabelButton _buttonRetry; // 0x70
//   private LabelButton _buttonShop; // 0x78
//   private LabelButton _buttonVideoAD; // 0x80
//   private Transform _buttonPanel; // 0x88
//   public UnityEvent AnimationEndEvent; // 0x90
//   public UnityEvent CloseEvent; // 0x98
//   public UnityEvent RetryFightEvent; // 0xA0
//   public UnityEvent GoToShopEvent; // 0xA8
//   private VerticalLayoutGroup OPOHEPKDHPD; // 0xB0
//   private VerticalLayoutGroup BLJFLADGIJC; // 0xB8
//   private IGPDCHBJAPD CIKGADOJJMG; // 0xC0
//   private ItemRewardHardmode AAJALAEDAAG; // 0xC8
//   private CurrencyReward JMOPMNAODMP; // 0xD0
//   private readonly List<MCNGELCOMNG> NDEECPOPNFM; // 0xD8
//   private List<HOOAAGABMBL> DPOPJKJLDEE; // 0xE0
//   private List<BNKBGIIJNLF> IJONCLJPNDO; // 0xE8
//   private int BGINDOKLEKD; // 0xF0
//   private const float PNJFOOONNOJ = 300;
//   private const float KEKMFFGJNGP = 1.25;
//   private const float JJCHOEIADBJ = 1.25;
//   private float MEBLCDOKBAB; // 0xF4
//   private float JAFGONJHCNL; // 0xF8
//   private bool GOAJIJFCOJD; // 0xFC
//   private bool OODOHJNONAO; // 0xFD
//   private Button HMJLEBNKJMH; // 0x100
//   private bool IHCIPEGHIDM; // 0x108
//   private ExpAndMoneyLine JMLBADBINID; // 0x110
//   private const int DECPNCDNHLG = 1000;
//   private const int DCEECDOPCOL = 1000000;
//   private const int NOCFHEBAHMI = 1000000000;

// ===== private void DIFPFEEGGAB()  [RVA 0x309A494]
// Nekki.SF2.GUI.Fight.EndFightContent$$DIFPFEEGGAB @ RVA 0x309A494

void Nekki_SF2_GUI_Fight_EndFightContent__DIFPFEEGGAB
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  uint index;
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04566110 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_DIFPFEEGGAB__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
    FUN_01bab630(&MCNGELCOMNG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566110 = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    index = (__this->fields).BGINDOKLEKD;
    method_00 = (MethodInfo *)(ulong)index;
    if ((int)index < (__this_00->fields)._size) {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         (__this_00,index,
                          Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
      uVar4 = thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0319a638;
      pIVar6 = pIVar3->klass;
      uVar1._0_1_ = (pIVar6->_2).rank;
      uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
            pVVar5 = pIVar6->vtable + (*piVar8 + 3);
            goto LAB_0319a5ac;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,MCNGELCOMNG_TypeInfo,3);
LAB_0319a5ac:
      (*pVVar5->methodPtr)(pIVar3,uVar4,pVVar5->method);
      pIVar6 = pIVar3->klass;
      uVar2._0_1_ = (pIVar6->_2).rank;
      uVar2._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
            pVVar5 = pIVar6->vtable + *piVar8;
            goto LAB_0319a608;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,MCNGELCOMNG_TypeInfo,0);
LAB_0319a608:
      (*pVVar5->methodPtr)(pIVar3,pVVar5->method);
      method_00 = extraout_x1;
    }
    routine = Nekki_SF2_GUI_Fight_EndFightContent__EHODBOPOCMN(__this,method_00);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
LAB_0319a638:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CCNAMPDODEA()  [RVA 0x309A6A8]
// Nekki.SF2.GUI.Fight.EndFightContent$$CCNAMPDODEA @ RVA 0x309A6A8

void Nekki_SF2_GUI_Fight_EndFightContent__CCNAMPDODEA
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Fight_EndFightContent__CCNAMPDODEA(__this,false,in_x2);
  return;
}


// ===== private void IOOPGJBHPKK()  [RVA 0x309A6D8]
// Nekki.SF2.GUI.Fight.EndFightContent$$IOOPGJBHPKK @ RVA 0x309A6D8

void Nekki_SF2_GUI_Fight_EndFightContent__IOOPGJBHPKK
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  int32_t index;
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  VirtualInvokeData *pVVar11;
  Il2CppClass *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566111 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_CCNAMPDODEA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_DIFPFEEGGAB__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
    FUN_01bab630(&MCNGELCOMNG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566111 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar8 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
  if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
    index = (__this->fields).BGINDOKLEKD;
    iVar1 = (pSVar8->fields)._size;
    if (index < iVar1) {
      pIVar9 = System_Collections_Generic_List<object>__get_Item
                         (pSVar8,index,
                          Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
      uVar10 = thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pIVar9 == (Il2CppObject *)0x0) goto LAB_0319aac8;
      pIVar12 = pIVar9->klass;
      uVar2._0_1_ = (pIVar12->_2).rank;
      uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
            pVVar11 = pIVar12->vtable + (*piVar14 + 2);
            goto LAB_0319a8d0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,2);
LAB_0319a8d0:
      (*pVVar11->methodPtr)(pIVar9,uVar10,pVVar11->method);
      pIVar12 = pIVar9->klass;
      uVar4._0_1_ = (pIVar12->_2).rank;
      uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar4;
      if (uVar13 != 0) {
        piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
            pVVar11 = pIVar12->vtable + *piVar14;
            goto LAB_0319a92c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,0);
LAB_0319a92c:
      (*pVVar11->methodPtr)(pIVar9,pVVar11->method);
    }
    else {
      if ((0 < iVar1) &&
         (pIVar9 = System_Collections_Generic_List<object>__get_Item
                             (pSVar8,iVar1 + -1,
                              Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__),
         pIVar9 != (Il2CppObject *)0x0)) {
        uVar10 = thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        pIVar12 = pIVar9->klass;
        uVar3._0_1_ = (pIVar12->_2).rank;
        uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar13 = (ulong)uVar3;
        if (uVar13 != 0) {
          piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
              pVVar11 = pIVar12->vtable + (*piVar14 + 2);
              goto LAB_0319a94c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,2);
LAB_0319a94c:
        (*pVVar11->methodPtr)(pIVar9,uVar10,pVVar11->method);
      }
      pSVar8 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319aac8;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,pSVar8,
                 Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__
                               ), pIVar9 = local_60.fields._current, bVar7) {
        uVar10 = thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar12 = pIVar9->klass;
        uVar5._0_1_ = (pIVar12->_2).rank;
        uVar5._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar13 = (ulong)uVar5;
        if (uVar13 != 0) {
          piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
              pVVar11 = pIVar12->vtable + (*piVar14 + 3);
              goto LAB_0319aa2c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,3);
LAB_0319aa2c:
        (*pVVar11->methodPtr)(pIVar9,uVar10,pVVar11->method);
        pIVar12 = pIVar9->klass;
        uVar6._0_1_ = (pIVar12->_2).rank;
        uVar6._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar13 = (ulong)uVar6;
        if (uVar13 != 0) {
          piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
              pVVar11 = pIVar12->vtable + *piVar14;
              goto LAB_0319aa88;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,0);
LAB_0319aa88:
        (*pVVar11->methodPtr)(pIVar9,pVVar11->method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__)
      ;
    }
    return;
  }
LAB_0319aac8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EPKNCBDODNP()  [RVA 0x309AB48]
// Nekki.SF2.GUI.Fight.EndFightContent$$EPKNCBDODNP @ RVA 0x309AB48

void Nekki_SF2_GUI_Fight_EndFightContent__EPKNCBDODNP
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar3;
  Nekki_SF2_GUI_Fight_CurrencyReward_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  BNKBGIIJNLF_o *KBLNPGCLGOF;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_BNKBGIIJNLF__o *pSVar6;
  LabelButton_o *pLVar7;
  UnityEngine_UI_Button_o *pUVar8;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar9;
  Nekki_SF2_GUI_Fight_CurrencyReward_o **ppNVar10;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04566112 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_EPEMNFNGBGG__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CurrencyReward>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566112 = 1;
    method = extraout_x1;
  }
  pUVar8 = (__this->fields).HMJLEBNKJMH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar8 = (__this->fields).HMJLEBNKJMH;
    if ((pUVar8 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0319ae74;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields).BLJFLADGIJC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).BLJFLADGIJC;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319ae74;
    (__this->fields).MEBLCDOKBAB = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields).OPOHEPKDHPD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).OPOHEPKDHPD;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319ae74;
    (__this->fields).JAFGONJHCNL = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pSVar6 = (__this->fields).IJONCLJPNDO;
  if (pSVar6 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) goto LAB_0319ae74;
  if ((pSVar6->fields)._size != 0) {
    pUVar2 = (__this->fields)._rewardCurrencyPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0319ae74;
    pNVar4 = (Nekki_SF2_GUI_Fight_CurrencyReward_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar2,Method_UnityEngine_GameObject_GetComponent<CurrencyReward>__);
    ppNVar10 = &(__this->fields).JMOPMNAODMP;
    *ppNVar10 = pNVar4;
    thunk_FUN_01c20e04(ppNVar10,pNVar4);
    if ((*ppNVar10 == (Nekki_SF2_GUI_Fight_CurrencyReward_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0319ae74;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    if (*ppNVar10 == (Nekki_SF2_GUI_Fight_CurrencyReward_o *)0x0) goto LAB_0319ae74;
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0319ae74;
    UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).IJONCLJPNDO;
    if (pSVar6 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) goto LAB_0319ae74;
    pNVar4 = (__this->fields).JMOPMNAODMP;
    KBLNPGCLGOF = (BNKBGIIJNLF_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar6,0,
                             Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    if (pNVar4 == (Nekki_SF2_GUI_Fight_CurrencyReward_o *)0x0) goto LAB_0319ae74;
    Nekki_SF2_GUI_Fight_CurrencyReward__setIcon(pNVar4,KBLNPGCLGOF,(MethodInfo *)0x0);
  }
  pLVar7 = (__this->fields)._buttonOk;
  if (pLVar7 != (LabelButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar7->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pLVar7 = (__this->fields)._buttonOk;
      if ((pLVar7 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pLVar7 = (__this->fields)._buttonRetry;
        if ((pLVar7 != (LabelButton_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          pLVar7 = (__this->fields)._buttonShop;
          if ((pLVar7 != (LabelButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            pLVar7 = (__this->fields)._buttonVideoAD;
            if ((pLVar7 != (LabelButton_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Fight_EndFightContent__HIPDIBOOEGG(__this,method_00);
              pUVar5 = (__this->fields)._buttonPanel;
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsLastSibling(pUVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0319ae74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AHMEFFAFJKA(long DCDLMCEEOCC)  [RVA 0x309AF08]
// Nekki.SF2.GUI.Fight.EndFightContent$$AHMEFFAFJKA @ RVA 0x309AF08

void Nekki_SF2_GUI_Fight_EndFightContent__AHMEFFAFJKA
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t DCDLMCEEOCC,MethodInfo *method
               )

{
  bool bVar1;
  int64_t iVar2;
  MethodInfo *in_x3;
  
  if ((DAT_04566113 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_04566113 = 1;
  }
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = BBBBKBBFNOG__NJPEPHGMIMP((MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).IHCIPEGHIDM = true;
    if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = BBBBKBBFNOG__BJOIGEMGMAF((MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_EndFightContent__OLNJFJCEDGA
              (__this,(__this->fields)._buttonVideoAD,iVar2 + DCDLMCEEOCC,in_x3);
    return;
  }
  return;
}


// ===== private void EPEMNFNGBGG()  [RVA 0x309B2EC]
// Nekki.SF2.GUI.Fight.EndFightContent$$EPEMNFNGBGG @ RVA 0x309B2EC

void Nekki_SF2_GUI_Fight_EndFightContent__EPEMNFNGBGG
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  Nekki_SF2_GUI_Fight_CurrencyReward_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *__this_01;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar4;
  
  if ((DAT_04566114 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_EPEMNFNGBGG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566114 = 1;
    method = extraout_x1;
  }
  pLVar3 = (__this->fields)._buttonOk;
  if (pLVar3 != (LabelButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).BLJFLADGIJC;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).BLJFLADGIJC;
        if (pUVar2 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319b430;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (pUVar2,(__this->fields).MEBLCDOKBAB,(MethodInfo *)0x0);
      }
      pUVar4 = (__this->fields).OPOHEPKDHPD;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).OPOHEPKDHPD;
        if (pUVar2 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319b430;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (pUVar2,(__this->fields).JAFGONJHCNL,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).JMOPMNAODMP;
      if (__this_00 != (Nekki_SF2_GUI_Fight_CurrencyReward_o *)0x0) {
        LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Fight_EndFightContent__GPCOJMMLMLG(__this,method_00);
        return;
      }
    }
  }
LAB_0319b430:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ExpAndMoneyLine CreateLine(long COAIOPFEFHM, long DCDLMCEEOCC)  [RVA 0x309BAC8]
// Nekki.SF2.GUI.Fight.EndFightContent$$CreateLine @ RVA 0x309BAC8

Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *
Nekki_SF2_GUI_Fight_EndFightContent__CreateLine
          (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t COAIOPFEFHM,int64_t DCDLMCEEOCC,
          MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Func_long__string__o *CDBMJENDHFM;
  UnityEngine_GameObject_o *pUVar1;
  
                    /* try { // try from 0319bae4 to 0329bc97 has its CatchHandler @ 0319bae4
                       catch() { ... } // from try @ 0319bae4 with catch @ 0319bae4
                       catch() { ... } // from try @ 0319c2fc with catch @ 0319bae4
                       catch() { ... } // from try @ 0319c36c with catch @ 0319bae4
                       catch() { ... } // from try @ 0319c444 with catch @ 0319bae4
                       catch() { ... } // from try @ 0319c484 with catch @ 0319bae4 */
  if ((DAT_04566115 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_LHINFPOHDPH__);
    FUN_01bab630(&System_Func<long,_string>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ExpAndMoneyLine>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566115 = 1;
  }
  pUVar1 = (__this->fields)._expAndMoneyLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar1,Method_UnityEngine_GameObject_GetComponent<ExpAndMoneyLine>__),
      __this_00 != (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *)0x0)) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      CDBMJENDHFM = (System_Func_long__string__o *)
                    thunk_FUN_01bda818(System_Func<long,_string>_TypeInfo);
      System_Func<long,_object>___ctor();
      Nekki_SF2_GUI_Fight_ExpAndMoneyLine__Init
                (__this_00,COAIOPFEFHM,DCDLMCEEOCC,CDBMJENDHFM,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FinishAnimation()  [RVA 0x309BC2C]
// Nekki.SF2.GUI.Fight.EndFightContent$$FinishAnimation @ RVA 0x309BC2C

void Nekki_SF2_GUI_Fight_EndFightContent__FinishAnimation
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566116 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__);
    FUN_01bab630(&MCNGELCOMNG_TypeInfo);
    DAT_04566116 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 0319bc98 to 0329bc9f has its CatchHandler @ 0319c388 */
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 0319bcb4 to 0329bcb7 has its CatchHandler @ 0319c370 */
                    /* try { // try from 0319bcb8 to 0329bcc3 has its CatchHandler @ 0319c380 */
                    /* try { // try from 0319bcc4 to 0329bccf has its CatchHandler @ 0319c384 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,__this_00,Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__
            );
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__);
    pIVar2 = local_48.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__)
      ;
                    /* try { // try from 0319bd54 to 0329bd5b has its CatchHandler @ 0319c410 */
      Nekki_SF2_GUI_Fight_EndFightContent__CCNAMPDODEA(__this,false,in_x2);
      return;
    }
                    /* try { // try from 0319bce0 to 0329bceb has its CatchHandler @ 0319c374 */
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = (local_48.fields._current)->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
          pVVar4 = pIVar5->vtable + (*piVar7 + 1);
          goto LAB_0319bd34;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    in_x2 = (MethodInfo *)0x1;
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(local_48.fields._current);
LAB_0319bd34:
                    /* try { // try from 0319bd38 to 0329bd3f has its CatchHandler @ 0319c428 */
    (*pVVar4->methodPtr)(pIVar2,pVVar4->method);
  } while( true );
}


// ===== public void .ctor()  [RVA 0x309BDEC]
// Nekki.SF2.GUI.Fight.EndFightContent$$.ctor @ RVA 0x309BDEC

void Nekki_SF2_GUI_Fight_EndFightContent___ctor
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Events_UnityEvent_o **ppUVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_MCNGELCOMNG__o **ppSVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar4;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_02;
  System_Collections_Generic_List_BNKBGIIJNLF__o **ppSVar5;
  
                    /* try { // try from 0319bdf8 to 0329bdff has its CatchHandler @ 0319c41c */
                    /* try { // try from 0319be08 to 0329be7b has its CatchHandler @ 0319c3d4 */
  if ((DAT_04566117 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MCNGELCOMNG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<BNKBGIIJNLF>_TypeInfo);
                    /* try { // try from 0319be98 to 0329be9b has its CatchHandler @ 0319c3c0 */
                    /* try { // try from 0319be9c to 0329bea7 has its CatchHandler @ 0319c40c */
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
                    /* try { // try from 0319beb8 to 0329bebb has its CatchHandler @ 0319c3ac */
    FUN_01bab630(&StringLiteral_18664/*"goldCombo"*/);
                    /* try { // try from 0319bebc to 0329bed3 has its CatchHandler @ 0319c3e8 */
    FUN_01bab630(&StringLiteral_18671/*"goldShock"*/);
    FUN_01bab630(&StringLiteral_18667/*"goldFirstStrike"*/);
    FUN_01bab630(&StringLiteral_18669/*"goldPerfect"*/);
    FUN_01bab630(&StringLiteral_18670/*"goldPrize"*/);
                    /* try { // try from 0319bef0 to 0329bf07 has its CatchHandler @ 0319c3a8 */
    DAT_04566117 = 1;
  }
  (__this->fields).goldPrizeAlias = StringLiteral_18670/*"goldPrize"*/;
  thunk_FUN_01c20e04();
  (__this->fields).goldPerfectAlias = StringLiteral_18669/*"goldPerfect"*/;
                    /* try { // try from 0319bf10 to 0329bf17 has its CatchHandler @ 0319c41c */
  thunk_FUN_01c20e04();
  (__this->fields).goldFirstStrikeAlias = StringLiteral_18667/*"goldFirstStrike"*/;
                    /* try { // try from 0319bf20 to 0329bf93 has its CatchHandler @ 0319c418 */
  thunk_FUN_01c20e04();
  (__this->fields).goldComboAlias = StringLiteral_18664/*"goldCombo"*/;
  thunk_FUN_01c20e04();
  (__this->fields).goldShockAlias = StringLiteral_18671/*"goldShock"*/;
  thunk_FUN_01c20e04();
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).AnimationEndEvent;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).CloseEvent;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).RetryFightEvent;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
                    /* try { // try from 0319bfb0 to 0329bfb3 has its CatchHandler @ 0319c3a4 */
                    /* try { // try from 0319bfb4 to 0329bfbf has its CatchHandler @ 0319c414 */
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).GoToShopEvent;
  *ppUVar2 = pUVar1;
                    /* try { // try from 0319bfd0 to 0329bfd3 has its CatchHandler @ 0319c3b8 */
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
                    /* try { // try from 0319bfd4 to 0329bfeb has its CatchHandler @ 0319c3ec */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MCNGELCOMNG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<MCNGELCOMNG>__ctor__);
  ppSVar3 = &(__this->fields).NDEECPOPNFM;
  *ppSVar3 = (System_Collections_Generic_List_MCNGELCOMNG__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  __this_01 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 0319c008 to 0329c01f has its CatchHandler @ 0319c3bc */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar4 = &(__this->fields).DPOPJKJLDEE;
  *ppSVar4 = __this_01;
  thunk_FUN_01c20e04(ppSVar4,__this_01);
                    /* try { // try from 0319c028 to 0329c02f has its CatchHandler @ 0319c41c */
  __this_02 = (System_Collections_Generic_List_BNKBGIIJNLF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BNKBGIIJNLF>_TypeInfo);
                    /* try { // try from 0319c038 to 0329c0ab has its CatchHandler @ 0319c404 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<BNKBGIIJNLF>__ctor__);
  ppSVar5 = &(__this->fields).IJONCLJPNDO;
  *ppSVar5 = __this_02;
  thunk_FUN_01c20e04(ppSVar5,__this_02);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void GPCOJMMLMLG()  [RVA 0x309B434]
// Nekki.SF2.GUI.Fight.EndFightContent$$GPCOJMMLMLG @ RVA 0x309B434

void Nekki_SF2_GUI_Fight_EndFightContent__GPCOJMMLMLG
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *pNVar7;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  MethodInfo *in_x5;
  IGPDCHBJAPD_o *pIVar8;
  GOJLGHMMDBO_o *pGVar9;
  ILHHCILGBCB_o *pIVar10;
  System_Object_array *pSVar11;
  LabelButton_o *pLVar12;
  int64_t DCDLMCEEOCC;
  UnityEngine_UI_Button_o *pUVar13;
  UnityEngine_Object_o *pUVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  UnityEngine_Events_UnityEvent_o *__this_01;
  System_String_o *pSVar16;
  int64_t iVar17;
  float fVar18;
  
  if ((DAT_04566118 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent_Invoke__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566118 = 1;
    method = extraout_x1;
  }
  pIVar8 = (__this->fields).CIKGADOJJMG;
  if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
      (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
     (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
  DCDLMCEEOCC = (pIVar10->fields).JLANKGCLFPC;
  pUVar13 = (__this->fields).HMJLEBNKJMH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar13 = (__this->fields).HMJLEBNKJMH;
    if ((pUVar13 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0319bac4;
    UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
  }
  pUVar14 = (UnityEngine_Object_o *)(__this->fields)._textAndMoneyLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine
                       (__this,(__this->fields).goldPrizeAlias,(pIVar10->fields).HBJALEJFBAA,
                        (pIVar10->fields).OANNDNBNCOC,StringLiteral_1/*""*/,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pSVar16 = (__this->fields).goldPerfectAlias;
    iVar17 = (pIVar10->fields).CBBHLGAPOCB;
    pSVar6 = System_Int32__ToString((int)pGVar9 + 0x20,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,pSVar16,iVar17,0,pSVar6,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pSVar16 = (__this->fields).goldFirstStrikeAlias;
    iVar17 = (pIVar10->fields).CKGOPICDKMO;
    pSVar6 = System_Int32__ToString((int)pGVar9 + 0x28,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,pSVar16,iVar17,0,pSVar6,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pSVar16 = (__this->fields).goldComboAlias;
    iVar17 = (pIVar10->fields).MDEJIIBDAIE;
    pSVar6 = System_Int32__ToString((int)pGVar9 + 0x34,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,pSVar16,iVar17,0,pSVar6,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pSVar16 = (__this->fields).goldShockAlias;
    iVar17 = (pIVar10->fields).NLFJFKCJEAC;
    pSVar6 = System_Int32__ToString((int)pGVar9 + 0x38,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,pSVar16,iVar17,0,pSVar6,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    in_x3 = (MethodInfo *)0x0;
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine
                       (__this,(pGVar9->fields).IMHCBMGEIDH,(pIVar10->fields).PDDMIAGJHBA,0,
                        StringLiteral_1/*""*/,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pUVar14 = (UnityEngine_Object_o *)(__this->fields)._expAndMoneyLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (pIVar8 == (IGPDCHBJAPD_o *)0x0) goto LAB_0319bac4;
    fVar18 = (pIVar8->fields).BHHLEDAOGDH;
    iVar17 = -0x8000000000000000;
    if (fVar18 != INFINITY) {
      iVar17 = (long)fVar18;
    }
    pNVar7 = Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,iVar17,DCDLMCEEOCC,in_x3);
    (__this->fields).JMLBADBINID = pNVar7;
    thunk_FUN_01c20e04(&(__this->fields).JMLBADBINID);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pNVar7 = (__this->fields).JMLBADBINID;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = (Il2CppObject *)pNVar7;
      thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar1);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,(Il2CppObject *)pNVar7,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pLVar12 = (__this->fields)._buttonOk;
  if (pLVar12 != (LabelButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar12->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
      pLVar12 = (__this->fields)._buttonOk;
      if ((pLVar12 != (LabelButton_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar12,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        pLVar12 = (__this->fields)._buttonRetry;
        if ((pLVar12 != (LabelButton_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar12,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
          pLVar12 = (__this->fields)._buttonShop;
          if ((pLVar12 != (LabelButton_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar12,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            pLVar12 = (__this->fields)._buttonVideoAD;
            if ((pLVar12 != (LabelButton_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar12,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
              method_01 = (MethodInfo *)0x0;
              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Fight_EndFightContent__AHMEFFAFJKA(__this,DCDLMCEEOCC,method_01);
              __this_00 = (__this->fields)._buttonPanel;
              if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Fight_EndFightContent__IOOPGJBHPKK(__this,method_00);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0319bac4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(IGPDCHBJAPD PNPKEKHEMCD, VerticalLayoutGroup ODNJEHJPBGA, Button IHDIBJAICLO, bool DCIKAIODOGP = False, bool GIANLAGKFCC = False)  [RVA 0x309C1F8]
// Nekki.SF2.GUI.Fight.EndFightContent$$Init @ RVA 0x309C1F8

void Nekki_SF2_GUI_Fight_EndFightContent__Init
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               UnityEngine_UI_VerticalLayoutGroup_o *ODNJEHJPBGA,
               UnityEngine_UI_Button_o *IHDIBJAICLO,bool DCIKAIODOGP,bool GIANLAGKFCC,
               MethodInfo *method)

{
  bool bVar1;
  IGPDCHBJAPD_JMPAGIGEFME_o *pIVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  System_Collections_Generic_List_BNKBGIIJNLF__o *pSVar4;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar5;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IGPDCHBJAPD_o *pIVar8;
  LabelButton_o *pLVar9;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar10;
  UnityEngine_Events_UnityEvent_o *pUVar11;
  IGPDCHBJAPD_o **ppIVar12;
  
                    /* try { // try from 0319c208 to 0329c20b has its CatchHandler @ 0319c3b0 */
                    /* try { // try from 0319c20c to 0329c223 has its CatchHandler @ 0319c400 */
  if ((DAT_04566119 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<VerticalLayoutGroup>__);
                    /* try { // try from 0319c240 to 0329c257 has its CatchHandler @ 0319c3b4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_HNELGIKFOIL__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0319c260 to 0329c267 has its CatchHandler @ 0319c41c */
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent_Invoke__);
    DAT_04566119 = 1;
  }
                    /* try { // try from 0319c270 to 0329c2fb has its CatchHandler @ 0319c408 */
  (__this->fields).GOAJIJFCOJD = DCIKAIODOGP;
  (__this->fields).OODOHJNONAO = GIANLAGKFCC;
  (__this->fields).HMJLEBNKJMH = IHDIBJAICLO;
  thunk_FUN_01c20e04(&(__this->fields).HMJLEBNKJMH,IHDIBJAICLO);
  ppIVar12 = &(__this->fields).CIKGADOJJMG;
  *ppIVar12 = PNPKEKHEMCD;
  thunk_FUN_01c20e04(ppIVar12,PNPKEKHEMCD);
  (__this->fields).BGINDOKLEKD = 0;
  if ((*ppIVar12 != (IGPDCHBJAPD_o *)0x0) &&
     (pIVar2 = ((*ppIVar12)->fields).GIIFANGGEHM, pIVar2 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
    pSVar3 = IGPDCHBJAPD_JMPAGIGEFME__ACBMLHJIFMD(pIVar2,true,(MethodInfo *)0x0);
    ppSVar10 = &(__this->fields).DPOPJKJLDEE;
    *ppSVar10 = pSVar3;
    thunk_FUN_01c20e04(ppSVar10,pSVar3);
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if ((pIVar8 != (IGPDCHBJAPD_o *)0x0) &&
       (pIVar2 = (pIVar8->fields).GIIFANGGEHM, pIVar2 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
      pSVar4 = IGPDCHBJAPD_JMPAGIGEFME__LLIHIDKHAPN(pIVar2,false,(MethodInfo *)0x0);
                    /* try { // try from 0319c2fc to 0329c333 has its CatchHandler @ 0319bae4 */
      (__this->fields).IJONCLJPNDO = pSVar4;
      thunk_FUN_01c20e04();
      ppUVar5 = &(__this->fields).BLJFLADGIJC;
      *ppUVar5 = ODNJEHJPBGA;
      thunk_FUN_01c20e04(ppUVar5,ODNJEHJPBGA);
      pUVar6 = (UnityEngine_UI_VerticalLayoutGroup_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponent<VerticalLayoutGroup>__);
      ppUVar5 = &(__this->fields).OPOHEPKDHPD;
      *ppUVar5 = pUVar6;
      thunk_FUN_01c20e04(ppUVar5);
                    /* try { // try from 0319c334 to 0329c337 has its CatchHandler @ 0319c424 */
      pLVar9 = (__this->fields)._buttonRetry;
                    /* try { // try from 0319c338 to 0329c33b has its CatchHandler @ 0319c420 */
      if (pLVar9 != (LabelButton_o *)0x0) {
                    /* try { // try from 0319c33c to 0329c343 has its CatchHandler @ 0319c3f8 */
                    /* try { // try from 0319c344 to 0329c347 has its CatchHandler @ 0319c3f0 */
                    /* try { // try from 0319c348 to 0329c34f has its CatchHandler @ 0319c3f4 */
        pUVar11 = (UnityEngine_Events_UnityEvent_o *)(pLVar9->fields).super.super.super.m_OnClick;
                    /* try { // try from 0319c350 to 0329c353 has its CatchHandler @ 0319c3f0 */
                    /* try { // try from 0319c354 to 0329c35b has its CatchHandler @ 0319c3dc */
        pUVar7 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0319c35c to 0329c363 has its CatchHandler @ 0319c3c8 */
                    /* try { // try from 0319c364 to 0329c367 has its CatchHandler @ 0319c37c */
                    /* try { // try from 0319c368 to 0329c36b has its CatchHandler @ 0319c378 */
                    /* try { // try from 0319c36c to 0329c43f has its CatchHandler @ 0319bae4 */
        UnityEngine_Events_UnityAction___ctor();
                    /* catch() { ... } // from try @ 0319bcb4 with catch @ 0319c370 */
        if (pUVar11 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch() { ... } // from try @ 0319bce0 with catch @ 0319c374 */
                    /* catch() { ... } // from try @ 0319c368 with catch @ 0319c378 */
                    /* catch() { ... } // from try @ 0319c364 with catch @ 0319c37c */
                    /* catch() { ... } // from try @ 0319bcb8 with catch @ 0319c380 */
          UnityEngine_Events_UnityEvent__AddListener(pUVar11,pUVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0319bcc4 with catch @ 0319c384 */
          pLVar9 = (__this->fields)._buttonShop;
                    /* catch() { ... } // from try @ 0319bc98 with catch @ 0319c388 */
          if (pLVar9 != (LabelButton_o *)0x0) {
                    /* catch() { ... } // from try @ 0319bd80 with catch @ 0319c38c */
                    /* catch() { ... } // from try @ 0319bda0 with catch @ 0319c390 */
            pUVar11 = (UnityEngine_Events_UnityEvent_o *)
                      (pLVar9->fields).super.super.super.m_OnClick;
                    /* catch() { ... } // from try @ 0319bdd8 with catch @ 0319c394 */
                    /* catch() { ... } // from try @ 0319c0f0 with catch @ 0319c398 */
            pUVar7 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 0319c128 with catch @ 0319c39c */
                    /* catch() { ... } // from try @ 0319c0d0 with catch @ 0319c3a0 */
                    /* catch() { ... } // from try @ 0319bfb0 with catch @ 0319c3a4 */
                    /* catch() { ... } // from try @ 0319bef0 with catch @ 0319c3a8 */
                    /* catch() { ... } // from try @ 0319beb8 with catch @ 0319c3ac */
            UnityEngine_Events_UnityAction___ctor();
                    /* catch() { ... } // from try @ 0319c208 with catch @ 0319c3b0 */
            if (pUVar11 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch() { ... } // from try @ 0319c240 with catch @ 0319c3b4 */
                    /* catch() { ... } // from try @ 0319bfd0 with catch @ 0319c3b8 */
                    /* catch() { ... } // from try @ 0319c008 with catch @ 0319c3bc */
                    /* catch() { ... } // from try @ 0319be98 with catch @ 0319c3c0 */
              UnityEngine_Events_UnityEvent__AddListener(pUVar11,pUVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0319c1e8 with catch @ 0319c3c4 */
              pLVar9 = (__this->fields)._buttonVideoAD;
                    /* catch() { ... } // from try @ 0319c35c with catch @ 0319c3c8 */
              if (pLVar9 != (LabelButton_o *)0x0) {
                    /* catch() { ... } // from try @ 0319bd84 with catch @ 0319c3cc */
                    /* catch() { ... } // from try @ 0319c0d4 with catch @ 0319c3d0 */
                    /* catch() { ... } // from try @ 0319be08 with catch @ 0319c3d4 */
                pUVar11 = (UnityEngine_Events_UnityEvent_o *)
                          (pLVar9->fields).super.super.super.m_OnClick;
                    /* catch() { ... } // from try @ 0319c158 with catch @ 0319c3d8 */
                    /* catch() { ... } // from try @ 0319c354 with catch @ 0319c3dc */
                pUVar7 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 0319c0f4 with catch @ 0319c3e0 */
                    /* catch() { ... } // from try @ 0319bda4 with catch @ 0319c3e4 */
                    /* catch() { ... } // from try @ 0319bebc with catch @ 0319c3e8 */
                    /* catch() { ... } // from try @ 0319bfd4 with catch @ 0319c3ec */
                    /* catch() { ... } // from try @ 0319c344 with catch @ 0319c3f0
                       catch() { ... } // from try @ 0319c350 with catch @ 0319c3f0 */
                UnityEngine_Events_UnityAction___ctor();
                    /* catch() { ... } // from try @ 0319c348 with catch @ 0319c3f4 */
                if (pUVar11 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch() { ... } // from try @ 0319c33c with catch @ 0319c3f8 */
                    /* catch() { ... } // from try @ 0319c1ec with catch @ 0319c3fc */
                    /* catch() { ... } // from try @ 0319c20c with catch @ 0319c400 */
                    /* catch() { ... } // from try @ 0319c038 with catch @ 0319c404 */
                  UnityEngine_Events_UnityEvent__AddListener(pUVar11,pUVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0319c270 with catch @ 0319c408 */
                    /* catch() { ... } // from try @ 0319be9c with catch @ 0319c40c */
                  bVar1 = Nekki_SF2_GUI_Fight_EndFightContent__FEFLGCCPJEC(__this,method_00);
                    /* catch() { ... } // from try @ 0319bd54 with catch @ 0319c410 */
                  if (bVar1) {
                    /* catch() { ... } // from try @ 0319bfb4 with catch @ 0319c414 */
                    /* catch() { ... } // from try @ 0319bf20 with catch @ 0319c418 */
                    /* catch() { ... } // from try @ 0319bdf8 with catch @ 0319c41c
                       catch() { ... } // from try @ 0319bf10 with catch @ 0319c41c
                       catch() { ... } // from try @ 0319c028 with catch @ 0319c41c
                       catch() { ... } // from try @ 0319c148 with catch @ 0319c41c
                       catch() { ... } // from try @ 0319c260 with catch @ 0319c41c */
                    /* catch() { ... } // from try @ 0319c338 with catch @ 0319c420 */
                    /* catch() { ... } // from try @ 0319c334 with catch @ 0319c424 */
                    /* catch() { ... } // from try @ 0319bd38 with catch @ 0319c428 */
                    Nekki_SF2_GUI_Fight_EndFightContent__EPKNCBDODNP(__this,method_01);
                    return;
                  }
                  if (*ppSVar10 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* try { // try from 0319c440 to 0329c443 has its CatchHandler @ 0319c46c */
                    if (0 < ((*ppSVar10)->fields)._size) {
                    /* try { // try from 0319c444 to 0329c47b has its CatchHandler @ 0319bae4 */
                      Nekki_SF2_GUI_Fight_EndFightContent__JMPGNDGCPLF(__this,method_01);
                      return;
                    }
                    Nekki_SF2_GUI_Fight_EndFightContent__GPCOJMMLMLG(__this,method_01);
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
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0319c440 with catch @ 0319c46c */
  FUN_01bab8c8();
}


// ===== public MCNGELCOMNG CreateLine(string EHNFGMGKCHO, long DCDLMCEEOCC, long IPGOFHMGFOI = 0, string LAPCDGMAIAI = "")  [RVA 0x309C07C]
// Nekki.SF2.GUI.Fight.EndFightContent$$CreateLine @ RVA 0x309C07C

MCNGELCOMNG_o *
Nekki_SF2_GUI_Fight_EndFightContent__CreateLine
          (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,System_String_o *EHNFGMGKCHO,
          int64_t DCDLMCEEOCC,int64_t IPGOFHMGFOI,System_String_o *LAPCDGMAIAI,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Func_long__string__o *CDBMJENDHFM;
  UnityEngine_GameObject_o *pUVar1;
  
  if ((DAT_0456611a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_LHINFPOHDPH__);
    FUN_01bab630(&System_Func<long,_string>_TypeInfo);
                    /* try { // try from 0319c0d0 to 0329c0d3 has its CatchHandler @ 0319c3a0 */
                    /* try { // try from 0319c0d4 to 0329c0df has its CatchHandler @ 0319c3d0 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TextAndMoneyLine>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 0319c0f0 to 0329c0f3 has its CatchHandler @ 0319c398 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0319c0f4 to 0329c10b has its CatchHandler @ 0319c3e0 */
    DAT_0456611a = 1;
  }
  pUVar1 = (__this->fields)._textAndMoneyLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 0319c128 to 0329c13f has its CatchHandler @ 0319c39c */
                    /* try { // try from 0319c148 to 0329c14f has its CatchHandler @ 0319c41c */
  if (((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar1,Method_UnityEngine_GameObject_GetComponent<TextAndMoneyLine>__)
      , __this_00 != (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)0x0)) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
                    /* try { // try from 0319c158 to 0329c1cb has its CatchHandler @ 0319c3d8 */
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      CDBMJENDHFM = (System_Func_long__string__o *)
                    thunk_FUN_01bda818(System_Func<long,_string>_TypeInfo);
      System_Func<long,_object>___ctor();
      Nekki_SF2_GUI_Fight_TextAndMoneyLine__Init
                (__this_00,EHNFGMGKCHO,DCDLMCEEOCC,IPGOFHMGFOI,CDBMJENDHFM,LAPCDGMAIAI,
                 (MethodInfo *)0x0);
                    /* try { // try from 0319c1e8 to 0329c1eb has its CatchHandler @ 0319c3c4 */
                    /* try { // try from 0319c1ec to 0329c1f7 has its CatchHandler @ 0319c3fc */
      return (MCNGELCOMNG_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLNJFJCEDGA(LabelButton BECCOGAMKJL, long DCDLMCEEOCC)  [RVA 0x309AFAC]
// Nekki.SF2.GUI.Fight.EndFightContent$$OLNJFJCEDGA @ RVA 0x309AFAC

void Nekki_SF2_GUI_Fight_EndFightContent__OLNJFJCEDGA
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,LabelButton_o *BECCOGAMKJL,
               int64_t DCDLMCEEOCC,MethodInfo *method)

{
  undefined8 *puVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  MethodInfo *method_00;
  Roster_o *pAVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_ValueTuple_long__long__o SVar7;
  int64_t local_50;
  int64_t iStack_48;
  
  method_00 = (MethodInfo *)DCDLMCEEOCC;
  if ((DAT_0456611b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22506/*"}{"*/);
    FUN_01bab630(&StringLiteral_15854/*"^tsdShort^"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_15836/*"^blnShort^"*/);
    FUN_01bab630(&StringLiteral_15810/*"^"*/);
    FUN_01bab630(&StringLiteral_5735/*"EndFightRewardButtonText{img::"*/);
    FUN_01bab630(&StringLiteral_15849/*"^mlnShort^"*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    __this = (Nekki_SF2_GUI_Fight_EndFightContent_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_0456611b = 1;
  }
  SVar7 = Nekki_SF2_GUI_Fight_EndFightContent__KAJJINHAMII(__this,DCDLMCEEOCC,method_00);
  local_50 = SVar7.fields.Item2;
  iStack_48 = SVar7.fields.Item1;
  if (DCDLMCEEOCC < 1000) {
    pSVar2 = System_Int64__ToString((int64_t)&iStack_48,(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)0x0;
LAB_0319b128:
    pSVar3 = (System_String_o *)0x0;
  }
  else {
    puVar1 = (undefined8 *)&StringLiteral_15836/*"^blnShort^"*/;
    if (DCDLMCEEOCC < 1000000000) {
      puVar1 = &StringLiteral_15849/*"^mlnShort^"*/;
    }
    if (DCDLMCEEOCC < 1000000) {
      puVar1 = &StringLiteral_15854/*"^tsdShort^"*/;
    }
    pSVar5 = (System_String_o *)*puVar1;
    pSVar2 = System_Int64__ToString((int64_t)&iStack_48,(MethodInfo *)0x0);
    if (pSVar5 == (System_String_o *)0x0) goto LAB_0319b128;
    pSVar3 = System_Int64__ToString((int64_t)&local_50,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(pSVar2,StringLiteral_1377/*"."*/,pSVar3,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_15810/*"^"*/;
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (Roster_o *)0x0) {
    pSVar6 = (pAVar4->fields).FAAJGHKHEBI;
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar3;
        thunk_FUN_01c20e04(values->m_Items,pSVar3);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = StringLiteral_5735/*"EndFightRewardButtonText{img::"*/;
          thunk_FUN_01c20e04(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar6;
            thunk_FUN_01c20e04(values->m_Items + 2,pSVar6);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = StringLiteral_22506/*"}{"*/;
              thunk_FUN_01c20e04(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar2;
                thunk_FUN_01c20e04(values->m_Items + 4,pSVar2);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = StringLiteral_22500/*"}"*/;
                  thunk_FUN_01c20e04(values->m_Items + 5);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = pSVar3;
                    thunk_FUN_01c20e04(values->m_Items + 6,pSVar3);
                    if (7 < (uint)values->max_length) {
                      values->m_Items[7] = pSVar5;
                      thunk_FUN_01c20e04(values->m_Items + 7,pSVar5);
                      pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                      if (BECCOGAMKJL != (LabelButton_o *)0x0) {
                        LabelButton__set_Alias(BECCOGAMKJL,pSVar2,(MethodInfo *)0x0);
                        return;
                      }
                      goto LAB_0319b2e8;
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0319b2e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DNADIJHIICK()  [RVA 0x309C9F8]
// Nekki.SF2.GUI.Fight.EndFightContent$$DNADIJHIICK @ RVA 0x309C9F8

void Nekki_SF2_GUI_Fight_EndFightContent__DNADIJHIICK
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *__this_01;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar4;
  
  if ((DAT_0456611c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_DNADIJHIICK__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456611c = 1;
    method = extraout_x1;
  }
  pLVar3 = (__this->fields)._buttonOk;
  if (pLVar3 != (LabelButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).BLJFLADGIJC;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).BLJFLADGIJC;
        if (pUVar2 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319cb3c;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (pUVar2,(__this->fields).MEBLCDOKBAB,(MethodInfo *)0x0);
      }
      pUVar4 = (__this->fields).OPOHEPKDHPD;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).OPOHEPKDHPD;
        if (pUVar2 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319cb3c;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (pUVar2,(__this->fields).JAFGONJHCNL,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).AAJALAEDAAG;
      if (__this_00 != (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) {
        LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Fight_EndFightContent__GPCOJMMLMLG(__this,method_00);
        return;
      }
    }
  }
LAB_0319cb3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OAFJJEGHHJK(bool KKIPDEIHMDG)  [RVA 0x309CB40]
// Nekki.SF2.GUI.Fight.EndFightContent$$OAFJJEGHHJK @ RVA 0x309CB40

void Nekki_SF2_GUI_Fight_EndFightContent__OAFJJEGHHJK
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,bool KKIPDEIHMDG,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pLVar1 = (__this->fields)._buttonOk;
  if ((pLVar1 != (LabelButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pLVar1 = (__this->fields)._buttonVideoAD;
    if ((pLVar1 != (LabelButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).IHCIPEGHIDM,(MethodInfo *)0x0);
      pLVar1 = (__this->fields)._buttonRetry;
      if ((pLVar1 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).GOAJIJFCOJD,(MethodInfo *)0x0);
        pLVar1 = (__this->fields)._buttonShop;
        if ((pLVar1 != (LabelButton_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).OODOHJNONAO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JMPGNDGCPLF()  [RVA 0x309C5A0]
// Nekki.SF2.GUI.Fight.EndFightContent$$JMPGNDGCPLF @ RVA 0x309C5A0

void Nekki_SF2_GUI_Fight_EndFightContent__JMPGNDGCPLF
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar3;
  Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar6;
  LabelButton_o *pLVar7;
  UnityEngine_UI_Button_o *pUVar8;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar9;
  Nekki_SF2_GUI_Fight_ItemRewardHardmode_o **ppNVar10;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_0456611d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_DNADIJHIICK__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ItemRewardHardmode>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456611d = 1;
    method = extraout_x1;
  }
  pUVar8 = (__this->fields).HMJLEBNKJMH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar8 = (__this->fields).HMJLEBNKJMH;
    if ((pUVar8 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0319c8e0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields).BLJFLADGIJC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).BLJFLADGIJC;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319c8e0;
    (__this->fields).MEBLCDOKBAB = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields).OPOHEPKDHPD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).OPOHEPKDHPD;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319c8e0;
    (__this->fields).JAFGONJHCNL = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pSVar6 = (__this->fields).DPOPJKJLDEE;
  if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0319c8e0;
  if ((pSVar6->fields)._size != 0) {
    pUVar2 = (__this->fields)._rewardItemPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0319c8e0;
    pNVar4 = (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar2,Method_UnityEngine_GameObject_GetComponent<ItemRewardHardmode>__);
    ppNVar10 = &(__this->fields).AAJALAEDAAG;
    *ppNVar10 = pNVar4;
    thunk_FUN_01c20e04(ppNVar10,pNVar4);
    if ((*ppNVar10 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0319c8e0;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    if (*ppNVar10 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) goto LAB_0319c8e0;
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0319c8e0;
    UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).DPOPJKJLDEE;
    if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0319c8e0;
    pNVar4 = (__this->fields).AAJALAEDAAG;
    IKKAMAMLIKA = (HOOAAGABMBL_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar6,0,
                             Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    if (pNVar4 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) goto LAB_0319c8e0;
    Nekki_SF2_GUI_Fight_ItemRewardHardmode__SetIcon(pNVar4,IKKAMAMLIKA,(MethodInfo *)0x0);
    if (*ppNVar10 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) goto LAB_0319c8e0;
    Nekki_SF2_GUI_Fight_ItemRewardHardmode__SetScale(*ppNVar10,1.25,(MethodInfo *)0x0);
  }
  pLVar7 = (__this->fields)._buttonOk;
  if (pLVar7 != (LabelButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar7->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pLVar7 = (__this->fields)._buttonOk;
      if ((pLVar7 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pLVar7 = (__this->fields)._buttonRetry;
        if ((pLVar7 != (LabelButton_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          pLVar7 = (__this->fields)._buttonShop;
          if ((pLVar7 != (LabelButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            pLVar7 = (__this->fields)._buttonVideoAD;
            if ((pLVar7 != (LabelButton_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Fight_EndFightContent__HIPDIBOOEGG(__this,method_00);
              pUVar5 = (__this->fields)._buttonPanel;
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsLastSibling(pUVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0319c8e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator EHODBOPOCMN()  [RVA 0x309A63C]
// Nekki.SF2.GUI.Fight.EndFightContent$$EHODBOPOCMN @ RVA 0x309A63C

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Fight_EndFightContent__EHODBOPOCMN
          (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456611e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_TypeInfo);
    DAT_0456611e = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void CCNAMPDODEA(bool KKIPDEIHMDG)  [RVA 0x309A6B0]
// Nekki.SF2.GUI.Fight.EndFightContent$$CCNAMPDODEA @ RVA 0x309A6B0

void Nekki_SF2_GUI_Fight_EndFightContent__CCNAMPDODEA
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,bool KKIPDEIHMDG,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).AnimationEndEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_EndFightContent__HIPDIBOOEGG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,KKIPDEIHMDG);
}


// ===== private void NJBCAPPAAKL(long CBBJMNGHMIF)  [RVA 0x309CB6C]
// Nekki.SF2.GUI.Fight.EndFightContent$$NJBCAPPAAKL @ RVA 0x309CB6C

void Nekki_SF2_GUI_Fight_EndFightContent__NJBCAPPAAKL
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t CBBJMNGHMIF,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this_00;
  LabelButton_o *__this_01;
  
  if ((DAT_0456611f & 1) == 0) {
    FUN_01bab630(&StringLiteral_16815/*"btnObtain"*/);
    DAT_0456611f = 1;
  }
  __this_00 = (__this->fields).JMLBADBINID;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *)0x0) {
    Nekki_SF2_GUI_Fight_ExpAndMoneyLine__UpdateVideoRewardMoney
              (__this_00,CBBJMNGHMIF,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._buttonOk;
  if (__this_01 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(__this_01,StringLiteral_16815/*"btnObtain"*/,(MethodInfo *)0x0);
    (__this->fields).IHCIPEGHIDM = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool FEFLGCCPJEC()  [RVA 0x309C470]
// Nekki.SF2.GUI.Fight.EndFightContent$$FEFLGCCPJEC @ RVA 0x309C470

bool Nekki_SF2_GUI_Fight_EndFightContent__FEFLGCCPJEC
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Predicate_BNKBGIIJNLF__o **ppSVar2;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  System_Predicate_BNKBGIIJNLF__o *match;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
                    /* try { // try from 0319c47c to 0329c483 has its CatchHandler @ 0319c498 */
                    /* try { // try from 0319c484 to 0329c48f has its CatchHandler @ 0319bae4 */
  if ((DAT_04566120 & 1) == 0) {
                    /* try { // try from 0319c490 to 0329c497 has its CatchHandler @ 0319c498 */
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_Exists__);
                    /* catch() { ... } // from try @ 0319c47c with catch @ 0319c498
                       catch() { ... } // from try @ 0319c490 with catch @ 0319c498 */
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Count__);
    FUN_01bab630(&System_Predicate<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_<>c_COIHDLLGDLJ__);
    auVar3 = FUN_01bab630(&Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo);
    DAT_04566120 = 1;
  }
  __this_00 = (__this->fields).IJONCLJPNDO;
  if (__this_00 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      bVar1 = false;
    }
    else {
      if ((Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->static_fields->__9__39_0;
      if (match == (System_Predicate_BNKBGIIJNLF__o *)0x0) {
        if ((Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_BNKBGIIJNLF__o *)
                thunk_FUN_01bda818(System_Predicate<BNKBGIIJNLF>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar2 = &Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->static_fields->__9__39_0;
        *ppSVar2 = match;
        thunk_FUN_01c20e04(ppSVar2,match);
      }
      bVar1 = System_Collections_Generic_List<object>__Exists
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (System_Predicate_T__o *)match,
                         Method_System_Collections_Generic_List<BNKBGIIJNLF>_Exists__);
      bVar1 = !bVar1;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== private string LHINFPOHDPH(long DCDLMCEEOCC)  [RVA 0x309CBE0]
// Nekki.SF2.GUI.Fight.EndFightContent$$LHINFPOHDPH @ RVA 0x309CBE0

System_String_o *
Nekki_SF2_GUI_Fight_EndFightContent__LHINFPOHDPH
          (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t DCDLMCEEOCC,MethodInfo *method)

{
  long *plVar1;
  ushort uVar2;
  int64_t iVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar7;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  long lVar12;
  undefined8 uVar13;
  System_ValueTuple_long__long__o SVar14;
  int64_t local_48;
  int64_t local_40;
  int64_t local_38;
  
  if ((DAT_04566121 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&StringLiteral_16715/*"blnShort"*/);
    FUN_01bab630(&StringLiteral_21610/*"tsdShort"*/);
    FUN_01bab630(&StringLiteral_22359/*"{0}.{1}{2}"*/);
    __this = (Nekki_SF2_GUI_Fight_EndFightContent_o *)FUN_01bab630(&StringLiteral_19716/*"mlnShort"*/);
    DAT_04566121 = 1;
  }
  SVar14 = Nekki_SF2_GUI_Fight_EndFightContent__KAJJINHAMII(__this,DCDLMCEEOCC,method);
  iVar3 = SVar14.fields.Item1;
  local_38 = iVar3;
  if (999 < DCDLMCEEOCC) {
    plVar1 = &StringLiteral_16715/*"blnShort"*/;
    if (DCDLMCEEOCC < 1000000000) {
      plVar1 = &StringLiteral_19716/*"mlnShort"*/;
    }
    if (DCDLMCEEOCC < 1000000) {
      plVar1 = &StringLiteral_21610/*"tsdShort"*/;
    }
    lVar12 = *plVar1;
    if (lVar12 != 0) {
      pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar5 = Method_System_Array_Empty<string>__;
      lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar8 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar8 = *(long *)(lVar5 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar9 = pIVar4->klass;
      uVar13 = **(undefined8 **)(lVar5 + 0xb8);
      uVar2._0_1_ = (pIVar9->_2).rank;
      uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
            goto LAB_0319cd9c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0319cd9c:
      pIVar4 = (Il2CppObject *)(*pVVar6->methodPtr)(pIVar4,lVar12,uVar13,pVVar6->method);
      local_40 = iVar3;
      arg0 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_40);
      local_48 = SVar14.fields.Item2;
      arg1 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_48);
      pSVar7 = System_String__Format(StringLiteral_22359/*"{0}.{1}{2}"*/,arg0,arg1,pIVar4,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
  pSVar7 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
  return pSVar7;
}


// ===== private void HIPDIBOOEGG()  [RVA 0x309AE78]
// Nekki.SF2.GUI.Fight.EndFightContent$$HIPDIBOOEGG @ RVA 0x309AE78

void Nekki_SF2_GUI_Fight_EndFightContent__HIPDIBOOEGG
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pLVar1 = (__this->fields)._buttonOk;
  if ((pLVar1 != (LabelButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pLVar1 = (__this->fields)._buttonVideoAD;
    if ((pLVar1 != (LabelButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).IHCIPEGHIDM,(MethodInfo *)0x0);
      pLVar1 = (__this->fields)._buttonRetry;
      if ((pLVar1 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).GOAJIJFCOJD,(MethodInfo *)0x0);
        pLVar1 = (__this->fields)._buttonShop;
        if ((pLVar1 != (LabelButton_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).OODOHJNONAO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x309CE1C]
// Nekki.SF2.GUI.Fight.EndFightContent$$OnDestroy @ RVA 0x309CE1C

void Nekki_SF2_GUI_Fight_EndFightContent__OnDestroy
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  LabelButton_o *pLVar2;
  
  if ((DAT_04566122 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_04566122 = 1;
  }
  pLVar2 = (__this->fields)._buttonOk;
  if ((pLVar2 != (LabelButton_o *)0x0) &&
     (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pLVar2 = (__this->fields)._buttonRetry;
    if ((pLVar2 != (LabelButton_o *)0x0) &&
       (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      pLVar2 = (__this->fields)._buttonShop;
      if ((pLVar2 != (LabelButton_o *)0x0) &&
         (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
         pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
        pLVar2 = (__this->fields)._buttonVideoAD;
        if ((pLVar2 != (LabelButton_o *)0x0) &&
           (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
           pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners
                    ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
          if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          BBBBKBBFNOG__NDNPGAKJLHM((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private ValueTuple<long, long> KAJJINHAMII(long DCDLMCEEOCC)  [RVA 0x309C8E4]
// Nekki.SF2.GUI.Fight.EndFightContent$$KAJJINHAMII @ RVA 0x309C8E4

System_ValueTuple_long__long__o
Nekki_SF2_GUI_Fight_EndFightContent__KAJJINHAMII
          (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t DCDLMCEEOCC,MethodInfo *method)

{
  System_ValueTuple_long__long__Fields SVar1;
  ulong uVar2;
  MethodInfo_2BCC0B0 *in_x4;
  int iVar3;
  System_ValueTuple_long__long__o __this_00;
  int64_t local_30;
  int64_t iStack_28;
  
  if ((DAT_04566123 & 1) == 0) {
    FUN_01bab630(&Method_System_ValueTuple<long,_long>__ctor__);
    DAT_04566123 = 1;
  }
  if (DCDLMCEEOCC < 1000) {
    uVar2 = 0;
  }
  else {
    iVar3 = (int)DCDLMCEEOCC;
    if (DCDLMCEEOCC < 1000000) {
      uVar2 = DCDLMCEEOCC & 0xffffffff;
      DCDLMCEEOCC = uVar2 / 1000;
      uVar2 = (ulong)(iVar3 + (int)(uVar2 / 1000) * -1000 & 0xffff) / 10;
    }
    else if (DCDLMCEEOCC < 1000000000) {
      uVar2 = DCDLMCEEOCC & 0xffffffff;
      DCDLMCEEOCC = uVar2 / 1000000;
      uVar2 = (ulong)(uint)(iVar3 + (int)(uVar2 / 1000000) * -1000000) / 10000;
    }
    else {
      DCDLMCEEOCC = (ulong)DCDLMCEEOCC / 1000000000;
      uVar2 = (ulong)(uint)(iVar3 + (int)DCDLMCEEOCC * -1000000000) / 10000000;
    }
  }
  local_30 = 0;
  iStack_28 = 0;
  __this_00.fields.Item2 = DCDLMCEEOCC;
  __this_00.fields.Item1 = (int64_t)&local_30;
  System_ValueTuple<long,_long>___ctor
            (__this_00,uVar2,Method_System_ValueTuple<long,_long>__ctor__,in_x4);
  SVar1.Item2 = iStack_28;
  SVar1.Item1 = local_30;
  return (System_ValueTuple_long__long__o)SVar1;
}


// ===== private void HNELGIKFOIL()  [RVA 0x309CED4]
// Nekki.SF2.GUI.Fight.EndFightContent$$HNELGIKFOIL @ RVA 0x309CED4

void Nekki_SF2_GUI_Fight_EndFightContent__HNELGIKFOIL
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Action_long__o *pSVar1;
  System_Action_long__o **ppSVar2;
  
  if ((DAT_04566124 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_NJBCAPPAAKL__);
    DAT_04566124 = 1;
  }
  __this_00 = (__this->fields)._buttonVideoAD;
  if ((__this_00 != (LabelButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    pSVar1 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
    System_Action<long>___ctor();
    if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar2 = &BBBBKBBFNOG_TypeInfo->static_fields->GIBFOOLLACF;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    BBBBKBBFNOG__ELIKPNGDIII((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

