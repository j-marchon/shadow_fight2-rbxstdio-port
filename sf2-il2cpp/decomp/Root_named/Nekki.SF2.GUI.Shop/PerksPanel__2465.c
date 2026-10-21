// TypeDefIndex 2465
// Namespace: Nekki.SF2.GUI.Shop
// public class PerksPanel : MonoBehaviour
// Fields:
//   protected Vector2 _HintOffset; // 0x20
//   protected string _Atlas; // 0x28
//   protected GameObject _PerkPrefab; // 0x30
//   protected PerksPanel.DCBCPMKGJEA _OnPerkHintShowed; // 0x38
//   private readonly List<PerkUI> LLMOAIMNMHM; // 0x40
//   private RectTransform AOBAKMPHNKF; // 0x48

// ===== public void ShowPerkHintByIndex(int JJMCKHDALCF, bool DBKMEBGOHLP = False, bool LCPACBDHJCH = False)  [RVA 0x336F000]
// Nekki.SF2.GUI.Shop.PerksPanel$$ShowPerkHintByIndex @ RVA 0x336F000

void Nekki_SF2_GUI_Shop_PerksPanel__ShowPerkHintByIndex
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,int32_t JJMCKHDALCF,bool DBKMEBGOHLP,
               bool LCPACBDHJCH,MethodInfo *method)

{
  int32_t index;
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_PerkUI__o *__this_00;
  Nekki_SF2_GUI_Common_PerkUI_o *FLLFOOBLPLJ;
  
  if ((DAT_04567b08 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Item__);
    DAT_04567b08 = 1;
  }
  __this_00 = (__this->fields).LLMOAIMNMHM;
  if (__this_00 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 != 0) {
      iVar2 = iVar1 + -1;
      if (JJMCKHDALCF <= iVar2) {
        iVar2 = JJMCKHDALCF;
      }
      index = 0;
      if (-1 < JJMCKHDALCF) {
        index = iVar2;
      }
      FLLFOOBLPLJ = (Nekki_SF2_GUI_Common_PerkUI_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<PerkUI>_get_Item__);
      Nekki_SF2_GUI_Shop_PerksPanel__ShowPerkHint(__this,FLLFOOBLPLJ,DBKMEBGOHLP,LCPACBDHJCH,method)
      ;
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x336F104]
// Nekki.SF2.GUI.Shop.PerksPanel$$OnDestroy @ RVA 0x336F104

void Nekki_SF2_GUI_Shop_PerksPanel__OnDestroy
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0346f10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._6_Clear.methodPtr)(__this,(__this->klass->vtable)._6_Clear.method);
  return;
}


// ===== protected void AMKNLFPFLPK(PerkInfoItem CDEABOAKDEJ, GameObject OKOHDENADGD, bool DBKMEBGOHLP = False, bool LCPACBDHJCH = False)  [RVA 0x336F110]
// Nekki.SF2.GUI.Shop.PerksPanel$$AMKNLFPFLPK @ RVA 0x336F110

void Nekki_SF2_GUI_Shop_PerksPanel__AMKNLFPFLPK
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,PerkInfoItem_o *CDEABOAKDEJ,
               UnityEngine_GameObject_o *OKOHDENADGD,bool DBKMEBGOHLP,bool LCPACBDHJCH,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  KBCOFHAJOCK_o *__this_00;
  MMDPHPGAGAP_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  CLMJPODNPKB_o *pCVar4;
  VirtualInvokeData *pVVar5;
  Item_o *pDVar6;
  UnityEngine_Vector2_Fields UVar7;
  CLMJPODNPKB_c *pCVar8;
  UnityEngine_Events_UnityEvent_bool__bool__o *__this_03;
  ulong uVar9;
  int32_t *piVar10;
  UnityEngine_GameObject_o **ppUVar11;
  UnityEngine_Vector3_o UVar12;
  
  if ((DAT_04567b09 & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    FUN_01bab630(&MMDPHPGAGAP_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool,_bool>_Invoke__);
    DAT_04567b09 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar6 != (Item_o *)0x0) &&
     (__this_00 = (pDVar6->fields)._GMODBKFPHPN_k__BackingField, __this_00 != (KBCOFHAJOCK_o *)0x0))
  {
    bVar2 = KBCOFHAJOCK__CPKKHCAIGLN(__this_00,CDEABOAKDEJ,(MethodInfo *)0x0);
    if (!bVar2) {
      DialogsOpener__CMMCCNHIIOP(CDEABOAKDEJ,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (MMDPHPGAGAP_o *)thunk_FUN_01bda818(MMDPHPGAGAP_TypeInfo);
    MMDPHPGAGAP___ctor(__this_01,(MethodInfo *)0x0);
    if (((__this_01 != (MMDPHPGAGAP_o *)0x0) &&
        (MMDPHPGAGAP__CJEEDJHKDBE(__this_01,CDEABOAKDEJ,(MethodInfo *)0x0),
        OKOHDENADGD != (UnityEngine_GameObject_o *)0x0)) &&
       (__this_02 = UnityEngine_GameObject__get_transform(OKOHDENADGD,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Transform_o *)0x0)) {
      UVar12 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      (__this_01->fields).NMFDFHKAIHG.fields.x = UVar12.fields.x;
      (__this_01->fields).NMFDFHKAIHG.fields.y = UVar12.fields.y;
      UVar7 = (__this->fields)._HintOffset.fields;
      ppUVar11 = &(__this_01->fields).LLMLOCGKBHH;
      *ppUVar11 = OKOHDENADGD;
      (__this_01->fields).BOICIIOEOKN.fields = UVar7;
      thunk_FUN_01c20e04(UVar12.fields.x,UVar12.fields.y,UVar12.fields.z,ppUVar11,OKOHDENADGD);
      (__this_01->fields).HDNPGLLCNEF = DBKMEBGOHLP;
      pCVar4 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
      if (pCVar4 != (CLMJPODNPKB_o *)0x0) {
        pCVar8 = pCVar4->klass;
        uVar1._0_1_ = (pCVar8->_2).rank;
        uVar1._1_1_ = (pCVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pCVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
              pVVar5 = pCVar8->vtable + (*piVar10 + 3);
              goto LAB_0346f2e0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar4,CLMJPODNPKB_TypeInfo,3);
LAB_0346f2e0:
        bVar3 = (*pVVar5->methodPtr)(pCVar4,__this_01,pVVar5->method);
        __this_03 = (UnityEngine_Events_UnityEvent_bool__bool__o *)
                    (__this->fields)._OnPerkHintShowed;
        if (__this_03 != (UnityEngine_Events_UnityEvent_bool__bool__o *)0x0) {
          UnityEngine_Events_UnityEvent<bool,_bool>__Invoke
                    (__this_03,(bool)(bVar3 & 1),LCPACBDHJCH,
                     Method_UnityEngine_Events_UnityEvent<bool,_bool>_Invoke__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void SetPerks(List<PerkInfoItem> BJAHLFLBNDJ, HOOAAGABMBL IHGFKLOLPOK)  [RVA 0x336F328]
// Nekki.SF2.GUI.Shop.PerksPanel$$SetPerks @ RVA 0x336F328

void Nekki_SF2_GUI_Shop_PerksPanel__SetPerks
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,
               System_Collections_Generic_List_HEFOANCOHDC__o *BJAHLFLBNDJ,
               HOOAAGABMBL_o *IHGFKLOLPOK,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t EBDDELGICGB;
  System_Collections_Generic_List_object__o *__this_00;
  System_Comparison_HEFOANCOHDC__o **ppSVar3;
  System_Xml_XmlDocument_o *__this_01;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_02;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *__this_03;
  System_Xml_XmlAttribute_o *pSVar5;
  DEKKGJNMFEB_o *__this_04;
  Roster_o *__this_05;
  System_String_o *pSVar6;
  System_Comparison_HEFOANCOHDC__o *comparison;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  int32_t local_84;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567b0a & 1) == 0) {
    FUN_01bab630(&System_Comparison<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_PerksPanel_<>c_KEGJNHDEKNM__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    FUN_01bab630(&StringLiteral_3114/*"Aspect"*/);
    DAT_04567b0a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_84 = 0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  (*(__this->klass->vtable)._6_Clear.methodPtr)(__this,(__this->klass->vtable)._6_Clear.method);
  if ((BJAHLFLBNDJ == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) ||
     ((BJAHLFLBNDJ->fields)._size == 0)) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)BJAHLFLBNDJ,
             Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
  if ((Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  comparison = Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo->static_fields->__9__17_0;
  if (comparison == (System_Comparison_HEFOANCOHDC__o *)0x0) {
    if ((Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = (System_Comparison_HEFOANCOHDC__o *)
                 thunk_FUN_01bda818(System_Comparison<PerkInfoItem>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar3 = &Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo->static_fields->__9__17_0;
    *ppSVar3 = comparison;
    thunk_FUN_01c20e04(ppSVar3,comparison);
  }
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              (__this_00,(System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<PerkInfoItem>_Sort__);
    __this_01 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
    System_Xml_XmlDocument___ctor(__this_01,(MethodInfo *)0x0);
    AHDGNOJPPIB = EIABCPKDEBD__KPODFFHOHGK(__this_01,StringLiteral_5703/*"Enchantments"*/,(MethodInfo *)0x0);
    if ((IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) &&
       (__this_02 = (IHGFKLOLPOK->fields)._LCJBEIKDDNA_k__BackingField,
       __this_02 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while( true ) {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                            );
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
            HOOAAGABMBL__EOAMPKBBJPL(IHGFKLOLPOK,AHDGNOJPPIB,(MethodInfo *)0x0);
            HOOAAGABMBL__LOPGLHCEBDF(IHGFKLOLPOK,AHDGNOJPPIB,(MethodInfo *)0x0);
            uVar1 = (__this_00->fields)._size;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_a0,__this_00,
                       Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
            while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_a0,
                                      Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                                     ), bVar2) {
              (*(__this->klass->vtable)._5_JJPEDCEMMID.methodPtr)
                        (__this,local_a0.fields._current,(ulong)uVar1,
                         (__this->klass->vtable)._5_JJPEDCEMMID.method);
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
            return;
          }
          if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (local_80.fields._current[2].monitor == (void *)0x0);
        if (__this_01 == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        plVar4 = (long *)(*(__this_01->klass->vtable)._79_ImportNode.methodPtr)
                                   (__this_01,local_80.fields._current[2].monitor,1,
                                    (__this_01->klass->vtable)._79_ImportNode.method);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) break;
        (*(AHDGNOJPPIB->klass->vtable)._27_AppendChild.methodPtr)
                  (AHDGNOJPPIB,plVar4,(AHDGNOJPPIB->klass->vtable)._27_AppendChild.method);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                   (plVar4,StringLiteral_11876/*"Set"*/,*(undefined8 *)(*plVar4 + 0x470));
        if (plVar4 != (long *)0x0) {
          __this_03 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
          if (__this_03 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this_03,StringLiteral_3114/*"Aspect"*/,(MethodInfo *)0x0);
          if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
            if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_04 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
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
            __this_05 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (__this_05 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            EBDDELGICGB = Roster__EOEAKGGDBFH(__this_05,(MethodInfo *)0x0);
            if (__this_04 == (DEKKGJNMFEB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            local_84 = DEKKGJNMFEB__HNBCOIJFCCA(__this_04,EBDDELGICGB,(MethodInfo *)0x0);
            pSVar6 = System_Int32__ToString((int32_t)&local_84,(MethodInfo *)0x0);
            (*(pSVar5->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar5,pSVar6,(pSVar5->klass->vtable)._10_set_Value.method);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IReadOnlyList<PerkUI> get_Perks()  [RVA 0x336F93C]
// Nekki.SF2.GUI.Shop.PerksPanel$$get_Perks @ RVA 0x336F93C

System_Collections_Generic_IReadOnlyList_PerkUI__o *
Nekki_SF2_GUI_Shop_PerksPanel__get_Perks(Nekki_SF2_GUI_Shop_PerksPanel_o *__this,MethodInfo *method)

{
                    /* try { // try from 0346f93c to 0356f94b has its CatchHandler @ 0346f980 */
  return (System_Collections_Generic_IReadOnlyList_PerkUI__o *)(__this->fields).LLMOAIMNMHM;
}


// ===== public bool IsPerkHintShowed(PerkUI FLLFOOBLPLJ)  [RVA 0x336F944]
// Nekki.SF2.GUI.Shop.PerksPanel$$IsPerkHintShowed @ RVA 0x336F944

bool Nekki_SF2_GUI_Shop_PerksPanel__IsPerkHintShowed
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,Nekki_SF2_GUI_Common_PerkUI_o *FLLFOOBLPLJ,
               MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  CLMJPODNPKB_o *pCVar3;
  UnityEngine_GameObject_o *pUVar4;
  VirtualInvokeData *pVVar5;
  CLMJPODNPKB_c *pCVar6;
  ulong uVar7;
  int32_t *piVar8;
  
                    /* try { // try from 0346f94c to 0356f96f has its CatchHandler @ 0346f840 */
  if ((DAT_04567b0b & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_04567b0b = 1;
  }
                    /* try { // try from 0346f970 to 0356f973 has its CatchHandler @ 0346f97c */
                    /* try { // try from 0346f974 to 0356f99f has its CatchHandler @ 0346f840 */
  pCVar3 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f920 with catch @ 0346f978
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f970 with catch @ 0346f97c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f93c with catch @ 0346f980
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f924 with catch @ 0346f984
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f904 with catch @ 0346f988
                        */
  if ((FLLFOOBLPLJ == (Nekki_SF2_GUI_Common_PerkUI_o *)0x0) ||
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)FLLFOOBLPLJ,(MethodInfo *)0x0),
     pCVar3 == (CLMJPODNPKB_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar6 = pCVar3->klass;
  uVar1._0_1_ = (pCVar6->_2).rank;
  uVar1._1_1_ = (pCVar6->_2).minimumAlignment;
                    /* try { // try from 0346f9a0 to 0356f9a3 has its CatchHandler @ 0346f9cc */
  uVar7 = (ulong)uVar1;
                    /* try { // try from 0346f9a4 to 0356f9db has its CatchHandler @ 0346f840 */
  if (uVar7 != 0) {
    piVar8 = &((pCVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
                    /* try { // try from 0346f9dc to 0356f9e3 has its CatchHandler @ 0346f9f8 */
                    /* try { // try from 0346f9e4 to 0356f9ef has its CatchHandler @ 0346f840 */
        pVVar5 = pCVar6->vtable + (*piVar8 + 1);
        goto LAB_0346f9ec;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* catch() { ... } // from try @ 0346f9a0 with catch @ 0346f9cc */
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar3,CLMJPODNPKB_TypeInfo,1);
LAB_0346f9ec:
                    /* try { // try from 0346f9f0 to 0356f9f7 has its CatchHandler @ 0346f9f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0346f9dc with catch @ 0346f9f8
                       catch(type#2 @ 00000000) { ... } // from try @ 0346f9f0 with catch @ 0346f9f8
                        */
                    /* try { // try from 0346f9fc to 0356fef7 has its CatchHandler @ 0346f9fc
                       catch() { ... } // from try @ 0346f9fc with catch @ 0346f9fc
                       catch() { ... } // from try @ 0346ff40 with catch @ 0346f9fc
                       catch() { ... } // from try @ 0346ffc8 with catch @ 0346f9fc
                       catch() { ... } // from try @ 03470008 with catch @ 0346f9fc
                       catch() { ... } // from try @ 03470038 with catch @ 0346f9fc */
                    /* WARNING: Could not recover jumptable at 0x0346fa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar5->methodPtr)(pCVar3,pUVar4,pVVar5->method);
  return (bool)uVar2;
}


// ===== protected virtual void JJPEDCEMMID(PerkInfoItem EIPPAPOBPMI, int KDCFCALHEMN)  [RVA 0x336FA08]
// Nekki.SF2.GUI.Shop.PerksPanel$$JJPEDCEMMID @ RVA 0x336FA08

void Nekki_SF2_GUI_Shop_PerksPanel__JJPEDCEMMID
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,PerkInfoItem_o *EIPPAPOBPMI,
               int32_t KDCFCALHEMN,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Il2CppObject *__this_00;
  OGNCMFBMBMB_o *__this_01;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_o *call;
  System_Collections_Generic_List_PerkUI__o *__this_04;
  Nekki_SF2_GUI_Common_PerkUI_o *item;
  long lVar4;
  Nekki_SF2_GUI_Common_PerkUI_array *pNVar5;
  UnityEngine_Events_UnityEvent_o *__this_05;
  void **ppvVar6;
  UnityEngine_Object_o *exists;
  
  if ((DAT_04567b0c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_PerksPanel_AABMACMOENA_NLJNHDBAGDL__,EIPPAPOBPMI,
                 KDCFCALHEMN);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_PerksPanel_AABMACMOENA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_Add__);
    FUN_01bab630(&Method_OGNCMFBMBMB_KNMENIBLFGF<PerkUI>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567b0c = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_PerksPanel_AABMACMOENA_TypeInfo)
  ;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (OGNCMFBMBMB_o *)0x0) {
      pIVar3 = OGNCMFBMBMB__KNMENIBLFGF<object>
                         (__this_01,(__this->fields)._PerkPrefab,
                          Method_OGNCMFBMBMB_KNMENIBLFGF<PerkUI>__);
      ppvVar6 = &__this_00[1].monitor;
      *ppvVar6 = pIVar3;
      thunk_FUN_01c20e04(ppvVar6,pIVar3);
      exists = *ppvVar6;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if (*ppvVar6 != (UnityEngine_Component_o *)0x0) {
        __this_02 = UnityEngine_Component__get_transform(*ppvVar6,(MethodInfo *)0x0);
        __this_03 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((__this_03 != (UnityEngine_GameObject_o *)0x0) &&
           (parent = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(__this_02,parent,false,(MethodInfo *)0x0);
          if (*ppvVar6 != (void *)0x0) {
            *(System_String_o **)((long)*ppvVar6 + 0x30) = (__this->fields)._Atlas;
            thunk_FUN_01c20e04();
            if (*ppvVar6 != (Nekki_SF2_GUI_Common_PerkUI_o *)0x0) {
              Nekki_SF2_GUI_Common_PerkUI__set_Perk(*ppvVar6,EIPPAPOBPMI,(MethodInfo *)0x0);
              if ((*ppvVar6 != (void *)0x0) &&
                 (lVar4 = *(long *)((long)*ppvVar6 + 0x28), lVar4 != 0)) {
                __this_05 = *(UnityEngine_Events_UnityEvent_o **)(lVar4 + 0x100);
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
                  lVar4 = Method_System_Collections_Generic_List<PerkUI>_Add__;
                  __this_04 = (__this->fields).LLMOAIMNMHM;
                  if (__this_04 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
                    item = *ppvVar6;
                    pNVar5 = (__this_04->fields)._items;
                    (__this_04->fields)._version = (__this_04->fields)._version + 1;
                    if (pNVar5 != (Nekki_SF2_GUI_Common_PerkUI_array *)0x0) {
                      uVar1 = (__this_04->fields)._size;
                      if (uVar1 < (uint)pNVar5->max_length) {
                        (__this_04->fields)._size = uVar1 + 1;
                        pNVar5->m_Items[(int)uVar1] = item;
                        thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1);
                        return;
                      }
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_04,
                                 (Il2CppObject *)item,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector2 get_HintOffset()  [RVA 0x336FC60]
// Nekki.SF2.GUI.Shop.PerksPanel$$get_HintOffset @ RVA 0x336FC60

UnityEngine_Vector2_o
Nekki_SF2_GUI_Shop_PerksPanel__get_HintOffset
          (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._HintOffset.fields;
}


// ===== public void .ctor()  [RVA 0x336FC68]
// Nekki.SF2.GUI.Shop.PerksPanel$$.ctor @ RVA 0x336FC68

void Nekki_SF2_GUI_Shop_PerksPanel___ctor
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o *__this_00;
  Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o **ppNVar1;
  System_Collections_Generic_List_PerkUI__o *__this_01;
  System_Collections_Generic_List_PerkUI__o **ppSVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04567b0d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkUI>_TypeInfo);
    FUN_01bab630(&StringLiteral_5704/*"Enchantments."*/);
    DAT_04567b0d = 1;
  }
  (__this->fields)._HintOffset.fields = (UnityEngine_Vector2_Fields)0xc1c8000000000000;
  (__this->fields)._Atlas = StringLiteral_5704/*"Enchantments."*/;
  thunk_FUN_01c20e04();
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_TypeInfo);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnPerkHintShowed;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_PerkUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkUI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<PerkUI>__ctor__);
  ppSVar2 = &(__this->fields).LLMOAIMNMHM;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public PerksPanel.DCBCPMKGJEA get_OnPerkHintShowed()  [RVA 0x336FDA4]
// Nekki.SF2.GUI.Shop.PerksPanel$$get_OnPerkHintShowed @ RVA 0x336FDA4

Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o *
Nekki_SF2_GUI_Shop_PerksPanel__get_OnPerkHintShowed
          (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnPerkHintShowed;
}


// ===== public virtual void Clear()  [RVA 0x336FDAC]
// Nekki.SF2.GUI.Shop.PerksPanel$$Clear @ RVA 0x336FDAC

void Nekki_SF2_GUI_Shop_PerksPanel__Clear
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *ALMGONACBKC;
  bool bVar1;
  System_Collections_Generic_List_PerkUI__o *pSVar2;
  OGNCMFBMBMB_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567b0e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PerkUI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
    DAT_04567b0e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).LLMOAIMNMHM,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PerkUI>__);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).LLMOAIMNMHM;
  if (pSVar2 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__),
          ALMGONACBKC = local_48.fields._current, bVar1) {
      __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 == (OGNCMFBMBMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0346fef8 to 0356feff has its CatchHandler @ 0346ffe8 */
        FUN_01bab8c8();
      }
      OGNCMFBMBMB__LEAPFADCELA<object>
                (__this_00,ALMGONACBKC,Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
    pSVar2 = (__this->fields).LLMOAIMNMHM;
    if (pSVar2 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (length < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowPerkHint(PerkUI FLLFOOBLPLJ, bool DBKMEBGOHLP = False, bool LCPACBDHJCH = False)  [RVA 0x336F0B0]
// Nekki.SF2.GUI.Shop.PerksPanel$$ShowPerkHint @ RVA 0x336F0B0

void Nekki_SF2_GUI_Shop_PerksPanel__ShowPerkHint
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,Nekki_SF2_GUI_Common_PerkUI_o *FLLFOOBLPLJ,
               bool DBKMEBGOHLP,bool LCPACBDHJCH,MethodInfo *method)

{
  UnityEngine_GameObject_o *OKOHDENADGD;
  MethodInfo *in_x5;
  PerkInfoItem_o *CDEABOAKDEJ;
  
  if (FLLFOOBLPLJ != (Nekki_SF2_GUI_Common_PerkUI_o *)0x0) {
    CDEABOAKDEJ = (FLLFOOBLPLJ->fields).OFLJEENFLDG;
    OKOHDENADGD = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)FLLFOOBLPLJ,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_PerksPanel__AMKNLFPFLPK
              (__this,CDEABOAKDEJ,OKOHDENADGD,DBKMEBGOHLP,LCPACBDHJCH,in_x5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RectTransform get_RectTransform()  [RVA 0x336FF80]
// Nekki.SF2.GUI.Shop.PerksPanel$$get_RectTransform @ RVA 0x336FF80

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Shop_PerksPanel__get_RectTransform
          (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_04567b0f & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0346ffbc to 0356ffbf has its CatchHandler @ 0346ffe4 */
                    /* try { // try from 0346ffc0 to 0356ffc3 has its CatchHandler @ 0346ffe0 */
    DAT_04567b0f = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0346ffc4 to 0356ffc7 has its CatchHandler @ 0346ffdc */
  ppUVar2 = &(__this->fields).AOBAKMPHNKF;
                    /* try { // try from 0346ffc8 to 03570003 has its CatchHandler @ 0346f9fc */
  pUVar3 = *ppUVar2;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ff0c with catch @ 0346ffd4
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ff1c with catch @ 0346ffd8
                        */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ffc4 with catch @ 0346ffdc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ffc0 with catch @ 0346ffe0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ffbc with catch @ 0346ffe4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346fef8 with catch @ 0346ffe8
                        */
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ff28 with catch @ 0346ffec
                        */
  if (bVar1) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
                    /* try { // try from 03470004 to 03570007 has its CatchHandler @ 03470028 */
                    /* try { // try from 03470008 to 0357002f has its CatchHandler @ 0346f9fc */
    (__this->fields).AOBAKMPHNKF = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return *ppUVar2;
}

