// Nekki.SF2.GUI.Common.MenuControls$$.ctor @ RVA 0x300D53C

void Nekki_SF2_GUI_Common_MenuControls___ctor
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_00;
  UnityEngine_KeyCode_array *pUVar4;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *pNVar5;
  UnityEngine_KeyCode_array **ppUVar6;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o **ppSVar7;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *pNVar8;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o **ppSVar9;
  OCOAGJDCJPL_o *__this_02;
  OCOAGJDCJPL_o **ppOVar10;
  JPGJLKENNCC_o *__this_03;
  JPGJLKENNCC_o **ppJVar11;
  EECMMJDOPDJ_o *__this_04;
  EECMMJDOPDJ_o **ppEVar12;
  CEAGEFMDAAN_o *__this_05;
  CEAGEFMDAAN_o **ppCVar13;
  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this_06;
  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o **ppNVar14;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *pNVar15;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array *pNVar16;
  int32_t *piVar17;
  int32_t *piVar18;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__Fields *pSVar19;
  undefined1 auVar20 [16];
  
  if ((DAT_04565b8c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo);
    FUN_01bab630(&CEAGEFMDAAN_TypeInfo);
                    /* try { // try from 0310d590 to 0320d59f has its CatchHandler @ 0310d5a0 */
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_TypeInfo);
                    /* catch() { ... } // from try @ 0310d510 with catch @ 0310d5a0
                       catch() { ... } // from try @ 0310d590 with catch @ 0310d5a0 */
                    /* try { // try from 0310d5a4 to 0320d5a7 has its CatchHandler @ 0310d5b0 */
    FUN_01bab630(&EECMMJDOPDJ_TypeInfo);
                    /* try { // try from 0310d5a8 to 0320d5b3 has its CatchHandler @ 0310c418 */
                    /* catch() { ... } // from try @ 0310d4e0 with catch @ 0310d5b0
                       catch() { ... } // from try @ 0310d5a4 with catch @ 0310d5b0 */
    FUN_01bab630(&JPGJLKENNCC_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo);
    FUN_01bab630(&UnityEngine_KeyCode___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MenuControls_KOEABALFPHM>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_TypeInfo);
    FUN_01bab630(&OCOAGJDCJPL_TypeInfo);
    DAT_04565b8c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MenuControls_KOEABALFPHM>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>__ctor__);
  pUVar4 = (UnityEngine_KeyCode_array *)FUN_01bab718(UnityEngine_KeyCode___TypeInfo,2);
  if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
    iVar1 = (int)pUVar4->max_length;
    if ((iVar1 == 0) || (pUVar4->m_Items[0] = 0xd, iVar1 == 1)) goto LAB_0310eca0;
    pUVar4->m_Items[1] = 0x10f;
    pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
             thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo);
    System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
    (pNVar5->fields).LCDNJBFAOHM = 0;
    ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
    *ppUVar6 = pUVar4;
    thunk_FUN_01c20e04(ppUVar6,pUVar4);
    lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
    if (__this_00 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
      pNVar15 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pNVar15->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pNVar15->m_Items[(int)uVar2] = pNVar5;
          thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        pUVar4 = (UnityEngine_KeyCode_array *)FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
        if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
          if ((int)pUVar4->max_length == 0) {
LAB_0310eca0:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pUVar4->m_Items[0] = 0x1b;
          pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                   thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo);
          System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
          (pNVar5->fields).LCDNJBFAOHM = 1;
          ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
          *ppUVar6 = pUVar4;
          thunk_FUN_01c20e04(ppUVar6,pUVar4);
          lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
          pNVar15 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pNVar15->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pNVar15->m_Items[(int)uVar2] = pNVar5;
              thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)pNVar5,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pUVar4 = (UnityEngine_KeyCode_array *)FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
            if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
              if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
              pUVar4->m_Items[0] = 0x2d;
              pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                       thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo);
              System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
              (pNVar5->fields).LCDNJBFAOHM = 2;
              ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
              *ppUVar6 = pUVar4;
              thunk_FUN_01c20e04(ppUVar6,pUVar4);
              lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
              pNVar15 = (__this_00->fields)._items;
              (__this_00->fields)._version = (__this_00->fields)._version + 1;
              if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pNVar15->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pNVar15->m_Items[(int)uVar2] = pNVar5;
                  thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)pNVar5,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                pUVar4 = (UnityEngine_KeyCode_array *)FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1)
                ;
                if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                  if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                  pUVar4->m_Items[0] = 0x2b;
                  pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                           thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                             );
                  System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                  (pNVar5->fields).LCDNJBFAOHM = 3;
                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                  *ppUVar6 = pUVar4;
                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                  lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
                  pNVar15 = (__this_00->fields)._items;
                  (__this_00->fields)._version = (__this_00->fields)._version + 1;
                  if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                    uVar2 = (__this_00->fields)._size;
                    if (uVar2 < (uint)pNVar15->max_length) {
                      (__this_00->fields)._size = uVar2 + 1;
                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                      thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_00,
                                 (Il2CppObject *)pNVar5,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                    }
                    pUVar4 = (UnityEngine_KeyCode_array *)
                             FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                    if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                      if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                      pUVar4->m_Items[0] = 0x114;
                      pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                               thunk_FUN_01bda818(
                                                 Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                 );
                      System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                      (pNVar5->fields).LCDNJBFAOHM = 5;
                      ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                      *ppUVar6 = pUVar4;
                      thunk_FUN_01c20e04(ppUVar6,pUVar4);
                      lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                      ;
                      pNVar15 = (__this_00->fields)._items;
                      (__this_00->fields)._version = (__this_00->fields)._version + 1;
                      if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                        uVar2 = (__this_00->fields)._size;
                        if (uVar2 < (uint)pNVar15->max_length) {
                          (__this_00->fields)._size = uVar2 + 1;
                          pNVar15->m_Items[(int)uVar2] = pNVar5;
                          thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)pNVar5,
                                     *(MethodInfo_26E4DAC **)
                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                        }
                        pUVar4 = (UnityEngine_KeyCode_array *)
                                 FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                        if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                          if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                          pUVar4->m_Items[0] = 0x113;
                          pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                   thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                          System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                          (pNVar5->fields).LCDNJBFAOHM = 4;
                          ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                          *ppUVar6 = pUVar4;
                          thunk_FUN_01c20e04(ppUVar6,pUVar4);
                          lVar3 = 
                          Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
                          pNVar15 = (__this_00->fields)._items;
                          (__this_00->fields)._version = (__this_00->fields)._version + 1;
                          if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0)
                          {
                            uVar2 = (__this_00->fields)._size;
                            if (uVar2 < (uint)pNVar15->max_length) {
                              (__this_00->fields)._size = uVar2 + 1;
                              pNVar15->m_Items[(int)uVar2] = pNVar5;
                              thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_00,
                                         (Il2CppObject *)pNVar5,
                                         *(MethodInfo_26E4DAC **)
                                          (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                            }
                            pUVar4 = (UnityEngine_KeyCode_array *)
                                     FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                            if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                              if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                              pUVar4->m_Items[0] = 0x111;
                              pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                       thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                              System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                              (pNVar5->fields).LCDNJBFAOHM = 6;
                              ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                              *ppUVar6 = pUVar4;
                              thunk_FUN_01c20e04(ppUVar6,pUVar4);
                              lVar3 = 
                              Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                              ;
                              pNVar15 = (__this_00->fields)._items;
                              (__this_00->fields)._version = (__this_00->fields)._version + 1;
                              if (pNVar15 !=
                                  (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                                uVar2 = (__this_00->fields)._size;
                                if (uVar2 < (uint)pNVar15->max_length) {
                                  (__this_00->fields)._size = uVar2 + 1;
                                  pNVar15->m_Items[(int)uVar2] = pNVar5;
                                  thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            ((System_Collections_Generic_List_object__o *)__this_00,
                                             (Il2CppObject *)pNVar5,
                                             *(MethodInfo_26E4DAC **)
                                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                                }
                                pUVar4 = (UnityEngine_KeyCode_array *)
                                         FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                                if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                  if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                                  pUVar4->m_Items[0] = 0x112;
                                  pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                           thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                  System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                                  (pNVar5->fields).LCDNJBFAOHM = 7;
                                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                  *ppUVar6 = pUVar4;
                                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                  lVar3 = 
                                  Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                  ;
                                  pNVar15 = (__this_00->fields)._items;
                                  (__this_00->fields)._version = (__this_00->fields)._version + 1;
                                  if (pNVar15 !=
                                      (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                                    uVar2 = (__this_00->fields)._size;
                                    if (uVar2 < (uint)pNVar15->max_length) {
                                      (__this_00->fields)._size = uVar2 + 1;
                                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                                      thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                                    }
                                    else {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                ((System_Collections_Generic_List_object__o *)
                                                 __this_00,(Il2CppObject *)pNVar5,
                                                 *(MethodInfo_26E4DAC **)
                                                  (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                                                );
                                    }
                                    pUVar4 = (UnityEngine_KeyCode_array *)
                                             FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                                    if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                      if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                                      pUVar4->m_Items[0] = 0x5b;
                                      pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                               thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                      System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0)
                                      ;
                                      (pNVar5->fields).LCDNJBFAOHM = 0x12;
                                      ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                      *ppUVar6 = pUVar4;
                                      thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                      lVar3 = 
                                      Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                      ;
                                      pNVar15 = (__this_00->fields)._items;
                                      (__this_00->fields)._version =
                                           (__this_00->fields)._version + 1;
                                      if (pNVar15 !=
                                          (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0
                                         ) {
                                        uVar2 = (__this_00->fields)._size;
                                        if (uVar2 < (uint)pNVar15->max_length) {
                                          (__this_00->fields)._size = uVar2 + 1;
                                          pNVar15->m_Items[(int)uVar2] = pNVar5;
                                          thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                                        }
                                        else {
                                          System_Collections_Generic_List<object>__AddWithResize
                                                    ((System_Collections_Generic_List_object__o *)
                                                     __this_00,(Il2CppObject *)pNVar5,
                                                     *(MethodInfo_26E4DAC **)
                                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) +
                                                      0x70));
                                        }
                                        pUVar4 = (UnityEngine_KeyCode_array *)
                                                 FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                                        if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                          if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                                          pUVar4->m_Items[0] = 0x5d;
                                          pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o
                                                    *)thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                          System_Object___ctor
                                                    ((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                                          (pNVar5->fields).LCDNJBFAOHM = 0x14;
                                          ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                          *ppUVar6 = pUVar4;
                                          thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                          lVar3 = 
                                          Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                          ;
                                          pNVar15 = (__this_00->fields)._items;
                                          (__this_00->fields)._version =
                                               (__this_00->fields)._version + 1;
                                          if (pNVar15 !=
                                              (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *
                                              )0x0) {
                                            uVar2 = (__this_00->fields)._size;
                                            if (uVar2 < (uint)pNVar15->max_length) {
                                              (__this_00->fields)._size = uVar2 + 1;
                                              pNVar15->m_Items[(int)uVar2] = pNVar5;
                                              thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,
                                                                 pNVar5);
                                            }
                                            else {
                                              System_Collections_Generic_List<object>__AddWithResize
                                                        ((System_Collections_Generic_List_object__o
                                                          *)__this_00,(Il2CppObject *)pNVar5,
                                                         *(MethodInfo_26E4DAC **)
                                                          (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0)
                                                          + 0x70));
                                            }
                                            pUVar4 = (UnityEngine_KeyCode_array *)
                                                     FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                                            if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                              if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                                              pUVar4->m_Items[0] = 0x3b;
                                              pNVar5 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                              System_Object___ctor
                                                        ((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                                              (pNVar5->fields).LCDNJBFAOHM = 0x13;
                                              ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                              *ppUVar6 = pUVar4;
                                              thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                              lVar3 = 
                                              Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                              ;
                                              pNVar15 = (__this_00->fields)._items;
                                              (__this_00->fields)._version =
                                                   (__this_00->fields)._version + 1;
                                              if (pNVar15 !=
                                                  (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array
                                                  *)0x0) {
                                                uVar2 = (__this_00->fields)._size;
                                                if (uVar2 < (uint)pNVar15->max_length) {
                                                  (__this_00->fields)._size = uVar2 + 1;
                                                  pNVar15->m_Items[(int)uVar2] = pNVar5;
                                                  thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,
                                                                     pNVar5);
                                                }
                                                else {
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_00,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                }
                                                pUVar4 = (UnityEngine_KeyCode_array *)
                                                         FUN_01bab718(UnityEngine_KeyCode___TypeInfo
                                                                      ,1);
                                                if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                                  if ((int)pUVar4->max_length == 0)
                                                  goto LAB_0310eca0;
                                                  pUVar4->m_Items[0] = 0x27;
                                                  pNVar5 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar5,
                                                             (MethodInfo *)0x0);
                                                  (pNVar5->fields).LCDNJBFAOHM = 0x15;
                                                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                                  *ppUVar6 = pUVar4;
                                                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                                  ;
                                                  pNVar15 = (__this_00->fields)._items;
                                                  (__this_00->fields)._version =
                                                       (__this_00->fields)._version + 1;
                                                  if (pNVar15 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array
                                                  *)0x0) {
                                                    uVar2 = (__this_00->fields)._size;
                                                    if (uVar2 < (uint)pNVar15->max_length) {
                                                      (__this_00->fields)._size = uVar2 + 1;
                                                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                                                      thunk_FUN_01c20e04(pNVar15->m_Items +
                                                                         (int)uVar2,pNVar5);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_00,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pUVar4 = (UnityEngine_KeyCode_array *)
                                                           FUN_01bab718(
                                                  UnityEngine_KeyCode___TypeInfo,1);
                                                  if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                                    if ((int)pUVar4->max_length == 0)
                                                    goto LAB_0310eca0;
                                                    pUVar4->m_Items[0] = 0x62;
                                                    pNVar5 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar5,
                                                             (MethodInfo *)0x0);
                                                  (pNVar5->fields).LCDNJBFAOHM = 0x16;
                                                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                                  *ppUVar6 = pUVar4;
                                                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                                  ;
                                                  pNVar15 = (__this_00->fields)._items;
                                                  (__this_00->fields)._version =
                                                       (__this_00->fields)._version + 1;
                                                  if (pNVar15 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array
                                                  *)0x0) {
                                                    uVar2 = (__this_00->fields)._size;
                                                    if (uVar2 < (uint)pNVar15->max_length) {
                                                      (__this_00->fields)._size = uVar2 + 1;
                                                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                                                      thunk_FUN_01c20e04(pNVar15->m_Items +
                                                                         (int)uVar2,pNVar5);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_00,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pUVar4 = (UnityEngine_KeyCode_array *)
                                                           FUN_01bab718(
                                                  UnityEngine_KeyCode___TypeInfo,1);
                                                  if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                                    if ((int)pUVar4->max_length == 0)
                                                    goto LAB_0310eca0;
                                                    pUVar4->m_Items[0] = 0x20;
                                                    pNVar5 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar5,
                                                             (MethodInfo *)0x0);
                                                  (pNVar5->fields).LCDNJBFAOHM = 0x17;
                                                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                                  *ppUVar6 = pUVar4;
                                                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                                  ;
                                                  pNVar15 = (__this_00->fields)._items;
                                                  (__this_00->fields)._version =
                                                       (__this_00->fields)._version + 1;
                                                  if (pNVar15 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array
                                                  *)0x0) {
                                                    uVar2 = (__this_00->fields)._size;
                                                    if (uVar2 < (uint)pNVar15->max_length) {
                                                      (__this_00->fields)._size = uVar2 + 1;
                                                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                                                      thunk_FUN_01c20e04(pNVar15->m_Items +
                                                                         (int)uVar2,pNVar5);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_00,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  ppSVar7 = &(__this->fields).ELOFOCJPGDO;
                                                  *ppSVar7 = __this_00;
                                                  thunk_FUN_01c20e04(ppSVar7,__this_00);
                                                  __this_01 = (
                                                  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o
                                                  *)thunk_FUN_01bda818(
                                                  System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_TypeInfo
                                                  );
                                                  System_Collections_Generic_List<object>___ctor
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>__ctor__
                                                  );
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0;
                                                  if (__this_01 !=
                                                      (
                                                  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o
                                                  *)0x0) {
                                                    piVar18 = &(__this_01->fields)._version;
                                                    *piVar18 = *piVar18 + 1;
                                                    pSVar19 = &__this_01->fields;
                                                    pNVar16 = pSVar19->_items;
                                                    piVar17 = &(__this_01->fields)._size;
                                                    uVar2 = *piVar17;
                                                    if (pNVar16 !=
                                                        (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 1;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 1;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 2;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 2;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 3;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 3;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 5;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 6;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 4;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 7;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 6;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 4;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 7;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 5;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 9;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xb;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 8;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xc;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 10;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 9;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xb;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 10;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xd;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x10;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xc;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x11;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xe;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xe;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xf;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xf;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x10;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 8;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x11;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xd;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x12;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x12;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x14;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x13;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x13;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x14;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x15;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x15;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x16;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x17;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x17;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x16;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  ppSVar9 = &(__this->fields).CBCDEIKGGDK;
                                                  *ppSVar9 = __this_01;
                                                  thunk_FUN_01c20e04(ppSVar9,__this_01);
                                                  __this_02 = (OCOAGJDCJPL_o *)
                                                              thunk_FUN_01bda818(
                                                  OCOAGJDCJPL_TypeInfo);
                                                  OCOAGJDCJPL___ctor(__this_02,(MethodInfo *)0x0);
                                                  ppOVar10 = &(__this->fields).KIHMKIEFOEI;
                                                  *ppOVar10 = __this_02;
                                                  thunk_FUN_01c20e04(ppOVar10,__this_02);
                                                  __this_03 = (JPGJLKENNCC_o *)
                                                              thunk_FUN_01bda818(
                                                  JPGJLKENNCC_TypeInfo);
                                                  JPGJLKENNCC___ctor(__this_03,(MethodInfo *)0x0);
                                                  ppJVar11 = &(__this->fields).GMLEPHMBMPD;
                                                  *ppJVar11 = __this_03;
                                                  thunk_FUN_01c20e04(ppJVar11,__this_03);
                                                  __this_04 = (EECMMJDOPDJ_o *)
                                                              thunk_FUN_01bda818(
                                                  EECMMJDOPDJ_TypeInfo);
                                                  EECMMJDOPDJ___ctor(__this_04,(MethodInfo *)0x0);
                                                  ppEVar12 = &(__this->fields).ALALIGAEHDK;
                                                  *ppEVar12 = __this_04;
                                                  thunk_FUN_01c20e04(ppEVar12,__this_04);
                                                  __this_05 = (CEAGEFMDAAN_o *)
                                                              thunk_FUN_01bda818(
                                                  CEAGEFMDAAN_TypeInfo);
                                                  CEAGEFMDAAN___ctor(__this_05,(MethodInfo *)0x0);
                                                  ppCVar13 = &(__this->fields).MODIIOJEMLE;
                                                  *ppCVar13 = __this_05;
                                                  thunk_FUN_01c20e04(ppCVar13,__this_05);
                                                  auVar20 = thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_TypeInfo
                                                  );
                                                  __this_06 = auVar20._0_8_;
                                                  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML___ctor
                                                            (__this_06,auVar20._8_8_);
                                                  ppNVar14 = &(__this->fields).JOIIFEDGBGK;
                                                  *ppNVar14 = __this_06;
                                                  thunk_FUN_01c20e04(ppNVar14,__this_06);
                                                  UnityEngine_MonoBehaviour___ctor
                                                            ((UnityEngine_MonoBehaviour_o *)__this,
                                                             (MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

