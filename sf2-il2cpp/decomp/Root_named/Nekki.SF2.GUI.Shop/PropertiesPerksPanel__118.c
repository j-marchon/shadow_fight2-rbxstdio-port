// TypeDefIndex 118
// Namespace: Nekki.SF2.GUI.Shop
// public class PropertiesPerksPanel : PerksPanel
// Fields:
//   private const string JJFEPHHNHBO = "PropertiesPerksPanel";
//   private readonly List<ParameterScrollItem> HEHMAPDMHIG; // 0x50

// ===== protected override void JJPEDCEMMID(PerkInfoItem CDEABOAKDEJ, int KDCFCALHEMN)  [RVA 0x30110B8]
// Nekki.SF2.GUI.Shop.PropertiesPerksPanel$$JJPEDCEMMID @ RVA 0x30110B8

void Nekki_SF2_GUI_Shop_PropertiesPerksPanel__JJPEDCEMMID
               (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *__this,PerkInfoItem_o *CDEABOAKDEJ,
               int32_t KDCFCALHEMN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t CJNHFNHJHPE;
  int32_t NBHHBBOJJME;
  Il2CppObject *pIVar4;
  OGNCMFBMBMB_o *__this_00;
  Il2CppClass *pIVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *parent;
  System_String_o *NEJHIEOHMCF;
  Nekki_SF2_GUI_Common_TouchHandler_o *pNVar6;
  UnityEngine_Events_UnityAction_o *call;
  System_Collections_Generic_List_ParameterScrollItem__o *__this_03;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_array *pNVar7;
  float fVar8;
  UnityEngine_Events_UnityEvent_o *__this_04;
  void **ppvVar9;
  PerkInfoItem_o *EIKFGOCCOIE;
  
  if ((DAT_04565bab & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_Add__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_PropertiesPerksPanel_OCJHKJCJAIO_NLJNHDBAGDL__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_PropertiesPerksPanel_OCJHKJCJAIO_TypeInfo);
    FUN_01bab630(&Method_OGNCMFBMBMB_KNMENIBLFGF<ParameterScrollItem>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10529/*"PropertiesPerksPanel"*/);
    DAT_04565bab = 1;
  }
  pIVar4 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_PropertiesPerksPanel_OCJHKJCJAIO_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(pIVar4 + 1,__this);
    ppvVar9 = &pIVar4[1].monitor;
    *ppvVar9 = CDEABOAKDEJ;
    thunk_FUN_01c20e04(ppvVar9,CDEABOAKDEJ);
    __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (OGNCMFBMBMB_o *)0x0) {
      pIVar5 = (Il2CppClass *)
               OGNCMFBMBMB__KNMENIBLFGF<object>
                         (__this_00,(__this->fields).super._PerkPrefab,StringLiteral_10529/*"PropertiesPerksPanel"*/,
                          Method_OGNCMFBMBMB_KNMENIBLFGF<ParameterScrollItem>__);
      pIVar4 = pIVar4 + 2;
      pIVar4->klass = pIVar5;
      thunk_FUN_01c20e04(pIVar4,pIVar5);
      pIVar5 = pIVar4->klass;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pIVar5,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      if (pIVar4->klass != (Il2CppClass *)0x0) {
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pIVar4->klass,(MethodInfo *)0x0);
        __this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
           (parent = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
          EIKFGOCCOIE = *ppvVar9;
          if (EIKFGOCCOIE != (PerkInfoItem_o *)0x0) {
            fVar8 = 1.0;
            if ((EIKFGOCCOIE->fields).OCABLLPNEGL == 0) {
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar3 = GameUtils__DODJBGHCIHD(EIKFGOCCOIE,(MethodInfo *)0x0);
              EIKFGOCCOIE = *ppvVar9;
              fVar8 = 1.0;
              if (!bVar3) {
                fVar8 = 0.5;
              }
            }
            if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            NEJHIEOHMCF = KKCBGIBKOCP__LFEHBAMJCMH(EIKFGOCCOIE,(MethodInfo *)0x0);
            pIVar5 = pIVar4->klass;
            if (pIVar5 != (Il2CppClass *)0x0) {
              pIVar5->vtable[3].methodPtr = (Il2CppMethodPointer)(__this->fields).super._Atlas;
              thunk_FUN_01c20e04(pIVar5->vtable + 3);
              if (*ppvVar9 != (void *)0x0) {
                pIVar5 = pIVar4->klass;
                CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                          ((long)*ppvVar9 + 0xac),(MethodInfo *)0x0);
                if (*ppvVar9 != (void *)0x0) {
                  NBHHBBOJJME = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                            ((long)*ppvVar9 + 0xac),(MethodInfo *)0x0);
                  if ((*ppvVar9 != (void *)0x0) && (pIVar5 != (Il2CppClass *)0x0)) {
                    Nekki_SF2_GUI_Shop_ParameterScrollItem__Init
                              ((Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)pIVar5,StringLiteral_1/*""*/,
                               NEJHIEOHMCF,CJNHFNHJHPE,NBHHBBOJJME,false,
                               *(System_String_o **)((long)*ppvVar9 + 0x58),fVar8,(MethodInfo *)0x0)
                    ;
                    if (pIVar4->klass != (Il2CppClass *)0x0) {
                      fVar8 = 100.0;
                      if (2 < KDCFCALHEMN) {
                        fVar8 = 70.0;
                      }
                      Nekki_SF2_GUI_Shop_ParameterScrollItem__set_MinHeight
                                ((Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)pIVar4->klass,fVar8,
                                 (MethodInfo *)0x0);
                      if (pIVar4->klass != (Il2CppClass *)0x0) {
                        UnityEngine_UI_Selectable__set_interactable
                                  ((UnityEngine_UI_Selectable_o *)pIVar4->klass,false,
                                   (MethodInfo *)0x0);
                        if ((pIVar4->klass != (Il2CppClass *)0x0) &&
                           (pNVar6 = Nekki_SF2_GUI_Shop_ParameterScrollItem__get_TouchHandler
                                               ((Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                                                pIVar4->klass,(MethodInfo *)0x0),
                           pNVar6 != (Nekki_SF2_GUI_Common_TouchHandler_o *)0x0)) {
                          __this_04 = (pNVar6->fields).OMEOMGINDAD;
                          call = (UnityEngine_Events_UnityAction_o *)
                                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                          UnityEngine_Events_UnityAction___ctor();
                          if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                            UnityEngine_Events_UnityEvent__AddListener
                                      (__this_04,call,(MethodInfo *)0x0);
                            lVar2 = 
                            Method_System_Collections_Generic_List<ParameterScrollItem>_Add__;
                            __this_03 = (__this->fields).HEHMAPDMHIG;
                            if (__this_03 !=
                                (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
                              pIVar5 = pIVar4->klass;
                              pNVar7 = (__this_03->fields)._items;
                              (__this_03->fields)._version = (__this_03->fields)._version + 1;
                              if (pNVar7 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_array *)0x0) {
                                uVar1 = (__this_03->fields)._size;
                                if (uVar1 < (uint)pNVar7->max_length) {
                                  (__this_03->fields)._size = uVar1 + 1;
                                  pNVar7->m_Items[(int)uVar1] =
                                       (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)pIVar5;
                                  thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1);
                                  return;
                                }
                                System_Collections_Generic_List<object>__AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_03,
                                           (Il2CppObject *)pIVar5,
                                           *(MethodInfo_26E4DAC **)
                                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30114AC]
// Nekki.SF2.GUI.Shop.PropertiesPerksPanel$$.ctor @ RVA 0x30114AC

void Nekki_SF2_GUI_Shop_PropertiesPerksPanel___ctor
               (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParameterScrollItem__o *__this_00;
  System_Collections_Generic_List_ParameterScrollItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bac & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ParameterScrollItem>_TypeInfo);
    DAT_04565bac = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ParameterScrollItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ParameterScrollItem>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ParameterScrollItem>__ctor__);
  ppSVar1 = &(__this->fields).HEHMAPDMHIG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Shop_PerksPanel___ctor((Nekki_SF2_GUI_Shop_PerksPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void Clear()  [RVA 0x3011534]
// Nekki.SF2.GUI.Shop.PropertiesPerksPanel$$Clear @ RVA 0x3011534

void Nekki_SF2_GUI_Shop_PropertiesPerksPanel__Clear
               (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *ALMGONACBKC;
  bool bVar1;
  System_Collections_Generic_List_ParameterScrollItem__o *pSVar2;
  OGNCMFBMBMB_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565bad & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<ParameterScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<ParameterScrollItem>__);
    FUN_01bab630(&StringLiteral_10529/*"PropertiesPerksPanel"*/);
    DAT_04565bad = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).HEHMAPDMHIG,
                     Method_DJNBJHPDKDP_OBECCOPBADO<ParameterScrollItem>__);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).HEHMAPDMHIG;
  if (pSVar2 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ParameterScrollItem>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_MoveNext__
                             ), ALMGONACBKC = local_48.fields._current, bVar1) {
      __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 == (OGNCMFBMBMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      OGNCMFBMBMB__LEAPFADCELA<object>
                (__this_00,ALMGONACBKC,StringLiteral_10529/*"PropertiesPerksPanel"*/,
                 Method_OGNCMFBMBMB_LEAPFADCELA<ParameterScrollItem>__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,
               Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_Dispose__);
    pSVar2 = (__this->fields).HEHMAPDMHIG;
    if (pSVar2 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
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

