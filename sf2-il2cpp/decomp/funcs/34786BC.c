// IJGADGEHJKB$$FGBGAKLKONL @ RVA 0x34786BC

System_String_o * IJGADGEHJKB__FGBGAKLKONL(IJGADGEHJKB_o *__this,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Text_StringBuilder_o *__this_00;
  HPEENDCCJND_o *pHVar4;
  GDPNBLFNJKP_o *pGVar5;
  MCBGINPGJCD_o *__this_01;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  MethodInfo *extraout_x1;
  HPEENDCCJND_array *pHVar8;
  int index;
  System_Collections_Generic_List_HPEENDCCJND__o *pSVar9;
  int32_t local_6c;
  int32_t local_68;
  int iStack_64;
  
  if ((DAT_0456833f & 1) == 0) {
    FUN_01bab630(&BCLIMJMEMPJ_TypeInfo);
    FUN_01bab630(&BGAJHKGONBK_TypeInfo);
    FUN_01bab630(&BKFFOLFKECB_TypeInfo);
    FUN_01bab630(&BKIEPGOFNHA_TypeInfo);
    FUN_01bab630(&BLCNFNMKAFF_TypeInfo);
    FUN_01bab630(&BMHIPCPOKLD_TypeInfo);
    FUN_01bab630(&EBDHLIBNKFH_TypeInfo);
    FUN_01bab630(&EFODCAGPLNE_TypeInfo);
    FUN_01bab630(&EOBANENKFAO_TypeInfo);
    FUN_01bab630(&GDPNBLFNJKP_TypeInfo);
    FUN_01bab630(&HILCIMHPHFJ_TypeInfo);
    FUN_01bab630(&HNBHALLLNAP_TypeInfo);
    FUN_01bab630(&ICBKPCDHONO_TypeInfo);
    FUN_01bab630(&IJGADGEHJKB_TypeInfo);
    FUN_01bab630(&ILHDEFKHAIE_TypeInfo);
    FUN_01bab630(&JAHFLFBFOID_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HPEENDCCJND>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HPEENDCCJND>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HPEENDCCJND>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HPEENDCCJND>_get_Item__);
    FUN_01bab630(&MCBGINPGJCD_TypeInfo);
    FUN_01bab630(&MCNEHBFGDNJ_TypeInfo);
    FUN_01bab630(&NBKJINDFDDM_TypeInfo);
    FUN_01bab630(&NGMAKMKEMMM_TypeInfo);
    FUN_01bab630(&NPCHIIPDAIF_TypeInfo);
    FUN_01bab630(&OCFAAFJGLBO_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&OJGIIPOFCIB_TypeInfo);
    FUN_01bab630(&OMBBEJKHLAF_TypeInfo);
    FUN_01bab630(&PFBOJPAIAKF_TypeInfo);
    FUN_01bab630(&PHGBGGEGMLE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_417);
    FUN_01bab630(&StringLiteral_261);
    FUN_01bab630(&StringLiteral_10773);
    FUN_01bab630(&StringLiteral_21541);
    FUN_01bab630(&StringLiteral_10772);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456833f = 1;
    method = extraout_x1;
  }
  local_6c = 0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pSVar7 = StringLiteral_1;
  _local_68 = 0;
  if ((IJGADGEHJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
  if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)0x0) {
    length = (pSVar9->fields)._size;
    (pSVar9->fields)._size = 0;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
    }
    pHVar4 = (HPEENDCCJND_o *)thunk_FUN_01bda818(MCNEHBFGDNJ_TypeInfo);
    MCNEHBFGDNJ___ctor((MCNEHBFGDNJ_o *)pHVar4,(MethodInfo *)0x0);
    lVar3 = Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
    if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)0x0) {
      pHVar8 = (pSVar9->fields)._items;
      (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
      if (pHVar8 != (HPEENDCCJND_array *)0x0) {
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pHVar8->max_length) {
          (pSVar9->fields)._size = uVar2 + 1;
          pHVar8->m_Items[(int)uVar2] = pHVar4;
          thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pHVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
        pHVar4 = (HPEENDCCJND_o *)thunk_FUN_01bda818(NPCHIIPDAIF_TypeInfo);
        NPCHIIPDAIF___ctor((NPCHIIPDAIF_o *)pHVar4,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
        if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)0x0) {
          pHVar8 = (pSVar9->fields)._items;
          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
          if (pHVar8 != (HPEENDCCJND_array *)0x0) {
            uVar2 = (pSVar9->fields)._size;
            if (uVar2 < (uint)pHVar8->max_length) {
              (pSVar9->fields)._size = uVar2 + 1;
              pHVar8->m_Items[(int)uVar2] = pHVar4;
              thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pHVar4,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
            pHVar4 = (HPEENDCCJND_o *)thunk_FUN_01bda818(NBKJINDFDDM_TypeInfo);
            NBKJINDFDDM___ctor((NBKJINDFDDM_o *)pHVar4,(MethodInfo *)0x0);
            lVar3 = Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
            if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)0x0) {
              pHVar8 = (pSVar9->fields)._items;
              (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
              if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                uVar2 = (pSVar9->fields)._size;
                if (uVar2 < (uint)pHVar8->max_length) {
                  (pSVar9->fields)._size = uVar2 + 1;
                  pHVar8->m_Items[(int)uVar2] = pHVar4;
                  thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar9,
                             (Il2CppObject *)pHVar4,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
                pHVar4 = (HPEENDCCJND_o *)thunk_FUN_01bda818(HILCIMHPHFJ_TypeInfo);
                HILCIMHPHFJ___ctor((HILCIMHPHFJ_o *)pHVar4,(MethodInfo *)0x0);
                lVar3 = Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
                if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)0x0) {
                  pHVar8 = (pSVar9->fields)._items;
                  (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                  if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                    uVar2 = (pSVar9->fields)._size;
                    if (uVar2 < (uint)pHVar8->max_length) {
                      (pSVar9->fields)._size = uVar2 + 1;
                      pHVar8->m_Items[(int)uVar2] = pHVar4;
                      thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar9,
                                 (Il2CppObject *)pHVar4,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                    }
                    pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
                    pHVar4 = (HPEENDCCJND_o *)thunk_FUN_01bda818(JAHFLFBFOID_TypeInfo);
                    JAHFLFBFOID___ctor((JAHFLFBFOID_o *)pHVar4,(MethodInfo *)0x0);
                    lVar3 = Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
                    if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)0x0) {
                      pHVar8 = (pSVar9->fields)._items;
                      (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                      if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                        uVar2 = (pSVar9->fields)._size;
                        if (uVar2 < (uint)pHVar8->max_length) {
                          (pSVar9->fields)._size = uVar2 + 1;
                          pHVar8->m_Items[(int)uVar2] = pHVar4;
                          thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4);
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar9,
                                     (Il2CppObject *)pHVar4,
                                     *(MethodInfo_26E4DAC **)
                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                        }
                        pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
                        pHVar4 = (HPEENDCCJND_o *)thunk_FUN_01bda818(BCLIMJMEMPJ_TypeInfo);
                        BCLIMJMEMPJ___ctor((BCLIMJMEMPJ_o *)pHVar4,(MethodInfo *)0x0);
                        lVar3 = Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
                        if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)0x0) {
                          pHVar8 = (pSVar9->fields)._items;
                          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                          if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                            uVar2 = (pSVar9->fields)._size;
                            if (uVar2 < (uint)pHVar8->max_length) {
                              (pSVar9->fields)._size = uVar2 + 1;
                              pHVar8->m_Items[(int)uVar2] = pHVar4;
                              thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar9,
                                         (Il2CppObject *)pHVar4,
                                         *(MethodInfo_26E4DAC **)
                                          (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                            }
                            pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
                            pHVar4 = (HPEENDCCJND_o *)thunk_FUN_01bda818(OJGIIPOFCIB_TypeInfo);
                            OJGIIPOFCIB___ctor((OJGIIPOFCIB_o *)pHVar4,(MethodInfo *)0x0);
                            lVar3 = Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
                            if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)0x0) {
                              pHVar8 = (pSVar9->fields)._items;
                              (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                              if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                uVar2 = (pSVar9->fields)._size;
                                if (uVar2 < (uint)pHVar8->max_length) {
                                  (pSVar9->fields)._size = uVar2 + 1;
                                  pHVar8->m_Items[(int)uVar2] = pHVar4;
                                  thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4);
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            ((System_Collections_Generic_List_object__o *)pSVar9,
                                             (Il2CppObject *)pHVar4,
                                             *(MethodInfo_26E4DAC **)
                                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                                }
                                pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
                                pHVar4 = (HPEENDCCJND_o *)thunk_FUN_01bda818(EOBANENKFAO_TypeInfo);
                                EOBANENKFAO___ctor((EOBANENKFAO_o *)pHVar4,(MethodInfo *)0x0);
                                lVar3 = Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
                                if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)0x0)
                                {
                                  pHVar8 = (pSVar9->fields)._items;
                                  (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                                  if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                    uVar2 = (pSVar9->fields)._size;
                                    if (uVar2 < (uint)pHVar8->max_length) {
                                      (pSVar9->fields)._size = uVar2 + 1;
                                      pHVar8->m_Items[(int)uVar2] = pHVar4;
                                      thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4);
                                    }
                                    else {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                ((System_Collections_Generic_List_object__o *)pSVar9
                                                 ,(Il2CppObject *)pHVar4,
                                                 *(MethodInfo_26E4DAC **)
                                                  (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                                                );
                                    }
                                    pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
                                    pHVar4 = (HPEENDCCJND_o *)
                                             thunk_FUN_01bda818(ILHDEFKHAIE_TypeInfo);
                                    ILHDEFKHAIE___ctor((ILHDEFKHAIE_o *)pHVar4,(MethodInfo *)0x0);
                                    lVar3 = 
                                    Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
                                    if (pSVar9 != (System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                      pHVar8 = (pSVar9->fields)._items;
                                      (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                                      if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                        uVar2 = (pSVar9->fields)._size;
                                        if (uVar2 < (uint)pHVar8->max_length) {
                                          (pSVar9->fields)._size = uVar2 + 1;
                                          pHVar8->m_Items[(int)uVar2] = pHVar4;
                                          thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4);
                                        }
                                        else {
                                          System_Collections_Generic_List<object>__AddWithResize
                                                    ((System_Collections_Generic_List_object__o *)
                                                     pSVar9,(Il2CppObject *)pHVar4,
                                                     *(MethodInfo_26E4DAC **)
                                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) +
                                                      0x70));
                                        }
                                        pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH;
                                        pHVar4 = (HPEENDCCJND_o *)
                                                 thunk_FUN_01bda818(PFBOJPAIAKF_TypeInfo);
                                        PFBOJPAIAKF___ctor((PFBOJPAIAKF_o *)pHVar4,(MethodInfo *)0x0
                                                          );
                                        lVar3 = 
                                        Method_System_Collections_Generic_List<HPEENDCCJND>_Add__;
                                        if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                          pHVar8 = (pSVar9->fields)._items;
                                          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
                                          if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                            uVar2 = (pSVar9->fields)._size;
                                            if (uVar2 < (uint)pHVar8->max_length) {
                                              (pSVar9->fields)._size = uVar2 + 1;
                                              pHVar8->m_Items[(int)uVar2] = pHVar4;
                                              thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,pHVar4
                                                                );
                                            }
                                            else {
                                              System_Collections_Generic_List<object>__AddWithResize
                                                        ((System_Collections_Generic_List_object__o
                                                          *)pSVar9,(Il2CppObject *)pHVar4,
                                                         *(MethodInfo_26E4DAC **)
                                                          (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0)
                                                          + 0x70));
                                            }
                                            pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                     FIDOJDOEFIH;
                                            pHVar4 = (HPEENDCCJND_o *)
                                                     thunk_FUN_01bda818(NGMAKMKEMMM_TypeInfo);
                                            NGMAKMKEMMM___ctor((NGMAKMKEMMM_o *)pHVar4,
                                                               (MethodInfo *)0x0);
                                            lVar3 = 
                                            Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                            ;
                                            if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                              pHVar8 = (pSVar9->fields)._items;
                                              (pSVar9->fields)._version =
                                                   (pSVar9->fields)._version + 1;
                                              if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                uVar2 = (pSVar9->fields)._size;
                                                if (uVar2 < (uint)pHVar8->max_length) {
                                                  (pSVar9->fields)._size = uVar2 + 1;
                                                  pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                  thunk_FUN_01c20e04(pHVar8->m_Items + (int)uVar2,
                                                                     pHVar4);
                                                }
                                                else {
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                }
                                                pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                         FIDOJDOEFIH;
                                                pHVar4 = (HPEENDCCJND_o *)
                                                         thunk_FUN_01bda818(EBDHLIBNKFH_TypeInfo);
                                                EBDHLIBNKFH___ctor((EBDHLIBNKFH_o *)pHVar4,
                                                                   (MethodInfo *)0x0);
                                                lVar3 = 
                                                Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                ;
                                                if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                  pHVar8 = (pSVar9->fields)._items;
                                                  (pSVar9->fields)._version =
                                                       (pSVar9->fields)._version + 1;
                                                  if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                    uVar2 = (pSVar9->fields)._size;
                                                    if (uVar2 < (uint)pHVar8->max_length) {
                                                      (pSVar9->fields)._size = uVar2 + 1;
                                                      pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                      thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                         (int)uVar2,pHVar4);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(PHGBGGEGMLE_TypeInfo);
                                                  PHGBGGEGMLE___ctor((PHGBGGEGMLE_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(OMBBEJKHLAF_TypeInfo);
                                                  OMBBEJKHLAF___ctor((OMBBEJKHLAF_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(BGAJHKGONBK_TypeInfo);
                                                  BGAJHKGONBK___ctor((BGAJHKGONBK_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(OCFAAFJGLBO_TypeInfo);
                                                  OCFAAFJGLBO___ctor((OCFAAFJGLBO_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(BLCNFNMKAFF_TypeInfo);
                                                  BLCNFNMKAFF___ctor((BLCNFNMKAFF_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(HNBHALLLNAP_TypeInfo);
                                                  HNBHALLLNAP___ctor((HNBHALLLNAP_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(EFODCAGPLNE_TypeInfo);
                                                  EFODCAGPLNE___ctor((EFODCAGPLNE_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(BMHIPCPOKLD_TypeInfo);
                                                  BMHIPCPOKLD___ctor((BMHIPCPOKLD_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(ICBKPCDHONO_TypeInfo);
                                                  ICBKPCDHONO___ctor((ICBKPCDHONO_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pGVar5 = (GDPNBLFNJKP_o *)
                                                           thunk_FUN_01bda818(GDPNBLFNJKP_TypeInfo);
                                                  GDPNBLFNJKP___ctor(pGVar5,(MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] =
                                                             (HPEENDCCJND_o *)pGVar5;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pGVar5);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pGVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(BKIEPGOFNHA_TypeInfo);
                                                  BKIEPGOFNHA___ctor((BKIEPGOFNHA_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  __this_01 = (MCBGINPGJCD_o *)
                                                              thunk_FUN_01bda818(
                                                  MCBGINPGJCD_TypeInfo);
                                                  MCBGINPGJCD___ctor(__this_01,(MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] =
                                                             (HPEENDCCJND_o *)__this_01;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,__this_01);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)__this_01,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pGVar5 = (GDPNBLFNJKP_o *)
                                                           thunk_FUN_01bda818(GDPNBLFNJKP_TypeInfo);
                                                  GDPNBLFNJKP___ctor(pGVar5,(MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] =
                                                             (HPEENDCCJND_o *)pGVar5;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pGVar5);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pGVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                           FIDOJDOEFIH;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                           thunk_FUN_01bda818(BKFFOLFKECB_TypeInfo);
                                                  BKFFOLFKECB___ctor((BKFFOLFKECB_o *)pHVar4,
                                                                     (MethodInfo *)0x0);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_Add__
                                                  ;
                                                  if (pSVar9 != (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) {
                                                    pHVar8 = (pSVar9->fields)._items;
                                                    (pSVar9->fields)._version =
                                                         (pSVar9->fields)._version + 1;
                                                    if (pHVar8 != (HPEENDCCJND_array *)0x0) {
                                                      uVar2 = (pSVar9->fields)._size;
                                                      if (uVar2 < (uint)pHVar8->max_length) {
                                                        (pSVar9->fields)._size = uVar2 + 1;
                                                        pHVar8->m_Items[(int)uVar2] = pHVar4;
                                                        thunk_FUN_01c20e04(pHVar8->m_Items +
                                                                           (int)uVar2,pHVar4);
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,(Il2CppObject *)pHVar4,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  index = 0;
                                                  while( true ) {
                                                    if ((IJGADGEHJKB_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                             FIDOJDOEFIH;
                                                    if (pSVar9 == (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) goto LAB_03579904;
                                                  iVar1 = (pSVar9->fields)._size;
                                                  if ((IJGADGEHJKB_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                    pSVar9 = IJGADGEHJKB_TypeInfo->static_fields->
                                                             FIDOJDOEFIH;
                                                    if (pSVar9 == (
                                                  System_Collections_Generic_List_HPEENDCCJND__o *)
                                                  0x0) goto LAB_03579904;
                                                  }
                                                  if (iVar1 <= index) break;
                                                  pHVar4 = (HPEENDCCJND_o *)
                                                                                                                      
                                                  System_Collections_Generic_List<object>__get_Item
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar9
                                                  ,index,
                                                  Method_System_Collections_Generic_List<HPEENDCCJND>_get_Item__
                                                  );
                                                  if (pHVar4 == (HPEENDCCJND_o *)0x0)
                                                  goto LAB_03579904;
                                                  HPEENDCCJND__CCGJEGLFHJB
                                                            (pHVar4,1000,__this_00,&iStack_64,
                                                             &local_68,(MethodInfo *)0x0);
                                                  index = index + 1;
                                                  }
                                                  local_6c = (pSVar9->fields)._size;
                                                  pSVar6 = System_Int32__ToString
                                                                     ((int32_t)&local_6c,
                                                                      (MethodInfo *)0x0);
                                                  pSVar7 = System_String__Concat
                                                                     (pSVar7,StringLiteral_167,
                                                                      pSVar6,(MethodInfo *)0x0);
                                                  if (iStack_64 < 1) {
LAB_035798d4:
                                                    pSVar7 = System_String__Concat
                                                                       (StringLiteral_10772,pSVar7,
                                                                        (MethodInfo *)0x0);
                                                    return pSVar7;
                                                  }
                                                  if (__this_00 !=
                                                      (System_Text_StringBuilder_o *)0x0) {
                                                    pSVar6 = (System_String_o *)
                                                             (*(__this_00->klass->vtable).
                                                               _3_ToString.methodPtr)
                                                                       (__this_00,
                                                                        (__this_00->klass->vtable).
                                                                        _3_ToString.method);
                                                    if (pSVar6 != (System_String_o *)0x0) {
                                                      if (3999 < (pSVar6->fields)._stringLength) {
                                                        if ((OCLJMFBDKOA_TypeInfo->_2).
                                                            cctor_finished == 0) {
                                                          thunk_FUN_01ba7564();
                                                        }
                                                        OCLJMFBDKOA__JAFHOLNKKBD
                                                                  (pSVar6,(MethodInfo *)0x0);
                                                        pSVar6 = StringLiteral_21541;
                                                      }
                                                      JJPNLEPEAFM__AFLGOFPHICD
                                                                (StringLiteral_10773,pSVar6,
                                                                 StringLiteral_9679,StringLiteral_1,
                                                                 (System_Action_object__o *)0x0,1,0,
                                                                 false,false,StringLiteral_1,false,
                                                                 true,true,false,false,
                                                                 (MethodInfo *)0x0);
                                                      pSVar6 = System_Int32__ToString
                                                                         ((int32_t)&iStack_64,
                                                                          (MethodInfo *)0x0);
                                                      pSVar7 = System_String__Concat
                                                                         (pSVar7,StringLiteral_261,
                                                                          pSVar6,StringLiteral_417,
                                                                          (MethodInfo *)0x0);
                                                      goto LAB_035798d4;
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
LAB_03579904:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

