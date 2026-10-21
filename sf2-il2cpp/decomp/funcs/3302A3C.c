// AEGOLGIJEBI$$GOGBOEBJPEL @ RVA 0x3302A3C

System_Collections_Generic_List_AEGOLGIJEBI_AOIPPHGJEND__o *
AEGOLGIJEBI__GOGBOEBJPEL(System_String_o **JGHIJMJNJLE,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  int32_t FEDCJPALCBN;
  int32_t iVar7;
  int32_t iVar8;
  System_Collections_Generic_List_AEGOLGIJEBI_AOIPPHGJEND__o *__this;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  AEGOLGIJEBI_AOIPPHGJEND_o *__this_00;
  AEGOLGIJEBI_AOIPPHGJEND_o **ppAVar11;
  MethodInfo *extraout_x1;
  AEGOLGIJEBI_AOIPPHGJEND_array *pAVar12;
  undefined8 *puVar13;
  MethodInfo *in_stack_ffffffffffffff90;
  
  if ((DAT_0456772f & 1) == 0) {
    FUN_01bab630(&AEGOLGIJEBI_AOIPPHGJEND_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>_TypeInfo);
    FUN_01bab630(&StringLiteral_12464);
    FUN_01bab630(&StringLiteral_2456);
    FUN_01bab630(&StringLiteral_2184);
    FUN_01bab630(&StringLiteral_12462);
    FUN_01bab630(&StringLiteral_12463);
    FUN_01bab630(&StringLiteral_2475);
    DAT_0456772f = 1;
    method = extraout_x1;
  }
  __this = (System_Collections_Generic_List_AEGOLGIJEBI_AOIPPHGJEND__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>_TypeInfo,
                              method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>__ctor__);
  if (*JGHIJMJNJLE != (System_String_o *)0x0) {
    bVar6 = System_String__Contains(*JGHIJMJNJLE,StringLiteral_2456,(MethodInfo *)0x0);
    if (bVar6) {
      bVar6 = PCOEHCPGBBG__BDLEIEHBFAD(*JGHIJMJNJLE,(MethodInfo *)0x0);
      while (!bVar6) {
        if (*JGHIJMJNJLE == (System_String_o *)0x0) goto LAB_03402e60;
        FEDCJPALCBN = System_String__IndexOf(*JGHIJMJNJLE,StringLiteral_2456,0,(MethodInfo *)0x0);
        if (FEDCJPALCBN < 0) {
          return __this;
        }
        if ((StringLiteral_2456 == (System_String_o *)0x0) ||
           (*JGHIJMJNJLE == (System_String_o *)0x0)) goto LAB_03402e60;
        iVar7 = System_String__IndexOf
                          (*JGHIJMJNJLE,StringLiteral_2475,
                           (StringLiteral_2456->fields)._stringLength + FEDCJPALCBN,
                           (MethodInfo *)0x0);
        if (iVar7 < 0) {
                    /* try { // try from 03402db0 to 03502db7 has its CatchHandler @ 03402df4 */
                    /* try { // try from 03402db8 to 03502dbb has its CatchHandler @ 03402ddc */
                    /* try { // try from 03402dbc to 03502dbf has its CatchHandler @ 03402dd8 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03402dc0 to 03502dc3 has its CatchHandler @ 034029c0 */
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03402dc4 to 03502dc7 has its CatchHandler @ 03402dd4 */
                    /* try { // try from 03402dc8 to 03502e0b has its CatchHandler @ 034029c0 */
          puVar13 = &StringLiteral_12463;
LAB_03402df0:
                    /* catch() { ... } // from try @ 03402bb8 with catch @ 03402df0 */
          pSVar9 = (System_String_o *)*puVar13;
                    /* catch() { ... } // from try @ 03402db0 with catch @ 03402df4 */
LAB_03402e34:
                    /* try { // try from 03402e34 to 03502e9b has its CatchHandler @ 03402eb0 */
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
          return __this;
        }
                    /* try { // try from 03402bb8 to 03502bdf has its CatchHandler @ 03402df0 */
        if (((StringLiteral_2475 == (System_String_o *)0x0) ||
            (StringLiteral_2456 == (System_String_o *)0x0)) ||
           (*JGHIJMJNJLE == (System_String_o *)0x0)) goto LAB_03402e60;
        iVar2 = (StringLiteral_2475->fields)._stringLength;
        iVar8 = System_String__IndexOf
                          (*JGHIJMJNJLE,StringLiteral_2184,
                           (StringLiteral_2456->fields)._stringLength + FEDCJPALCBN,
                           (MethodInfo *)0x0);
        if (iVar8 < 0) {
                    /* catch() { ... } // from try @ 03402ca8 with catch @ 03402dd0 */
                    /* catch() { ... } // from try @ 03402dc4 with catch @ 03402dd4 */
                    /* catch() { ... } // from try @ 03402dbc with catch @ 03402dd8 */
                    /* catch() { ... } // from try @ 03402db8 with catch @ 03402ddc */
                    /* catch() { ... } // from try @ 03402c7c with catch @ 03402de0 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03402c8c with catch @ 03402de4 */
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 03402c94 with catch @ 03402de8 */
                    /* catch() { ... } // from try @ 03402c14 with catch @ 03402dec */
          puVar13 = &StringLiteral_12462;
          goto LAB_03402df0;
        }
        if ((iVar7 <= FEDCJPALCBN) || (iVar8 <= iVar7)) {
                    /* try { // try from 03402e0c to 03502e0f has its CatchHandler @ 03402e24 */
          pSVar9 = System_String__Concat(StringLiteral_12464,*JGHIJMJNJLE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03402e0c with catch @ 03402e24 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          goto LAB_03402e34;
        }
        if (StringLiteral_2475 == (System_String_o *)0x0) goto LAB_03402e60;
        iVar3 = (StringLiteral_2475->fields)._stringLength;
        pSVar9 = *JGHIJMJNJLE;
        if (iVar3 + iVar7 < iVar8) {
          if (pSVar9 == (System_String_o *)0x0) goto LAB_03402e60;
                    /* try { // try from 03402c14 to 03502c3f has its CatchHandler @ 03402dec */
          pSVar9 = System_String__Substring
                             (pSVar9,FEDCJPALCBN,(iVar7 - FEDCJPALCBN) + iVar3,(MethodInfo *)0x0);
          if (StringLiteral_2475 == (System_String_o *)0x0) goto LAB_03402e60;
          pSVar10 = PCOEHCPGBBG__PHPLPDCBHMB
                              (*JGHIJMJNJLE,FEDCJPALCBN,
                               iVar7 + (StringLiteral_2475->fields)._stringLength + -1,
                               (MethodInfo *)0x0);
          *JGHIJMJNJLE = pSVar10;
          thunk_FUN_01c20e04(JGHIJMJNJLE,pSVar10);
          if (StringLiteral_2184 == (System_String_o *)0x0) goto LAB_03402e60;
          uVar1 = (iVar7 - FEDCJPALCBN) + iVar2;
          iVar2 = iVar8 - uVar1;
                    /* try { // try from 03402c7c to 03502c83 has its CatchHandler @ 03402de0 */
          pSVar10 = PCOEHCPGBBG__PHPLPDCBHMB
                              (*JGHIJMJNJLE,iVar2,
                               iVar8 + ~uVar1 + (StringLiteral_2184->fields)._stringLength,
                               (MethodInfo *)0x0);
                    /* try { // try from 03402c8c to 03502c93 has its CatchHandler @ 03402de4 */
          *JGHIJMJNJLE = pSVar10;
                    /* try { // try from 03402c94 to 03502c9f has its CatchHandler @ 03402de8 */
          thunk_FUN_01c20e04(JGHIJMJNJLE,pSVar10);
                    /* try { // try from 03402ca8 to 03502cb3 has its CatchHandler @ 03402dd0 */
          if (((StringLiteral_2456 == (System_String_o *)0x0) || (pSVar9 == (System_String_o *)0x0))
             || (StringLiteral_2475 == (System_String_o *)0x0)) goto LAB_03402e60;
          iVar7 = (StringLiteral_2456->fields)._stringLength;
                    /* try { // try from 03402cb4 to 03502daf has its CatchHandler @ 034029c0 */
          iVar3 = (pSVar9->fields)._stringLength;
          iVar4 = (StringLiteral_2475->fields)._stringLength;
          __this_00 = (AEGOLGIJEBI_AOIPPHGJEND_o *)
                      thunk_FUN_01bda818(AEGOLGIJEBI_AOIPPHGJEND_TypeInfo);
          AEGOLGIJEBI_AOIPPHGJEND___ctor
                    (__this_00,pSVar9,iVar7,iVar3 - iVar4,0,iVar3 + -1,FEDCJPALCBN,iVar2 + -1,
                     in_stack_ffffffffffffff90);
          lVar5 = Method_System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>_Add__;
          if (__this == (System_Collections_Generic_List_AEGOLGIJEBI_AOIPPHGJEND__o *)0x0)
          goto LAB_03402e60;
          pAVar12 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pAVar12 == (AEGOLGIJEBI_AOIPPHGJEND_array *)0x0) goto LAB_03402e60;
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pAVar12->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pAVar12->m_Items[(int)uVar1] = __this_00;
            ppAVar11 = pAVar12->m_Items + (int)uVar1;
            goto LAB_03402d78;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        else {
          if (StringLiteral_2184 == (System_String_o *)0x0) goto LAB_03402e60;
          __this_00 = (AEGOLGIJEBI_AOIPPHGJEND_o *)
                      PCOEHCPGBBG__PHPLPDCBHMB
                                (pSVar9,FEDCJPALCBN,
                                 iVar8 + (StringLiteral_2184->fields)._stringLength + -1,
                                 (MethodInfo *)0x0);
          *JGHIJMJNJLE = (System_String_o *)__this_00;
          ppAVar11 = (AEGOLGIJEBI_AOIPPHGJEND_o **)JGHIJMJNJLE;
LAB_03402d78:
          thunk_FUN_01c20e04(ppAVar11,__this_00);
        }
        bVar6 = PCOEHCPGBBG__BDLEIEHBFAD(*JGHIJMJNJLE,(MethodInfo *)0x0);
      }
    }
    return __this;
  }
LAB_03402e60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

