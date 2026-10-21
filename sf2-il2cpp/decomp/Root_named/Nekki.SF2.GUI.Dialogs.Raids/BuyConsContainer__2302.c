// TypeDefIndex 2302
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class BuyConsContainer : MonoBehaviour
// Fields:
//   public const float SCROLL_TIME = 0.35;
//   public const Ease SCROLL_EASE = 5;
//   private const int FPMIBJFDEDH = 0;
//   private const int PILADPJLIIB = 1;
//   private const int IPKICLBGBKD = 2;
//   private const int PBKEILJOPEG = 8;
//   private const float MMEFHBGDJFE = 1;
//   private const string JJFPINGJBAP = "empty_consumable";
//   private SimpleScroll _scroll; // 0x20
//   private LabelAlias _text; // 0x28
//   private LabelAlias _descLbl; // 0x30
//   private LabelButton _consumableButton; // 0x38
//   private LabelButton _specialButton; // 0x40
//   private ResolutionButton _prevConsumable; // 0x48
//   private ResolutionImage _prevConsumableHighlight; // 0x50
//   private ResolutionButton _nextConsumable; // 0x58
//   private ResolutionImage _nextConsumableHighlight; // 0x60
//   private SFButton _hintButton; // 0x68
//   private GameObject _hintRoot; // 0x70
//   private GameObject _hintDescriptionRoot; // 0x78
//   private LabelAlias _hintDescriptionText; // 0x80
//   private GameObject _consumableCellPrefab; // 0x88
//   private readonly List<RaidConfig.HJLEKMDIDPO> FHPLGHNOJGE; // 0x90
//   private static readonly WaitForSeconds NBCLELLNCLA; // 0x0
//   private int PPEHDGLMLNK; // 0x98
//   private bool OCMNMHFIJCJ; // 0x9C
//   private string HBJEOMFBMMC; // 0xA0
//   private IEnumerator JJNJMJMBOLN; // 0xA8
//   private IEnumerator BMHCFBAKLEN; // 0xB0
//   private Sequence IBNPNEDABKA; // 0xB8
//   private BaseScrollItem GANIJIIKPNM; // 0xC0
//   private IEnumerator ALMLDADAHFC; // 0xC8
//   private HOOAAGABMBL KJBDDCNKNNE; // 0xD0

// ===== public void ForcedImmediateScrollForward()  [RVA 0x330EFA0]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ForcedImmediateScrollForward @ RVA 0x330EFA0

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ForcedImmediateScrollForward
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  MethodInfo *extraout_x1;
  
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    (*(pNVar1->klass->vtable)._41_StopMovement.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._41_StopMovement.method);
    pNVar1 = (__this->fields)._scroll;
    method = extraout_x1;
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems(pNVar1,1,0.0,8,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void OAIJOOFCOEK()  [RVA 0x330EFE4]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$OAIJOOFCOEK @ RVA 0x330EFE4

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OAIJOOFCOEK
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *pSVar1;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  char cVar4;
  int index;
  System_String_o *pSVar5;
  Il2CppClass *BANLPNAAHPH;
  UnityEngine_GameObject_o *pUVar6;
  int iVar7;
  
  if ((DAT_045677a2 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BuyConsContainerCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10824/*"RaidConsumables.empty_consumable"*/);
    FUN_01bab630(&StringLiteral_18003/*"empty_consumable"*/);
    DAT_045677a2 = 1;
  }
  cVar4 = (__this->fields).OCMNMHFIJCJ;
  if ((bool_conflict)cVar4 == false) {
    pSVar1 = (__this->fields).FHPLGHNOJGE;
    if (pSVar1 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)
    goto LAB_0340f1fc;
    iVar7 = (pSVar1->fields)._size;
    if (iVar7 < 1) {
      return;
    }
  }
  else {
    iVar7 = 1;
  }
  index = 0;
  do {
    if (cVar4 == '\0') {
      pSVar1 = (__this->fields).FHPLGHNOJGE;
      if ((pSVar1 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0) ||
         (pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Item__
                             ), pIVar2 == (Il2CppObject *)0x0)) goto LAB_0340f1fc;
      pSVar5 = pIVar2[1].monitor;
      pIVar2 = pIVar2 + 1;
    }
    else {
      pSVar5 = System_Int32__ToString((int)__this + 0x98,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_10824/*"RaidConsumables.empty_consumable"*/,pSVar5,(MethodInfo *)0x0);
      pIVar2 = (Il2CppObject *)&StringLiteral_18003/*"empty_consumable"*/;
    }
    BANLPNAAHPH = pIVar2->klass;
    pUVar6 = (__this->fields)._consumableCellPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar6 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar6,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_00 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar6,
                               Method_UnityEngine_GameObject_GetComponent<BuyConsContainerCell>__),
       __this_00 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0)) goto LAB_0340f1fc;
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__Init
              (__this_00,(System_String_o *)BANLPNAAHPH,pSVar5,__this,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._scroll;
    if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0340f1fc;
    Nekki_SF2_GUI_SimpleScroll__AddItem
              (pNVar3,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0);
    cVar4 = (__this->fields).OCMNMHFIJCJ;
    index = index + 1;
  } while (iVar7 != index);
  if ((bool_conflict)cVar4 == false) {
    return;
  }
  pNVar3 = (__this->fields)._scroll;
  if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToMedium(pNVar3,0.0,8,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._scroll;
    if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar3,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0340f1fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LNAECHIOFNK(bool CJNHFNHJHPE)  [RVA 0x330F200]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LNAECHIOFNK @ RVA 0x330F200

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  bool value;
  
  pNVar2 = (__this->fields)._prevConsumable;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    bVar1 = (__this->fields).OCMNMHFIJCJ;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      value = (bool)(CJNHFNHJHPE & (bVar1 ^ 0xffU));
      UnityEngine_GameObject__SetActive(pUVar3,value,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._nextConsumable;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MPMLPHHDCFM(BuyConsContainerCell PBPPGACOCOF, HOOAAGABMBL HCJEJCBNDHC, int DFIBGGDJPLM, string JJLDDJKKHEO)  [RVA 0x330F268]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$MPMLPHHDCFM @ RVA 0x330F268

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__MPMLPHHDCFM
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *PBPPGACOCOF,
               HOOAAGABMBL_o *HCJEJCBNDHC,int32_t DFIBGGDJPLM,System_String_o *JJLDDJKKHEO,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  RaidConfig_o *__this_00;
  RaidConfig_FNILDHLJBBJ_o *pJVar5;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  Il2CppObject *pIVar6;
  System_String_array *values;
  System_String_o *pSVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  Roster_o *__this_02;
  int64_t iVar10;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_o *str3;
  PlayerData_o *pEVar11;
  UnityEngine_GameObject_o *__this_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  LabelButton_o *pLVar16;
  undefined8 uVar17;
  LabelButton_o **ppLVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Color_o UVar23;
  UnityEngine_Color_o CJNHFNHJHPE;
  int local_58;
  int local_54;
  int64_t local_48;
  
  if ((DAT_045677a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_2427/*"<quad name=MiscSprites.ruby /> "*/);
    FUN_01bab630(&StringLiteral_17848/*"dlgUseButton"*/);
    FUN_01bab630(&StringLiteral_550/*" usedsize=90 /> "*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_22509/*"}{MiscSprites.ruby}{"*/);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_10045/*"POTION"*/);
    FUN_01bab630(&StringLiteral_17849/*"dlgUsingButton"*/);
    FUN_01bab630(&StringLiteral_17793/*"dlgForButton{img::pixel usedsize=0 color=#00000000}{"*/);
    DAT_045677a3 = 1;
  }
  local_58 = 0;
  bVar3 = System_String__op_Equality
                    ((__this->fields).HBJEOMFBMMC,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0);
  if ((!bVar3) &&
     ((bVar3 = System_String__op_Equality
                         ((__this->fields).HBJEOMFBMMC,StringLiteral_10045/*"POTION"*/,(MethodInfo *)0x0),
      DFIBGGDJPLM != 0 || (!bVar3)))) {
    bVar3 = System_String__op_Equality
                      ((__this->fields).HBJEOMFBMMC,StringLiteral_10045/*"POTION"*/,(MethodInfo *)0x0);
    pLVar16 = (__this->fields)._consumableButton;
    if (pLVar16 == (LabelButton_o *)0x0) goto LAB_0340fa18;
    if ((DFIBGGDJPLM != 0) && (bVar3)) {
      LabelButton__set_ButtonColor(pLVar16,4,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM(__this,method_00);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar11 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar11 != (PlayerData_o *)0x0) {
        bVar3 = System_String__op_Equality
                          (JJLDDJKKHEO,(pEVar11->fields).PDHCLFKCAAE,(MethodInfo *)0x0);
        pLVar16 = (__this->fields)._consumableButton;
        if (pLVar16 != (LabelButton_o *)0x0) {
          if (bVar3) {
            LabelButton__set_Alias(pLVar16,StringLiteral_17849/*"dlgUsingButton"*/,(MethodInfo *)0x0);
            if (PBPPGACOCOF != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
                        (PBPPGACOCOF,true,(MethodInfo *)0x0);
              LJLLAKHOFFF__JAEOMHIAHJB
                        ((UnityEngine_UI_Button_o *)(__this->fields)._consumableButton,2,true,
                         (MethodInfo *)0x0);
              return;
            }
          }
          else {
            LabelButton__set_Alias(pLVar16,StringLiteral_17848/*"dlgUseButton"*/,(MethodInfo *)0x0);
            if (PBPPGACOCOF != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
                        (PBPPGACOCOF,false,(MethodInfo *)0x0);
                    /* try { // try from 0340f9d4 to 0350fb8f has its CatchHandler @ 0340f9d4
                       catch() { ... } // from try @ 0340f9d4 with catch @ 0340f9d4
                       catch() { ... } // from try @ 0340fcdc with catch @ 0340f9d4
                       catch() { ... } // from try @ 0340fd40 with catch @ 0340f9d4
                       catch() { ... } // from try @ 0340fdac with catch @ 0340f9d4
                       catch() { ... } // from try @ 0340fdec with catch @ 0340f9d4 */
              LJLLAKHOFFF__JAEOMHIAHJB
                        ((UnityEngine_UI_Button_o *)(__this->fields)._consumableButton,0,true,
                         (MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__JIMIDEDINCP(__this,method_01);
              return;
            }
          }
        }
      }
      goto LAB_0340fa18;
    }
    __this_04 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pLVar16,(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_GameObject_o *)0x0) goto LAB_0340fa18;
    bVar3 = false;
    goto LAB_0340f980;
  }
  if (HCJEJCBNDHC == (HOOAAGABMBL_o *)0x0) goto LAB_0340fa18;
  local_48 = HOOAAGABMBL__MNKCHHFDEGH(HCJEJCBNDHC,(MethodInfo *)0x0);
  bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
  if (((HCJEJCBNDHC->klass->_2).naturalAligment < bVar1) ||
     ((HCJEJCBNDHC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(HCJEJCBNDHC);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((HCJEJCBNDHC[1].klass == (HOOAAGABMBL_c *)0x0) || (__this_00 == (RaidConfig_o *)0x0))
  goto LAB_0340fa18;
  pJVar5 = RaidConfig__OJOIAONADNG
                     (__this_00,((HCJEJCBNDHC[1].klass)->_1).this_arg.data,(MethodInfo *)0x0);
  local_54 = 0;
  if ((pJVar5 == (RaidConfig_FNILDHLJBBJ_o *)0x0) || ((pJVar5->fields).HNGIBIJJKAP == false)) {
    pLVar16 = (__this->fields)._consumableButton;
LAB_0340f664:
    pSVar7 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat(StringLiteral_2427/*"<quad name=MiscSprites.ruby /> "*/,pSVar7,(MethodInfo *)0x0);
  }
  else {
    __this_01 = (pJVar5->fields).GFBNJPMOEKD;
    if ((__this_01 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) ||
       (pIVar6 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,0,
                            Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__),
       pIVar6 == (Il2CppObject *)0x0)) goto LAB_0340fa18;
    local_54 = *(int *)&pIVar6[1].monitor;
    pLVar16 = (__this->fields)._consumableButton;
    if (local_54 < 2) goto LAB_0340f664;
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    if (values == (System_String_array *)0x0) goto LAB_0340fa18;
    if ((int)values->max_length == 0) {
LAB_0340fa24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[0] = StringLiteral_17793/*"dlgForButton{img::pixel usedsize=0 color=#00000000}{"*/;
    thunk_FUN_01c20e04(values->m_Items);
    pSVar7 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
    if ((uint)values->max_length < 2) goto LAB_0340fa24;
    values->m_Items[1] = pSVar7;
    thunk_FUN_01c20e04(values->m_Items + 1,pSVar7);
    if ((uint)values->max_length < 3) goto LAB_0340fa24;
    values->m_Items[2] = StringLiteral_22509/*"}{MiscSprites.ruby}{"*/;
    thunk_FUN_01c20e04(values->m_Items + 2);
    pSVar7 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
    if ((uint)values->max_length < 4) goto LAB_0340fa24;
    values->m_Items[3] = pSVar7;
    thunk_FUN_01c20e04(values->m_Items + 3,pSVar7);
    if ((uint)values->max_length < 5) goto LAB_0340fa24;
    values->m_Items[4] = StringLiteral_22500/*"}"*/;
    thunk_FUN_01c20e04();
    pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
    lVar8 = Method_System_Array_Empty<string>__;
    lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar12 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar12 = *(long *)(lVar8 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01b81620();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0340fa18;
    pIVar13 = pIVar6->klass;
    uVar17 = **(undefined8 **)(lVar8 + 0xb8);
    uVar2._0_1_ = (pIVar13->_2).rank;
    uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
    uVar14 = (ulong)uVar2;
    if (uVar14 != 0) {
      piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
          goto LAB_0340fa00;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0340fa00:
    pSVar7 = (System_String_o *)(*pVVar9->methodPtr)(pIVar6,pSVar7,uVar17,pVVar9->method);
  }
  if (pLVar16 != (LabelButton_o *)0x0) {
    ppLVar18 = &(__this->fields)._consumableButton;
    LabelButton__set_Text(pLVar16,pSVar7,(MethodInfo *)0x0);
    pLVar16 = *ppLVar18;
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
    if (__this_02 != (Roster_o *)0x0) {
      iVar10 = Roster__HEHFNBKGJLP(__this_02,(MethodInfo *)0x0);
      if (iVar10 < local_48) {
        if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UVar23 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
        fVar22 = UVar23.fields.a;
        fVar21 = UVar23.fields.b;
        fVar20 = UVar23.fields.g;
        fVar19 = UVar23.fields.r;
      }
      else {
        fVar22 = 1.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
      }
      if (pLVar16 != (LabelButton_o *)0x0) {
        UVar23.fields.g = fVar20;
        UVar23.fields.r = fVar19;
        UVar23.fields.a = fVar22;
        UVar23.fields.b = fVar21;
        LabelButton__set_Color(pLVar16,UVar23,(MethodInfo *)0x0);
        if (*ppLVar18 != (LabelButton_o *)0x0) {
          LabelButton__set_ButtonColor(*ppLVar18,2,(MethodInfo *)0x0);
          LJLLAKHOFFF__JAEOMHIAHJB((UnityEngine_UI_Button_o *)*ppLVar18,0,true,(MethodInfo *)0x0);
          if ((HCJEJCBNDHC[1].klass != (HOOAAGABMBL_c *)0x0) &&
             (__this_03 = (System_Collections_Generic_List_object__o *)
                          ((HCJEJCBNDHC[1].klass)->_1).implementedInterfaces,
             __this_03 != (System_Collections_Generic_List_object__o *)0x0)) {
            if ((__this_03->fields)._size < 1) {
              return;
            }
            pIVar6 = System_Collections_Generic_List<object>__get_Item
                               (__this_03,0,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                               );
            if (pIVar6 != (Il2CppObject *)0x0) {
              pIVar13 = pIVar6[1].klass;
              local_58 = *(int *)&pIVar6[1].monitor;
              pSVar7 = OFFIONDOEPM__CDGICMOFKHE((System_String_o *)pIVar13,(MethodInfo *)0x0);
              pLVar16 = (__this->fields)._specialButton;
              str3 = System_Int32__ToString((int32_t)&local_58,(MethodInfo *)0x0);
              pSVar7 = System_String__Concat
                                 (StringLiteral_2422/*"<quad name="*/,pSVar7,StringLiteral_550/*" usedsize=90 /> "*/,str3,(MethodInfo *)0x0
                                 );
              if (pLVar16 != (LabelButton_o *)0x0) {
                LabelButton__set_Text(pLVar16,pSVar7,(MethodInfo *)0x0);
                pLVar16 = (__this->fields)._specialButton;
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pEVar11 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (pEVar11 != (PlayerData_o *)0x0) {
                  iVar4 = PlayerData__APFFEAJBAEK
                                    (pEVar11,(System_String_o *)pIVar13,(MethodInfo *)0x0);
                  if (iVar4 < local_58) {
                    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UVar23 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
                    fVar22 = UVar23.fields.a;
                    fVar21 = UVar23.fields.b;
                    fVar20 = UVar23.fields.g;
                    fVar19 = UVar23.fields.r;
                  }
                  else {
                    fVar22 = 1.0;
                    fVar19 = 0.0;
                    fVar20 = 0.0;
                    fVar21 = 0.0;
                  }
                  if (pLVar16 != (LabelButton_o *)0x0) {
                    CJNHFNHJHPE.fields.g = fVar20;
                    CJNHFNHJHPE.fields.r = fVar19;
                    CJNHFNHJHPE.fields.a = fVar22;
                    CJNHFNHJHPE.fields.b = fVar21;
                    LabelButton__set_Color(pLVar16,CJNHFNHJHPE,(MethodInfo *)0x0);
                    pLVar16 = (__this->fields)._specialButton;
                    if ((pLVar16 != (LabelButton_o *)0x0) &&
                       (__this_04 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pLVar16,(MethodInfo *)0x0)
                       , __this_04 != (UnityEngine_GameObject_o *)0x0)) {
                      bVar3 = true;
LAB_0340f980:
                      UnityEngine_GameObject__SetActive(__this_04,bVar3,(MethodInfo *)0x0);
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
LAB_0340fa18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LabelButton GetBuyBtn()  [RVA 0x330FB80]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$GetBuyBtn @ RVA 0x330FB80

LabelButton_o *
Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__GetBuyBtn
          (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._consumableButton;
}


// ===== private void EIDAKAPJKGH()  [RVA 0x330FB88]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$EIDAKAPJKGH @ RVA 0x330FB88

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__EIDAKAPJKGH
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  LabelButton_o *__this_00;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *pNVar4;
  PlayerData_o *pEVar5;
  System_Action_object__o *pSVar6;
  HOOAAGABMBL_o *pHVar7;
  int64_t FMAMNKBINOG;
  Il2CppObject *IMMNELPBGIF;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Roster_o *pAVar8;
  HOOAAGABMBL_o **ppHVar9;
  System_String_o *value;
  undefined4 local_24;
  
                    /* try { // try from 0340fb90 to 0350fb97 has its CatchHandler @ 0340fd80 */
  if ((DAT_045677a4 & 1) == 0) {
                    /* try { // try from 0340fbac to 0350fbbb has its CatchHandler @ 0340fd8c */
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_LABFNGKBHKE__);
                    /* try { // try from 0340fbc0 to 0350fbc7 has its CatchHandler @ 0340fd74 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_LMENCAFJBLF__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
                    /* try { // try from 0340fbd8 to 0350fbdf has its CatchHandler @ 0340fd7c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 0340fbe4 to 0350fbeb has its CatchHandler @ 0340fd78 */
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* try { // try from 0340fbf4 to 0350fbfb has its CatchHandler @ 0340fd6c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0340fbfc to 0350fc0b has its CatchHandler @ 0340fd50 */
    FUN_01bab630(&StringLiteral_17756/*"dlgAlertTitle"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
                    /* try { // try from 0340fc24 to 0350fc27 has its CatchHandler @ 0340fd44 */
                    /* try { // try from 0340fc28 to 0350fc4f has its CatchHandler @ 0340fd84 */
    FUN_01bab630(&StringLiteral_17848/*"dlgUseButton"*/);
    FUN_01bab630(&StringLiteral_20251/*"potionWarning"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045677a4 = 1;
  }
  __this_00 = (__this->fields)._consumableButton;
  if (__this_00 != (LabelButton_o *)0x0) {
                    /* try { // try from 0340fc54 to 0350fc5b has its CatchHandler @ 0340fd54 */
    iVar1 = (__this->fields).PPEHDGLMLNK;
                    /* try { // try from 0340fc64 to 0350fc6b has its CatchHandler @ 0340fd58 */
    pSVar3 = LabelButton__get_Alias(__this_00,(MethodInfo *)0x0);
    method_02 = (MethodInfo *)0x0;
                    /* try { // try from 0340fc70 to 0350fc77 has its CatchHandler @ 0340fd70 */
    bVar2 = System_String__op_Equality(pSVar3,StringLiteral_17848/*"dlgUseButton"*/,(MethodInfo *)0x0);
    if (!bVar2) {
                    /* catch() { ... } // from try @ 0340fc28 with catch @ 0340fd84 */
                    /* catch() { ... } // from try @ 0340fca0 with catch @ 0340fd88 */
      pHVar7 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBNEPJEGAHN(__this,method_00);
      ppHVar9 = &(__this->fields).KJBDDCNKNNE;
                    /* catch() { ... } // from try @ 0340fbac with catch @ 0340fd8c */
      *ppHVar9 = pHVar7;
      thunk_FUN_01c20e04(ppHVar9,pHVar7);
      if (*ppHVar9 == (HOOAAGABMBL_o *)0x0) {
        return;
      }
                    /* try { // try from 0340fda8 to 0350fdab has its CatchHandler @ 0340fdd4 */
                    /* try { // try from 0340fdac to 0350fde3 has its CatchHandler @ 0340f9d4 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 0340fda8 with catch @ 0340fdd4 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 0340fde4 to 0350fdeb has its CatchHandler @ 0340fe00 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0340fdec to 0350fdf7 has its CatchHandler @ 0340f9d4 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0340fdf8 to 0350fdff has its CatchHandler @ 0340fe00 */
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (Roster_o *)0x0)
      {
                    /* catch() { ... } // from try @ 0340fde4 with catch @ 0340fe00
                       catch() { ... } // from try @ 0340fdf8 with catch @ 0340fe00 */
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
        pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar8 == (Roster_o *)0x0) goto LAB_0340fff8;
        if ((pAVar8->fields).AGHLCMMNEFI != false) {
          if (*ppHVar9 != (HOOAAGABMBL_o *)0x0) {
            FMAMNKBINOG = HOOAAGABMBL__DPEKAKHBPPO(*ppHVar9,(MethodInfo *)0x0);
            pSVar6 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            pHVar7 = (__this->fields).KJBDDCNKNNE;
            if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
              DialogsOpener__JHMPDKFFLPN
                        (0,1,FMAMNKBINOG,pSVar6,0,(pHVar7->fields)._COIPKAKHDFP_k__BackingField,true
                         ,(MethodInfo *)0x0);
              return;
            }
          }
          goto LAB_0340fff8;
        }
      }
      pHVar7 = *ppHVar9;
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
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0)
      {
        bVar2 = true;
      }
      else {
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
        pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar8 == (Roster_o *)0x0) goto LAB_0340fff8;
        bVar2 = (pAVar8->fields).AGHLCMMNEFI != false;
      }
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      GameUtils__IAGKBFCKFKB
                (pHVar7,2,1,(System_Action_BKKPAKHJDKB__o *)0x0,bVar2,(MethodInfo *)0x0);
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM(__this,method_00);
                    /* try { // try from 0340fc80 to 0350fc87 has its CatchHandler @ 0340fd68 */
    if (iVar1 != 1) {
      return;
    }
                    /* try { // try from 0340fc88 to 0350fc97 has its CatchHandler @ 0340fd64 */
    pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DLGBDBPEIDN(__this,method_01);
    if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
      pSVar3 = (pNVar4->fields)._FDBOKOGOEEG_k__BackingField;
                    /* try { // try from 0340fca0 to 0350fcbf has its CatchHandler @ 0340fd88 */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar5 != (PlayerData_o *)0x0) {
        value = (pEVar5->fields).PDHCLFKCAAE;
        bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
                    /* try { // try from 0340fcd0 to 0350fcdb has its CatchHandler @ 0340fd4c */
        if (!bVar2) {
                    /* try { // try from 0340fcdc to 0350fd33 has its CatchHandler @ 0340f9d4 */
          method_02 = (MethodInfo *)0x0;
          bVar2 = System_String__op_Inequality(value,pSVar3,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar6 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
                    /* try { // try from 0340fd34 to 0350fd37 has its CatchHandler @ 0340fd60 */
                    /* try { // try from 0340fd38 to 0350fd3b has its CatchHandler @ 0340fd5c */
                    /* try { // try from 0340fd3c to 0350fd3f has its CatchHandler @ 0340fd48 */
                    /* try { // try from 0340fd40 to 0350fda7 has its CatchHandler @ 0340f9d4 */
                    /* catch() { ... } // from try @ 0340fc24 with catch @ 0340fd44 */
                    /* catch() { ... } // from try @ 0340fd3c with catch @ 0340fd48 */
                    /* catch() { ... } // from try @ 0340fcd0 with catch @ 0340fd4c */
                    /* catch() { ... } // from try @ 0340fbfc with catch @ 0340fd50 */
                    /* catch() { ... } // from try @ 0340fc54 with catch @ 0340fd54 */
                    /* catch() { ... } // from try @ 0340fc64 with catch @ 0340fd58 */
                    /* catch() { ... } // from try @ 0340fd38 with catch @ 0340fd5c */
                    /* catch() { ... } // from try @ 0340fd34 with catch @ 0340fd60 */
                    /* catch() { ... } // from try @ 0340fc88 with catch @ 0340fd64 */
                    /* catch() { ... } // from try @ 0340fc80 with catch @ 0340fd68 */
                    /* catch() { ... } // from try @ 0340fbf4 with catch @ 0340fd6c */
                    /* catch() { ... } // from try @ 0340fc70 with catch @ 0340fd70 */
                    /* catch() { ... } // from try @ 0340fbc0 with catch @ 0340fd74 */
                    /* catch() { ... } // from try @ 0340fbe4 with catch @ 0340fd78 */
                    /* catch() { ... } // from try @ 0340fbd8 with catch @ 0340fd7c */
            DialogsOpener__OOOIOMHJONP
                      (StringLiteral_17756/*"dlgAlertTitle"*/,StringLiteral_20251/*"potionWarning"*/,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/
                       ,pSVar6,1,0,false,false,StringLiteral_1/*""*/,true,true,true,(MethodInfo *)0x0);
            return;
                    /* catch() { ... } // from try @ 0340fb90 with catch @ 0340fd80 */
          }
        }
        local_24 = 1;
        IMMNELPBGIF = (Il2CppObject *)
                      thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,
                                         &local_24);
        Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LMENCAFJBLF(__this,IMMNELPBGIF,method_02);
        return;
      }
    }
  }
LAB_0340fff8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowConsumableHint(RaidConfig.HJLEKMDIDPO FNDKFJDGGCA)  [RVA 0x33102AC]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ShowConsumableHint @ RVA 0x33102AC

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ShowConsumableHint
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
               RaidConfig_HJLEKMDIDPO_o *FNDKFJDGGCA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  PBAKFOBIHEG_o *pPVar4;
  VirtualInvokeData *pVVar5;
  undefined8 uVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  System_Collections_IEnumerator_o *pSVar11;
  float fVar12;
  
  if ((DAT_045677a5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_CJPOKGIHNDE__);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045677a5 = 1;
  }
  pUVar3 = (__this->fields)._hintDescriptionRoot;
  if ((((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) &&
      (UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0),
      FNDKFJDGGCA != (RaidConfig_HJLEKMDIDPO_o *)0x0)) &&
     (__this_00 = (__this->fields)._hintDescriptionText,
     __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    Nekki_SF2_GUI_LabelAlias__set_Alias
              (__this_00,(FNDKFJDGGCA->fields).super.EJEPJCHIGFE,(MethodInfo *)0x0);
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar10 = &(__this->fields).BMHCFBAKLEN;
    pSVar11 = *ppSVar10;
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar7 = pPVar4->klass;
      uVar1._0_1_ = (pPVar7->_2).rank;
      uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar5 = pPVar7->vtable + (*piVar9 + 1);
            goto LAB_034103d0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,1);
LAB_034103d0:
      (*pVVar5->methodPtr)(pPVar4,pSVar11,pVVar5->method);
      pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar6 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
        pPVar7 = pPVar4->klass;
        fVar12 = DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
        uVar2._0_1_ = (pPVar7->_2).rank;
        uVar2._1_1_ = (pPVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar2;
        if (uVar8 != 0) {
          piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar5 = pPVar7->vtable + (*piVar9 + 2);
              goto LAB_034104ac;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_034104ac:
        pSVar11 = (System_Collections_IEnumerator_o *)
                  (*pVVar5->methodPtr)((ulong)(uint)fVar12,pPVar4,uVar6,pVVar5->method);
        *ppSVar10 = pSVar11;
        thunk_FUN_01c20e04(ppSVar10,pSVar11);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private HOOAAGABMBL LBNEPJEGAHN()  [RVA 0x3310240]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LBNEPJEGAHN @ RVA 0x3310240

HOOAAGABMBL_o *
Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBNEPJEGAHN
          (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *pNVar1;
  HOOAAGABMBL_o *pHVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_String_o *DKIFPHNBBBG;
  
  if ((DAT_045677a6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
    DAT_045677a6 = 1;
    method = extraout_x1;
  }
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DLGBDBPEIDN(__this,method);
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
    DKIFPHNBBBG = (pNVar1->fields)._FDBOKOGOEEG_k__BackingField;
    method_00 = extraout_x1_00;
    if ((Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
      method_00 = extraout_x1_01;
    }
    pHVar2 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ONFELBEANOD(DKIFPHNBBBG,method_00);
    return pHVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JAGDCEOECMD()  [RVA 0x33107E0]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$JAGDCEOECMD @ RVA 0x33107E0

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__JAGDCEOECMD
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ScrollForward(__this,true,in_x2);
  return;
}


// ===== private void Update()  [RVA 0x3310830]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$Update @ RVA 0x3310830

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__Update
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__PBNBBJPDHGK(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CJPOKGIHNDE(__this,method_01);
  }
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    method_02 = (MethodInfo *)0x0;
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsNotMovingAndNotDraggingFrames
                      (__this_00,2,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK(__this,bVar1,method_02);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CJPOKGIHNDE()  [RVA 0x331096C]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$CJPOKGIHNDE @ RVA 0x331096C

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CJPOKGIHNDE
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  UnityEngine_GameObject_o *pUVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  System_Collections_IEnumerator_o *pSVar9;
  
  if ((DAT_045677a7 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045677a7 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).BMHCFBAKLEN;
  pSVar9 = *ppSVar8;
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar5 = pPVar2->klass;
    uVar1._0_1_ = (pPVar5->_2).rank;
    uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar3 = pPVar5->vtable + (*piVar7 + 1);
          goto LAB_03410a0c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03410a0c:
    (*pVVar3->methodPtr)(pPVar2,pSVar9,pVVar3->method);
    pUVar4 = (__this->fields)._hintDescriptionRoot;
    if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar4 = UnityEngine_GameObject__get_gameObject(pUVar4,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      *ppSVar8 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JIMIDEDINCP()  [RVA 0x330FA60]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$JIMIDEDINCP @ RVA 0x330FA60

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__JIMIDEDINCP
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  UnityEngine_Transform_o *pUVar2;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar3;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar4;
  DG_Tweening_Sequence_o **ppDVar5;
  
  if ((DAT_045677a8 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_045677a8 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM(__this,method);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar1,0.3,(MethodInfo *)0x0);
  pLVar4 = (__this->fields)._consumableButton;
  if (pLVar4 != (LabelButton_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
    pDVar3 = DG_Tweening_ShortcutExtensions__DOScale(pUVar2,1.05,0.3,(MethodInfo *)0x0);
    pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                       (pDVar1,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
    pLVar4 = (__this->fields)._consumableButton;
    if (pLVar4 != (LabelButton_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_ShortcutExtensions__DOScale(pUVar2,1.0,0.3,(MethodInfo *)0x0);
      pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                         (pDVar1,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
      pDVar1 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                         ((Il2CppObject *)pDVar1,-1,
                          Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
      ppDVar5 = &(__this->fields).IBNPNEDABKA;
      *ppDVar5 = pDVar1;
      thunk_FUN_01c20e04(ppDVar5,pDVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CACDLMIOJNI(string BANLPNAAHPH)  [RVA 0x3310A5C]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$CACDLMIOJNI @ RVA 0x3310A5C

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CACDLMIOJNI
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,System_String_o *BANLPNAAHPH,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  int index;
  
  if ((DAT_045677a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Item__);
    DAT_045677a9 = 1;
  }
  __this_00 = (__this->fields).FHPLGHNOJGE;
  if (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        __this_01 = (__this->fields)._scroll;
        if (__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
          index = 0;
LAB_03410b1c:
          Nekki_SF2_GUI_SimpleScroll__ScrollToItem(__this_01,index,0.0,8,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Item__
                         );
      if (pIVar2 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)pIVar2[1].klass,BANLPNAAHPH,(MethodInfo *)0x0);
      if (bVar1) {
        __this_01 = (__this->fields)._scroll;
        if (__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_03410b1c;
        break;
      }
      __this_00 = (__this->fields).FHPLGHNOJGE;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DJNLICOAJGO()  [RVA 0x3310B34]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$DJNLICOAJGO @ RVA 0x3310B34

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DJNLICOAJGO
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  
  if ((DAT_045677aa & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045677aa = 1;
    method = extraout_x1;
  }
  IKKAMAMLIKA = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBNEPJEGAHN(__this,method);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    GameUtils__IAGKBFCKFKB
              (IKKAMAMLIKA,0x14,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private bool LOHIKLBCOOH(string MCJKMCKELIN, out string DNIFHHICEDB)  [RVA 0x3310BB8]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LOHIKLBCOOH @ RVA 0x3310BB8

bool Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LOHIKLBCOOH
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,System_String_o *MCJKMCKELIN,
               System_String_o **DNIFHHICEDB,MethodInfo *method)

{
  bool bVar1;
  PlayerData_o *pEVar2;
  LabelButton_o *pLVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045677ab & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_6981/*"HORN"*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_10045/*"POTION"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045677ab = 1;
  }
  ppSVar4 = &(__this->fields).HBJEOMFBMMC;
  *ppSVar4 = MCJKMCKELIN;
  thunk_FUN_01c20e04(ppSVar4,MCJKMCKELIN);
  *DNIFHHICEDB = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(DNIFHHICEDB,StringLiteral_1/*""*/);
  bVar1 = System_String__op_Equality(*ppSVar4,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar3 = (__this->fields)._consumableButton;
    (__this->fields).PPEHDGLMLNK = 0;
    if (pLVar3 != (LabelButton_o *)0x0) {
      (pLVar3->fields).super.super.ButtonId = 0;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar2 != (PlayerData_o *)0x0) {
        ppSVar4 = &(pEVar2->fields).JHMMCCKCFFH;
        goto LAB_03410d60;
      }
    }
  }
  else {
    bVar1 = System_String__op_Equality(*ppSVar4,StringLiteral_10045/*"POTION"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pLVar3 = (__this->fields)._consumableButton;
      (__this->fields).PPEHDGLMLNK = 1;
      if (pLVar3 != (LabelButton_o *)0x0) {
        (pLVar3->fields).super.super.ButtonId = 1;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar2 != (PlayerData_o *)0x0) {
          ppSVar4 = &(pEVar2->fields).NBLJHMNHDAE;
LAB_03410d60:
          *DNIFHHICEDB = *ppSVar4;
          thunk_FUN_01c20e04(DNIFHHICEDB);
          return true;
        }
      }
    }
    else {
      bVar1 = System_String__op_Equality(*ppSVar4,StringLiteral_6981/*"HORN"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return false;
      }
      pLVar3 = (__this->fields)._consumableButton;
      (__this->fields).PPEHDGLMLNK = 2;
      if (pLVar3 != (LabelButton_o *)0x0) {
        (pLVar3->fields).super.super.ButtonId = 2;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar2 != (PlayerData_o *)0x0) {
          ppSVar4 = &(pEVar2->fields).IHLHMKHJPCC;
          goto LAB_03410d60;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int MKECLNPFGHC(string BANLPNAAHPH)  [RVA 0x3310D94]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$MKECLNPFGHC @ RVA 0x3310D94

int32_t Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__MKECLNPFGHC
                  (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
                  System_String_o *BANLPNAAHPH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_045677ac & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Item__);
    DAT_045677ac = 1;
  }
  __this_00 = (__this->fields).FHPLGHNOJGE;
  if (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return 0;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Item__
                         );
      if (pIVar2 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)pIVar2[1].klass,BANLPNAAHPH,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      __this_00 = (__this->fields).FHPLGHNOJGE;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PBNBBJPDHGK()  [RVA 0x331087C]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$PBNBBJPDHGK @ RVA 0x331087C

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__PBNBBJPDHGK
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  UnityEngine_GameObject_o *pUVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  System_Collections_IEnumerator_o *pSVar9;
  
  if ((DAT_045677ad & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045677ad = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).JJNJMJMBOLN;
  pSVar9 = *ppSVar8;
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar5 = pPVar2->klass;
    uVar1._0_1_ = (pPVar5->_2).rank;
    uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar3 = pPVar5->vtable + (*piVar7 + 1);
          goto LAB_0341091c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0341091c:
    (*pVVar3->methodPtr)(pPVar2,pSVar9,pVVar3->method);
    pUVar4 = (__this->fields)._hintRoot;
    if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar4 = UnityEngine_GameObject__get_gameObject(pUVar4,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      *ppSVar8 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public SimpleScroll GetScroll()  [RVA 0x3310E40]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$GetScroll @ RVA 0x3310E40

Nekki_SF2_GUI_SimpleScroll_o *
Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__GetScroll
          (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._scroll;
}


// ===== private void HGNJELDOFKM()  [RVA 0x330FA28]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$HGNJELDOFKM @ RVA 0x330FA28

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).IBNPNEDABKA;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== private void OnDestroy()  [RVA 0x3310E48]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$OnDestroy @ RVA 0x3310E48

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045677ae & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045677ae = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__PBNBBJPDHGK(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CJPOKGIHNDE(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM(__this,method_01);
  ppSVar7 = &(__this->fields).ALMLDADAHFC;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03410f0c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03410f0c:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void OnScroll(BaseScrollItem IKKAMAMLIKA)  [RVA 0x3310F38]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$OnScroll @ RVA 0x3310F38

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OnScroll
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_BaseScrollItem_o **ppNVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar3;
  
  if ((DAT_045677af & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045677af = 1;
  }
  ppNVar2 = &(__this->fields).GANIJIIKPNM;
  pNVar3 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = *ppNVar2;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)IKKAMAMLIKA,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
  }
  (__this->fields).GANIJIIKPNM = IKKAMAMLIKA;
  thunk_FUN_01c20e04(ppNVar2,IKKAMAMLIKA);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__UpdateData(__this,false,method_00);
  return;
}


// ===== public void .ctor()  [RVA 0x3311230]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$.ctor @ RVA 0x3311230

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045677b0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_TypeInfo);
    DAT_045677b0 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>__ctor__);
  ppSVar1 = &(__this->fields).FHPLGHNOJGE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).PPEHDGLMLNK = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ScrollBackward(bool LODKPINFHCO)  [RVA 0x33112C0]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ScrollBackward @ RVA 0x33112C0

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ScrollBackward
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,bool LODKPINFHCO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBBMPJKOINK(__this,-1,method);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK(__this,false,method);
  if (LODKPINFHCO) {
    EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void LMENCAFJBLF(object IMMNELPBGIF)  [RVA 0x33100EC]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LMENCAFJBLF @ RVA 0x33100EC

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LMENCAFJBLF
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  LabelButton_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this_01;
  PlayerData_o *pEVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar2;
  undefined1 auStack_40 [4];
  int local_3c;
  
  if ((DAT_045677b1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<BaseDialog_DCGLMJMGGDC>_GetValueOrDefault__);
    FUN_01bab630(&System_Nullable<BaseDialog_DCGLMJMGGDC>_TypeInfo);
    FUN_01bab630(&StringLiteral_17849/*"dlgUsingButton"*/);
    DAT_045677b1 = 1;
  }
  if ((IMMNELPBGIF != (Il2CppObject *)0x0) &&
     (pIVar2 = (System_Nullable<BaseDialog_DCGLMJMGGDC>_TypeInfo->_1).element_class,
     IMMNELPBGIF->klass != pIVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF,pIVar2);
  }
  thunk_FUN_01bda974(IMMNELPBGIF,System_Nullable<BaseDialog_DCGLMJMGGDC>_TypeInfo,auStack_40);
  if (local_3c != 1) {
    return;
  }
  __this_00 = (__this->fields)._consumableButton;
  if (__this_00 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(__this_00,StringLiteral_17849/*"dlgUsingButton"*/,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)0x1;
    LJLLAKHOFFF__JAEOMHIAHJB
              ((UnityEngine_UI_Button_o *)(__this->fields)._consumableButton,2,true,
               (MethodInfo *)0x0);
    __this_01 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DLGBDBPEIDN(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DMJHAJBLHFH(__this,false,method_01);
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
                (__this_01,true,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar1 != (PlayerData_o *)0x0) {
        (pEVar1->fields).PDHCLFKCAAE = (__this_01->fields)._FDBOKOGOEEG_k__BackingField;
        thunk_FUN_01c20e04();
        EDFDANKEBGF__CHCFEINJOFO((MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private BuyConsContainerCell DLGBDBPEIDN()  [RVA 0x330FFFC]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$DLGBDBPEIDN @ RVA 0x330FFFC

Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *
Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DLGBDBPEIDN
          (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *pNVar1;
  
  pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)FUN_03f93670(DAT_045677b2);
  return pNVar1;
}


// ===== public void UpdateData(bool FMIGJGPPDCD = False)  [RVA 0x3311000]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$UpdateData @ RVA 0x3311000

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__UpdateData
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,bool FMIGJGPPDCD,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t DFIBGGDJPLM;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *pNVar3;
  System_String_o *__this_03;
  PlayerData_o *__this_04;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar5;
  int index;
  
  pMVar4 = (MethodInfo *)(ulong)FMIGJGPPDCD;
  if ((DAT_045677b3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_18003/*"empty_consumable"*/);
    DAT_045677b3 = 1;
    pMVar4 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM(__this,pMVar4);
  __this_00 = (__this->fields)._specialButton;
  if ((__this_00 != (LabelButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar4 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._scroll;
    if (pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      index = 0;
      method_00 = extraout_x1_00;
      do {
        __this_02 = *(System_Collections_Generic_List_object__o **)&(pNVar5->fields)._snapEase;
        if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) break;
        if ((__this_02->fields)._size <= index) {
          pNVar3 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DLGBDBPEIDN(__this,method_00);
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ANIOKLANHAD(__this,pNVar3,pMVar4);
          return;
        }
        pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (__this_02,index,
                            Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
        if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
LAB_03411114:
          pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0;
        }
        else {
          bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo->_2).naturalAligment;
          if ((((Il2CppClass *)pNVar3->klass)->_2).naturalAligment < bVar1) goto LAB_03411114;
          if ((((Il2CppClass *)pNVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo) {
            pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0;
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          return;
        }
        if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) break;
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                          ((pNVar3->fields)._FDBOKOGOEEG_k__BackingField,(MethodInfo *)0x0);
        if (bVar2) {
LAB_03411180:
          pMVar4 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__SetCountVisible
                    (pNVar3,false,(MethodInfo *)0x0);
          method_00 = extraout_x1_01;
        }
        else {
          __this_03 = (pNVar3->fields)._FDBOKOGOEEG_k__BackingField;
          if (__this_03 == (System_String_o *)0x0) break;
          bVar2 = System_String__Contains(__this_03,StringLiteral_18003/*"empty_consumable"*/,(MethodInfo *)0x0);
          if (bVar2) goto LAB_03411180;
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__SetCountVisible
                    (pNVar3,true,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_04 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_04 == (PlayerData_o *)0x0) break;
          DFIBGGDJPLM = PlayerData__OHCGFHJNEGO
                                  (__this_04,(pNVar3->fields)._FDBOKOGOEEG_k__BackingField,
                                   (MethodInfo *)0x0);
          pMVar4 = (MethodInfo *)(ulong)FMIGJGPPDCD;
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__SetCount
                    (pNVar3,DFIBGGDJPLM,FMIGJGPPDCD,(MethodInfo *)0x0);
          method_00 = extraout_x1_02;
        }
        pNVar5 = (__this->fields)._scroll;
        index = index + 1;
      } while (pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DMJHAJBLHFH(bool CCOCAIEPCOJ)  [RVA 0x3311330]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$DMJHAJBLHFH @ RVA 0x3311330

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DMJHAJBLHFH
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,bool CCOCAIEPCOJ,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  int index;
  
  if ((DAT_045677b4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045677b4 = 1;
  }
  pNVar3 = (__this->fields)._scroll;
  if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    index = 0;
    do {
      __this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar3->fields)._snapEase;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
      if ((__this_00->fields)._size <= index) {
        return;
      }
      __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)
                  System_Collections_Generic_List<object>__get_Item
                            (__this_00,index,
                             Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
LAB_034113f0:
        __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0;
      }
      else {
        bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo->_2).naturalAligment;
        if ((((Il2CppClass *)__this_01->klass)->_2).naturalAligment < bVar1) goto LAB_034113f0;
        if ((((Il2CppClass *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo) {
          __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0;
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) break;
        Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
                  (__this_01,CCOCAIEPCOJ,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields)._scroll;
      index = index + 1;
    } while (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ChangeHintDescriptionParent(Transform IFFKONPAKOP)  [RVA 0x3311838]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ChangeHintDescriptionParent @ RVA 0x3311838

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ChangeHintDescriptionParent
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
               UnityEngine_Transform_o *IFFKONPAKOP,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  __this_00 = (__this->fields)._hintDescriptionRoot;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(__this_01,IFFKONPAKOP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CFOMPMAKJCD()  [RVA 0x3311868]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$CFOMPMAKJCD @ RVA 0x3311868

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CFOMPMAKJCD
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ScrollBackward(__this,true,in_x2);
  return;
}


// ===== private void LABFNGKBHKE(object IMMNELPBGIF)  [RVA 0x3311870]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LABFNGKBHKE @ RVA 0x3311870

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LABFNGKBHKE
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool ADGOHBFJIKC;
  int *piVar1;
  Roster_o *pAVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  
  if ((DAT_045677b5 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045677b5 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (0 < *piVar1) {
      IKKAMAMLIKA = (__this->fields).KJBDDCNKNNE;
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
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0)
      {
        ADGOHBFJIKC = true;
      }
      else {
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
        pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar2 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ADGOHBFJIKC = (pAVar2->fields).AGHLCMMNEFI != false;
      }
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      GameUtils__IAGKBFCKFKB
                (IKKAMAMLIKA,2,1,(System_Action_BKKPAKHJDKB__o *)0x0,ADGOHBFJIKC,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x33119F8]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$.cctor @ RVA 0x33119F8

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer___cctor(MethodInfo *method)

{
  UnityEngine_WaitForSeconds_o *__this;
  
  if ((DAT_045677b6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045677b6 = 1;
  }
  __this = (UnityEngine_WaitForSeconds_o *)thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(__this,1.0,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->static_fields->NBCLELLNCLA = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->static_fields,__this);
  return;
}


// ===== private void ANIOKLANHAD(BuyConsContainerCell PBPPGACOCOF)  [RVA 0x3311468]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ANIOKLANHAD @ RVA 0x3311468

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ANIOKLANHAD
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *PBPPGACOCOF,MethodInfo *method)

{
  bool bVar1;
  int32_t DFIBGGDJPLM;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  PlayerData_o *pEVar4;
  System_String_o *pSVar5;
  RaidConfig_o *__this_01;
  RaidConfig_HJLEKMDIDPO_o *pJVar6;
  HOOAAGABMBL_o *HCJEJCBNDHC;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_045677b7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&StringLiteral_6981/*"HORN"*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_10045/*"POTION"*/);
    FUN_01bab630(&StringLiteral_18003/*"empty_consumable"*/);
    FUN_01bab630(&StringLiteral_15847/*"^lblDamage^ "*/);
    DAT_045677b7 = 1;
  }
  if (PBPPGACOCOF == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) goto LAB_03411834;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__OnSelectCell(PBPPGACOCOF,(MethodInfo *)0x0);
  CJNHFNHJHPE = (PBPPGACOCOF->fields)._FDBOKOGOEEG_k__BackingField;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03411534:
    __this_00 = (__this->fields)._consumableButton;
    if ((__this_00 == (LabelButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03411834;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._descLbl;
  }
  else {
    if (CJNHFNHJHPE == (System_String_o *)0x0) goto LAB_03411834;
    bVar1 = System_String__Contains(CJNHFNHJHPE,StringLiteral_18003/*"empty_consumable"*/,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03411534;
    bVar1 = System_String__op_Equality
                      ((__this->fields).HBJEOMFBMMC,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar4 == (PlayerData_o *)0x0) goto LAB_03411834;
      PlayerData__BNKOEFAHHIP(pEVar4,CJNHFNHJHPE,true,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Equality
                        ((__this->fields).HBJEOMFBMMC,StringLiteral_10045/*"POTION"*/,(MethodInfo *)0x0);
      if (bVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar4 == (PlayerData_o *)0x0) goto LAB_03411834;
        PlayerData__HOOFGFHMIAB(pEVar4,CJNHFNHJHPE,true,(MethodInfo *)0x0);
      }
      else {
        bVar1 = System_String__op_Equality
                          ((__this->fields).HBJEOMFBMMC,StringLiteral_6981/*"HORN"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar4 == (PlayerData_o *)0x0) goto LAB_03411834;
          PlayerData__JFFOFHJAFGH(pEVar4,CJNHFNHJHPE,true,(MethodInfo *)0x0);
        }
      }
    }
    pNVar3 = (__this->fields)._descLbl;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03411834;
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality
                      ((__this->fields).HBJEOMFBMMC,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = (__this->fields)._descLbl;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03411834;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._descLbl;
      if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = LPGPNBGHDBD__DMBEBNELNNC(CJNHFNHJHPE,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_15847/*"^lblDamage^ "*/,pSVar5,(MethodInfo *)0x0);
      if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03411834;
LAB_03411790:
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,pSVar5,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Equality
                        ((__this->fields).HBJEOMFBMMC,StringLiteral_10045/*"POTION"*/,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._descLbl;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03411834;
      if (bVar1) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._descLbl;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (((__this_01 == (RaidConfig_o *)0x0) ||
            (pJVar6 = RaidConfig__FPPDGOEOJCH(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0),
            pJVar6 == (RaidConfig_HJLEKMDIDPO_o *)0x0)) ||
           (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) goto LAB_03411834;
        pSVar5 = (pJVar6->fields).BPCADJLKKGA;
        goto LAB_03411790;
      }
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar4 == (PlayerData_o *)0x0) goto LAB_03411834;
    DFIBGGDJPLM = PlayerData__OHCGFHJNEGO(pEVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if ((Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
      method_00 = extraout_x1_00;
    }
    HCJEJCBNDHC = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ONFELBEANOD(CJNHFNHJHPE,method_00);
    if (HCJEJCBNDHC != (HOOAAGABMBL_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__MPMLPHHDCFM
                (__this,PBPPGACOCOF,HCJEJCBNDHC,DFIBGGDJPLM,CJNHFNHJHPE,in_x5);
      return;
    }
    pNVar3 = (Nekki_SF2_GUI_LabelAlias_o *)(__this->fields)._consumableButton;
  }
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    return;
  }
LAB_03411834:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(string MCJKMCKELIN)  [RVA 0x3311A78]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$Init @ RVA 0x3311A78

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__Init
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,System_String_o *MCJKMCKELIN,
               MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  System_String_o *pSVar7;
  RaidConfig_o *pJVar8;
  RaidConfig_HJLEKMDIDPO_o *pJVar9;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar11;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar12;
  System_Action_BaseScrollItem__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar13;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar14;
  Il2CppObject *pIVar15;
  PBAKFOBIHEG_o *pPVar16;
  System_Collections_IEnumerator_o *pSVar17;
  VirtualInvokeData *pVVar18;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar19;
  MethodInfo *in_x3;
  LabelButton_o *pLVar20;
  RaidConfig_NOPCEDPNNKO_o *pJVar21;
  RaidConfig_HJLEKMDIDPO_array *pJVar22;
  SFButton_o *pSVar23;
  long lVar24;
  Roster_o *pAVar25;
  LPAPAMPGDFN_o *pLVar26;
  PBAKFOBIHEG_c *pPVar27;
  ulong uVar28;
  int32_t *piVar29;
  System_Collections_IEnumerator_o **ppSVar30;
  UnityEngine_Events_UnityEvent_o *pUVar31;
  Nekki_SF2_GUI_LabelAlias_o *pNVar32;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *pSVar33;
  int iVar34;
  System_String_o *local_48;
  
  if ((DAT_045677b8 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_CFOMPMAKJCD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_DJNLICOAJGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_EAALEBDGAOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_EIDAKAPJKGH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_JAGDCEOECMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_OnScroll__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<RaidConfig_HJLEKMDIDPO>__);
    FUN_01bab630(&RaidConfig_HJLEKMDIDPO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10920/*"RaidMisc.arrow_dark_simple"*/);
    FUN_01bab630(&StringLiteral_17347/*"consumable"*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_10919/*"RaidMisc.arrow_active_simple"*/);
    DAT_045677b8 = 1;
  }
  local_48 = (System_String_o *)0x0;
  bVar4 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LOHIKLBCOOH
                    (__this,MCJKMCKELIN,&local_48,in_x3);
  if (!bVar4) {
    return;
  }
  pLVar20 = (__this->fields)._consumableButton;
  if (pLVar20 == (LabelButton_o *)0x0) goto LAB_034123c4;
  pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pLVar20->fields).super.super.super.m_OnClick;
  pUVar6 = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
  UnityEngine_Events_UnityAction___ctor();
  if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
  UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
  pLVar20 = (__this->fields)._specialButton;
  if (pLVar20 == (LabelButton_o *)0x0) goto LAB_034123c4;
  pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pLVar20->fields).super.super.super.m_OnClick;
  pUVar6 = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
  UnityEngine_Events_UnityAction___ctor();
  if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
  UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
  pNVar32 = (__this->fields)._text;
  pSVar7 = System_Int32__ToString((int)__this + 0x98,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat(StringLiteral_17347/*"consumable"*/,pSVar7,(MethodInfo *)0x0);
  if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034123c4;
  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar32,pSVar7,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar8 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar8 == (RaidConfig_o *)0x0) ||
      (pJVar21 = (pJVar8->fields).OFMMMBIIDAE, pJVar21 == (RaidConfig_NOPCEDPNNKO_o *)0x0)) ||
     (pSVar33 = (pJVar21->fields).GADHINPJDAF,
     pSVar33 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0))
  goto LAB_034123c4;
  if (0 < (pSVar33->fields)._size) {
    iVar34 = 0;
    do {
      pJVar9 = (RaidConfig_HJLEKMDIDPO_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar33,iVar34,
                          Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_get_Item__
                         );
      if (pJVar9 == (RaidConfig_HJLEKMDIDPO_o *)0x0) goto LAB_034123c4;
      bVar4 = System_String__op_Equality
                        ((pJVar9->fields).BGHFADDGPAD,(__this->fields).HBJEOMFBMMC,(MethodInfo *)0x0
                        );
      lVar24 = Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_Add__;
      if (bVar4) {
        __this_00 = (__this->fields).FHPLGHNOJGE;
        if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)
        goto LAB_034123c4;
        pJVar22 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pJVar22 == (RaidConfig_HJLEKMDIDPO_array *)0x0) goto LAB_034123c4;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pJVar22->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pJVar22->m_Items[(int)uVar2] = pJVar9;
          thunk_FUN_01c20e04(pJVar22->m_Items + (int)uVar2,pJVar9);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pJVar9,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar34 = iVar34 + 1;
    } while (iVar34 < (pSVar33->fields)._size);
  }
  bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).FHPLGHNOJGE,
                     Method_DJNBJHPDKDP_OBECCOPBADO<RaidConfig_HJLEKMDIDPO>__);
  pSVar23 = (__this->fields)._hintButton;
  (__this->fields).OCMNMHFIJCJ = bVar4;
  if ((pSVar23 == (SFButton_o *)0x0) ||
     (pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pSVar23,(MethodInfo *)0x0),
     pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034123c4;
  UnityEngine_GameObject__SetActive(pUVar10,(__this->fields).OCMNMHFIJCJ,(MethodInfo *)0x0);
  if ((__this->fields).OCMNMHFIJCJ == false) {
    pUVar10 = (__this->fields)._hintDescriptionRoot;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar10 = UnityEngine_GameObject__get_gameObject(pUVar10,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034123c4;
    UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
  }
  else {
    pSVar33 = (__this->fields).FHPLGHNOJGE;
    pJVar9 = (RaidConfig_HJLEKMDIDPO_o *)thunk_FUN_01bda818(RaidConfig_HJLEKMDIDPO_TypeInfo);
    RaidConfig_HJLEKMDIDPO___ctor(pJVar9,(MethodInfo *)0x0);
    lVar24 = Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_Add__;
    if (pSVar33 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)
    goto LAB_034123c4;
    pJVar22 = (pSVar33->fields)._items;
    (pSVar33->fields)._version = (pSVar33->fields)._version + 1;
    if (pJVar22 == (RaidConfig_HJLEKMDIDPO_array *)0x0) goto LAB_034123c4;
    uVar2 = (pSVar33->fields)._size;
    if (uVar2 < (uint)pJVar22->max_length) {
      (pSVar33->fields)._size = uVar2 + 1;
      pJVar22->m_Items[(int)uVar2] = pJVar9;
      thunk_FUN_01c20e04(pJVar22->m_Items + (int)uVar2,pJVar9);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar33,(Il2CppObject *)pJVar9,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
    }
    pUVar10 = (__this->fields)._hintRoot;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar10 = UnityEngine_GameObject__get_gameObject(pUVar10,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034123c4;
    UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
    pSVar23 = (__this->fields)._hintButton;
    if ((pSVar23 == (SFButton_o *)0x0) ||
       (pUVar11 = (pSVar23->fields).super.m_OnClick,
       pUVar11 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_034123c4;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar11,(MethodInfo *)0x0);
    pSVar23 = (__this->fields)._hintButton;
    if (pSVar23 == (SFButton_o *)0x0) goto LAB_034123c4;
    pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pSVar23->fields).super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
    UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
  }
  pNVar12 = (__this->fields)._scroll;
  if ((__this->fields).OCMNMHFIJCJ == false) {
    if (pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034123c4;
  }
  else {
    if (pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034123c4;
    *(undefined2 *)&(pNVar12->fields)._visibilityChecker = 0;
  }
  Nekki_SF2_GUI_SimpleScroll__Init(pNVar12,(MethodInfo *)0x0);
  pNVar12 = (__this->fields)._scroll;
  CJNHFNHJHPE = (System_Action_BaseScrollItem__o *)
                thunk_FUN_01bda818(System_Action<BaseScrollItem>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034123c4;
  Nekki_SF2_GUI_SimpleScroll__add_OnScroll(pNVar12,CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar12 = (__this->fields)._scroll;
  if ((pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
     (pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
     pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034123c4;
  UnityEngine_GameObject__SetActive(pUVar10,true,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OAIJOOFCOEK(__this,method_00);
  pNVar12 = (__this->fields)._scroll;
  if ((pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
     (lVar24 = *(long *)&(pNVar12->fields)._snapEase, lVar24 == 0)) goto LAB_034123c4;
  if (*(int *)(lVar24 + 0x18) < 2) {
LAB_03411fd8:
    iVar34 = 0;
LAB_03411fe4:
    pMVar19 = (MethodInfo *)0x8;
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar12,iVar34,0.0,8,(MethodInfo *)0x0);
  }
  else {
    bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(local_48,(MethodInfo *)0x0);
    if (bVar4) {
      pNVar12 = (__this->fields)._scroll;
      if (pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034123c4;
      goto LAB_03411fd8;
    }
    pMVar19 = (MethodInfo *)0x0;
    bVar4 = System_String__op_Equality
                      ((__this->fields).HBJEOMFBMMC,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0);
    if (bVar4) {
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
      pAVar25 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar25 == (Roster_o *)0x0) ||
         (pLVar26 = (pAVar25->fields).LMCDOMHENMC, pLVar26 == (LPAPAMPGDFN_o *)0x0))
      goto LAB_034123c4;
      if ((pLVar26->fields).AMIMEMOELHE != 0x32) goto LAB_034123b4;
      iVar5 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__MKECLNPFGHC(__this,local_48,pMVar19);
      pNVar12 = (__this->fields)._scroll;
      if ((pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
         (lVar24 = *(long *)&(pNVar12->fields)._snapEase, lVar24 == 0)) goto LAB_034123c4;
      iVar34 = *(int *)(lVar24 + 0x18);
      iVar3 = 0;
      if (iVar34 != 0) {
        iVar3 = iVar5 / iVar34;
      }
      iVar34 = iVar5 - iVar3 * iVar34;
      goto LAB_03411fe4;
    }
LAB_034123b4:
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CACDLMIOJNI(__this,local_48,pMVar19);
  }
  if ((__this->fields).OCMNMHFIJCJ == false) {
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK(__this,true,pMVar19);
    pNVar13 = (__this->fields)._nextConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              (pNVar13,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10920/*"RaidMisc.arrow_dark_simple"*/,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._nextConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
              (pNVar13,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10919/*"RaidMisc.arrow_active_simple"*/,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._nextConsumable;
    if ((pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) ||
       (pUVar11 = (pNVar13->fields).super.super.m_OnClick,
       pUVar11 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_034123c4;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar11,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._nextConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pNVar13->fields).super.super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
    UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._prevConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              (pNVar13,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10920/*"RaidMisc.arrow_dark_simple"*/,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._prevConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
              (pNVar13,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10919/*"RaidMisc.arrow_active_simple"*/,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._prevConsumable;
    if ((pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) ||
       (pUVar11 = (pNVar13->fields).super.super.m_OnClick,
       pUVar11 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_034123c4;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar11,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._prevConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pNVar13->fields).super.super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
    UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
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
    pAVar25 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar25 == (Roster_o *)0x0) ||
       (pLVar26 = (pAVar25->fields).LMCDOMHENMC, pLVar26 == (LPAPAMPGDFN_o *)0x0))
    goto LAB_034123c4;
    if ((pLVar26->fields).AMIMEMOELHE != 10) {
      pDVar14 = DG_Tweening_DOTweenModuleUI__DOFade
                          ((UnityEngine_UI_Image_o *)(__this->fields)._nextConsumableHighlight,1.0,
                           1.0,(MethodInfo *)0x0);
      pIVar15 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                          ((Il2CppObject *)pDVar14,3,
                           Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                          );
      DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                (pIVar15,8,1,
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
      pDVar14 = DG_Tweening_DOTweenModuleUI__DOFade
                          ((UnityEngine_UI_Image_o *)(__this->fields)._prevConsumableHighlight,1.0,
                           1.0,(MethodInfo *)0x0);
      pIVar15 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                          ((Il2CppObject *)pDVar14,3,
                           Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                          );
      DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                (pIVar15,8,1,
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    }
  }
  else {
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK(__this,false,pMVar19);
  }
  pNVar32 = (__this->fields)._descLbl;
  if ((pNVar32 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pNVar32,(MethodInfo *)0x0),
     pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar19 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__UpdateData(__this,false,pMVar19);
    pPVar16 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar17 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OEFGGDKMCPB(__this,method_01);
    if (pPVar16 != (PBAKFOBIHEG_o *)0x0) {
      pPVar27 = pPVar16->klass;
      uVar1._0_1_ = (pPVar27->_2).rank;
      uVar1._1_1_ = (pPVar27->_2).minimumAlignment;
      uVar28 = (ulong)uVar1;
      if (uVar28 != 0) {
        piVar29 = &((pPVar27->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar29 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar18 = pPVar27->vtable + *piVar29;
            goto LAB_034122b8;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      pVVar18 = (VirtualInvokeData *)FUN_01b81914(pPVar16,PBAKFOBIHEG_TypeInfo,0);
LAB_034122b8:
      pSVar17 = (System_Collections_IEnumerator_o *)
                (*pVVar18->methodPtr)(pPVar16,pSVar17,1,pVVar18->method);
      ppSVar30 = &(__this->fields).ALMLDADAHFC;
      *ppSVar30 = pSVar17;
      thunk_FUN_01c20e04(ppSVar30,pSVar17);
      return;
    }
  }
LAB_034123c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static HOOAAGABMBL ONFELBEANOD(string DKIFPHNBBBG)  [RVA 0x33104EC]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ONFELBEANOD @ RVA 0x33104EC

HOOAAGABMBL_o *
Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ONFELBEANOD
          (System_String_o *DKIFPHNBBBG,MethodInfo *method)

{
  Il2CppObject *IOOJAJAPMBM;
  bool bVar1;
  RaidConfig_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this;
  RaidConfig_FNILDHLJBBJ_o *pJVar3;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_00;
  Il2CppObject *pIVar4;
  FAIJGJCCKJC_o *__this_01;
  ulong uVar5;
  MethodInfo *extraout_x1;
  RaidConfig_NOPCEDPNNKO_o *pJVar6;
  FAIJGJCCKJC_o *pFVar7;
  int iVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045677b9 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    DAT_045677b9 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 != (RaidConfig_o *)0x0) {
    if ((pJVar2->fields).OFMMMBIIDAE == (RaidConfig_NOPCEDPNNKO_o *)0x0) {
      pFVar7 = (FAIJGJCCKJC_o *)0x0;
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (((pJVar2 == (RaidConfig_o *)0x0) ||
          (pJVar6 = (pJVar2->fields).OFMMMBIIDAE, pJVar6 == (RaidConfig_NOPCEDPNNKO_o *)0x0)) ||
         (__this = (pJVar6->fields).NPGALOBDIHL,
         __this == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0))
      goto LAB_03410740;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this,
                 Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_GetEnumerator__);
      iVar8 = -1;
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      pFVar7 = (FAIJGJCCKJC_o *)0x0;
LAB_03410620:
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_MoveNext__
                        );
      IOOJAJAPMBM = local_80.fields._current;
      if (bVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if ((RaidConfig_ENBCJNLAHAC_o *)IOOJAJAPMBM == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pJVar2 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pJVar3 = RaidConfig__OJOIAONADNG
                           (pJVar2,((RaidConfig_ENBCJNLAHAC_Fields *)((long)IOOJAJAPMBM + 0x10))->
                                   LEJBNEIJJIF,(MethodInfo *)0x0);
        if ((pJVar3 != (RaidConfig_FNILDHLJBBJ_o *)0x0) && ((pJVar3->fields).HNGIBIJJKAP != false))
        {
          __this_00 = (pJVar3->fields).GFBNJPMOEKD;
          if (__this_00 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = System_String__op_Inequality
                            ((System_String_o *)pIVar4[1].klass,DKIFPHNBBBG,(MethodInfo *)0x0);
          if ((!bVar1) && ((iVar8 < 0 || (*(int *)&pIVar4[1].monitor < iVar8)))) {
            __this_01 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
            FAIJGJCCKJC___ctor(__this_01,(RaidConfig_ENBCJNLAHAC_o *)IOOJAJAPMBM,(MethodInfo *)0x0)
            ;
            if (__this_01 == (FAIJGJCCKJC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = FAIJGJCCKJC__KDBOPDDCNID(__this_01,(MethodInfo *)0x0);
            if (bVar1) {
              uVar5 = (*(__this_01->klass->vtable)._4_OIEONLNFHKC.methodPtr)
                                (__this_01,(__this_01->klass->vtable)._4_OIEONLNFHKC.method);
              if ((uVar5 & 1) == 0) goto LAB_03410620;
            }
            iVar8 = *(int *)&pIVar4[1].monitor;
            pFVar7 = __this_01;
          }
        }
        goto LAB_03410620;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_Dispose__
                );
    }
    return (HOOAAGABMBL_o *)pFVar7;
  }
LAB_03410740:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollForward(bool LODKPINFHCO)  [RVA 0x33107E8]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ScrollForward @ RVA 0x33107E8

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ScrollForward
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,bool LODKPINFHCO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBBMPJKOINK(__this,1,method);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK(__this,false,method);
  if (LODKPINFHCO) {
    EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void EAALEBDGAOE()  [RVA 0x3312434]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$EAALEBDGAOE @ RVA 0x3312434

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__EAALEBDGAOE
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_GameObject_o *pUVar3;
  PBAKFOBIHEG_o *pPVar4;
  VirtualInvokeData *pVVar5;
  undefined8 uVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  System_Collections_IEnumerator_o *pSVar11;
  float fVar12;
  
  if ((DAT_045677ba & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_PBNBBJPDHGK__);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045677ba = 1;
  }
  pUVar3 = (__this->fields)._hintRoot;
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar10 = &(__this->fields).JJNJMJMBOLN;
    pSVar11 = *ppSVar10;
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar7 = pPVar4->klass;
      uVar1._0_1_ = (pPVar7->_2).rank;
      uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar5 = pPVar7->vtable + (*piVar9 + 1);
            goto LAB_0341253c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,1);
LAB_0341253c:
      (*pVVar5->methodPtr)(pPVar4,pSVar11,pVVar5->method);
      pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar6 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
        pPVar7 = pPVar4->klass;
        fVar12 = DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
        uVar2._0_1_ = (pPVar7->_2).rank;
        uVar2._1_1_ = (pPVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar2;
        if (uVar8 != 0) {
          piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar5 = pPVar7->vtable + (*piVar9 + 2);
              goto LAB_03412618;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_03412618:
        pSVar11 = (System_Collections_IEnumerator_o *)
                  (*pVVar5->methodPtr)((ulong)(uint)fVar12,pPVar4,uVar6,pVVar5->method);
        *ppSVar10 = pSVar11;
        thunk_FUN_01c20e04(ppSVar10,pSVar11);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LBBMPJKOINK(int MJBMLNKAPGC)  [RVA 0x3311308]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LBBMPJKOINK @ RVA 0x3311308

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBBMPJKOINK
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,int32_t MJBMLNKAPGC,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems(__this_00,MJBMLNKAPGC,0.35,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator OEFGGDKMCPB()  [RVA 0x33123C8]
// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$OEFGGDKMCPB @ RVA 0x33123C8

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OEFGGDKMCPB
          (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045677bb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_LAICHCLEKGJ_TypeInfo);
    DAT_045677bb = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_LAICHCLEKGJ_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

