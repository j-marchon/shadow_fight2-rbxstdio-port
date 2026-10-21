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
    FUN_01bab630(&StringLiteral_22448);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_1223);
                    /* try { // try from 032191bc to 033191c3 has its CatchHandler @ 03219310 */
    FUN_01bab630(&StringLiteral_22270);
    FUN_01bab630(&StringLiteral_8589);
                    /* try { // try from 032191d4 to 033191df has its CatchHandler @ 03219300 */
    FUN_01bab630(&StringLiteral_1);
    DAT_045665d6 = 1;
  }
                    /* try { // try from 032191f4 to 033191fb has its CatchHandler @ 03219260 */
                    /* try { // try from 03219204 to 0331920f has its CatchHandler @ 03219258 */
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03219210 to 0331921b has its CatchHandler @ 0321925c */
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_8589,StringLiteral_1,(MethodInfo *)0x0);
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (CNHMFABDCHB < 0) {
    if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_0321963c;
                    /* try { // try from 0321923c to 03319243 has its CatchHandler @ 0321930c */
                    /* try { // try from 03219244 to 0331926f has its CatchHandler @ 032190bc */
    System_Text_StringBuilder__Append(__this,StringLiteral_1223,(MethodInfo *)0x0);
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
      DNEIJHBKGJL = System_String__Concat(DNEIJHBKGJL,StringLiteral_167,(MethodInfo *)0x0);
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
    puVar1 = &StringLiteral_22270;
    if (9 < iVar3 || !OHCAGAIKPGN) {
      puVar1 = &StringLiteral_22448;
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
      IOOANNPKFLJ = System_String__Concat(StringLiteral_167,IOOANNPKFLJ,(MethodInfo *)0x0);
    }
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_22270;
    if (9 < iVar3 || !MFBOBCOPBNB) {
      puVar1 = &StringLiteral_22448;
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
      HDFHLNMKMDK = System_String__Concat(StringLiteral_167,HDFHLNMKMDK,(MethodInfo *)0x0);
    }
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_22270;
    if (9 < iVar3 || !NHIMOCLGHEO) {
      puVar1 = &StringLiteral_22448;
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
    FMCACPNDJAF = System_String__Concat(StringLiteral_167,FMCACPNDJAF,(MethodInfo *)0x0);
  }
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03219588 to 0331958f has its CatchHandler @ 0321961c */
  iVar3 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
                    /* try { // try from 032195a0 to 033195a7 has its CatchHandler @ 03219618 */
                    /* try { // try from 032195a8 to 0331960b has its CatchHandler @ 032194c8 */
  puVar1 = &StringLiteral_22270;
  if (9 < iVar3 || !LBAGKPJFJMK) {
    puVar1 = &StringLiteral_22448;
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

