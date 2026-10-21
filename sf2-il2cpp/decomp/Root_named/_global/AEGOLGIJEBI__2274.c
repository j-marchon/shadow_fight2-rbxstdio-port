// TypeDefIndex 2274
// Namespace: 
// [Extension]
// public static class AEGOLGIJEBI
// Fields:
//   private const string CMLMGPGLHDK = "<strike";
//   private const string LOCKMKJAGHA = ">";
//   private const string MEEFLNGACHO = "</strike>";
//   private const string LCEPOIMLEMN = "<quad";
//   private const string CHPHJAGHAPO = ">";
//   private const string NBJNAKBDFPC = "<>";

// ===== public static string FPLAOOJFKGJ(string JGHIJMJNJLE)  [RVA 0x3302810]
// AEGOLGIJEBI$$FPLAOOJFKGJ @ RVA 0x3302810

System_String_o * AEGOLGIJEBI__FPLAOOJFKGJ(System_String_o *JGHIJMJNJLE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = JGHIJMJNJLE;
  if ((DAT_0456772e & 1) == 0) {
    FUN_01bab630(&StringLiteral_2421/*"<quad"*/);
    FUN_01bab630(&StringLiteral_562/*" width=1 "*/);
    FUN_01bab630(&StringLiteral_529/*" size=1 "*/);
    FUN_01bab630(&StringLiteral_528/*" size="*/);
    FUN_01bab630(&StringLiteral_561/*" width="*/);
    FUN_01bab630(&StringLiteral_2475/*">"*/);
    auVar3 = FUN_01bab630(&StringLiteral_1497/*"/>"*/);
    DAT_0456772e = 1;
  }
  if (JGHIJMJNJLE != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(JGHIJMJNJLE,StringLiteral_2421/*"<quad"*/,(MethodInfo *)0x0);
    if (bVar1) {
      method_00 = (MethodInfo *)0x0;
      pSVar2 = System_String__Replace
                         (JGHIJMJNJLE,StringLiteral_1497/*"/>"*/,StringLiteral_2475/*">"*/,(MethodInfo *)0x0);
      pSVar2 = AEGOLGIJEBI__HFNAALDHDFI(pSVar2,StringLiteral_529/*" size=1 "*/,StringLiteral_528/*" size="*/,method_00);
      pSVar2 = AEGOLGIJEBI__HFNAALDHDFI(pSVar2,StringLiteral_562/*" width=1 "*/,StringLiteral_561/*" width="*/,method_00);
      return pSVar2;
    }
    return JGHIJMJNJLE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public static List<AEGOLGIJEBI.AOIPPHGJEND> GOGBOEBJPEL(ref string JGHIJMJNJLE)  [RVA 0x3302A3C]
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
    FUN_01bab630(&StringLiteral_12464/*"Strike: incorrect "<strike" <=> "</strike>" order:\n"*/);
    FUN_01bab630(&StringLiteral_2456/*"<strike"*/);
    FUN_01bab630(&StringLiteral_2184/*"</strike>"*/);
    FUN_01bab630(&StringLiteral_12462/*"Strike: didn't find ending: </strike>"*/);
    FUN_01bab630(&StringLiteral_12463/*"Strike: didn't find ending: >"*/);
    FUN_01bab630(&StringLiteral_2475/*">"*/);
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
    bVar6 = System_String__Contains(*JGHIJMJNJLE,StringLiteral_2456/*"<strike"*/,(MethodInfo *)0x0);
    if (bVar6) {
      bVar6 = PCOEHCPGBBG__BDLEIEHBFAD(*JGHIJMJNJLE,(MethodInfo *)0x0);
      while (!bVar6) {
        if (*JGHIJMJNJLE == (System_String_o *)0x0) goto LAB_03402e60;
        FEDCJPALCBN = System_String__IndexOf(*JGHIJMJNJLE,StringLiteral_2456/*"<strike"*/,0,(MethodInfo *)0x0);
        if (FEDCJPALCBN < 0) {
          return __this;
        }
        if ((StringLiteral_2456/*"<strike"*/ == (System_String_o *)0x0) ||
           (*JGHIJMJNJLE == (System_String_o *)0x0)) goto LAB_03402e60;
        iVar7 = System_String__IndexOf
                          (*JGHIJMJNJLE,StringLiteral_2475/*">"*/,
                           (StringLiteral_2456/*"<strike"*/->fields)._stringLength + FEDCJPALCBN,
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
          puVar13 = &StringLiteral_12463/*"Strike: didn't find ending: >"*/;
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
        if (((StringLiteral_2475/*">"*/ == (System_String_o *)0x0) ||
            (StringLiteral_2456/*"<strike"*/ == (System_String_o *)0x0)) ||
           (*JGHIJMJNJLE == (System_String_o *)0x0)) goto LAB_03402e60;
        iVar2 = (StringLiteral_2475/*">"*/->fields)._stringLength;
        iVar8 = System_String__IndexOf
                          (*JGHIJMJNJLE,StringLiteral_2184/*"</strike>"*/,
                           (StringLiteral_2456/*"<strike"*/->fields)._stringLength + FEDCJPALCBN,
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
          puVar13 = &StringLiteral_12462/*"Strike: didn't find ending: </strike>"*/;
          goto LAB_03402df0;
        }
        if ((iVar7 <= FEDCJPALCBN) || (iVar8 <= iVar7)) {
                    /* try { // try from 03402e0c to 03502e0f has its CatchHandler @ 03402e24 */
          pSVar9 = System_String__Concat(StringLiteral_12464/*"Strike: incorrect "<strike" <=> "</strike>" order:\n"*/,*JGHIJMJNJLE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03402e0c with catch @ 03402e24 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          goto LAB_03402e34;
        }
        if (StringLiteral_2475/*">"*/ == (System_String_o *)0x0) goto LAB_03402e60;
        iVar3 = (StringLiteral_2475/*">"*/->fields)._stringLength;
        pSVar9 = *JGHIJMJNJLE;
        if (iVar3 + iVar7 < iVar8) {
          if (pSVar9 == (System_String_o *)0x0) goto LAB_03402e60;
                    /* try { // try from 03402c14 to 03502c3f has its CatchHandler @ 03402dec */
          pSVar9 = System_String__Substring
                             (pSVar9,FEDCJPALCBN,(iVar7 - FEDCJPALCBN) + iVar3,(MethodInfo *)0x0);
          if (StringLiteral_2475/*">"*/ == (System_String_o *)0x0) goto LAB_03402e60;
          pSVar10 = PCOEHCPGBBG__PHPLPDCBHMB
                              (*JGHIJMJNJLE,FEDCJPALCBN,
                               iVar7 + (StringLiteral_2475/*">"*/->fields)._stringLength + -1,
                               (MethodInfo *)0x0);
          *JGHIJMJNJLE = pSVar10;
          thunk_FUN_01c20e04(JGHIJMJNJLE,pSVar10);
          if (StringLiteral_2184/*"</strike>"*/ == (System_String_o *)0x0) goto LAB_03402e60;
          uVar1 = (iVar7 - FEDCJPALCBN) + iVar2;
          iVar2 = iVar8 - uVar1;
                    /* try { // try from 03402c7c to 03502c83 has its CatchHandler @ 03402de0 */
          pSVar10 = PCOEHCPGBBG__PHPLPDCBHMB
                              (*JGHIJMJNJLE,iVar2,
                               iVar8 + ~uVar1 + (StringLiteral_2184/*"</strike>"*/->fields)._stringLength,
                               (MethodInfo *)0x0);
                    /* try { // try from 03402c8c to 03502c93 has its CatchHandler @ 03402de4 */
          *JGHIJMJNJLE = pSVar10;
                    /* try { // try from 03402c94 to 03502c9f has its CatchHandler @ 03402de8 */
          thunk_FUN_01c20e04(JGHIJMJNJLE,pSVar10);
                    /* try { // try from 03402ca8 to 03502cb3 has its CatchHandler @ 03402dd0 */
          if (((StringLiteral_2456/*"<strike"*/ == (System_String_o *)0x0) || (pSVar9 == (System_String_o *)0x0))
             || (StringLiteral_2475/*">"*/ == (System_String_o *)0x0)) goto LAB_03402e60;
          iVar7 = (StringLiteral_2456/*"<strike"*/->fields)._stringLength;
                    /* try { // try from 03402cb4 to 03502daf has its CatchHandler @ 034029c0 */
          iVar3 = (pSVar9->fields)._stringLength;
          iVar4 = (StringLiteral_2475/*">"*/->fields)._stringLength;
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
          if (StringLiteral_2184/*"</strike>"*/ == (System_String_o *)0x0) goto LAB_03402e60;
          __this_00 = (AEGOLGIJEBI_AOIPPHGJEND_o *)
                      PCOEHCPGBBG__PHPLPDCBHMB
                                (pSVar9,FEDCJPALCBN,
                                 iVar8 + (StringLiteral_2184/*"</strike>"*/->fields)._stringLength + -1,
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


// ===== public static List<AEGOLGIJEBI.MCGKJAGBFKP> HJDNHACEPJI(ref string JGHIJMJNJLE)  [RVA 0x3302F04]
// AEGOLGIJEBI$$HJDNHACEPJI @ RVA 0x3302F04

System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *
AEGOLGIJEBI__HJDNHACEPJI(System_String_o **JGHIJMJNJLE,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int32_t EJABGOLHHBC;
  int32_t iVar5;
  System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *__this;
  System_String_o *pSVar6;
  AEGOLGIJEBI_MCGKJAGBFKP_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar7;
  MethodInfo *in_x6;
  AEGOLGIJEBI_MCGKJAGBFKP_array *pAVar8;
  
  if ((DAT_04567730 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_TypeInfo);
    FUN_01bab630(&AEGOLGIJEBI_MCGKJAGBFKP_TypeInfo);
    FUN_01bab630(&StringLiteral_2421/*"<quad"*/);
    FUN_01bab630(&StringLiteral_10627/*"QuadImage: incorrect "<quad" <=> ">" order:\n"*/);
    FUN_01bab630(&StringLiteral_10626/*"QuadImage: didn't find ending: >"*/);
    FUN_01bab630(&StringLiteral_2475/*">"*/);
    DAT_04567730 = 1;
    method = extraout_x1;
  }
  __this = (System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_TypeInfo,
                              method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>__ctor__);
  if (*JGHIJMJNJLE != (System_String_o *)0x0) {
    bVar4 = System_String__Contains(*JGHIJMJNJLE,StringLiteral_2421/*"<quad"*/,(MethodInfo *)0x0);
    if (!bVar4) {
      return __this;
    }
    pSVar6 = *JGHIJMJNJLE;
    if (pSVar6 != (System_String_o *)0x0) {
      iVar7 = 0;
      while( true ) {
        if ((pSVar6->fields)._stringLength <= iVar7) {
          return __this;
        }
        EJABGOLHHBC = System_String__IndexOf(pSVar6,StringLiteral_2421/*"<quad"*/,iVar7,(MethodInfo *)0x0);
        if (EJABGOLHHBC < 0) {
          return __this;
        }
        if ((StringLiteral_2421/*"<quad"*/ == (System_String_o *)0x0) ||
           (*JGHIJMJNJLE == (System_String_o *)0x0)) break;
        iVar5 = System_String__IndexOf
                          (*JGHIJMJNJLE,StringLiteral_2475/*">"*/,
                           (StringLiteral_2421/*"<quad"*/->fields)._stringLength + EJABGOLHHBC,
                           (MethodInfo *)0x0);
        if (iVar5 < 0) {
          pSVar6 = StringLiteral_10626/*"QuadImage: didn't find ending: >"*/;
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pSVar6 = StringLiteral_10626/*"QuadImage: didn't find ending: >"*/;
          }
LAB_03403188:
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          return __this;
        }
        if (iVar5 < EJABGOLHHBC) {
          pSVar6 = System_String__Concat(StringLiteral_10627/*"QuadImage: incorrect "<quad" <=> ">" order:\n"*/,*JGHIJMJNJLE,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          goto LAB_03403188;
        }
        if ((StringLiteral_2475/*">"*/ == (System_String_o *)0x0) ||
           (StringLiteral_2421/*"<quad"*/ == (System_String_o *)0x0)) break;
        iVar1 = (StringLiteral_2421/*"<quad"*/->fields)._stringLength;
        pSVar6 = *JGHIJMJNJLE;
        iVar7 = iVar5 + -1 + (StringLiteral_2475/*">"*/->fields)._stringLength;
        __this_00 = (AEGOLGIJEBI_MCGKJAGBFKP_o *)
                    thunk_FUN_01bda818(AEGOLGIJEBI_MCGKJAGBFKP_TypeInfo);
        AEGOLGIJEBI_MCGKJAGBFKP___ctor
                  (__this_00,pSVar6,iVar1 + EJABGOLHHBC,iVar5 + -1,EJABGOLHHBC,iVar7,in_x6);
        lVar3 = Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_Add__;
        if (__this == (System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *)0x0) break;
        pAVar8 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pAVar8 == (AEGOLGIJEBI_MCGKJAGBFKP_array *)0x0) break;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pAVar8->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pAVar8->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pAVar8->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        if (StringLiteral_2475/*">"*/ == (System_String_o *)0x0) break;
        pSVar6 = *JGHIJMJNJLE;
        iVar7 = iVar7 + (StringLiteral_2475/*">"*/->fields)._stringLength + -1;
        if (pSVar6 == (System_String_o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool PJANGFCAOLJ(string ODAMFBHJKIH)  [RVA 0x3303238]
// AEGOLGIJEBI$$PJANGFCAOLJ @ RVA 0x3303238

bool AEGOLGIJEBI__PJANGFCAOLJ(System_String_o *ODAMFBHJKIH,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567731 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2456/*"<strike"*/);
    DAT_04567731 = 1;
  }
  if (ODAMFBHJKIH != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(ODAMFBHJKIH,StringLiteral_2456/*"<strike"*/,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== private static string PHGPECNGPEG(string JGHIJMJNJLE, int FEDCJPALCBN, int LCOKDKPMKIE, string DLNELFKJCII, string LBLEPJOEKHP)  [RVA 0x3303298]
// AEGOLGIJEBI$$PHGPECNGPEG @ RVA 0x3303298

System_String_o *
AEGOLGIJEBI__PHGPECNGPEG
          (System_String_o *JGHIJMJNJLE,int32_t FEDCJPALCBN,int32_t LCOKDKPMKIE,
          System_String_o *DLNELFKJCII,System_String_o *LBLEPJOEKHP,MethodInfo *method)

{
  int32_t iVar1;
  KAMNHNFJCBK_o *pKVar2;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar3;
  MethodInfo *in_x6;
  
  if ((DAT_04567732 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567732 = 1;
  }
  iVar1 = PCOEHCPGBBG__FPFFNFCMAMM
                    (JGHIJMJNJLE,DLNELFKJCII,FEDCJPALCBN,LCOKDKPMKIE,(MethodInfo *)0x0);
  if (-1 < iVar1) {
    return JGHIJMJNJLE;
  }
  iVar1 = PCOEHCPGBBG__FPFFNFCMAMM
                    (JGHIJMJNJLE,LBLEPJOEKHP,FEDCJPALCBN,LCOKDKPMKIE,(MethodInfo *)0x0);
  if (JGHIJMJNJLE != (System_String_o *)0x0) {
    if (iVar1 < 0) {
      pSVar3 = System_String__Insert(JGHIJMJNJLE,LCOKDKPMKIE,DLNELFKJCII,(MethodInfo *)0x0);
      return pSVar3;
    }
    pKVar2 = AEGOLGIJEBI__NAIFCOFJMGJ
                       (JGHIJMJNJLE,iVar1,(JGHIJMJNJLE->fields)._stringLength + -1,true,
                        StringLiteral_1/*""*/,false,in_x6);
    if (pKVar2 == (KAMNHNFJCBK_o *)0x0) {
      return JGHIJMJNJLE;
    }
    __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    pSVar3 = System_String__Substring
                       (JGHIJMJNJLE,0,(pKVar2->fields)._ACAPMJLHGIA_k__BackingField + -1,
                        (MethodInfo *)0x0);
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append(__this,pSVar3,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this,DLNELFKJCII,(MethodInfo *)0x0);
      pSVar3 = System_String__Substring
                         (JGHIJMJNJLE,(pKVar2->fields)._DMNBLKDCIOM_k__BackingField + 1,
                          (MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this,pSVar3,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03403404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool EHOPDENIAFB(string ODAMFBHJKIH)  [RVA 0x33035A0]
// AEGOLGIJEBI$$EHOPDENIAFB @ RVA 0x33035A0

bool AEGOLGIJEBI__EHOPDENIAFB(System_String_o *ODAMFBHJKIH,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567733 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2421/*"<quad"*/);
    DAT_04567733 = 1;
  }
  if (ODAMFBHJKIH != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(ODAMFBHJKIH,StringLiteral_2421/*"<quad"*/,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== private static string HFNAALDHDFI(string JGHIJMJNJLE, string DLNELFKJCII, string LBLEPJOEKHP)  [RVA 0x330291C]
// AEGOLGIJEBI$$HFNAALDHDFI @ RVA 0x330291C

System_String_o *
AEGOLGIJEBI__HFNAALDHDFI
          (System_String_o *JGHIJMJNJLE,System_String_o *DLNELFKJCII,System_String_o *LBLEPJOEKHP,
          MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t FEDCJPALCBN;
  int32_t LCOKDKPMKIE;
  MethodInfo *in_x5;
  int startIndex;
  
  if ((DAT_04567734 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2421/*"<quad"*/);
    FUN_01bab630(&StringLiteral_2475/*">"*/);
    DAT_04567734 = 1;
  }
  if (JGHIJMJNJLE != (System_String_o *)0x0) {
    if (0 < (JGHIJMJNJLE->fields)._stringLength) {
      startIndex = 0;
      do {
        FEDCJPALCBN = System_String__IndexOf
                                (JGHIJMJNJLE,StringLiteral_2421/*"<quad"*/,startIndex,(MethodInfo *)0x0);
        if (FEDCJPALCBN < 0) {
          return JGHIJMJNJLE;
        }
        if (StringLiteral_2421/*"<quad"*/ == (System_String_o *)0x0) goto LAB_03402a38;
                    /* try { // try from 034029c0 to 03502bb7 has its CatchHandler @ 034029c0
                       catch() { ... } // from try @ 034029c0 with catch @ 034029c0
                       catch() { ... } // from try @ 03402cb4 with catch @ 034029c0
                       catch() { ... } // from try @ 03402dc0 with catch @ 034029c0
                       catch() { ... } // from try @ 03402dc8 with catch @ 034029c0
                       catch() { ... } // from try @ 03402e9c with catch @ 034029c0 */
        LCOKDKPMKIE = System_String__IndexOf
                                (JGHIJMJNJLE,StringLiteral_2475/*">"*/,
                                 (StringLiteral_2421/*"<quad"*/->fields)._stringLength + FEDCJPALCBN,
                                 (MethodInfo *)0x0);
        if (LCOKDKPMKIE < 0) {
          return JGHIJMJNJLE;
        }
        iVar1 = (JGHIJMJNJLE->fields)._stringLength;
        JGHIJMJNJLE = AEGOLGIJEBI__PHGPECNGPEG
                                (JGHIJMJNJLE,FEDCJPALCBN,LCOKDKPMKIE,DLNELFKJCII,LBLEPJOEKHP,in_x5);
        if ((JGHIJMJNJLE == (System_String_o *)0x0) ||
           (StringLiteral_2475/*">"*/ == (System_String_o *)0x0)) goto LAB_03402a38;
        iVar2 = (JGHIJMJNJLE->fields)._stringLength;
        startIndex = ((LCOKDKPMKIE + startIndex) - iVar1) + iVar2 +
                     (StringLiteral_2475/*">"*/->fields)._stringLength;
      } while (startIndex < iVar2);
    }
    return JGHIJMJNJLE;
  }
LAB_03402a38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static KAMNHNFJCBK NAIFCOFJMGJ(string JGHIJMJNJLE, int KKPIFOLDKKO, int JMALLKGIFMD, bool CIODOCCNHKM, string LFAOEBDPFNF, bool LKDMINDLJJK)  [RVA 0x3303430]
// AEGOLGIJEBI$$NAIFCOFJMGJ @ RVA 0x3303430

KAMNHNFJCBK_o *
AEGOLGIJEBI__NAIFCOFJMGJ
          (System_String_o *JGHIJMJNJLE,int32_t KKPIFOLDKKO,int32_t JMALLKGIFMD,bool CIODOCCNHKM,
          System_String_o *LFAOEBDPFNF,bool LKDMINDLJJK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint16_t c;
  KAMNHNFJCBK_o *pKVar3;
  uint uVar4;
  
  if ((DAT_04567735 & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    DAT_04567735 = 1;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(JGHIJMJNJLE,(MethodInfo *)0x0);
  pKVar3 = (KAMNHNFJCBK_o *)0x0;
  if ((-1 < KKPIFOLDKKO) && (!bVar2)) {
    if (JGHIJMJNJLE == (System_String_o *)0x0) {
LAB_0340359c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pKVar3 = (KAMNHNFJCBK_o *)0x0;
    if ((KKPIFOLDKKO <= JMALLKGIFMD) &&
       (iVar1 = (JGHIJMJNJLE->fields)._stringLength, KKPIFOLDKKO < iVar1)) {
      uVar4 = iVar1 - 1;
      if ((int)uVar4 <= JMALLKGIFMD) {
        JMALLKGIFMD = uVar4;
      }
      uVar4 = 0xffffffff;
      for (; KKPIFOLDKKO <= JMALLKGIFMD; KKPIFOLDKKO = KKPIFOLDKKO + 1) {
        c = System_String__get_Chars(JGHIJMJNJLE,KKPIFOLDKKO,(MethodInfo *)0x0);
        if (CIODOCCNHKM) {
          if ((char_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = System_Char__IsWhiteSpace(c,(MethodInfo *)0x0);
          if (!bVar2) goto LAB_0340350c;
LAB_03403524:
                    /* try { // try from 03403524 to 03503653 has its CatchHandler @ 03403524
                       catch() { ... } // from try @ 03403524 with catch @ 03403524
                       catch() { ... } // from try @ 03403704 with catch @ 03403524
                       catch() { ... } // from try @ 0340373c with catch @ 03403524
                       catch() { ... } // from try @ 03403778 with catch @ 03403524
                       catch() { ... } // from try @ 034037a8 with catch @ 03403524 */
          if (-1 < (int)uVar4) {
            JMALLKGIFMD = KKPIFOLDKKO - (~(uint)LKDMINDLJJK & 1);
            break;
          }
        }
        else {
LAB_0340350c:
          if (LFAOEBDPFNF == (System_String_o *)0x0) goto LAB_0340359c;
          bVar2 = System_String__Contains(LFAOEBDPFNF,c,(MethodInfo *)0x0);
          if (bVar2) goto LAB_03403524;
          if ((int)uVar4 < 0) {
            uVar4 = KKPIFOLDKKO;
          }
        }
      }
      pKVar3 = (KAMNHNFJCBK_o *)0x0;
      if (((int)uVar4 <= JMALLKGIFMD) && (-1 < (int)(uVar4 | JMALLKGIFMD))) {
        pKVar3 = KAMNHNFJCBK__GPOJOHOCLNO(uVar4,JMALLKGIFMD,0,(MethodInfo *)0x0);
        if (pKVar3 == (KAMNHNFJCBK_o *)0x0) goto LAB_0340359c;
        (pKVar3->fields).BGHFADDGPAD = 1;
      }
    }
  }
  return pKVar3;
}

