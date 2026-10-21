// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$LAHOOGJMEIC @ RVA 0x3176B8C

/* WARNING: Removing unreachable block (ram,0x03276f00) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__LAHOOGJMEIC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,int32_t ADBEOINGPAF
               ,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  int iVar7;
  System_Collections_Generic_List_GEKCMGLDMEE__o *GHAAKPDHIJJ;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  MEJIKMPNBNL_o *__this_01;
  GEKCMGLDMEE_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *pNVar8;
  PBAKFOBIHEG_o *pPVar9;
  undefined8 uVar10;
  VirtualInvokeData *pVVar11;
  System_Collections_IEnumerator_o *pSVar12;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar13;
  GEKCMGLDMEE_array *pGVar14;
  PBAKFOBIHEG_c *pPVar15;
  ulong uVar16;
  int32_t *piVar17;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456695a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_HKFPJNNOBMH__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&GEKCMGLDMEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<GEKCMGLDMEE>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456695a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  GHAAKPDHIJJ = (System_Collections_Generic_List_GEKCMGLDMEE__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<GEKCMGLDMEE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
             Method_System_Collections_Generic_List<GEKCMGLDMEE>__ctor__);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                             ), bVar6) {
      if ((OHDDKGHEEPA_o *)local_80.fields._current == (OHDDKGHEEPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (((OHDDKGHEEPA_Fields *)((long)local_80.fields._current + 0x10))->super).
                  IAJPHAAMKPC;
      if (__this_01 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), pIVar5 = local_a0.fields._current, bVar6) {
        if ((OHDDKGHEEPA_o *)local_a0.fields._current != (OHDDKGHEEPA_o *)0x0) {
          bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
          if ((bVar1 <= (((OHDDKGHEEPA_c *)(local_a0.fields._current)->klass)->_2).naturalAligment)
             && ((((OHDDKGHEEPA_c *)(local_a0.fields._current)->klass)->_2).typeHierarchy
                 [(ulong)bVar1 - 1] == (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
            iVar7 = ((OHDDKGHEEPA_Fields *)((long)local_a0.fields._current + 0x10))->
                    _DNENMENCFFI_k__BackingField;
            if (iVar7 == 2) {
              bVar6 = true;
            }
            else if (iVar7 == 1) {
              pNVar13 = (__this->fields)._hardModeCheck;
              if (pNVar13 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar6 = (pNVar13->fields).OIKLOAGFFGO == 0;
            }
            else if (iVar7 == 0) {
              pNVar13 = (__this->fields)._hardModeCheck;
              if (pNVar13 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar6 = (pNVar13->fields).OIKLOAGFFGO == 1;
            }
            else {
              bVar6 = false;
            }
            if (((((bVar6 & ((((OHDDKGHEEPA_Fields *)((long)local_a0.fields._current + 0x10))->super
                             ).CILMHNDFBPH ^ 0xffU)) != 0) &&
                 ((((OHDDKGHEEPA_Fields *)((long)local_a0.fields._current + 0x10))->super).
                  HHDBIGKBMEC != false)) &&
                (bVar6 = OOMHDDBCBJP__KFMAFEPOEIB
                                   ((OOMHDDBCBJP_o *)local_a0.fields._current,(MethodInfo *)0x0),
                !bVar6)) &&
               (iVar7 = (*(((OHDDKGHEEPA_c *)pIVar5->klass)->vtable)._15_AAHLCCCONKI.methodPtr)
                                  (pIVar5,(((OHDDKGHEEPA_c *)pIVar5->klass)->vtable)._15_AAHLCCCONKI
                                          .method), iVar7 == 2)) {
              __this_02 = (GEKCMGLDMEE_o *)thunk_FUN_01bda818(GEKCMGLDMEE_TypeInfo);
              GEKCMGLDMEE___ctor(__this_02,(MethodInfo *)0x0);
              if (__this_02 == (GEKCMGLDMEE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (__this_02->fields).CCJJPOBJFIF = (OHDDKGHEEPA_o *)pIVar5;
              thunk_FUN_01c20e04(&__this_02->fields,pIVar5);
              lVar4 = Method_System_Collections_Generic_List<GEKCMGLDMEE>_Add__;
              if (GHAAKPDHIJJ == (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pGVar14 = (GHAAKPDHIJJ->fields)._items;
              (GHAAKPDHIJJ->fields)._version = (GHAAKPDHIJJ->fields)._version + 1;
              if (pGVar14 == (GEKCMGLDMEE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar3 = (GHAAKPDHIJJ->fields)._size;
              if (uVar3 < (uint)pGVar14->max_length) {
                (GHAAKPDHIJJ->fields)._size = uVar3 + 1;
                pGVar14->m_Items[(int)uVar3] = __this_02;
                thunk_FUN_01c20e04(pGVar14->m_Items + (int)uVar3,__this_02);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    pNVar8 = (__this->fields)._battleRaidSlider;
    if (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__SetFocusesScales
                (pNVar8,1.2,0.9,(MethodInfo *)0x0);
      pNVar8 = (__this->fields)._battleRaidSlider;
      if (((pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) &&
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__SetItems
                     (pNVar8,GHAAKPDHIJJ,(MethodInfo *)0x0),
          GHAAKPDHIJJ != (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0)) &&
         (pNVar8 = (__this->fields)._battleRaidSlider,
         pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0)) {
        if ((GHAAKPDHIJJ->fields)._size <= ADBEOINGPAF) {
          ADBEOINGPAF = 0;
        }
        Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__ScrollToItem
                  (pNVar8,ADBEOINGPAF,0.0,(MethodInfo *)0x0);
        pNVar13 = (__this->fields)._hardModeCheck;
        if (pNVar13 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
          if ((pNVar13->fields).OIKLOAGFFGO == 0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DNHHEMBFGFJ(__this,method_00);
            pPVar9 = CoroutineManager__get_Current((MethodInfo *)0x0);
            uVar10 = thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pPVar9 == (PBAKFOBIHEG_o *)0x0) goto LAB_03277100;
            pPVar15 = pPVar9->klass;
            uVar2._0_1_ = (pPVar15->_2).rank;
            uVar2._1_1_ = (pPVar15->_2).minimumAlignment;
            uVar16 = (ulong)uVar2;
            if (uVar16 != 0) {
              piVar17 = &((pPVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar11 = pPVar15->vtable + (*piVar17 + 2);
                  goto LAB_03277084;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar11 = (VirtualInvokeData *)FUN_01b81914(pPVar9,PBAKFOBIHEG_TypeInfo,2);
LAB_03277084:
            pSVar12 = (System_Collections_IEnumerator_o *)
                      (*pVVar11->methodPtr)(0x3d4ccccd,pPVar9,uVar10,pVVar11->method);
            (__this->fields).INIKLIGPEHH = pSVar12;
            thunk_FUN_01c20e04(&(__this->fields).INIKLIGPEHH);
          }
          return;
        }
      }
    }
  }
LAB_03277100:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

