// TypeDefIndex 1820
// Namespace: Nekki.SF2.GUI.Dialogs.ShowLoot
// public class LootCell : MonoBehaviour, IKIHIGCOLOF
// Fields:
//   private ResolutionImage _icon; // 0x20
//   private LabelAlias _text; // 0x28
//   private GameObject _perkIconPrefab; // 0x30
//   private Transform _perkIconHolder; // 0x38
//   private Vector2 _hintOffset; // 0x40
//   private readonly List<PerkUI> AHJLOHFIEGJ; // 0x48
//   private const float HPJLAJAJJKK = 1;
//   private const float KPJCIJKHFAM = 0.5;
//   private const string LLOCMHFCAMH = "Enchantments.";

// ===== private void AMKNLFPFLPK(PerkInfoItem EIKFGOCCOIE, GameObject LKMJPHDHCID, bool GPHFIAMCCJI = False, bool LHAADIKDNFO = False)  [RVA 0x321AB38]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$AMKNLFPFLPK @ RVA 0x321AB38

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__AMKNLFPFLPK
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,PerkInfoItem_o *EIKFGOCCOIE,
               UnityEngine_GameObject_o *LKMJPHDHCID,bool GPHFIAMCCJI,bool LHAADIKDNFO,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  KBCOFHAJOCK_o *__this_00;
  MMDPHPGAGAP_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  CLMJPODNPKB_o *pCVar3;
  VirtualInvokeData *pVVar4;
  Item_o *pDVar5;
  UnityEngine_Vector2_Fields UVar6;
  CLMJPODNPKB_c *pCVar7;
  ulong uVar8;
  int32_t *piVar9;
  UnityEngine_GameObject_o **ppUVar10;
  UnityEngine_Vector3_o UVar11;
  
  if ((DAT_04566eff & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    FUN_01bab630(&MMDPHPGAGAP_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566eff = 1;
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
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar5 != (Item_o *)0x0) &&
     (__this_00 = (pDVar5->fields)._GMODBKFPHPN_k__BackingField, __this_00 != (KBCOFHAJOCK_o *)0x0))
  {
    bVar2 = KBCOFHAJOCK__CPKKHCAIGLN(__this_00,EIKFGOCCOIE,(MethodInfo *)0x0);
    if (!bVar2) {
      DialogsOpener__CMMCCNHIIOP(EIKFGOCCOIE,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (MMDPHPGAGAP_o *)thunk_FUN_01bda818(MMDPHPGAGAP_TypeInfo);
    MMDPHPGAGAP___ctor(__this_01,(MethodInfo *)0x0);
    if (((__this_01 != (MMDPHPGAGAP_o *)0x0) &&
        (MMDPHPGAGAP__CJEEDJHKDBE(__this_01,EIKFGOCCOIE,(MethodInfo *)0x0),
        LKMJPHDHCID != (UnityEngine_GameObject_o *)0x0)) &&
       (__this_02 = UnityEngine_GameObject__get_transform(LKMJPHDHCID,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Transform_o *)0x0)) {
      UVar11 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      (__this_01->fields).NMFDFHKAIHG.fields.x = UVar11.fields.x;
      (__this_01->fields).NMFDFHKAIHG.fields.y = UVar11.fields.y;
      UVar6 = (__this->fields)._hintOffset.fields;
      ppUVar10 = &(__this_01->fields).LLMLOCGKBHH;
      *ppUVar10 = LKMJPHDHCID;
      (__this_01->fields).BOICIIOEOKN.fields = UVar6;
      thunk_FUN_01c20e04(UVar11.fields.x,UVar11.fields.y,UVar11.fields.z,ppUVar10,LKMJPHDHCID);
      (__this_01->fields).HDNPGLLCNEF = GPHFIAMCCJI;
      pCVar3 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
      if (pCVar3 != (CLMJPODNPKB_o *)0x0) {
        pCVar7 = pCVar3->klass;
        uVar1._0_1_ = (pCVar7->_2).rank;
        uVar1._1_1_ = (pCVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pCVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
              pVVar4 = pCVar7->vtable + (*piVar9 + 3);
              goto LAB_0331acf8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar3,CLMJPODNPKB_TypeInfo,3);
LAB_0331acf8:
                    /* WARNING: Could not recover jumptable at 0x0331ad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pCVar3,__this_01,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnReturnToPool()  [RVA 0x321AD1C]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$OnReturnToPool @ RVA 0x321AD1C

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__OnReturnToPool
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *ALMGONACBKC;
  bool bVar1;
  System_Collections_Generic_List_PerkUI__o *pSVar2;
  OGNCMFBMBMB_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o SStack_68;
  System_Collections_Generic_List_Enumerator_T__o SStack_50;
  
  if ((DAT_04566f05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Count__);
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
    DAT_04566f05 = 1;
  }
  SStack_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_50.fields._index = 0;
  SStack_50.fields._version = 0;
  SStack_50.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).AHJLOHFIEGJ;
  if (pSVar2 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
    if ((pSVar2->fields)._size != 0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&SStack_68,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
      SStack_50.fields._index = SStack_68.fields._index;
      SStack_50.fields._version = SStack_68.fields._version;
      SStack_50.fields._list = SStack_68.fields._list;
      SStack_50.fields._current = SStack_68.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&SStack_50,
                                Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__
                               ), ALMGONACBKC = SStack_50.fields._current, bVar1) {
        __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (OGNCMFBMBMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OGNCMFBMBMB__LEAPFADCELA<object>
                  (__this_00,ALMGONACBKC,Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&SStack_50,Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
      pSVar2 = (__this->fields).AHJLOHFIEGJ;
      if (pSVar2 == (System_Collections_Generic_List_PerkUI__o *)0x0) goto LAB_0331ae90;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
    __this_01 = (__this->fields)._perkIconHolder;
    if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0331ae90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BMGBHKLPKDE(IEnumerable<PerkInfoItem> GJBLBEALOBO)  [RVA 0x321AF14]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$BMGBHKLPKDE @ RVA 0x321AF14

/* WARNING: Removing unreachable block (ram,0x0331b138) */
/* WARNING: Removing unreachable block (ram,0x0331b190) */

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__BMGBHKLPKDE
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,
               System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *GJBLBEALOBO,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  PerkInfoItem_o *EIKFGOCCOIE;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_HEFOANCOHDC__c *pSVar5;
  long lVar6;
  System_Collections_Generic_List_PerkUI__o *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  
  method_00 = (MethodInfo *)GJBLBEALOBO;
  if ((DAT_04566f00 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Count__);
    DAT_04566f00 = 1;
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO(__this,method_00);
  if (GJBLBEALOBO == (System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *)0x0) {
    return;
  }
  pSVar5 = GJBLBEALOBO->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<PerkInfoItem>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar9;
        goto LAB_0331afd8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(GJBLBEALOBO);
LAB_0331afd8:
  plVar3 = (long *)(*pVVar2->methodPtr)(GJBLBEALOBO,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0331b048;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0331b048:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) break;
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_HEFOANCOHDC__c **)(piVar10 + -2) ==
            System_Collections_Generic_IEnumerator<PerkInfoItem>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0331b0a4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0331b0a4:
    EIKFGOCCOIE = (PerkInfoItem_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__CJJBDJHKDEO(__this,EIKFGOCCOIE,method);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0331b120;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0331b120:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  __this_00 = (__this->fields)._perkIconHolder;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).AHJLOHFIEGJ;
    if ((pSVar7 != (System_Collections_Generic_List_PerkUI__o *)0x0) &&
       (__this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,0 < (pSVar7->fields)._size,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CJJBDJHKDEO(PerkInfoItem EIKFGOCCOIE)  [RVA 0x321B254]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$CJJBDJHKDEO @ RVA 0x321B254

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__CJJBDJHKDEO
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,PerkInfoItem_o *EIKFGOCCOIE,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  OGNCMFBMBMB_o *__this_00;
  Il2CppClass *pIVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  System_Collections_Generic_List_PerkUI__o *__this_02;
  long lVar5;
  Nekki_SF2_GUI_Common_PerkUI_array *pNVar6;
  UnityEngine_Events_UnityEvent_o *__this_03;
  
  if ((DAT_04566f01 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_GLHOFGPDIKF_APCOHLGGEJK__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_GLHOFGPDIKF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_Add__);
    FUN_01bab630(&Method_OGNCMFBMBMB_KNMENIBLFGF<PerkUI>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_5704/*"Enchantments."*/);
    DAT_04566f01 = 1;
  }
  pIVar3 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_GLHOFGPDIKF_TypeInfo);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[1].monitor = __this;
    thunk_FUN_01c20e04(&pIVar3[1].monitor,__this);
    __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (OGNCMFBMBMB_o *)0x0) {
      pIVar4 = (Il2CppClass *)
               OGNCMFBMBMB__KNMENIBLFGF<object>
                         (__this_00,(__this->fields)._perkIconPrefab,
                          Method_OGNCMFBMBMB_KNMENIBLFGF<PerkUI>__);
      pIVar3 = pIVar3 + 1;
      pIVar3->klass = pIVar4;
      thunk_FUN_01c20e04(pIVar3,pIVar4);
      pIVar4 = pIVar3->klass;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pIVar4,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if ((pIVar3->klass != (Il2CppClass *)0x0) &&
         (__this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent
                  (__this_01,(__this->fields)._perkIconHolder,false,(MethodInfo *)0x0);
        if (pIVar3->klass != (Il2CppClass *)0x0) {
          (pIVar3->klass->_1).this_arg.data = StringLiteral_5704/*"Enchantments."*/;
          thunk_FUN_01c20e04();
          if (pIVar3->klass != (Il2CppClass *)0x0) {
            Nekki_SF2_GUI_Common_PerkUI__set_Perk
                      ((Nekki_SF2_GUI_Common_PerkUI_o *)pIVar3->klass,EIKFGOCCOIE,(MethodInfo *)0x0)
            ;
            if ((pIVar3->klass != (Il2CppClass *)0x0) &&
               (lVar5 = *(long *)&(pIVar3->klass->_1).byval_arg.bits, lVar5 != 0)) {
              __this_03 = *(UnityEngine_Events_UnityEvent_o **)(lVar5 + 0x100);
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
                lVar5 = Method_System_Collections_Generic_List<PerkUI>_Add__;
                __this_02 = (__this->fields).AHJLOHFIEGJ;
                if (__this_02 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
                  pIVar4 = pIVar3->klass;
                  pNVar6 = (__this_02->fields)._items;
                  (__this_02->fields)._version = (__this_02->fields)._version + 1;
                  if (pNVar6 != (Nekki_SF2_GUI_Common_PerkUI_array *)0x0) {
                    uVar1 = (__this_02->fields)._size;
                    if (uVar1 < (uint)pNVar6->max_length) {
                      (__this_02->fields)._size = uVar1 + 1;
                      pNVar6->m_Items[(int)uVar1] = (Nekki_SF2_GUI_Common_PerkUI_o *)pIVar4;
                      thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1);
                      return;
                    }
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_02,
                               (Il2CppObject *)pIVar4,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
  FUN_01bab8c8();
}


// ===== public void SetItem(HOOAAGABMBL IKKAMAMLIKA, int GNDOPGAILNK, IEnumerable<PerkInfoItem> GJBLBEALOBO)  [RVA 0x321B4A0]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$SetItem @ RVA 0x321B4A0

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetItem
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               int32_t GNDOPGAILNK,
               System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *GJBLBEALOBO,MethodInfo *method
               )

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *transform;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  HOOAAGABMBL_o *extraout_x1;
  HOOAAGABMBL_o *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  int32_t local_34;
  
  method_00 = IKKAMAMLIKA;
  if ((DAT_04566f02 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_22054/*"x {0}"*/);
    DAT_04566f02 = 1;
    method_00 = extraout_x1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO(__this,(MethodInfo *)method_00);
    pNVar1 = (__this->fields)._icon;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._text;
      if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pNVar1 = (__this->fields)._icon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar1,(IKKAMAMLIKA->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._icon;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(transform,1.0,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__BMGBHKLPKDE(__this,GJBLBEALOBO,method_01);
        pNVar4 = (__this->fields)._text;
        local_34 = GNDOPGAILNK;
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        pSVar2 = System_String__Format(StringLiteral_22054/*"x {0}"*/,arg0,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                    (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
          pNVar1 = (__this->fields)._icon;
          if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._text;
            if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
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


// ===== public void SetBonus(long GNDOPGAILNK)  [RVA 0x321B630]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$SetBonus @ RVA 0x321B630

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetBonus
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,int64_t GNDOPGAILNK,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *transform;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  int64_t local_38;
  
  method_00 = (MethodInfo *)GNDOPGAILNK;
  if ((DAT_04566f03 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&StringLiteral_22054/*"x {0}"*/);
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
    DAT_04566f03 = 1;
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO(__this,method_00);
  pNVar1 = (__this->fields)._icon;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,StringLiteral_9095/*"MiscSprites.ruby"*/,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._icon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalScale(transform,0.5,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._text;
      local_38 = GNDOPGAILNK;
      arg0 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_38);
      pSVar2 = System_String__Format(StringLiteral_22054/*"x {0}"*/,arg0,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                  (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
        pNVar1 = (__this->fields)._icon;
        if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._text;
          if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x321B76C]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$OnDestroy @ RVA 0x321B76C

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__OnDestroy
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *ALMGONACBKC;
  bool bVar1;
  System_Collections_Generic_List_PerkUI__o *pSVar2;
  OGNCMFBMBMB_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o SStack_68;
  System_Collections_Generic_List_Enumerator_T__o SStack_50;
  
  if ((DAT_04566f05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Count__);
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
    DAT_04566f05 = 1;
  }
  SStack_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_50.fields._index = 0;
  SStack_50.fields._version = 0;
  SStack_50.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).AHJLOHFIEGJ;
  if (pSVar2 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
    if ((pSVar2->fields)._size != 0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&SStack_68,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
      SStack_50.fields._index = SStack_68.fields._index;
      SStack_50.fields._version = SStack_68.fields._version;
      SStack_50.fields._list = SStack_68.fields._list;
      SStack_50.fields._current = SStack_68.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&SStack_50,
                                Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__
                               ), ALMGONACBKC = SStack_50.fields._current, bVar1) {
        __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (OGNCMFBMBMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OGNCMFBMBMB__LEAPFADCELA<object>
                  (__this_00,ALMGONACBKC,Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&SStack_50,Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
      pSVar2 = (__this->fields).AHJLOHFIEGJ;
      if (pSVar2 == (System_Collections_Generic_List_PerkUI__o *)0x0) goto LAB_0331ae90;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
    __this_01 = (__this->fields)._perkIconHolder;
    if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0331ae90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x321B770]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$.ctor @ RVA 0x321B770

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell___ctor
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PerkUI__o *__this_00;
  System_Collections_Generic_List_PerkUI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkUI>_TypeInfo);
    DAT_04566f04 = 1;
    method = extraout_x1;
  }
  (__this->fields)._hintOffset.fields = (UnityEngine_Vector2_Fields)0xc1c8000000000000;
  __this_00 = (System_Collections_Generic_List_PerkUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PerkUI>__ctor__);
  ppSVar1 = &(__this->fields).AHJLOHFIEGJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MBKCJEFAPMO()  [RVA 0x321AD20]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$MBKCJEFAPMO @ RVA 0x321AD20

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *ALMGONACBKC;
  bool bVar1;
  System_Collections_Generic_List_PerkUI__o *pSVar2;
  OGNCMFBMBMB_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566f05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Count__);
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
    DAT_04566f05 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).AHJLOHFIEGJ;
  if (pSVar2 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
    if ((pSVar2->fields)._size != 0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__
                               ), ALMGONACBKC = local_50.fields._current, bVar1) {
        __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (OGNCMFBMBMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OGNCMFBMBMB__LEAPFADCELA<object>
                  (__this_00,ALMGONACBKC,Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
      pSVar2 = (__this->fields).AHJLOHFIEGJ;
      if (pSVar2 == (System_Collections_Generic_List_PerkUI__o *)0x0) goto LAB_0331ae90;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
    __this_01 = (__this->fields)._perkIconHolder;
    if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0331ae90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private GameObject FHAMIBNCNHI()  [RVA 0x321B804]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$FHAMIBNCNHI @ RVA 0x321B804

UnityEngine_GameObject_o *
Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__FHAMIBNCNHI
          (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  return pUVar1;
}


// ===== public void SetCurrency(HBNENINHPGF OAOLCGAIILM, long GNDOPGAILNK)  [RVA 0x321B80C]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$SetCurrency @ RVA 0x321B80C

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetCurrency
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,HBNENINHPGF_o *OAOLCGAIILM,
               int64_t GNDOPGAILNK,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Transform_o *transform;
  Il2CppObject *arg0;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  int64_t local_38;
  
  method_00 = (MethodInfo *)OAOLCGAIILM;
  if ((DAT_04566f06 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&StringLiteral_22054/*"x {0}"*/);
    DAT_04566f06 = 1;
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO(__this,method_00);
  pNVar4 = (__this->fields)._icon;
  if (OAOLCGAIILM == (HBNENINHPGF_o *)0x0) {
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._text;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pSVar1 = OFFIONDOEPM__HHJFGJLPHCH
                       ((OAOLCGAIILM->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,pSVar1,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._icon;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(transform,0.5,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._text;
        local_38 = GNDOPGAILNK;
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_38);
        pSVar1 = System_String__Format(StringLiteral_22054/*"x {0}"*/,arg0,(MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,pSVar1,(pNVar3->klass->vtable)._75_set_text.method);
          pNVar4 = (__this->fields)._icon;
          if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            pNVar3 = (__this->fields)._text;
            if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
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


// ===== public void SetMoney(long GNDOPGAILNK)  [RVA 0x321B99C]
// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$SetMoney @ RVA 0x321B99C

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetMoney
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,int64_t GNDOPGAILNK,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *transform;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Roster_o *pAVar4;
  System_String_o **ppSVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  int64_t local_38;
  
  method_00 = (MethodInfo *)GNDOPGAILNK;
  if ((DAT_04566f07 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_18944/*"img_gold"*/);
    FUN_01bab630(&StringLiteral_22054/*"x {0}"*/);
    DAT_04566f07 = 1;
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO(__this,method_00);
  pNVar6 = (__this->fields)._icon;
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
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((pAVar4->fields).FAAJGHKHEBI,(MethodInfo *)0x0);
    if (bVar1) {
      ppSVar5 = (System_String_o **)&StringLiteral_18944/*"img_gold"*/;
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
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 == (Roster_o *)0x0) goto LAB_0331bba0;
      ppSVar5 = &(pAVar4->fields).FAAJGHKHEBI;
    }
    if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar6,*ppSVar5,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._icon;
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(transform,0.5,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._text;
        local_38 = GNDOPGAILNK;
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_38);
        pSVar2 = System_String__Format(StringLiteral_22054/*"x {0}"*/,arg0,(MethodInfo *)0x0);
        if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                    (pNVar7,pSVar2,(pNVar7->klass->vtable)._75_set_text.method);
          pNVar6 = (__this->fields)._icon;
          if ((pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            pNVar7 = (__this->fields)._text;
            if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0331bba0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

