// TypeDefIndex 1219
// Namespace: Nekki.SF2.GUI.Fight
// public class EndPvpFightContent : MonoBehaviour
// Fields:
//   private string fightTimeAlias; // 0x20
//   private string headHitsAlias; // 0x28
//   private string criticalHitsAlias; // 0x30
//   private string maxComboAlias; // 0x38
//   private string styleAlias; // 0x40
//   private GameObject _rewardItemPrefab; // 0x48
//   private GameObject _textLinePrefab; // 0x50
//   private GameObject _valueLinePrefab; // 0x58
//   private LabelButton _buttonExit; // 0x60
//   private LabelButton _buttonReplay; // 0x68
//   private Transform _buttonPanel; // 0x70
//   private VerticalLayoutGroup OPOHEPKDHPD; // 0x78
//   private VerticalLayoutGroup BLJFLADGIJC; // 0x80
//   private IGPDCHBJAPD CIKGADOJJMG; // 0x88
//   private ItemRewardHardmode AAJALAEDAAG; // 0x90
//   private List<MCNGELCOMNG> NDEECPOPNFM; // 0x98
//   private List<HOOAAGABMBL> DPOPJKJLDEE; // 0xA0
//   private int BGINDOKLEKD; // 0xA8
//   private const float NMNPJJLKDIH = 300;
//   private const float HDPAGKKDPJI = 1.25;
//   private float MEBLCDOKBAB; // 0xAC
//   private float JAFGONJHCNL; // 0xB0
//   public UnityEvent AnimationEndEvent; // 0xB8
//   public UnityEvent CloseEvent; // 0xC0
//   public UnityEvent ReplayEvent; // 0xC8
//   private Button HMJLEBNKJMH; // 0xD0
//   private static Color[] MDOPFPPIGPC; // 0x0

// ===== public MCNGELCOMNG CreateLine(string EHNFGMGKCHO, long CJNHFNHJHPE, Nullable<Color> IOHGBEHDHDP)  [RVA 0x312F9D0]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$CreateLine @ RVA 0x312F9D0

MCNGELCOMNG_o *
Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
          (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,System_String_o *EHNFGMGKCHO,
          int64_t CJNHFNHJHPE,System_Nullable_Color__o *IOHGBEHDHDP,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ValueLine_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar1;
  System_Nullable_Color__Fields local_60;
  
  if ((DAT_045666be & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ValueLine>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045666be = 1;
  }
  pUVar1 = (__this->fields)._valueLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_Fight_ValueLine_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar1,Method_UnityEngine_GameObject_GetComponent<ValueLine>__),
      __this_00 != (Nekki_SF2_GUI_Fight_ValueLine_o *)0x0)) &&
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
      local_60.value.fields.a = (IOHGBEHDHDP->fields).value.fields.a;
      local_60.value.fields.g = (IOHGBEHDHDP->fields).value.fields.g;
      local_60.value.fields.b = (IOHGBEHDHDP->fields).value.fields.b;
      local_60.hasValue = (IOHGBEHDHDP->fields).hasValue;
      local_60._1_3_ = *(undefined3 *)&(IOHGBEHDHDP->fields).field_0x1;
      local_60.value.fields.r = (IOHGBEHDHDP->fields).value.fields.r;
      Nekki_SF2_GUI_Fight_ValueLine__Init
                (__this_00,EHNFGMGKCHO,CJNHFNHJHPE,(System_Nullable_Color__o *)&local_60,
                 (MethodInfo *)0x0);
      return (MCNGELCOMNG_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FinishAnimation()  [RVA 0x312FB0C]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$FinishAnimation @ RVA 0x312FB0C

void Nekki_SF2_GUI_Fight_EndPvpFightContent__FinishAnimation
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

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
  
  if ((DAT_045666bf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__);
    FUN_01bab630(&MCNGELCOMNG_TypeInfo);
    DAT_045666bf = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
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
      Nekki_SF2_GUI_Fight_EndPvpFightContent__CCNAMPDODEA(__this,true,in_x2);
      return;
    }
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
          goto LAB_0322fc14;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    in_x2 = (MethodInfo *)0x1;
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(local_48.fields._current);
LAB_0322fc14:
    (*pVVar4->methodPtr)(pIVar2,pVVar4->method);
  } while( true );
}


// ===== public MCNGELCOMNG CreateLine(string EHNFGMGKCHO, string CJNHFNHJHPE, string LAPCDGMAIAI = "", Nullable<Color> IOHGBEHDHDP)  [RVA 0x312FCF8]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$CreateLine @ RVA 0x312FCF8

MCNGELCOMNG_o *
Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
          (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,System_String_o *EHNFGMGKCHO,
          System_String_o *CJNHFNHJHPE,System_String_o *LAPCDGMAIAI,
          System_Nullable_Color__o *IOHGBEHDHDP,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_TextLine_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar1;
  System_Nullable_Color__Fields local_60;
  
  if ((DAT_045666c0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TextLine>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045666c0 = 1;
  }
  pUVar1 = (__this->fields)._textLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_Fight_TextLine_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar1,Method_UnityEngine_GameObject_GetComponent<TextLine>__),
      __this_00 != (Nekki_SF2_GUI_Fight_TextLine_o *)0x0)) &&
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
      local_60.value.fields.a = (IOHGBEHDHDP->fields).value.fields.a;
      local_60.value.fields.g = (IOHGBEHDHDP->fields).value.fields.g;
      local_60.value.fields.b = (IOHGBEHDHDP->fields).value.fields.b;
      local_60.hasValue = (IOHGBEHDHDP->fields).hasValue;
      local_60._1_3_ = *(undefined3 *)&(IOHGBEHDHDP->fields).field_0x1;
      local_60.value.fields.r = (IOHGBEHDHDP->fields).value.fields.r;
      Nekki_SF2_GUI_Fight_TextLine__Init
                (__this_00,EHNFGMGKCHO,CJNHFNHJHPE,LAPCDGMAIAI,(System_Nullable_Color__o *)&local_60
                 ,(MethodInfo *)0x0);
      return (MCNGELCOMNG_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IEJCGPFBDPG()  [RVA 0x312FE3C]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$IEJCGPFBDPG @ RVA 0x312FE3C

void Nekki_SF2_GUI_Fight_EndPvpFightContent__IEJCGPFBDPG
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar3;
  Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  UnityEngine_Events_UnityAction_o *pUVar6;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar7;
  LabelButton_o *pLVar8;
  UnityEngine_UI_Button_o *pUVar9;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar10;
  Nekki_SF2_GUI_Fight_ItemRewardHardmode_o **ppNVar11;
  UnityEngine_Events_UnityEvent_o *pUVar12;
  
  if ((DAT_045666c1 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightContent_DNADIJHIICK__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ItemRewardHardmode>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045666c1 = 1;
    method = extraout_x1;
  }
  pUVar9 = (__this->fields).HMJLEBNKJMH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar9 = (__this->fields).HMJLEBNKJMH;
    if ((pUVar9 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0323015c;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pUVar10 = (__this->fields).BLJFLADGIJC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).BLJFLADGIJC;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0323015c;
    (__this->fields).MEBLCDOKBAB = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pUVar10 = (__this->fields).OPOHEPKDHPD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).OPOHEPKDHPD;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0323015c;
    (__this->fields).JAFGONJHCNL = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pSVar7 = (__this->fields).DPOPJKJLDEE;
  if (pSVar7 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0323015c;
  if ((pSVar7->fields)._size != 0) {
    pUVar2 = (__this->fields)._rewardItemPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0323015c;
    pNVar4 = (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar2,Method_UnityEngine_GameObject_GetComponent<ItemRewardHardmode>__);
    ppNVar11 = &(__this->fields).AAJALAEDAAG;
    *ppNVar11 = pNVar4;
    thunk_FUN_01c20e04(ppNVar11,pNVar4);
    if ((*ppNVar11 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0323015c;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    if (*ppNVar11 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) goto LAB_0323015c;
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0323015c;
    UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).DPOPJKJLDEE;
    if (pSVar7 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0323015c;
    pNVar4 = (__this->fields).AAJALAEDAAG;
    IKKAMAMLIKA = (HOOAAGABMBL_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar7,0,
                             Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    if (pNVar4 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) goto LAB_0323015c;
    Nekki_SF2_GUI_Fight_ItemRewardHardmode__SetIcon(pNVar4,IKKAMAMLIKA,(MethodInfo *)0x0);
  }
  pLVar8 = (__this->fields)._buttonExit;
  if (pLVar8 != (LabelButton_o *)0x0) {
    pUVar12 = (UnityEngine_Events_UnityEvent_o *)(pLVar8->fields).super.super.super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar12 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar12,pUVar6,(MethodInfo *)0x0);
      pLVar8 = (__this->fields)._buttonExit;
      if ((pLVar8 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        pLVar8 = (__this->fields)._buttonReplay;
        if (pLVar8 != (LabelButton_o *)0x0) {
          pUVar12 = (UnityEngine_Events_UnityEvent_o *)(pLVar8->fields).super.super.super.m_OnClick;
          pUVar6 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar12 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar12,pUVar6,(MethodInfo *)0x0);
            pLVar8 = (__this->fields)._buttonReplay;
            if ((pLVar8 != (LabelButton_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
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
LAB_0323015c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3130160]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$.cctor @ RVA 0x3130160

void Nekki_SF2_GUI_Fight_EndPvpFightContent___cctor(MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Color_array *pUVar5;
  BHEDGAKGKPO_StaticFields *pBVar6;
  
  if ((DAT_045666c2 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_Color___TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo);
    DAT_045666c2 = 1;
  }
  pUVar5 = (UnityEngine_Color_array *)FUN_01bab718(UnityEngine_Color___TypeInfo,2);
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
  }
  if (pUVar5 != (UnityEngine_Color_array *)0x0) {
    iVar1 = (int)pUVar5->max_length;
    if (iVar1 != 0) {
      pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
      fVar2 = (pBVar6->LPAFCDMEJBJ).fields.a;
      fVar3 = (pBVar6->LPAFCDMEJBJ).fields.r;
      fVar4 = (pBVar6->LPAFCDMEJBJ).fields.g;
      pUVar5->m_Items[0].fields.b = (pBVar6->LPAFCDMEJBJ).fields.b;
      pUVar5->m_Items[0].fields.a = fVar2;
      pUVar5->m_Items[0].fields.r = fVar3;
      pUVar5->m_Items[0].fields.g = fVar4;
      if (iVar1 != 1) {
        pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
        fVar2 = (pBVar6->NEKDOPHPJED).fields.a;
        fVar3 = (pBVar6->NEKDOPHPJED).fields.r;
        fVar4 = (pBVar6->NEKDOPHPJED).fields.g;
        pUVar5->m_Items[1].fields.b = (pBVar6->NEKDOPHPJED).fields.b;
        pUVar5->m_Items[1].fields.a = fVar2;
        pUVar5->m_Items[1].fields.r = fVar3;
        pUVar5->m_Items[1].fields.g = fVar4;
        Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo->static_fields->MDOPFPPIGPC = pUVar5;
        thunk_FUN_01c20e04(Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo->static_fields,pUVar5);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DNADIJHIICK()  [RVA 0x3130244]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$DNADIJHIICK @ RVA 0x3130244

void Nekki_SF2_GUI_Fight_EndPvpFightContent__DNADIJHIICK
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar3;
  Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  LabelButton_o *pLVar4;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar6;
  
  if ((DAT_045666c3 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightContent_DNADIJHIICK__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045666c3 = 1;
    method = extraout_x1;
  }
  pLVar4 = (__this->fields)._buttonExit;
  if (pLVar4 != (LabelButton_o *)0x0) {
    pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pLVar4->fields).super.super.super.m_OnClick;
    pUVar2 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar2,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._buttonReplay;
      if (pLVar4 != (LabelButton_o *)0x0) {
        pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pLVar4->fields).super.super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar2,(MethodInfo *)0x0);
          pUVar6 = (__this->fields).BLJFLADGIJC;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                     (__this->fields).BLJFLADGIJC;
            if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
            goto LAB_032303bc;
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      (pUVar3,(__this->fields).MEBLCDOKBAB,(MethodInfo *)0x0);
          }
          pUVar6 = (__this->fields).OPOHEPKDHPD;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                     (__this->fields).OPOHEPKDHPD;
            if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
            goto LAB_032303bc;
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      (pUVar3,(__this->fields).JAFGONJHCNL,(MethodInfo *)0x0);
          }
          __this_00 = (__this->fields).AAJALAEDAAG;
          if (__this_00 != (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) {
            LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Fight_EndPvpFightContent__GPCOJMMLMLG(__this,method_00);
            return;
          }
        }
      }
    }
  }
LAB_032303bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CCNAMPDODEA(bool KKIPDEIHMDG)  [RVA 0x312FCCC]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$CCNAMPDODEA @ RVA 0x312FCCC

void Nekki_SF2_GUI_Fight_EndPvpFightContent__CCNAMPDODEA
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,bool KKIPDEIHMDG,MethodInfo *method
               )

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).AnimationEndEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_EndPvpFightContent__OAFJJEGHHJK(__this,false,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,KKIPDEIHMDG);
}


// ===== private Nullable<Color> NPLHLODNNCJ(EFOCOMJHEAJ OBFEMPGJJFD)  [RVA 0x3130BD0]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$NPLHLODNNCJ @ RVA 0x3130BD0

void Nekki_SF2_GUI_Fight_EndPvpFightContent__NPLHLODNNCJ
               (System_Nullable_Color__o *__return_storage_ptr__,
               Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,int32_t OBFEMPGJJFD,
               MethodInfo *method)

{
  UnityEngine_Color_array *pUVar1;
  System_Nullable_Color__Fields local_38;
  
  if ((DAT_045666c4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Color>__ctor__);
    DAT_045666c4 = 1;
  }
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value.fields.r = 0.0;
  local_38.value.fields.g = 0.0;
  local_38.value.fields.b = 0.0;
  local_38.value.fields.a = 0.0;
  if (OBFEMPGJJFD != -1) {
    if ((Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar1 = Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo->static_fields->MDOPFPPIGPC;
    if (pUVar1 == (UnityEngine_Color_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((uint)pUVar1->max_length <= (uint)OBFEMPGJJFD) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    System_Nullable<Color>___ctor
              ((System_Nullable_Color__o *)&local_38,
               (UnityEngine_Color_o)pUVar1->m_Items[OBFEMPGJJFD].fields,
               Method_System_Nullable<Color>__ctor__);
  }
  (__return_storage_ptr__->fields).value.fields.a = local_38.value.fields.a;
  (__return_storage_ptr__->fields).value.fields.g = local_38.value.fields.g;
  (__return_storage_ptr__->fields).value.fields.b = local_38.value.fields.b;
  (__return_storage_ptr__->fields).hasValue = local_38.hasValue;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x1 = local_38._1_3_;
  (__return_storage_ptr__->fields).value.fields.r = local_38.value.fields.r;
  return;
}


// ===== private void Awake()  [RVA 0x3130CA0]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$Awake @ RVA 0x3130CA0

void Nekki_SF2_GUI_Fight_EndPvpFightContent__Awake
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  LabelButton_o *__this_01;
  int32_t CJNHFNHJHPE;
  NLIDHEAMLMC_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045666c5 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_045666c5 = 1;
    method = extraout_x1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo,method);
  }
  pNVar1 = BGFNOPDHEOM__PFOBJKIPLCK(0,(MethodInfo *)0x0);
  if ((pNVar1 != (NLIDHEAMLMC_o *)0x0) && ((pNVar1->fields).ELHIGHABJBJ == 2)) {
    __this_00 = (__this->fields)._buttonExit;
    __this_01 = (__this->fields)._buttonReplay;
    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = BGFNOPDHEOM__PFOBJKIPLCK(0,(MethodInfo *)0x0);
    if ((pNVar1 != (NLIDHEAMLMC_o *)0x0) && (__this_01 != (LabelButton_o *)0x0)) {
      CJNHFNHJHPE = (pNVar1->fields).OFFPEKODFPE;
      LabelButton__set_TrackingDeviceID(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      if (__this_00 != (LabelButton_o *)0x0) {
        LabelButton__set_TrackingDeviceID(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void OnDestroy()  [RVA 0x3130D68]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$OnDestroy @ RVA 0x3130D68

void Nekki_SF2_GUI_Fight_EndPvpFightContent__OnDestroy
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  LabelButton_o *pLVar2;
  
  pLVar2 = (__this->fields)._buttonExit;
  if ((pLVar2 != (LabelButton_o *)0x0) &&
     (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pLVar2 = (__this->fields)._buttonReplay;
    if ((pLVar2 != (LabelButton_o *)0x0) &&
       (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OAFJJEGHHJK(bool KKIPDEIHMDG)  [RVA 0x3130B80]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$OAFJJEGHHJK @ RVA 0x3130B80

void Nekki_SF2_GUI_Fight_EndPvpFightContent__OAFJJEGHHJK
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,bool KKIPDEIHMDG,MethodInfo *method
               )

{
  LabelButton_o *pLVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pLVar1 = (__this->fields)._buttonExit;
  if ((pLVar1 != (LabelButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pLVar1 = (__this->fields)._buttonReplay;
    if ((pLVar1 != (LabelButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CCNAMPDODEA()  [RVA 0x3130DA8]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$CCNAMPDODEA @ RVA 0x3130DA8

void Nekki_SF2_GUI_Fight_EndPvpFightContent__CCNAMPDODEA
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Fight_EndPvpFightContent__CCNAMPDODEA(__this,false,in_x2);
  return;
}


// ===== public void .ctor()  [RVA 0x3130DB0]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$.ctor @ RVA 0x3130DB0

void Nekki_SF2_GUI_Fight_EndPvpFightContent___ctor
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_MCNGELCOMNG__o **ppSVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  
  if ((DAT_045666c6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MCNGELCOMNG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    FUN_01bab630(&StringLiteral_19371/*"lblFightTime"*/);
    FUN_01bab630(&StringLiteral_19377/*"lblStyle"*/);
    FUN_01bab630(&StringLiteral_19374/*"lblMaxCombo"*/);
    FUN_01bab630(&StringLiteral_19369/*"lblCritHits"*/);
    FUN_01bab630(&StringLiteral_19372/*"lblHeadHits"*/);
    DAT_045666c6 = 1;
  }
  (__this->fields).fightTimeAlias = StringLiteral_19371/*"lblFightTime"*/;
  thunk_FUN_01c20e04();
  (__this->fields).headHitsAlias = StringLiteral_19372/*"lblHeadHits"*/;
  thunk_FUN_01c20e04();
  (__this->fields).criticalHitsAlias = StringLiteral_19369/*"lblCritHits"*/;
  thunk_FUN_01c20e04();
  (__this->fields).maxComboAlias = StringLiteral_19374/*"lblMaxCombo"*/;
  thunk_FUN_01c20e04();
  (__this->fields).styleAlias = StringLiteral_19377/*"lblStyle"*/;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MCNGELCOMNG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<MCNGELCOMNG>__ctor__);
  ppSVar1 = &(__this->fields).NDEECPOPNFM;
  *ppSVar1 = (System_Collections_Generic_List_MCNGELCOMNG__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).DPOPJKJLDEE;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).AnimationEndEvent;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).CloseEvent;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).ReplayEvent;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(IGPDCHBJAPD PNPKEKHEMCD, VerticalLayoutGroup ODNJEHJPBGA, Button IHDIBJAICLO)  [RVA 0x3130FD0]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$Init @ RVA 0x3130FD0

void Nekki_SF2_GUI_Fight_EndPvpFightContent__Init
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               UnityEngine_UI_VerticalLayoutGroup_o *ODNJEHJPBGA,
               UnityEngine_UI_Button_o *IHDIBJAICLO,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Button_o **ppUVar2;
  IGPDCHBJAPD_JMPAGIGEFME_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar4;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar5;
  MethodInfo *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar6;
  IGPDCHBJAPD_o **ppIVar7;
  
  if ((DAT_045666c7 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<VerticalLayoutGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_045666c7 = 1;
  }
  ppUVar2 = &(__this->fields).HMJLEBNKJMH;
  *ppUVar2 = IHDIBJAICLO;
  thunk_FUN_01c20e04(ppUVar2,IHDIBJAICLO);
  ppIVar7 = &(__this->fields).CIKGADOJJMG;
  *ppIVar7 = PNPKEKHEMCD;
  thunk_FUN_01c20e04(ppIVar7,PNPKEKHEMCD);
  (__this->fields).BGINDOKLEKD = 0;
  if ((*ppIVar7 != (IGPDCHBJAPD_o *)0x0) &&
     (__this_00 = ((*ppIVar7)->fields).GIIFANGGEHM, __this_00 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0))
  {
    pSVar3 = IGPDCHBJAPD_JMPAGIGEFME__ACBMLHJIFMD(__this_00,true,(MethodInfo *)0x0);
    ppSVar6 = &(__this->fields).DPOPJKJLDEE;
    *ppSVar6 = pSVar3;
    thunk_FUN_01c20e04(ppSVar6,pSVar3);
    if (*ppSVar6 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      iVar1 = ((*ppSVar6)->fields)._size;
      ppUVar4 = &(__this->fields).BLJFLADGIJC;
      *ppUVar4 = ODNJEHJPBGA;
      thunk_FUN_01c20e04(ppUVar4,ODNJEHJPBGA);
      pUVar5 = (UnityEngine_UI_VerticalLayoutGroup_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponent<VerticalLayoutGroup>__);
      (__this->fields).OPOHEPKDHPD = pUVar5;
      thunk_FUN_01c20e04();
      if (0 < iVar1) {
        Nekki_SF2_GUI_Fight_EndPvpFightContent__IEJCGPFBDPG(__this,method_00);
        return;
      }
      Nekki_SF2_GUI_Fight_EndPvpFightContent__GPCOJMMLMLG(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator EHODBOPOCMN()  [RVA 0x31310E0]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$EHODBOPOCMN @ RVA 0x31310E0

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Fight_EndPvpFightContent__EHODBOPOCMN
          (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045666c8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndPvpFightContent_BONDAAJKAHB_TypeInfo);
    DAT_045666c8 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_EndPvpFightContent_BONDAAJKAHB_TypeInfo,method)
  ;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void GPCOJMMLMLG()  [RVA 0x31303C0]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$GPCOJMMLMLG @ RVA 0x31303C0

void Nekki_SF2_GUI_Fight_EndPvpFightContent__GPCOJMMLMLG
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  IGPDCHBJAPD_o *pIVar6;
  Il2CppObject *pIVar7;
  MethodInfo *pMVar8;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this_00;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  VirtualInvokeData *pVVar11;
  UnityEngine_Events_UnityAction_o *pUVar12;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  System_Object_array *pSVar13;
  Il2CppClass *pIVar14;
  LabelButton_o *pLVar15;
  ulong uVar16;
  int32_t *piVar17;
  UnityEngine_UI_Button_o *pUVar18;
  UnityEngine_Object_o *pUVar19;
  UnityEngine_Events_UnityEvent_o *pUVar20;
  System_Collections_Generic_List_object__o *pSVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  Il2CppType **local_150;
  _union_13 _Stack_148;
  float local_140;
  Il2CppType **local_130;
  _union_13 _Stack_128;
  float local_120;
  Il2CppType **local_110;
  _union_13 _Stack_108;
  float local_100;
  Il2CppType **local_f0;
  _union_13 _Stack_e8;
  float local_e0;
  undefined1 local_d0 [24];
  System_Enum_o local_b8;
  uint local_a8;
  Il2CppType **local_a0;
  _union_13 _Stack_98;
  _union_14 local_90;
  uint32_t local_88;
  int32_t local_84;
  Il2CppType **local_80;
  _union_13 _Stack_78;
  float local_70;
  System_TimeSpan_Fields local_58;
  
  if ((DAT_045666c9 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EFOCOMJHEAJ_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__);
    FUN_01bab630(&Method_System_Nullable<Color>_ToString__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent_Invoke__);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_22268/*"{0:D2}:{1:D2}"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045666c9 = 1;
    method = extraout_x1;
  }
  local_58._ticks = 0;
  local_80 = (Il2CppType **)0x0;
  _Stack_78.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_70 = 0.0;
  pUVar18 = (__this->fields).HMJLEBNKJMH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar18 = (__this->fields).HMJLEBNKJMH;
    if ((pUVar18 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03230b7c;
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
  }
  pUVar19 = (UnityEngine_Object_o *)(__this->fields)._textLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar19 = (UnityEngine_Object_o *)(__this->fields)._valueLinePrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar4) {
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if (pIVar6 == (IGPDCHBJAPD_o *)0x0) goto LAB_03230b7c;
      bVar4 = IGPDCHBJAPD__DONKDCJLBPN(pIVar6,(MethodInfo *)0x0);
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if (pIVar6 == (IGPDCHBJAPD_o *)0x0) goto LAB_03230b7c;
      fVar25 = (pIVar6->fields).OIBIEIEEJFE;
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
      }
      local_58._ticks = (int64_t)System_TimeSpan__FromSeconds((double)fVar25,(MethodInfo *)0x0);
      local_84 = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
      pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_84);
      local_88 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
      pMVar8 = (MethodInfo *)thunk_FUN_01bda448(int_TypeInfo,&local_88);
      __this_00 = (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)
                  System_String__Format
                            (StringLiteral_22268/*"{0:D2}:{1:D2}"*/,pIVar7,(Il2CppObject *)pMVar8,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Fight_EndPvpFightContent__NPLHLODNNCJ
                ((System_Nullable_Color__o *)&local_a0,__this_00,~(uint)bVar4 & 1,pMVar8);
      local_b8.klass = (System_Enum_c *)EFOCOMJHEAJ_TypeInfo;
      _Stack_78 = _Stack_98;
      local_80 = local_a0;
      local_70 = (float)local_90._0_4_;
      local_b8.monitor = (Il2CppClass *)0xffffffffffffffff;
      local_a8 = ~(uint)bVar4 & 1;
      pSVar9 = System_Enum__ToString(&local_b8,(MethodInfo *)0x0);
      pSVar10 = System_Nullable<Color>__ToString
                          ((System_Nullable_Color__o *)&local_80,
                           Method_System_Nullable<Color>_ToString__);
      pSVar9 = System_String__Concat(pSVar9,StringLiteral_167/*" "*/,pSVar10,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      pMVar8 = (MethodInfo *)local_d0;
      local_d0._8_8_ = _Stack_78;
      local_d0._0_8_ = local_80;
      local_d0._16_4_ = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,(__this->fields).fightTimeAlias,(System_String_o *)__this_00,
                          StringLiteral_1/*""*/,(System_Nullable_Color__o *)pMVar8,in_x5);
      lVar22 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if (pIVar6 == (IGPDCHBJAPD_o *)0x0) goto LAB_03230b7c;
      bVar4 = IGPDCHBJAPD__DONKDCJLBPN(pIVar6,(MethodInfo *)0x0);
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if (pIVar6 == (IGPDCHBJAPD_o *)0x0) goto LAB_03230b7c;
      lVar22 = 0x38;
      if (!bVar4) {
        lVar22 = 0x40;
      }
      lVar22 = *(long *)((long)&pIVar6->klass + lVar22);
      if (lVar22 == 0) goto LAB_03230b7c;
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      _Stack_e8 = _Stack_78;
      local_f0 = local_80;
      local_e0 = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,(__this->fields).headHitsAlias,(long)*(int *)(lVar22 + 0x30),
                          (System_Nullable_Color__o *)&local_f0,pMVar8);
      lVar3 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      _Stack_108 = _Stack_78;
      local_110 = local_80;
      local_100 = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,(__this->fields).criticalHitsAlias,(long)*(int *)(lVar22 + 0x28),
                          (System_Nullable_Color__o *)&local_110,pMVar8);
      lVar3 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      _Stack_128 = _Stack_78;
      local_130 = local_80;
      local_120 = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,(__this->fields).maxComboAlias,(long)*(int *)(lVar22 + 0x34),
                          (System_Nullable_Color__o *)&local_130,pMVar8);
      lVar3 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      pSVar9 = (__this->fields).styleAlias;
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar3 = Method_System_Array_Empty<string>__;
      uVar23 = *(undefined8 *)(lVar22 + 0x18);
      lVar22 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar22 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar22 = *(long *)(lVar3 + 0x38);
      }
      lVar22 = *(long *)(lVar22 + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = FUN_01b81620();
      }
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar22 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = FUN_01b81620();
      }
      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_03230b7c;
      pIVar14 = pIVar7->klass;
      uVar24 = **(undefined8 **)(lVar22 + 0xb8);
      uVar1._0_1_ = (pIVar14->_2).rank;
      uVar1._1_1_ = (pIVar14->_2).minimumAlignment;
      uVar16 = (ulong)uVar1;
      if (uVar16 != 0) {
        piVar17 = &((pIVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar11 = pIVar14->vtable + (*piVar17 + 0xc);
            goto LAB_032309dc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_032309dc:
      pSVar10 = (System_String_o *)(*pVVar11->methodPtr)(pIVar7,uVar23,uVar24,pVVar11->method);
      _Stack_148 = _Stack_78;
      local_150 = local_80;
      local_140 = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,pSVar9,pSVar10,StringLiteral_1/*""*/,
                          (System_Nullable_Color__o *)&local_150,in_x5);
      lVar22 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  pLVar15 = (__this->fields)._buttonExit;
  if (pLVar15 != (LabelButton_o *)0x0) {
    pUVar20 = (UnityEngine_Events_UnityEvent_o *)(pLVar15->fields).super.super.super.m_OnClick;
    pUVar12 = (UnityEngine_Events_UnityAction_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar20 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar20,pUVar12,(MethodInfo *)0x0);
      pLVar15 = (__this->fields)._buttonExit;
      if ((pLVar15 != (LabelButton_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar15,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
        pLVar15 = (__this->fields)._buttonReplay;
        if (pLVar15 != (LabelButton_o *)0x0) {
          pUVar20 = (UnityEngine_Events_UnityEvent_o *)(pLVar15->fields).super.super.super.m_OnClick
          ;
          pUVar12 = (UnityEngine_Events_UnityAction_o *)
                    thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar20 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar20,pUVar12,(MethodInfo *)0x0);
            pLVar15 = (__this->fields)._buttonReplay;
            if ((pLVar15 != (LabelButton_o *)0x0) &&
               (pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar15,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
              __this_01 = (__this->fields)._buttonPanel;
              if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Fight_EndPvpFightContent__IOOPGJBHPKK(__this,method_00);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03230b7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IOOPGJBHPKK()  [RVA 0x3131174]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$IOOPGJBHPKK @ RVA 0x3131174

void Nekki_SF2_GUI_Fight_EndPvpFightContent__IOOPGJBHPKK
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

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
  
  if ((DAT_045666ca & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightContent_CCNAMPDODEA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightContent_DIFPFEEGGAB__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
    FUN_01bab630(&MCNGELCOMNG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045666ca = 1;
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
      if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03231564;
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
            goto LAB_0323136c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,2);
LAB_0323136c:
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
            goto LAB_032313c8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,0);
LAB_032313c8:
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
              goto LAB_032313e8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,2);
LAB_032313e8:
        (*pVVar11->methodPtr)(pIVar9,uVar10,pVVar11->method);
      }
      pSVar8 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03231564;
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
              goto LAB_032314c8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,3);
LAB_032314c8:
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
              goto LAB_03231524;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,0);
LAB_03231524:
        (*pVVar11->methodPtr)(pIVar9,pVVar11->method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__)
      ;
    }
    return;
  }
LAB_03231564:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DIFPFEEGGAB()  [RVA 0x31315E4]
// Nekki.SF2.GUI.Fight.EndPvpFightContent$$DIFPFEEGGAB @ RVA 0x31315E4

void Nekki_SF2_GUI_Fight_EndPvpFightContent__DIFPFEEGGAB
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

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
  
  if ((DAT_045666cb & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightContent_DIFPFEEGGAB__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
    FUN_01bab630(&MCNGELCOMNG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045666cb = 1;
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
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03231788;
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
            goto LAB_032316fc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,MCNGELCOMNG_TypeInfo,3);
LAB_032316fc:
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
            goto LAB_03231758;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,MCNGELCOMNG_TypeInfo,0);
LAB_03231758:
      (*pVVar5->methodPtr)(pIVar3,pVVar5->method);
      method_00 = extraout_x1;
    }
    routine = Nekki_SF2_GUI_Fight_EndPvpFightContent__EHODBOPOCMN(__this,method_00);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
LAB_03231788:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

