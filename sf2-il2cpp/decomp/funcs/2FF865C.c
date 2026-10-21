// JMDPBFOCHHP$$.ctor @ RVA 0x2FF865C

void JMDPBFOCHHP___ctor(JMDPBFOCHHP_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  POLAJNLKPAK_o *__this_00;
  JMDPBFOCHHP_GIIEJKGFDPL_o *__this_01;
  JMDPBFOCHHP_AEDJNABHPOF_o **ppJVar3;
  System_Collections_Generic_List_NEFKBLNBOAB__o *pSVar4;
  NEFKBLNBOAB_o *pNVar5;
  NLGPPDPDGPH_o *__this_02;
  MethodInfo *extraout_x1;
  NEFKBLNBOAB_array *pNVar6;
  System_Collections_Generic_List_NEFKBLNBOAB__o **ppSVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_04565ab4 & 1) == 0) {
    FUN_01bab630(&CODBIIHHEEC_TypeInfo);
    FUN_01bab630(&FLAGGMBLIEL_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo);
    FUN_01bab630(&IIJACPOFEEK_TypeInfo);
    FUN_01bab630(&JDEOKJDONFF_TypeInfo);
    FUN_01bab630(&KDGKPFMAMKK_TypeInfo);
    FUN_01bab630(&KECOALKGCOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NEFKBLNBOAB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NEFKBLNBOAB>_TypeInfo);
    FUN_01bab630(&MHGKHENCBFO_TypeInfo);
    FUN_01bab630(&NLGPPDPDGPH_TypeInfo);
    FUN_01bab630(&OEGNNGJNBJD_TypeInfo);
    FUN_01bab630(&OMKKIBHMGFH_TypeInfo);
    FUN_01bab630(&OMNKOCMMBEN_TypeInfo);
    FUN_01bab630(&OOODKCJANAD_TypeInfo);
    FUN_01bab630(&POLAJNLKPAK_TypeInfo);
    FUN_01bab630(&StringLiteral_21794);
    FUN_01bab630(&StringLiteral_21795);
    FUN_01bab630(&StringLiteral_21792);
    FUN_01bab630(&StringLiteral_21798);
    FUN_01bab630(&StringLiteral_21791);
    FUN_01bab630(&StringLiteral_21790);
    FUN_01bab630(&StringLiteral_21793);
    FUN_01bab630(&StringLiteral_21789);
    FUN_01bab630(&StringLiteral_21800);
    FUN_01bab630(&StringLiteral_21796);
    FUN_01bab630(&StringLiteral_21797);
    DAT_04565ab4 = 1;
    method = extraout_x1;
  }
  __this_00 = (POLAJNLKPAK_o *)thunk_FUN_01bda818(POLAJNLKPAK_TypeInfo,method);
  POLAJNLKPAK___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).FMPOOGLPALN = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  auVar8 = thunk_FUN_01bda818(JMDPBFOCHHP_GIIEJKGFDPL_TypeInfo);
  __this_01 = auVar8._0_8_;
  JMDPBFOCHHP_GIIEJKGFDPL___ctor(__this_01,auVar8._8_8_);
  ppJVar3 = &(__this->fields).ICGFIOLHAMK;
  *ppJVar3 = (JMDPBFOCHHP_AEDJNABHPOF_o *)__this_01;
  thunk_FUN_01c20e04(ppJVar3,__this_01);
  pSVar4 = (System_Collections_Generic_List_NEFKBLNBOAB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NEFKBLNBOAB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<NEFKBLNBOAB>__ctor__);
  ppSVar7 = &(__this->fields).NDPALCPICPD;
  *ppSVar7 = pSVar4;
  thunk_FUN_01c20e04(ppSVar7,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar4 = *ppSVar7;
  pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(OMNKOCMMBEN_TypeInfo);
  OMNKOCMMBEN___ctor((OMNKOCMMBEN_o *)pNVar5,StringLiteral_21798,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
  if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
    pNVar6 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
      uVar1 = (pSVar4->fields)._size;
      if (uVar1 < (uint)pNVar6->max_length) {
        (pSVar4->fields)._size = uVar1 + 1;
        pNVar6->m_Items[(int)uVar1] = pNVar5;
        thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pNVar5,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar4 = *ppSVar7;
      pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(JDEOKJDONFF_TypeInfo);
      JDEOKJDONFF___ctor((JDEOKJDONFF_o *)pNVar5,StringLiteral_21800,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
      if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
        pNVar6 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
          uVar1 = (pSVar4->fields)._size;
          if (uVar1 < (uint)pNVar6->max_length) {
            (pSVar4->fields)._size = uVar1 + 1;
            pNVar6->m_Items[(int)uVar1] = pNVar5;
            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pNVar5,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar4 = *ppSVar7;
          pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(OEGNNGJNBJD_TypeInfo);
          OEGNNGJNBJD___ctor((OEGNNGJNBJD_o *)pNVar5,StringLiteral_21792,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
          if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
            pNVar6 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
              uVar1 = (pSVar4->fields)._size;
              if (uVar1 < (uint)pNVar6->max_length) {
                (pSVar4->fields)._size = uVar1 + 1;
                pNVar6->m_Items[(int)uVar1] = pNVar5;
                thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (Il2CppObject *)pNVar5,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              pSVar4 = *ppSVar7;
              pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(KECOALKGCOI_TypeInfo);
              KECOALKGCOI___ctor((KECOALKGCOI_o *)pNVar5,StringLiteral_21793,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
              if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                pNVar6 = (pSVar4->fields)._items;
                (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                  uVar1 = (pSVar4->fields)._size;
                  if (uVar1 < (uint)pNVar6->max_length) {
                    (pSVar4->fields)._size = uVar1 + 1;
                    pNVar6->m_Items[(int)uVar1] = pNVar5;
                    thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar4,
                               (Il2CppObject *)pNVar5,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar4 = *ppSVar7;
                  pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(KDGKPFMAMKK_TypeInfo);
                  KDGKPFMAMKK___ctor((KDGKPFMAMKK_o *)pNVar5,StringLiteral_21794,(MethodInfo *)0x0);
                  lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                  if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                    pNVar6 = (pSVar4->fields)._items;
                    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                    if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                      uVar1 = (pSVar4->fields)._size;
                      if (uVar1 < (uint)pNVar6->max_length) {
                        (pSVar4->fields)._size = uVar1 + 1;
                        pNVar6->m_Items[(int)uVar1] = pNVar5;
                        thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar4,
                                   (Il2CppObject *)pNVar5,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      pSVar4 = *ppSVar7;
                      pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(IIJACPOFEEK_TypeInfo);
                      IIJACPOFEEK___ctor((IIJACPOFEEK_o *)pNVar5,StringLiteral_21797,
                                         (MethodInfo *)0x0);
                      lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                      if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                        pNVar6 = (pSVar4->fields)._items;
                        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                        if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                          uVar1 = (pSVar4->fields)._size;
                          if (uVar1 < (uint)pNVar6->max_length) {
                            (pSVar4->fields)._size = uVar1 + 1;
                            pNVar6->m_Items[(int)uVar1] = pNVar5;
                            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar4,
                                       (Il2CppObject *)pNVar5,
                                       *(MethodInfo_26E4DAC **)
                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                          }
                          pSVar4 = *ppSVar7;
                          pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(OOODKCJANAD_TypeInfo);
                          OOODKCJANAD___ctor((OOODKCJANAD_o *)pNVar5,StringLiteral_21796,
                                             (MethodInfo *)0x0);
                          lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                          if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                            pNVar6 = (pSVar4->fields)._items;
                            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                            if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                              uVar1 = (pSVar4->fields)._size;
                              if (uVar1 < (uint)pNVar6->max_length) {
                                (pSVar4->fields)._size = uVar1 + 1;
                                pNVar6->m_Items[(int)uVar1] = pNVar5;
                                thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar4,
                                           (Il2CppObject *)pNVar5,
                                           *(MethodInfo_26E4DAC **)
                                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                              }
                              pSVar4 = *ppSVar7;
                              pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(FLAGGMBLIEL_TypeInfo);
                              FLAGGMBLIEL___ctor((FLAGGMBLIEL_o *)pNVar5,StringLiteral_21791,
                                                 (MethodInfo *)0x0);
                              lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                              if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                                pNVar6 = (pSVar4->fields)._items;
                                (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                                if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                  uVar1 = (pSVar4->fields)._size;
                                  if (uVar1 < (uint)pNVar6->max_length) {
                                    (pSVar4->fields)._size = uVar1 + 1;
                                    pNVar6->m_Items[(int)uVar1] = pNVar5;
                                    thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                                  }
                                  else {
                                    System_Collections_Generic_List<object>__AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar4,
                                               (Il2CppObject *)pNVar5,
                                               *(MethodInfo_26E4DAC **)
                                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                                  }
                                  pSVar4 = *ppSVar7;
                                  __this_02 = (NLGPPDPDGPH_o *)
                                              thunk_FUN_01bda818(NLGPPDPDGPH_TypeInfo);
                                  NLGPPDPDGPH___ctor(__this_02,(MethodInfo *)0x0);
                                  lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                                  if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)
                                                0x0) {
                                    pNVar6 = (pSVar4->fields)._items;
                                    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                                    if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                      uVar1 = (pSVar4->fields)._size;
                                      if (uVar1 < (uint)pNVar6->max_length) {
                                        (pSVar4->fields)._size = uVar1 + 1;
                                        pNVar6->m_Items[(int)uVar1] = (NEFKBLNBOAB_o *)__this_02;
                                        thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,__this_02);
                                      }
                                      else {
                                        System_Collections_Generic_List<object>__AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)
                                                   pSVar4,(Il2CppObject *)__this_02,
                                                   *(MethodInfo_26E4DAC **)
                                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      pSVar4 = *ppSVar7;
                                      pNVar5 = (NEFKBLNBOAB_o *)
                                               thunk_FUN_01bda818(MHGKHENCBFO_TypeInfo);
                                      MHGKHENCBFO___ctor((MHGKHENCBFO_o *)pNVar5,StringLiteral_21795
                                                         ,(MethodInfo *)0x0);
                                      lVar2 = 
                                      Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                                      if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o
                                                     *)0x0) {
                                        pNVar6 = (pSVar4->fields)._items;
                                        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                                        if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                          uVar1 = (pSVar4->fields)._size;
                                          if (uVar1 < (uint)pNVar6->max_length) {
                                            (pSVar4->fields)._size = uVar1 + 1;
                                            pNVar6->m_Items[(int)uVar1] = pNVar5;
                                            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                                          }
                                          else {
                                            System_Collections_Generic_List<object>__AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)
                                                       pSVar4,(Il2CppObject *)pNVar5,
                                                       *(MethodInfo_26E4DAC **)
                                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) +
                                                        0x70));
                                          }
                                          pSVar4 = *ppSVar7;
                                          pNVar5 = (NEFKBLNBOAB_o *)
                                                   thunk_FUN_01bda818(CODBIIHHEEC_TypeInfo);
                                          CODBIIHHEEC___ctor((CODBIIHHEEC_o *)pNVar5,
                                                             StringLiteral_21790,(MethodInfo *)0x0);
                                          lVar2 = 
                                          Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                                          if (pSVar4 != (
                                                  System_Collections_Generic_List_NEFKBLNBOAB__o *)
                                                  0x0) {
                                            pNVar6 = (pSVar4->fields)._items;
                                            (pSVar4->fields)._version =
                                                 (pSVar4->fields)._version + 1;
                                            if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                              uVar1 = (pSVar4->fields)._size;
                                              if (uVar1 < (uint)pNVar6->max_length) {
                                                (pSVar4->fields)._size = uVar1 + 1;
                                                pNVar6->m_Items[(int)uVar1] = pNVar5;
                                                thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,
                                                                   pNVar5);
                                              }
                                              else {
                                                System_Collections_Generic_List<object>__AddWithResize
                                                          ((
                                                  System_Collections_Generic_List_object__o *)pSVar4
                                                  ,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70
                                                   ));
                                              }
                                              pSVar4 = *ppSVar7;
                                              pNVar5 = (NEFKBLNBOAB_o *)
                                                       thunk_FUN_01bda818(OMKKIBHMGFH_TypeInfo);
                                              OMKKIBHMGFH___ctor((OMKKIBHMGFH_o *)pNVar5,
                                                                 StringLiteral_21789,
                                                                 (MethodInfo *)0x0);
                                              lVar2 = 
                                              Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__
                                              ;
                                              if (pSVar4 != (
                                                  System_Collections_Generic_List_NEFKBLNBOAB__o *)
                                                  0x0) {
                                                pNVar6 = (pSVar4->fields)._items;
                                                (pSVar4->fields)._version =
                                                     (pSVar4->fields)._version + 1;
                                                if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                                  uVar1 = (pSVar4->fields)._size;
                                                  if (uVar1 < (uint)pNVar6->max_length) {
                                                    (pSVar4->fields)._size = uVar1 + 1;
                                                    pNVar6->m_Items[(int)uVar1] = pNVar5;
                                                    thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,
                                                                       pNVar5);
                                                    return;
                                                  }
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar4
                                                  ,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70
                                                   ));
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

