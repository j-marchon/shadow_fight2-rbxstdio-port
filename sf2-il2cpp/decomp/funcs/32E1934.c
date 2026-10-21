// DOPEEDABNEK$$CAJMJMJHCAD @ RVA 0x32E1934

/* WARNING: Removing unreachable block (ram,0x033e22cc) */
/* WARNING: Removing unreachable block (ram,0x033e23d8) */

void DOPEEDABNEK__CAJMJMJHCAD
               (DOPEEDABNEK_o *__this,System_Xml_XmlNode_o *CJLCPHBNHFK,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint32_t uVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  MLNACIEDMNN_o *__this_00;
  HOOAAGABMBL_o *pHVar7;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Predicate_HOOAAGABMBL__o **ppSVar9;
  long lVar10;
  HOOAAGABMBL_array *pHVar11;
  ulong uVar12;
  int *piVar13;
  HOOAAGABMBL_o **ppHVar14;
  System_Predicate_HOOAAGABMBL__o *match;
  System_String_o *pSVar15;
  
  if ((DAT_045675ef & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_DMBBJNJHNPN__);
    FUN_01bab630(&DOPEEDABNEK_<>c_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_11073);
    FUN_01bab630(&StringLiteral_4617);
    FUN_01bab630(&StringLiteral_3076);
                    /* try { // try from 033e1a04 to 034e1a2b has its CatchHandler @ 033e1d70 */
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_11751);
    FUN_01bab630(&StringLiteral_852);
    FUN_01bab630(&StringLiteral_10147);
    FUN_01bab630(&StringLiteral_6589);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_7066);
    DAT_045675ef = 1;
  }
  if (CJLCPHBNHFK == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
                    /* try { // try from 033e1a60 to 034e1a87 has its CatchHandler @ 033e1d68 */
  plVar5 = (long *)(*(CJLCPHBNHFK->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._13_get_ChildNodes.method);
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar10 = *plVar5;
                    /* try { // try from 033e1ac8 to 034e1afb has its CatchHandler @ 033e1d6c */
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e1b08 to 034e1b23 has its CatchHandler @ 033e1d5c */
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033e1b0c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e1b0c:
      uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar12 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
        if (plVar5 == (long *)0x0) goto LAB_033e22c0;
        lVar10 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_033e2298;
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_033e2280;
      }
      lVar10 = *plVar5;
                    /* try { // try from 033e1b24 to 034e1b37 has its CatchHandler @ 033e1d54 */
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e1b68 to 034e1b83 has its CatchHandler @ 033e1d48 */
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_033e1b6c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
                    /* try { // try from 033e1b4c to 034e1b5f has its CatchHandler @ 033e1d58 */
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e1b6c:
      AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 033e1b8c to 034e1b93 has its CatchHandler @ 033e1d38 */
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033e1ba8 to 034e1bb3 has its CatchHandler @ 033e1d2c */
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
      }
      __this_00 = (__this->fields).PLAKLHDCHLL;
      if (__this_00 == (MLNACIEDMNN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 033e1bb4 to 034e1bbf has its CatchHandler @ 033e1d44 */
      pHVar7 = MLNACIEDMNN__EOHMFJFFFIN(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
      lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
      if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
        pSVar8 = (__this->fields).DIGBEFKAPHM;
                    /* try { // try from 033e1bcc to 034e1bd3 has its CatchHandler @ 033e1d3c */
        if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar11 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033e1be8 to 034e1c5f has its CatchHandler @ 033e1d4c */
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pHVar11->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pHVar11->m_Items[(int)uVar2] = pHVar7;
          thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pHVar7,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        pSVar15 = (pHVar7->fields)._GMPAEDFIIHF_k__BackingField;
        uVar4 = <PrivateImplementationDetails>__ComputeStringHash(pSVar15,(MethodInfo *)0x0);
        if (uVar4 < 0x9d9dc59a) {
          if (uVar4 < 0x84b84175) {
            if (uVar4 == 0x84b84174) {
              bVar3 = System_String__op_Equality(pSVar15,StringLiteral_3076,(MethodInfo *)0x0);
              lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
              if (bVar3) {
                pSVar8 = (__this->fields).EIFDIMKJDMN;
                if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pHVar11 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar8->fields)._size;
                if (uVar2 < (uint)pHVar11->max_length) {
                  (pSVar8->fields)._size = uVar2 + 1;
                  pHVar11->m_Items[(int)uVar2] = pHVar7;
                  thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pHVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else {
                    /* try { // try from 033e1c60 to 034e1cf3 has its CatchHandler @ 033e16b8 */
              if ((uVar4 == 0x1c5c36fb) &&
                 (bVar3 = System_String__op_Equality(pSVar15,StringLiteral_6589,(MethodInfo *)0x0),
                 lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__, bVar3)) {
                pSVar8 = (__this->fields).CLNAOMIIBLH;
                if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pHVar11 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar8->fields)._size;
                if (uVar2 < (uint)pHVar11->max_length) {
                  (pSVar8->fields)._size = uVar2 + 1;
                  pHVar11->m_Items[(int)uVar2] = pHVar7;
                  thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pHVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
          else {
                    /* catch() { ... } // from try @ 033e1b4c with catch @ 033e1d58 */
                    /* catch() { ... } // from try @ 033e1b08 with catch @ 033e1d5c */
                    /* catch() { ... } // from try @ 033e1cf8 with catch @ 033e1d60 */
                    /* catch() { ... } // from try @ 033e1cf4 with catch @ 033e1d64 */
            if (uVar4 == 0x93d79fb2) {
              bVar3 = System_String__op_Equality(pSVar15,StringLiteral_4617,(MethodInfo *)0x0);
              lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
              if (bVar3) {
                pSVar8 = (__this->fields).AGPCBLCIHOM;
                if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pHVar11 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar8->fields)._size;
                if (uVar2 < (uint)pHVar11->max_length) {
                  (pSVar8->fields)._size = uVar2 + 1;
                  pHVar11->m_Items[(int)uVar2] = pHVar7;
                  thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pHVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else {
                    /* catch() { ... } // from try @ 033e1a60 with catch @ 033e1d68 */
                    /* catch() { ... } // from try @ 033e1ac8 with catch @ 033e1d6c */
                    /* catch() { ... } // from try @ 033e1a04 with catch @ 033e1d70 */
                    /* try { // try from 033e1d88 to 034e1d8b has its CatchHandler @ 033e1d98 */
              if ((uVar4 == 0x9d9dc599) &&
                 (bVar3 = System_String__op_Equality(pSVar15,StringLiteral_7066,(MethodInfo *)0x0),
                 lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__, bVar3)) {
                pSVar8 = (__this->fields).JKLDGCJAGCF;
                    /* catch() { ... } // from try @ 033e1d88 with catch @ 033e1d98 */
                if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pHVar11 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar8->fields)._size;
                if (uVar2 < (uint)pHVar11->max_length) {
                  (pSVar8->fields)._size = uVar2 + 1;
                  pHVar11->m_Items[(int)uVar2] = pHVar7;
                    /* try { // try from 033e1dd8 to 034e1dff has its CatchHandler @ 033e1e14 */
                  thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pHVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        }
        else if (uVar4 < 0xb960112d) {
          if (uVar4 == 0xb7c10361) {
            bVar3 = System_String__op_Equality(pSVar15,StringLiteral_14870,(MethodInfo *)0x0);
            lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
            if (bVar3) {
              pSVar8 = (__this->fields).GNCBIPJFEGB;
              if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pHVar11 = (pSVar8->fields)._items;
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
              if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar8->fields)._size;
              if (uVar2 < (uint)pHVar11->max_length) {
                (pSVar8->fields)._size = uVar2 + 1;
                pHVar11->m_Items[(int)uVar2] = pHVar7;
                thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (Il2CppObject *)pHVar7,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
                    /* try { // try from 033e1cf4 to 034e1cf7 has its CatchHandler @ 033e1d64 */
                    /* try { // try from 033e1cf8 to 034e1cfb has its CatchHandler @ 033e1d60 */
                    /* try { // try from 033e1cfc to 034e1d03 has its CatchHandler @ 033e1d50 */
                    /* try { // try from 033e1d04 to 034e1d07 has its CatchHandler @ 033e1d40 */
            if ((uVar4 == 0xb960112c) &&
               (bVar3 = System_String__op_Equality(pSVar15,StringLiteral_8772,(MethodInfo *)0x0),
               lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__, bVar3)) {
                    /* try { // try from 033e1d08 to 034e1d0b has its CatchHandler @ 033e1d34 */
              pSVar8 = (__this->fields).OGOPJDCOPDF;
                    /* try { // try from 033e1d0c to 034e1d0f has its CatchHandler @ 033e1d30 */
              if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* try { // try from 033e1d10 to 034e1d13 has its CatchHandler @ 033e16b8 */
                    /* try { // try from 033e1d14 to 034e1d17 has its CatchHandler @ 033e1d28 */
              pHVar11 = (pSVar8->fields)._items;
                    /* try { // try from 033e1d18 to 034e1d1b has its CatchHandler @ 033e1d24 */
                    /* try { // try from 033e1d1c to 034e1d87 has its CatchHandler @ 033e16b8 */
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                    /* catch() { ... } // from try @ 033e1d18 with catch @ 033e1d24 */
              if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* catch() { ... } // from try @ 033e1d14 with catch @ 033e1d28 */
              uVar2 = (pSVar8->fields)._size;
                    /* catch() { ... } // from try @ 033e1ba8 with catch @ 033e1d2c */
                    /* catch() { ... } // from try @ 033e1d0c with catch @ 033e1d30 */
                    /* catch() { ... } // from try @ 033e1d08 with catch @ 033e1d34 */
              if (uVar2 < (uint)pHVar11->max_length) {
                    /* catch() { ... } // from try @ 033e1b8c with catch @ 033e1d38 */
                    /* catch() { ... } // from try @ 033e1bcc with catch @ 033e1d3c */
                    /* catch() { ... } // from try @ 033e1d04 with catch @ 033e1d40 */
                (pSVar8->fields)._size = uVar2 + 1;
                    /* catch() { ... } // from try @ 033e1bb4 with catch @ 033e1d44 */
                pHVar11->m_Items[(int)uVar2] = pHVar7;
                    /* catch() { ... } // from try @ 033e1b68 with catch @ 033e1d48 */
                    /* catch() { ... } // from try @ 033e1be8 with catch @ 033e1d4c */
                    /* catch() { ... } // from try @ 033e1cfc with catch @ 033e1d50 */
                thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                    /* catch() { ... } // from try @ 033e1b24 with catch @ 033e1d54 */
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (Il2CppObject *)pHVar7,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        else if (uVar4 == 0xcb2ec7a2) {
          bVar3 = System_String__op_Equality(pSVar15,StringLiteral_11017,(MethodInfo *)0x0);
          lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
          if (bVar3) {
            pSVar8 = (__this->fields).DLDBBBCMJOC;
            if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar11 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pHVar11->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pHVar11->m_Items[(int)uVar2] = pHVar7;
              thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pHVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
        }
        else if (uVar4 == 0xd87ca2c0) {
          bVar3 = System_String__op_Equality(pSVar15,StringLiteral_11751,(MethodInfo *)0x0);
          lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
          if (bVar3) {
            pSVar8 = (__this->fields).BHABLBFPPAI;
            if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar11 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pHVar11->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pHVar11->m_Items[(int)uVar2] = pHVar7;
              thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pHVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
        }
        else {
                    /* try { // try from 033e1e00 to 034e1e0b has its CatchHandler @ 033e16b8 */
                    /* try { // try from 033e1e0c to 034e1e13 has its CatchHandler @ 033e1e14 */
                    /* catch() { ... } // from try @ 033e1dd8 with catch @ 033e1e14
                       catch() { ... } // from try @ 033e1e0c with catch @ 033e1e14 */
          if ((uVar4 == 0xea117bb0) &&
             (bVar3 = System_String__op_Equality(pSVar15,StringLiteral_11073,(MethodInfo *)0x0),
             lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__, bVar3)) {
            pSVar8 = (__this->fields).FDLFEJAEDGA;
            if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar11 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pHVar11->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pHVar11->m_Items[(int)uVar2] = pHVar7;
              thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pHVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
            }
            bVar3 = JOOGMNNBBHI__DFOPHIKFMHM(pHVar7,(MethodInfo *)0x0);
            lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
            if (bVar3) {
              pSVar8 = (__this->fields).JHGBLBKPIBK;
              if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pHVar11 = (pSVar8->fields)._items;
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
              if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar8->fields)._size;
              if (uVar2 < (uint)pHVar11->max_length) {
                (pSVar8->fields)._size = uVar2 + 1;
                pHVar11->m_Items[(int)uVar2] = pHVar7;
                thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (Il2CppObject *)pHVar7,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
            bVar3 = PCOEHCPGBBG__EDHHJAMCOJH
                              ((pHVar7->fields)._CIEBCKIBJHL_k__BackingField,(MethodInfo *)0x0);
            if (bVar3) {
              pSVar15 = System_String__Concat
                                  (StringLiteral_10147,(pHVar7->fields)._COIPKAKHDFP_k__BackingField
                                   ,StringLiteral_852,(MethodInfo *)0x0);
              KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar15,(MethodInfo *)0x0);
            }
            else {
              __this_01 = (System_Collections_Generic_HashSet_object__o *)
                          (__this->fields).HEOLJOBCFPB;
              if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_HashSet<object>__Add
                        (__this_01,(Il2CppObject *)(pHVar7->fields)._CIEBCKIBJHL_k__BackingField,
                         Method_System_Collections_Generic_HashSet<string>_Add__);
            }
          }
        }
      }
    } while( true );
  }
  goto LAB_033e23d0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_033e2280:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_033e22b4;
    }
  }
LAB_033e2298:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033e22b4:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_033e22c0:
  pSVar8 = (__this->fields).AGPCBLCIHOM;
  if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo);
  }
  match = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__50_0;
  if (match == (System_Predicate_HOOAAGABMBL__o *)0x0) {
    if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo);
    }
    match = (System_Predicate_HOOAAGABMBL__o *)
            thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar9 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__50_0;
    *ppSVar9 = match;
    thunk_FUN_01c20e04(ppSVar9,match);
  }
  if (pSVar8 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar7 = (HOOAAGABMBL_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)pSVar8,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    ppHVar14 = &(__this->fields)._PCFMNDLDEMC_k__BackingField;
    *ppHVar14 = pHVar7;
    thunk_FUN_01c20e04(ppHVar14,pHVar7);
    return;
  }
LAB_033e23d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

