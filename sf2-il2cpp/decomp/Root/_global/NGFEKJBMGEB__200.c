// TypeDefIndex 200
// Namespace: 
// public static class NGFEKJBMGEB
// Fields:
//   private static readonly IReadOnlyDictionary<string, string> BCMCJEDJNGC; // 0x0

// ===== public static string BCGDPKJNJCH(long CNHMFABDCHB, bool AICAAHNNPNH = True, bool ENOIDODBLKG = True, bool JPAOEMPHAOM = True, bool OJJBPGFJJMB = False, string JPAHOKAJJLO = ":", bool LBAGKPJFJMK = True, bool NHIMOCLGHEO = True, bool MFBOBCOPBNB = True, bool OHCAGAIKPGN = True, string FMCACPNDJAF = "", string HDFHLNMKMDK = "", string IOOANNPKFLJ = "", string DNEIJHBKGJL = "")  [RVA 0x3119114]
// NGFEKJBMGEB$$BCGDPKJNJCH @ RVA 0x3119114

System_String_o *
NGFEKJBMGEB__BCGDPKJNJCH
          (int64_t CNHMFABDCHB,bool AICAAHNNPNH,bool ENOIDODBLKG,bool JPAOEMPHAOM,bool OJJBPGFJJMB,
          System_String_o *JPAHOKAJJLO,bool LBAGKPJFJMK,bool NHIMOCLGHEO,bool MFBOBCOPBNB,
          bool OHCAGAIKPGN,System_String_o *FMCACPNDJAF,System_String_o *HDFHLNMKMDK,
          System_String_o *IOOANNPKFLJ,System_String_o *DNEIJHBKGJL,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  int32_t iVar3;
  System_Text_StringBuilder_o *__this;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  int32_t local_6c;
  System_TimeSpan_Fields local_68;
  
  if ((DAT_045665d6 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_22448/*"{0}{1}"*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
                    /* try { // try from 032191bc to 033191c3 has its CatchHandler @ 03219310 */
    FUN_01bab630(&StringLiteral_22270/*"{0:D2}{1}"*/);
    FUN_01bab630(&StringLiteral_8589/*"LocalizationManager::GetTimeString duplicates TimerLabel::GetTimeString"*/);
                    /* try { // try from 032191d4 to 033191df has its CatchHandler @ 03219300 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045665d6 = 1;
  }
                    /* try { // try from 032191f4 to 033191fb has its CatchHandler @ 03219260 */
                    /* try { // try from 03219204 to 0331920f has its CatchHandler @ 03219258 */
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03219210 to 0331921b has its CatchHandler @ 0321925c */
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_8589/*"LocalizationManager::GetTimeString duplicates TimerLabel::GetTimeString"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (CNHMFABDCHB < 0) {
    if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0321963c;
                    /* try { // try from 0321923c to 03319243 has its CatchHandler @ 0321930c */
                    /* try { // try from 03219244 to 0331926f has its CatchHandler @ 032190bc */
    System_Text_StringBuilder__Append(__this,StringLiteral_1223/*"-"*/,(MethodInfo *)0x0);
    CNHMFABDCHB = -CNHMFABDCHB;
  }
                    /* catch() { ... } // from try @ 03219204 with catch @ 03219258 */
                    /* catch() { ... } // from try @ 03219210 with catch @ 0321925c */
                    /* catch() { ... } // from try @ 032191f4 with catch @ 03219260 */
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03219270 to 03319273 has its CatchHandler @ 032192f0 */
                    /* try { // try from 03219274 to 033192c3 has its CatchHandler @ 032190bc */
  local_68._ticks = (int64_t)System_TimeSpan__FromSeconds((double)CNHMFABDCHB,(MethodInfo *)0x0);
  if (OJJBPGFJJMB) {
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(DNEIJHBKGJL,(MethodInfo *)0x0);
    if (!bVar2) {
      DNEIJHBKGJL = System_String__Concat(DNEIJHBKGJL,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
    }
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032192c4 to 033192df has its CatchHandler @ 03219374 */
    iVar3 = System_TimeSpan__get_Days((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
                    /* try { // try from 032192e0 to 033192e3 has its CatchHandler @ 03219304 */
                    /* try { // try from 032192e4 to 033192eb has its CatchHandler @ 032192fc */
                    /* try { // try from 032192ec to 0331931f has its CatchHandler @ 032190bc */
                    /* catch() { ... } // from try @ 03219270 with catch @ 032192f0 */
    puVar1 = &StringLiteral_22270/*"{0:D2}{1}"*/;
    if (9 < iVar3 || !OHCAGAIKPGN) {
      puVar1 = &StringLiteral_22448/*"{0}{1}"*/;
    }
    pSVar5 = (System_String_o *)*puVar1;
                    /* catch() { ... } // from try @ 032192e4 with catch @ 032192fc */
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032191d4 with catch @ 03219300 */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 032192e0 with catch @ 03219304 */
                    /* catch() { ... } // from try @ 0321923c with catch @ 0321930c */
    local_6c = System_TimeSpan__get_Days((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032191bc with catch @ 03219310 */
                    /* try { // try from 03219320 to 03319323 has its CatchHandler @ 03219350 */
                    /* try { // try from 03219324 to 03319357 has its CatchHandler @ 032190bc */
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0321963c;
    System_Text_StringBuilder__AppendFormat
              (__this,pSVar5,pIVar4,(Il2CppObject *)DNEIJHBKGJL,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03219320 with catch @ 03219350 */
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(DNEIJHBKGJL,(MethodInfo *)0x0);
                    /* try { // try from 03219358 to 0331935f has its CatchHandler @ 03219374 */
                    /* try { // try from 03219360 to 0331936b has its CatchHandler @ 032190bc */
    if (((ENOIDODBLKG || JPAOEMPHAOM) || AICAAHNNPNH) && (bVar2)) {
                    /* try { // try from 0321936c to 03319373 has its CatchHandler @ 03219374 */
      System_Text_StringBuilder__Append(__this,JPAHOKAJJLO,(MethodInfo *)0x0);
    }
  }
                    /* catch() { ... } // from try @ 032192c4 with catch @ 03219374
                       catch() { ... } // from try @ 03219358 with catch @ 03219374
                       catch() { ... } // from try @ 0321936c with catch @ 03219374 */
  if (JPAOEMPHAOM) {
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(IOOANNPKFLJ,(MethodInfo *)0x0);
    if (!bVar2) {
      IOOANNPKFLJ = System_String__Concat(StringLiteral_167/*" "*/,IOOANNPKFLJ,(MethodInfo *)0x0);
    }
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_22270/*"{0:D2}{1}"*/;
    if (9 < iVar3 || !MFBOBCOPBNB) {
      puVar1 = &StringLiteral_22448/*"{0}{1}"*/;
    }
    pSVar5 = (System_String_o *)*puVar1;
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_6c = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0321963c;
    System_Text_StringBuilder__AppendFormat
              (__this,pSVar5,pIVar4,(Il2CppObject *)IOOANNPKFLJ,(MethodInfo *)0x0);
    if ((!AICAAHNNPNH) && (!ENOIDODBLKG)) goto LAB_03219448;
    System_Text_StringBuilder__Append(__this,JPAHOKAJJLO,(MethodInfo *)0x0);
    if (!ENOIDODBLKG) goto LAB_0321953c;
LAB_0321944c:
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(HDFHLNMKMDK,(MethodInfo *)0x0);
    if (!bVar2) {
      HDFHLNMKMDK = System_String__Concat(StringLiteral_167/*" "*/,HDFHLNMKMDK,(MethodInfo *)0x0);
    }
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_22270/*"{0:D2}{1}"*/;
    if (9 < iVar3 || !NHIMOCLGHEO) {
      puVar1 = &StringLiteral_22448/*"{0}{1}"*/;
    }
    pSVar5 = (System_String_o *)*puVar1;
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032194c8 to 03319587 has its CatchHandler @ 032194c8
                       catch() { ... } // from try @ 032194c8 with catch @ 032194c8
                       catch() { ... } // from try @ 032195a8 with catch @ 032194c8
                       catch() { ... } // from try @ 03219610 with catch @ 032194c8
                       catch() { ... } // from try @ 03219638 with catch @ 032194c8
                       catch() { ... } // from try @ 03219678 with catch @ 032194c8 */
      thunk_FUN_01ba7564();
    }
    local_6c = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0321963c;
    System_Text_StringBuilder__AppendFormat
              (__this,pSVar5,pIVar4,(Il2CppObject *)HDFHLNMKMDK,(MethodInfo *)0x0);
    if (!AICAAHNNPNH) goto LAB_0321960c;
    System_Text_StringBuilder__Append(__this,JPAHOKAJJLO,(MethodInfo *)0x0);
  }
  else {
LAB_03219448:
    if (ENOIDODBLKG) goto LAB_0321944c;
LAB_0321953c:
    if (!AICAAHNNPNH) {
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0321963c;
      goto LAB_0321960c;
    }
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(FMCACPNDJAF,(MethodInfo *)0x0);
  if (!bVar2) {
    FMCACPNDJAF = System_String__Concat(StringLiteral_167/*" "*/,FMCACPNDJAF,(MethodInfo *)0x0);
  }
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03219588 to 0331958f has its CatchHandler @ 0321961c */
  iVar3 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
                    /* try { // try from 032195a0 to 033195a7 has its CatchHandler @ 03219618 */
                    /* try { // try from 032195a8 to 0331960b has its CatchHandler @ 032194c8 */
  puVar1 = &StringLiteral_22270/*"{0:D2}{1}"*/;
  if (9 < iVar3 || !LBAGKPJFJMK) {
    puVar1 = &StringLiteral_22448/*"{0}{1}"*/;
  }
  pSVar5 = (System_String_o *)*puVar1;
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_6c = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendFormat
              (__this,pSVar5,pIVar4,(Il2CppObject *)FMCACPNDJAF,(MethodInfo *)0x0);
LAB_0321960c:
                    /* try { // try from 0321960c to 0331960f has its CatchHandler @ 03219614 */
                    /* try { // try from 03219610 to 03319633 has its CatchHandler @ 032194c8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321960c with catch @ 03219614
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032195a0 with catch @ 03219618
                        */
    pSVar5 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219588 with catch @ 0321961c
                        */
                    /* try { // try from 03219634 to 03319637 has its CatchHandler @ 03219660 */
                    /* try { // try from 03219638 to 0331966f has its CatchHandler @ 032194c8 */
    return pSVar5;
  }
LAB_0321963c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string CDBGAPKFOMB(DBNEEHGBCJD NFDKMBAGHPD)  [RVA 0x3119640]
// NGFEKJBMGEB$$CDBGAPKFOMB @ RVA 0x3119640

System_String_o * NGFEKJBMGEB__CDBGAPKFOMB(DBNEEHGBCJD_o *NFDKMBAGHPD,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_045665d7 & 1) == 0) {
                    /* catch() { ... } // from try @ 03219634 with catch @ 03219660 */
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 03219670 to 03319677 has its CatchHandler @ 0321968c */
    FUN_01bab630(&StringLiteral_524/*" scale::0.7}{_$PacksSummarySize}"*/);
                    /* try { // try from 03219678 to 03319683 has its CatchHandler @ 032194c8 */
    FUN_01bab630(&StringLiteral_17830/*"dlgServiceDownloadDemand{%"*/);
                    /* try { // try from 03219684 to 0331968b has its CatchHandler @ 0321968c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03219670 with catch @ 0321968c
                       catch(type#2 @ 00000000) { ... } // from try @ 03219684 with catch @ 0321968c
                        */
    FUN_01bab630(&StringLiteral_22510/*"}{img::"*/);
    DAT_045665d7 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_17830/*"dlgServiceDownloadDemand{%"*/;
      thunk_FUN_01c20e04();
      if (NFDKMBAGHPD == (DBNEEHGBCJD_o *)0x0) goto LAB_03219774;
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (NFDKMBAGHPD->fields)._HONAAKEIHJI_k__BackingField;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_22510/*"}{img::"*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (NFDKMBAGHPD->fields)._PIJHOBHDLLH_k__BackingField;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_524/*" scale::0.7}{_$PacksSummarySize}"*/;
              thunk_FUN_01c20e04();
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03219774:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string MDLAKLCAEPK()  [RVA 0x3119778]
// NGFEKJBMGEB$$MDLAKLCAEPK @ RVA 0x3119778

System_String_o * NGFEKJBMGEB__MDLAKLCAEPK(MethodInfo *method)

{
  ushort uVar1;
  Il2CppType *handle;
  KMBNFNCDDBP_o *__this;
  System_String_o *pSVar2;
  VirtualInvokeData *pVVar3;
  System_Type_o *BKFOLMBMFNP;
  System_Collections_Generic_IReadOnlyDictionary_string__string__c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_Generic_IReadOnlyDictionary_string__string__o *pSVar7;
  System_String_o *local_28;
  
  if ((DAT_045665d8 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_var);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_18047/*"eng"*/);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    FUN_01bab630(&StringLiteral_6783/*"GetDesiredLanguageName: "*/);
    DAT_045665d8 = 1;
  }
  local_28 = (System_String_o *)0x0;
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (__this != (KMBNFNCDDBP_o *)0x0) {
    pSVar2 = KMBNFNCDDBP__MLHLAKMLJNI(__this,(MethodInfo *)0x0);
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGFEKJBMGEB_TypeInfo);
    }
    pSVar7 = NGFEKJBMGEB_TypeInfo->static_fields->BCMCJEDJNGC;
    if (pSVar7 != (System_Collections_Generic_IReadOnlyDictionary_string__string__o *)0x0) {
      pSVar4 = pSVar7->klass;
      uVar1._0_1_ = (pSVar4->_2).rank;
      uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo
             ) {
            pVVar3 = pSVar4->vtable + (*piVar6 + 1);
            goto LAB_032198e4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)
               FUN_01b81914(pSVar7,
                            System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo,
                            1);
LAB_032198e4:
      uVar5 = (*pVVar3->methodPtr)(pSVar7,pSVar2,&local_28,pVVar3->method);
      handle = NGFEKJBMGEB_var;
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 03219910 to 03319a03 has its CatchHandler @ 03219910
                       catch() { ... } // from try @ 03219910 with catch @ 03219910
                       catch() { ... } // from try @ 03219ab8 with catch @ 03219910
                       catch() { ... } // from try @ 03219af0 with catch @ 03219910
                       catch() { ... } // from try @ 03219b30 with catch @ 03219910
                       catch() { ... } // from try @ 03219b68 with catch @ 03219910 */
        local_28 = StringLiteral_18047/*"eng"*/;
      }
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      BKFOLMBMFNP = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat
                         (StringLiteral_6783/*"GetDesiredLanguageName: "*/,pSVar2,StringLiteral_22485/*"|"*/,local_28,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA(BKFOLMBMFNP,pSVar2,(MethodInfo *)0x0);
      return local_28;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string JCKBLNHNAHE(string JOOEPINNCBL)  [RVA 0x3119994]
// NGFEKJBMGEB$$JCKBLNHNAHE @ RVA 0x3119994

System_String_o * NGFEKJBMGEB__JCKBLNHNAHE(System_String_o *JOOEPINNCBL,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045665d9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_17830/*"dlgServiceDownloadDemand{%"*/);
    FUN_01bab630(&StringLiteral_22512/*"}{img::UI/Atlases/MiscSprites.video_large usedsize=120}{_$PacksSummarySize}"*/);
    DAT_045665d9 = 1;
  }
  pSVar1 = System_String__Concat
                     (StringLiteral_17830/*"dlgServiceDownloadDemand{%"*/,JOOEPINNCBL,StringLiteral_22512/*"}{img::UI/Atlases/MiscSprites.video_large usedsize=120}{_$PacksSummarySize}"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string IPOELNKMKBA(long FDNNNELHJJN)  [RVA 0x3119A00]
// NGFEKJBMGEB$$IPOELNKMKBA @ RVA 0x3119A00

System_String_o * NGFEKJBMGEB__IPOELNKMKBA(int64_t FDNNNELHJJN,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  System_DateTime_Fields local_28;
  
                    /* try { // try from 03219a04 to 03319a0b has its CatchHandler @ 03219b10 */
                    /* try { // try from 03219a18 to 03319a23 has its CatchHandler @ 03219b0c */
  if ((DAT_045665da & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_22355/*"{0}.{1}.{2}"*/);
    DAT_045665da = 1;
    method = extraout_x1;
  }
  local_28._dateData = 0;
                    /* try { // try from 03219a64 to 03319a73 has its CatchHandler @ 03219b04 */
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_DateTime_TypeInfo,method);
  }
                    /* try { // try from 03219a84 to 03319a87 has its CatchHandler @ 03219afc */
                    /* try { // try from 03219a88 to 03319a8f has its CatchHandler @ 03219b00 */
  System_DateTime___ctor((System_DateTime_o)&local_28,0x7b2,1,1,0,0,0,0,1,(MethodInfo *)0x0);
                    /* try { // try from 03219aac to 03319aaf has its CatchHandler @ 03219af4 */
                    /* try { // try from 03219ab0 to 03319ab7 has its CatchHandler @ 03219af8 */
  local_28._dateData =
       (uint64_t)
       System_DateTime__AddSeconds
                 ((System_DateTime_o)&local_28,(double)FDNNNELHJJN,(MethodInfo *)0x0);
                    /* try { // try from 03219ab8 to 03319ae7 has its CatchHandler @ 03219910 */
  local_34 = System_DateTime__get_Day((System_DateTime_o)&local_28,(MethodInfo *)0x0);
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
                    /* try { // try from 03219ae8 to 03319aef has its CatchHandler @ 03219b08 */
  local_38 = System_DateTime__get_Month((System_DateTime_o)&local_28,(MethodInfo *)0x0);
                    /* try { // try from 03219af0 to 03319b2b has its CatchHandler @ 03219910 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219aac with catch @ 03219af4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219ab0 with catch @ 03219af8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a84 with catch @ 03219afc
                        */
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a88 with catch @ 03219b00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a64 with catch @ 03219b04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219ae8 with catch @ 03219b08
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a18 with catch @ 03219b0c
                        */
  local_3c = System_DateTime__get_Year((System_DateTime_o)&local_28,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03219a04 with catch @ 03219b10
                        */
  arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
                    /* try { // try from 03219b2c to 03319b2f has its CatchHandler @ 03219b58 */
                    /* try { // try from 03219b30 to 03319b5f has its CatchHandler @ 03219910 */
  pSVar1 = System_String__Format(StringLiteral_22355/*"{0}.{1}.{2}"*/,arg0,arg1,arg2,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static void OPFMHDIBOKE(DBNEEHGBCJD NFDKMBAGHPD, Action<bool> BLMFLPJJMPF)  [RVA 0x3119B54]
// NGFEKJBMGEB$$OPFMHDIBOKE @ RVA 0x3119B54

void NGFEKJBMGEB__OPFMHDIBOKE
               (DBNEEHGBCJD_o *NFDKMBAGHPD,System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  Il2CppObject *__this;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  long lVar2;
  System_String_o *HPOCBHFNCKD;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  KAKGABBLHGP_o *__this_00;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ulong uVar5;
  int *piVar6;
  Il2CppObject *pIVar7;
  long *plVar8;
  void **ppvVar9;
  DBNEEHGBCJD_o *NFDKMBAGHPD_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
                    /* catch() { ... } // from try @ 03219b2c with catch @ 03219b58 */
                    /* try { // try from 03219b60 to 03319b67 has its CatchHandler @ 03219b7c */
                    /* try { // try from 03219b68 to 03319b73 has its CatchHandler @ 03219910 */
                    /* try { // try from 03219b74 to 03319b7b has its CatchHandler @ 03219b7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03219b60 with catch @ 03219b7c
                       catch(type#2 @ 00000000) { ... } // from try @ 03219b74 with catch @ 03219b7c
                        */
  if ((DAT_045665db & 1) == 0) {
    FUN_01bab630(&Method_NGFEKJBMGEB_AECFCOMCIAC_EDHNBHLKDDM__);
    FUN_01bab630(&NGFEKJBMGEB_AECFCOMCIAC_TypeInfo);
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PackType___TypeInfo);
    DAT_045665db = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NGFEKJBMGEB_AECFCOMCIAC_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    ppvVar9 = &__this[1].monitor;
    *ppvVar9 = NFDKMBAGHPD;
    thunk_FUN_01c20e04(ppvVar9,NFDKMBAGHPD);
    __this[2].klass = (Il2CppClass *)BLMFLPJJMPF;
    thunk_FUN_01c20e04(__this + 2,BLMFLPJJMPF);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      pIVar7 = __this + 1;
      pIVar7->klass = (Il2CppClass *)(pNVar1->fields).QuestParameters;
      thunk_FUN_01c20e04(pIVar7);
      if (pIVar7->klass != (Il2CppClass *)0x0) {
        *(void **)&(pIVar7->klass->_1).this_arg.bits = __this[1].monitor;
        thunk_FUN_01c20e04();
        auVar10._8_8_ = extraout_x1;
        auVar10._0_8_ = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20)
        ;
        if ((*(byte *)(*(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20)
                      + 0x135) & 1) == 0) {
          auVar10 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(auVar10._0_8_ + 0xc0) + 0x10);
        auVar11._8_8_ = auVar10._8_8_;
        auVar11._0_8_ = lVar2;
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          auVar11 = FUN_01b81620();
        }
        method_00 = auVar11._8_8_;
        NFDKMBAGHPD_00 = *ppvVar9;
        plVar8 = (long *)**(undefined8 **)(auVar11._0_8_ + 0xb8);
        if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        HPOCBHFNCKD = NGFEKJBMGEB__CDBGAPKFOMB(NFDKMBAGHPD_00,method_00);
        LFADLKGPBHC = (Core_Configs_Models_PackType_array *)
                      FUN_01bab718(Core_Configs_Models_PackType___TypeInfo,1);
        if (LFADLKGPBHC != (Core_Configs_Models_PackType_array *)0x0) {
          if ((int)LFADLKGPBHC->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
                    /* try { // try from 03219ce8 to 03319e23 has its CatchHandler @ 03219ce8
                       catch() { ... } // from try @ 03219ce8 with catch @ 03219ce8
                       catch() { ... } // from try @ 03219fec with catch @ 03219ce8
                       catch() { ... } // from try @ 0321a030 with catch @ 03219ce8
                       catch() { ... } // from try @ 0321a094 with catch @ 03219ce8
                       catch() { ... } // from try @ 0321a0d4 with catch @ 03219ce8 */
          LFADLKGPBHC->m_Items[0] = 3;
          __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
          KAKGABBLHGP___ctor(__this_00,false,HPOCBHFNCKD,LFADLKGPBHC,(MethodInfo *)0x0);
          uVar3 = thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
          System_Action<object>___ctor();
          if (plVar8 != (long *)0x0) {
            lVar2 = *plVar8;
            uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(JNDFOKIMHPB_c **)(piVar6 + -2) == JNDFOKIMHPB_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_03219d94;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_01b81914(plVar8,JNDFOKIMHPB_TypeInfo,0);
LAB_03219d94:
                    /* WARNING: Could not recover jumptable at 0x03219db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar4)(plVar8,__this_00,uVar3,puVar4[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3119DC8]
// NGFEKJBMGEB$$.cctor @ RVA 0x3119DC8

void NGFEKJBMGEB___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_045665dc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
                    /* try { // try from 03219e24 to 03319e2b has its CatchHandler @ 0321a078 */
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&StringLiteral_19232/*"ja"*/);
                    /* try { // try from 03219e3c to 03319e43 has its CatchHandler @ 0321a064 */
    FUN_01bab630(&StringLiteral_20320/*"pt"*/);
                    /* try { // try from 03219e4c to 03319e53 has its CatchHandler @ 0321a06c */
    FUN_01bab630(&StringLiteral_19204/*"it"*/);
    FUN_01bab630(&StringLiteral_18334/*"fr"*/);
                    /* try { // try from 03219e60 to 03319e67 has its CatchHandler @ 0321a058 */
    FUN_01bab630(&StringLiteral_18047/*"eng"*/);
                    /* try { // try from 03219e70 to 03319e77 has its CatchHandler @ 0321a054 */
    FUN_01bab630(&StringLiteral_19314/*"ko"*/);
    FUN_01bab630(&StringLiteral_20635/*"rus"*/);
                    /* try { // try from 03219e80 to 03319e87 has its CatchHandler @ 0321a068 */
    FUN_01bab630(&StringLiteral_18405/*"ger"*/);
                    /* try { // try from 03219e90 to 03319e97 has its CatchHandler @ 0321a074 */
    FUN_01bab630(&StringLiteral_22216/*"zh-Hant"*/);
    FUN_01bab630(&StringLiteral_20244/*"por"*/);
                    /* try { // try from 03219ea4 to 03319eab has its CatchHandler @ 0321a060 */
    FUN_01bab630(&StringLiteral_18081/*"es"*/);
                    /* try { // try from 03219eb4 to 03319ebb has its CatchHandler @ 0321a05c */
    FUN_01bab630(&StringLiteral_19271/*"jpn"*/);
    FUN_01bab630(&StringLiteral_18341/*"fra"*/);
    FUN_01bab630(&StringLiteral_22215/*"zh-Hans"*/);
                    /* try { // try from 03219ed4 to 03319ee3 has its CatchHandler @ 0321a044 */
    FUN_01bab630(&StringLiteral_20629/*"ru"*/);
    FUN_01bab630(&StringLiteral_18004/*"en"*/);
                    /* try { // try from 03219ef0 to 03319ef7 has its CatchHandler @ 0321a048 */
    FUN_01bab630(&StringLiteral_19207/*"ita"*/);
    FUN_01bab630(&StringLiteral_21145/*"spa"*/);
    FUN_01bab630(&StringLiteral_16995/*"chn"*/);
    FUN_01bab630(&StringLiteral_19324/*"kor"*/);
    FUN_01bab630(&StringLiteral_17630/*"de"*/);
    FUN_01bab630(&StringLiteral_22210/*"zh"*/);
                    /* try { // try from 03219f34 to 03319f3b has its CatchHandler @ 0321a04c */
    FUN_01bab630(&StringLiteral_16996/*"chn_tr"*/);
    DAT_045665dc = 1;
  }
                    /* try { // try from 03219f4c to 03319f5b has its CatchHandler @ 0321a038 */
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* try { // try from 03219f68 to 03319f6f has its CatchHandler @ 0321a034 */
                    /* try { // try from 03219fac to 03319fb3 has its CatchHandler @ 0321a040 */
                    /* try { // try from 03219fc4 to 03319fcf has its CatchHandler @ 0321a04c */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_18004/*"en"*/,StringLiteral_18047/*"eng"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                    /* try { // try from 03219fe0 to 03319feb has its CatchHandler @ 0321a040 */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_17630/*"de"*/,StringLiteral_18405/*"ger"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                    /* try { // try from 03219fec to 0331a023 has its CatchHandler @ 03219ce8 */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_19204/*"it"*/,StringLiteral_19207/*"ita"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_18334/*"fr"*/,StringLiteral_18341/*"fra"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_20320/*"pt"*/,StringLiteral_20244/*"por"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                    /* try { // try from 0321a024 to 0331a027 has its CatchHandler @ 0321a070 */
                    /* try { // try from 0321a028 to 0331a02b has its CatchHandler @ 0321a050 */
                    /* try { // try from 0321a02c to 0331a02f has its CatchHandler @ 0321a03c */
                    /* try { // try from 0321a030 to 0331a08f has its CatchHandler @ 03219ce8 */
                    /* catch() { ... } // from try @ 03219f68 with catch @ 0321a034 */
                    /* catch() { ... } // from try @ 03219f4c with catch @ 0321a038 */
                    /* catch() { ... } // from try @ 0321a02c with catch @ 0321a03c */
                    /* catch() { ... } // from try @ 03219fac with catch @ 0321a040
                       catch() { ... } // from try @ 03219fe0 with catch @ 0321a040 */
                    /* catch() { ... } // from try @ 03219ed4 with catch @ 0321a044 */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_20629/*"ru"*/,StringLiteral_20635/*"rus"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                    /* catch() { ... } // from try @ 03219ef0 with catch @ 0321a048 */
                    /* catch() { ... } // from try @ 03219f34 with catch @ 0321a04c
                       catch() { ... } // from try @ 03219fc4 with catch @ 0321a04c */
                    /* catch() { ... } // from try @ 0321a028 with catch @ 0321a050 */
                    /* catch() { ... } // from try @ 03219e70 with catch @ 0321a054 */
                    /* catch() { ... } // from try @ 03219e60 with catch @ 0321a058 */
                    /* catch() { ... } // from try @ 03219eb4 with catch @ 0321a05c */
                    /* catch() { ... } // from try @ 03219ea4 with catch @ 0321a060 */
                    /* catch() { ... } // from try @ 03219e3c with catch @ 0321a064 */
                    /* catch() { ... } // from try @ 03219e80 with catch @ 0321a068 */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_18081/*"es"*/,StringLiteral_21145/*"spa"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                    /* catch() { ... } // from try @ 03219e4c with catch @ 0321a06c */
                    /* catch() { ... } // from try @ 0321a024 with catch @ 0321a070 */
                    /* catch() { ... } // from try @ 03219e90 with catch @ 0321a074 */
                    /* catch() { ... } // from try @ 03219e24 with catch @ 0321a078 */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_22210/*"zh"*/,StringLiteral_16995/*"chn"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                    /* try { // try from 0321a090 to 0331a093 has its CatchHandler @ 0321a0bc */
                    /* try { // try from 0321a094 to 0331a0cb has its CatchHandler @ 03219ce8 */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_22215/*"zh-Hans"*/,StringLiteral_16995/*"chn"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                    /* catch() { ... } // from try @ 0321a090 with catch @ 0321a0bc */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_22216/*"zh-Hant"*/,StringLiteral_16996/*"chn_tr"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                    /* try { // try from 0321a0cc to 0331a0d3 has its CatchHandler @ 0321a0e8 */
                    /* try { // try from 0321a0d4 to 0331a0df has its CatchHandler @ 03219ce8 */
                    /* try { // try from 0321a0e0 to 0331a0e7 has its CatchHandler @ 0321a0e8 */
                    /* catch() { ... } // from try @ 0321a0cc with catch @ 0321a0e8
                       catch() { ... } // from try @ 0321a0e0 with catch @ 0321a0e8 */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_19232/*"ja"*/,StringLiteral_19271/*"jpn"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,StringLiteral_19314/*"ko"*/,StringLiteral_19324/*"kor"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    NGFEKJBMGEB_TypeInfo->static_fields->BCMCJEDJNGC =
         (System_Collections_Generic_IReadOnlyDictionary_string__string__o *)__this;
    thunk_FUN_01c20e04(NGFEKJBMGEB_TypeInfo->static_fields,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

