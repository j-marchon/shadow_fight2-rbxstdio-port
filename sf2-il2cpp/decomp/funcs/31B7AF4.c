// ClanLogoImage$$FKFPKOGCLFP @ RVA 0x31B7AF4

void ClanLogoImage__FKFPKOGCLFP
               (ClanLogoImage_o *__this,System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_String_array *pSVar6;
  JMDPBFOCHHP_o *pJVar7;
  System_Collections_Generic_List_string__o *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *__this_00;
  Il2CppObject *pIVar10;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar11;
  System_String_o **ppSVar12;
  System_String_array **ppSVar13;
  JMDPBFOCHHP_ONCGGLEAIFH_o *pJVar14;
  int iVar15;
  ulong uVar16;
  
  if ((DAT_04566bc3 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__);
    FUN_01bab630(&StringLiteral_4392);
    DAT_04566bc3 = 1;
  }
  ppSVar12 = &(__this->fields).BJFFFHJKHIF;
  bVar2 = System_String__op_Equality(*ppSVar12,NEJHIEOHMCF,(MethodInfo *)0x0);
  if (bVar2) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b7ad8 with catch @ 032b7b94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b7ac8 with catch @ 032b7b98
                        */
    return;
  }
  (__this->fields).BJFFFHJKHIF = NEJHIEOHMCF;
  thunk_FUN_01c20e04(ppSVar12,NEJHIEOHMCF);
  ppSVar13 = &(__this->fields).HACKNLKPIPL;
                    /* try { // try from 032b7bb0 to 033b7bb3 has its CatchHandler @ 032b7bdc */
  *ppSVar13 = (System_String_array *)0x0;
                    /* try { // try from 032b7bb4 to 033b7beb has its CatchHandler @ 032b7a30 */
  thunk_FUN_01c20e04(ppSVar13,0);
  pNVar4 = (__this->fields)._baseLogoImage;
  (__this->fields).GPCPMFCFAMG = -1;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b7bb0 with catch @ 032b7bdc */
    Util__IHPDCBOFHPA(pUVar5,true,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._backgroundImage;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 032b7bec to 033b7bf3 has its CatchHandler @ 032b7c08 */
      pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
                    /* try { // try from 032b7bf4 to 033b7bff has its CatchHandler @ 032b7a30 */
      Util__IHPDCBOFHPA(pUVar5,false,(MethodInfo *)0x0);
                    /* try { // try from 032b7c00 to 033b7c07 has its CatchHandler @ 032b7c08 */
      pNVar4 = (__this->fields)._armsImage;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b7bec with catch @ 032b7c08
                       catch(type#2 @ 00000000) { ... } // from try @ 032b7c00 with catch @ 032b7c08
                        */
        pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(pUVar5,false,(MethodInfo *)0x0);
        bVar2 = System_String__IsNullOrEmpty(NEJHIEOHMCF,(MethodInfo *)0x0);
        if (!bVar2) {
          if (NEJHIEOHMCF == (System_String_o *)0x0) goto LAB_032b7ec4;
          pSVar6 = System_String__Split(NEJHIEOHMCF,0x2c,0,(MethodInfo *)0x0);
          *ppSVar13 = pSVar6;
          thunk_FUN_01c20e04(ppSVar13,pSVar6);
          if (*ppSVar13 == (System_String_array *)0x0) goto LAB_032b7ec4;
          if ((*ppSVar13)->max_length != 0) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pJVar7 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if (((pJVar7 == (JMDPBFOCHHP_o *)0x0) ||
                (pJVar11 = (pJVar7->fields)._LGFNDLOCGPB_k__BackingField,
                pJVar11 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) ||
               (pSVar6 = *ppSVar13, pSVar6 == (System_String_array *)0x0)) goto LAB_032b7ec4;
            if ((int)pSVar6->max_length == 0) {
LAB_032b7ec8:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pJVar14 = (pJVar11->fields).OOFDKPAOGFA;
            iVar3 = PCOEHCPGBBG__JBGCINPPLAC(pSVar6->m_Items[0],0,(MethodInfo *)0x0);
            if (-1 < iVar3) {
              if ((pJVar14 == (JMDPBFOCHHP_ONCGGLEAIFH_o *)0x0) ||
                 (pSVar8 = (pJVar14->fields).DOALOOOJNPD,
                 pSVar8 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_032b7ec4;
              if (iVar3 < (pSVar8->fields)._size) {
                pNVar4 = (__this->fields)._baseLogoImage;
                pSVar9 = (System_String_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar8,iVar3,
                                    Method_System_Collections_Generic_List<string>_get_Item__);
                if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                  Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,pSVar9,(MethodInfo *)0x0);
                  pSVar6 = *ppSVar13;
                  if (pSVar6 != (System_String_array *)0x0) {
                    uVar16 = 0;
                    do {
                      uVar1 = (uint)pSVar6->max_length;
                      if ((long)(int)uVar1 <= (long)uVar16) {
                        return;
                      }
                      if (uVar1 <= uVar16) goto LAB_032b7ec8;
                    /* try { // try from 032b7d28 to 033b7e5b has its CatchHandler @ 032b7d28
                       catch() { ... } // from try @ 032b7d28 with catch @ 032b7d28
                       catch() { ... } // from try @ 032b7ff4 with catch @ 032b7d28
                       catch() { ... } // from try @ 032b8058 with catch @ 032b7d28
                       catch() { ... } // from try @ 032b80a4 with catch @ 032b7d28
                       catch() { ... } // from try @ 032b811c with catch @ 032b7d28 */
                      iVar3 = PCOEHCPGBBG__JBGCINPPLAC(pSVar6->m_Items[uVar16],0,(MethodInfo *)0x0);
                      if (-1 < iVar3) {
                        iVar15 = (int)uVar16;
                        if (iVar15 == 2) {
                          __this_00 = (pJVar14->fields).DFIBIHHGIPG;
                          if (__this_00 ==
                              (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0)
                          break;
                          if (iVar3 < (__this_00->fields)._size) {
                            pIVar10 = System_Collections_Generic_List<object>__get_Item
                                                ((System_Collections_Generic_List_object__o *)
                                                 __this_00,iVar3,
                                                 Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__
                                                );
                            if ((pIVar10 == (Il2CppObject *)0x0) ||
                               (pNVar4 = (__this->fields)._backgroundImage,
                               pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) break;
                            (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                                      (*(undefined4 *)&pIVar10[1].klass,
                                       *(undefined4 *)((long)&pIVar10[1].klass + 4),
                                       *(undefined4 *)&pIVar10[1].monitor,
                                       *(undefined4 *)((long)&pIVar10[1].monitor + 4),pNVar4,
                                       (pNVar4->klass->vtable)._23_set_color.method);
                            __this_00 = (pJVar14->fields).DFIBIHHGIPG;
                            if (__this_00 ==
                                (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0)
                            break;
                          }
                          if (iVar3 < (__this_00->fields)._size) {
                            pIVar10 = System_Collections_Generic_List<object>__get_Item
                                                ((System_Collections_Generic_List_object__o *)
                                                 __this_00,iVar3,
                                                 Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__
                                                );
                            if ((pIVar10 == (Il2CppObject *)0x0) ||
                               (pNVar4 = (__this->fields)._armsImage,
                               pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) break;
                            (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                                      (*(undefined4 *)&pIVar10[2].klass,
                                       *(undefined4 *)((long)&pIVar10[2].klass + 4),
                                       *(undefined4 *)&pIVar10[2].monitor,
                                       *(undefined4 *)((long)&pIVar10[2].monitor + 4),pNVar4,
                                       (pNVar4->klass->vtable)._23_set_color.method);
                          }
                        }
                        else if (iVar15 == 1) {
                          pSVar8 = (pJVar14->fields).KCDBFFCLCOG;
                          if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) break;
                          if (iVar3 < (pSVar8->fields)._size) {
                            pNVar4 = (__this->fields)._armsImage;
                            if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) break;
                            pUVar5 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0)
                            ;
                            Util__IHPDCBOFHPA(pUVar5,true,(MethodInfo *)0x0);
                            pSVar8 = (pJVar14->fields).KCDBFFCLCOG;
                    /* try { // try from 032b7e5c to 033b7e63 has its CatchHandler @ 032b8090 */
                            if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) break;
                            pNVar4 = (__this->fields)._armsImage;
LAB_032b7e64:
                            pSVar9 = (System_String_o *)
                                     System_Collections_Generic_List<object>__get_Item
                                               ((System_Collections_Generic_List_object__o *)pSVar8,
                                                iVar3,
                                                Method_System_Collections_Generic_List<string>_get_Item__
                                               );
                            if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) break;
                            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                      (pNVar4,pSVar9,(MethodInfo *)0x0);
                          }
                        }
                        else if (iVar15 == 0) {
                          pSVar8 = (pJVar14->fields).MHLCLANFAAO;
                          if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) break;
                          if (iVar3 < (pSVar8->fields)._size) {
                            pNVar4 = (__this->fields)._backgroundImage;
                            if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                              pUVar5 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pNVar4,
                                                  (MethodInfo *)0x0);
                              Util__IHPDCBOFHPA(pUVar5,true,(MethodInfo *)0x0);
                              pSVar8 = (pJVar14->fields).MHLCLANFAAO;
                              if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
                                pNVar4 = (__this->fields)._backgroundImage;
                                goto LAB_032b7e64;
                              }
                            }
                            break;
                          }
                        }
                      }
                      pSVar6 = *ppSVar13;
                      uVar16 = uVar16 + 1;
                    } while (pSVar6 != (System_String_array *)0x0);
                  }
                }
                goto LAB_032b7ec4;
              }
            }
          }
        }
                    /* try { // try from 032b7e94 to 033b7e97 has its CatchHandler @ 032b807c */
        pNVar4 = (__this->fields)._baseLogoImage;
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 032b7eb8 to 033b7ebf has its CatchHandler @ 032b8070 */
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,StringLiteral_4392,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
LAB_032b7ec4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

