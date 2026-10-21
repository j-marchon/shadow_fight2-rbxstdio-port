// Nekki.SF2.GUI.Shop.PropertiesPerksPanel$$JJPEDCEMMID @ RVA 0x30110B8

void Nekki_SF2_GUI_Shop_PropertiesPerksPanel__JJPEDCEMMID
               (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *__this,HEFOANCOHDC_o *CDEABOAKDEJ,
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
  HEFOANCOHDC_o *EIKFGOCCOIE;
  
  if ((DAT_04565bab & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_Add__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_PropertiesPerksPanel_OCJHKJCJAIO_NLJNHDBAGDL__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_PropertiesPerksPanel_OCJHKJCJAIO_TypeInfo);
    FUN_01bab630(&Method_OGNCMFBMBMB_KNMENIBLFGF<ParameterScrollItem>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10529);
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
                         (__this_00,(__this->fields).super._PerkPrefab,StringLiteral_10529,
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
          if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
            fVar8 = 1.0;
            if ((EIKFGOCCOIE->fields).OCABLLPNEGL == 0) {
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar3 = MGNPHCAAEIO__DODJBGHCIHD(EIKFGOCCOIE,(MethodInfo *)0x0);
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
                              ((Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)pIVar5,StringLiteral_1,
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

