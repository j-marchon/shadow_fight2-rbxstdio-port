// TypeDefIndex 613
// Namespace: 
// public static class IMAPABEJECG
// Fields:
//   private static bool ECCPBJGMNPE; // 0x0
//   private static NHJCFGACFDF KAKIHIMNDAE; // 0x8
//   private static CNOGBOOJFIP BPIIMPKLPCP; // 0x10

// ===== public static void ECDBHGCNKBO(byte[] IMMNELPBGIF, bool BHPEJDOPLFD = True)  [RVA 0x35C1228]
// IMAPABEJECG$$ECDBHGCNKBO @ RVA 0x35C1228

void IMAPABEJECG__ECDBHGCNKBO(System_Byte_array *IMMNELPBGIF,bool BHPEJDOPLFD,MethodInfo *method)

{
  System_Byte_array *method_00;
  NHJCFGACFDF_o *pNVar1;
  
  method_00 = IMMNELPBGIF;
  if ((DAT_04568f1c & 1) == 0) {
    method_00 = (System_Byte_array *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f1c = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB((MethodInfo *)method_00);
  pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pNVar1->klass[1]._1.properties)(pNVar1,IMMNELPBGIF,BHPEJDOPLFD,pNVar1->klass[1]._1.methods);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void JGDKNDBAIHM(Action<bool> BLMFLPJJMPF)  [RVA 0x35C1388]
// IMAPABEJECG$$JGDKNDBAIHM @ RVA 0x35C1388

void IMAPABEJECG__JGDKNDBAIHM(System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  ushort uVar1;
  System_Action_bool__o *method_00;
  VirtualInvokeData *pVVar2;
  CNOGBOOJFIP_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CNOGBOOJFIP_o *pCVar6;
  
  method_00 = BLMFLPJJMPF;
  if ((DAT_04568f1d & 1) == 0) {
    FUN_01bab630(&CNOGBOOJFIP_TypeInfo);
    method_00 = (System_Action_bool__o *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f1d = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB((MethodInfo *)method_00);
  pCVar6 = IMAPABEJECG_TypeInfo->static_fields->BPIIMPKLPCP;
  if (pCVar6 == (CNOGBOOJFIP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar3 = pCVar6->klass;
  uVar1._0_1_ = (pCVar3->_2).rank;
  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pCVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)CNOGBOOJFIP_TypeInfo) {
        pVVar2 = pCVar3->vtable + *piVar5;
        goto LAB_036c1430;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CNOGBOOJFIP_TypeInfo,0);
LAB_036c1430:
                    /* WARNING: Could not recover jumptable at 0x036c1444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar6,BLMFLPJJMPF,pVVar2->method);
  return;
}


// ===== public static bool NCLOHJCDCEJ()  [RVA 0x35C144C]
// IMAPABEJECG$$NCLOHJCDCEJ @ RVA 0x35C144C

bool IMAPABEJECG__NCLOHJCDCEJ(MethodInfo *method)

{
  undefined1 uVar1;
  NHJCFGACFDF_o *pNVar2;
  
  if ((DAT_04568f1e & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f1e = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c14a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pNVar2->klass->vtable)._10_unknown.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._10_unknown.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string KCHJCGEMCGE()  [RVA 0x35C14A8]
// IMAPABEJECG$$KCHJCGEMCGE @ RVA 0x35C14A8

System_String_o * IMAPABEJECG__KCHJCGEMCGE(MethodInfo *method)

{
  NHJCFGACFDF_o *pNVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04568f1f & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f1f = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*pNVar1->klass[1]._1.generic_class)(pNVar1,pNVar1->klass[1]._1.typeMetadataHandle);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal static CNOGBOOJFIP OLNHKPOOCMA(ref IMAPABEJECG.ADAMKJAHPLL )  [RVA 0x35C1508]
// IMAPABEJECG$$OLNHKPOOCMA @ RVA 0x35C1508

CNOGBOOJFIP_o * IMAPABEJECG__OLNHKPOOCMA(IMAPABEJECG_ADAMKJAHPLL_o *param_1,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  HIJLPKACNPD_o *__this;
  OCHIFKHFMAC_o *EIHGMMBMDDO;
  NHJCFGACFDF_o *EMIJCAIFDML;
  
  method_00 = (MethodInfo *)param_1;
  if ((DAT_04568f20 & 1) == 0) {
    FUN_01bab630(&CKKPBHJBJGM_TypeInfo);
    FUN_01bab630(&HIJLPKACNPD_TypeInfo);
    method_00 = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f20 = 1;
  }
  bVar1 = IMAPABEJECG__EMBIGPDBNKJ(method_00);
  if (bVar1) {
    EIHGMMBMDDO = (param_1->fields).googlePlayDataHolder;
    EMIJCAIFDML = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    __this = (HIJLPKACNPD_o *)thunk_FUN_01bda818(HIJLPKACNPD_TypeInfo);
    HIJLPKACNPD___ctor(__this,EMIJCAIFDML,EIHGMMBMDDO,(MethodInfo *)0x0);
  }
  else {
    __this = (HIJLPKACNPD_o *)thunk_FUN_01bda818(CKKPBHJBJGM_TypeInfo);
                    /* try { // try from 036c15a8 to 037c1667 has its CatchHandler @ 036c15a8
                       catch() { ... } // from try @ 036c15a8 with catch @ 036c15a8
                       catch() { ... } // from try @ 036c1728 with catch @ 036c15a8
                       catch() { ... } // from try @ 036c177c with catch @ 036c15a8
                       catch() { ... } // from try @ 036c17c0 with catch @ 036c15a8
                       catch() { ... } // from try @ 036c17f0 with catch @ 036c15a8 */
    CKKPBHJBJGM___ctor((CKKPBHJBJGM_o *)__this,(MethodInfo *)0x0);
  }
  return (CNOGBOOJFIP_o *)__this;
}


// ===== public static void KNLFICNFHBE()  [RVA 0x35C161C]
// IMAPABEJECG$$KNLFICNFHBE @ RVA 0x35C161C

void IMAPABEJECG__KNLFICNFHBE(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  
  if ((DAT_04568f21 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f21 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c1668 to 037c166f has its CatchHandler @ 036c17a4 */
                    /* WARNING: Could not recover jumptable at 0x036c1674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1]._1.interfaceOffsets)(pNVar2,pNVar2->klass[1].static_fields);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static FJLAMDKMIHD MEHFGJDCBDP()  [RVA 0x35C16F0]
// IMAPABEJECG$$MEHFGJDCBDP @ RVA 0x35C16F0

int32_t IMAPABEJECG__MEHFGJDCBDP(MethodInfo *method)

{
  int32_t iVar1;
  NHJCFGACFDF_o *pNVar2;
  
                    /* try { // try from 036c1708 to 037c170f has its CatchHandler @ 036c1784 */
  if ((DAT_04568f22 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f22 = 1;
  }
                    /* try { // try from 036c1720 to 037c1727 has its CatchHandler @ 036c1780 */
  IMAPABEJECG__PPCPAHAPCNB(method);
                    /* try { // try from 036c1728 to 037c1763 has its CatchHandler @ 036c15a8 */
  pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)pNVar2->klass[1]._1.nestedTypes)
                      (pNVar2,pNVar2->klass[1]._1.implementedInterfaces);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool FCBJDMNEPGB()  [RVA 0x35C1750]
// IMAPABEJECG$$FCBJDMNEPGB @ RVA 0x35C1750

bool IMAPABEJECG__FCBJDMNEPGB(MethodInfo *method)

{
  bool bVar1;
  undefined1 uVar2;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar3;
  
  if ((DAT_04568f23 & 1) == 0) {
                    /* try { // try from 036c1764 to 037c1767 has its CatchHandler @ 036c17a0 */
                    /* try { // try from 036c1768 to 037c176f has its CatchHandler @ 036c1794 */
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
                    /* try { // try from 036c1770 to 037c1773 has its CatchHandler @ 036c1790 */
    DAT_04568f23 = 1;
  }
                    /* try { // try from 036c1774 to 037c1777 has its CatchHandler @ 036c178c */
  IMAPABEJECG__PPCPAHAPCNB(method);
                    /* try { // try from 036c1778 to 037c177b has its CatchHandler @ 036c1788 */
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
                    /* try { // try from 036c177c to 037c17bb has its CatchHandler @ 036c15a8 */
  if (bVar1) {
                    /* catch() { ... } // from try @ 036c1720 with catch @ 036c1780 */
                    /* catch() { ... } // from try @ 036c1708 with catch @ 036c1784 */
                    /* catch() { ... } // from try @ 036c1778 with catch @ 036c1788 */
                    /* catch() { ... } // from try @ 036c1774 with catch @ 036c178c */
                    /* catch() { ... } // from try @ 036c1770 with catch @ 036c1790 */
    pNVar3 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
                    /* catch() { ... } // from try @ 036c1768 with catch @ 036c1794 */
    if (pNVar3 != (NHJCFGACFDF_o *)0x0) {
                    /* catch() { ... } // from try @ 036c169c with catch @ 036c1798 */
                    /* catch() { ... } // from try @ 036c1690 with catch @ 036c179c */
                    /* catch() { ... } // from try @ 036c1764 with catch @ 036c17a0 */
                    /* WARNING: Could not recover jumptable at 0x036c17a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 036c1668 with catch @ 036c17a4 */
      uVar2 = (*(pNVar3->klass->vtable)._12_LFEGGMNMDMJ.methodPtr)
                        (pNVar3,(pNVar3->klass->vtable)._12_LFEGGMNMDMJ.method);
      return (bool)uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== public static void MHKLAIFGNCN(List<NFKLEEPNELA> CIADJOAENAM, bool HLJOHNIDBDM = True)  [RVA 0x35C17B8]
// IMAPABEJECG$$MHKLAIFGNCN @ RVA 0x35C17B8

void IMAPABEJECG__MHKLAIFGNCN
               (System_Collections_Generic_List_NFKLEEPNELA__o *CIADJOAENAM,bool HLJOHNIDBDM,
               MethodInfo *method)

{
  uint PKEAOHMFMFD;
  bool bVar1;
  MethodInfo *in_x4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 036c17bc to 037c17bf has its CatchHandler @ 036c17e0 */
                    /* try { // try from 036c17c0 to 037c17e7 has its CatchHandler @ 036c15a8 */
  if ((DAT_04568f24 & 1) == 0) {
                    /* catch() { ... } // from try @ 036c17bc with catch @ 036c17e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_Dispose__);
                    /* try { // try from 036c17e8 to 037c17ef has its CatchHandler @ 036c1804 */
                    /* try { // try from 036c17f0 to 037c17fb has its CatchHandler @ 036c15a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_MoveNext__);
                    /* try { // try from 036c17fc to 037c1803 has its CatchHandler @ 036c1804 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_get_Current__);
                    /* catch() { ... } // from try @ 036c17e8 with catch @ 036c1804
                       catch() { ... } // from try @ 036c17fc with catch @ 036c1804 */
                    /* try { // try from 036c1808 to 037c18df has its CatchHandler @ 036c1808
                       catch() { ... } // from try @ 036c1808 with catch @ 036c1808
                       catch() { ... } // from try @ 036c18e8 with catch @ 036c1808
                       catch() { ... } // from try @ 036c19b0 with catch @ 036c1808
                       catch() { ... } // from try @ 036c19bc with catch @ 036c1808
                       catch() { ... } // from try @ 036c19e0 with catch @ 036c1808
                       catch() { ... } // from try @ 036c1a20 with catch @ 036c1808 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NFKLEEPNELA>_GetEnumerator__);
    DAT_04568f24 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (CIADJOAENAM != (System_Collections_Generic_List_NFKLEEPNELA__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)CIADJOAENAM,
               Method_System_Collections_Generic_List<NFKLEEPNELA>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<NFKLEEPNELA>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      PKEAOHMFMFD = *(uint *)((long)&local_48.fields._current[1].monitor + 4);
      if (*(int32_t *)&local_48.fields._current[1].monitor < (int)PKEAOHMFMFD) {
        IMAPABEJECG__CLKGKNCGJID
                  ((System_String_o *)local_48.fields._current[1].klass,
                   *(int32_t *)&local_48.fields._current[1].monitor,PKEAOHMFMFD,HLJOHNIDBDM,in_x4);
      }
      else {
        IMAPABEJECG__OPAJGJEKAPD
                  ((System_String_o *)local_48.fields._current[1].klass,HLJOHNIDBDM,
                   (MethodInfo *)(ulong)PKEAOHMFMFD);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DGLJCGNHLIG()  [RVA 0x35C1A44]
// IMAPABEJECG$$DGLJCGNHLIG @ RVA 0x35C1A44

void IMAPABEJECG__DGLJCGNHLIG(MethodInfo *method)

{
  IMAPABEJECG_StaticFields *pIVar1;
  CNOGBOOJFIP_o **ppCVar2;
  NHJCFGACFDF_o *pNVar3;
  
  if ((DAT_04568f25 & 1) == 0) {
    FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f25 = 1;
  }
  pIVar1 = IMAPABEJECG_TypeInfo->static_fields;
  pNVar3 = pIVar1->KAKIHIMNDAE;
  pIVar1->ECCPBJGMNPE = false;
  if (pNVar3 != (NHJCFGACFDF_o *)0x0) {
    (*(pNVar3->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
              (pNVar3,(pNVar3->klass->vtable)._9_HNIHOIAMDPC.method);
    pIVar1 = IMAPABEJECG_TypeInfo->static_fields;
  }
  pIVar1->KAKIHIMNDAE = (NHJCFGACFDF_o *)0x0;
  thunk_FUN_01c20e04(&pIVar1->KAKIHIMNDAE,0);
  ppCVar2 = &IMAPABEJECG_TypeInfo->static_fields->BPIIMPKLPCP;
  *ppCVar2 = (CNOGBOOJFIP_o *)0x0;
  thunk_FUN_01c20e04(ppCVar2,0);
  return;
}


// ===== public static bool NCJLBDIMPED()  [RVA 0x35C1AC8]
// IMAPABEJECG$$NCJLBDIMPED @ RVA 0x35C1AC8

bool IMAPABEJECG__NCJLBDIMPED(MethodInfo *method)

{
  undefined1 uVar1;
  NHJCFGACFDF_o *pNVar2;
  
  if ((DAT_04568f26 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f26 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pNVar2->klass->vtable)._4_unknown.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._4_unknown.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void KJFENNDOBOB()  [RVA 0x35C1B24]
// IMAPABEJECG$$KJFENNDOBOB @ RVA 0x35C1B24

void IMAPABEJECG__KJFENNDOBOB(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  
  if ((DAT_04568f27 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f27 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__NCLOHJCDCEJ(method_00);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._5_unknown.methodPtr)
                (pNVar2,0,(pNVar2->klass->vtable)._5_unknown.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static void HEHBOCDCKEN()  [RVA 0x35C1B8C]
// IMAPABEJECG$$HEHBOCDCKEN @ RVA 0x35C1B8C

void IMAPABEJECG__HEHBOCDCKEN(MethodInfo *method)

{
  NHJCFGACFDF_o *pNVar1;
  
  if ((DAT_04568f28 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f28 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pNVar1->klass[1]._1.byval_arg.data)(pNVar1,*(undefined8 *)&pNVar1->klass[1]._1.byval_arg.bits)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void FOGOMNAOMBD()  [RVA 0x35C1BEC]
// IMAPABEJECG$$FOGOMNAOMBD @ RVA 0x35C1BEC

void IMAPABEJECG__FOGOMNAOMBD(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  
  if ((DAT_04568f29 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f29 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._6_unknown.methodPtr)
                (pNVar2,(pNVar2->klass->vtable)._6_unknown.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static void PPCPAHAPCNB()  [RVA 0x35C12A0]
// IMAPABEJECG$$PPCPAHAPCNB @ RVA 0x35C12A0

void IMAPABEJECG__PPCPAHAPCNB(MethodInfo *method)

{
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar1;
  CNOGBOOJFIP_o *pCVar2;
  MethodInfo *method_01;
  MethodInfo *method_02;
  NHJCFGACFDF_o **ppNVar3;
  CNOGBOOJFIP_o **ppCVar4;
  IMAPABEJECG_ADAMKJAHPLL_o local_30;
  
  if ((DAT_04568f2a & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f2a = 1;
  }
  local_30.fields.dataHolder = (LFEFCNOBPGB_o *)0x0;
  local_30.fields.googlePlayDataHolder = (OCHIFKHFMAC_o *)0x0;
  if (IMAPABEJECG_TypeInfo->static_fields->ECCPBJGMNPE == false) {
    IMAPABEJECG_TypeInfo->static_fields->ECCPBJGMNPE = true;
    local_30.fields.dataHolder = IMAPABEJECG__AJBOOGOHPAI(method);
    method_00 = (MethodInfo *)thunk_FUN_01c20e04(&local_30,local_30.fields.dataHolder);
    local_30.fields.googlePlayDataHolder = IMAPABEJECG__LPBAKNGGBMK(method_00);
    thunk_FUN_01c20e04(&local_30.fields.googlePlayDataHolder);
    pNVar1 = IMAPABEJECG__ILHMBENENJF(&local_30,method_01);
    ppNVar3 = &IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    *ppNVar3 = pNVar1;
    thunk_FUN_01c20e04(ppNVar3,pNVar1);
    pCVar2 = IMAPABEJECG__OLNHKPOOCMA(&local_30,method_02);
    ppCVar4 = &IMAPABEJECG_TypeInfo->static_fields->BPIIMPKLPCP;
    *ppCVar4 = pCVar2;
    thunk_FUN_01c20e04(ppCVar4,pCVar2);
    pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
      (*(pNVar1->klass->vtable)._8_unknown.methodPtr)
                (pNVar1,(pNVar1->klass->vtable)._8_unknown.method);
    }
  }
  return;
}


// ===== internal static NHJCFGACFDF ILHMBENENJF(ref IMAPABEJECG.ADAMKJAHPLL )  [RVA 0x35C1D08]
// IMAPABEJECG$$ILHMBENENJF @ RVA 0x35C1D08

NHJCFGACFDF_o * IMAPABEJECG__ILHMBENENJF(IMAPABEJECG_ADAMKJAHPLL_o *param_1,MethodInfo *method)

{
  Nekki_SF2_Core_ApplicationController_o *BJEBMOKCJBD;
  GPFMGALHFJK_o *__this;
  EINKKMIHCHI_o *__this_00;
  OCHIFKHFMAC_o *LIHGLFALHJH;
  LFEFCNOBPGB_o *KPCBMOJKHKF;
  
  if ((DAT_04568f2b & 1) == 0) {
    FUN_01bab630(&EINKKMIHCHI_TypeInfo);
    FUN_01bab630(&GPFMGALHFJK_TypeInfo);
    DAT_04568f2b = 1;
  }
  KPCBMOJKHKF = (param_1->fields).dataHolder;
  BJEBMOKCJBD = Nekki_SF2_Core_ApplicationController__get_Instance((MethodInfo *)0x0);
  LIHGLFALHJH = (param_1->fields).googlePlayDataHolder;
  __this = (GPFMGALHFJK_o *)thunk_FUN_01bda818(GPFMGALHFJK_TypeInfo);
  GPFMGALHFJK___ctor(__this,KPCBMOJKHKF,(EJIGANJGBCA_o *)BJEBMOKCJBD,(KCACNCMCBHC_o *)LIHGLFALHJH,
                     (MethodInfo *)0x0);
  __this_00 = (EINKKMIHCHI_o *)thunk_FUN_01bda818(EINKKMIHCHI_TypeInfo);
  EINKKMIHCHI___ctor(__this_00,__this,(MethodInfo *)0x0);
  return (NHJCFGACFDF_o *)__this_00;
}


// ===== public static string ADBBGOBBAJA()  [RVA 0x35C1DB8]
// IMAPABEJECG$$ADBBGOBBAJA @ RVA 0x35C1DB8

System_String_o * IMAPABEJECG__ADBBGOBBAJA(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04568f2c & 1) == 0) {
    FUN_01bab630(&IMAPABEJECG_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&string_TypeInfo);
    DAT_04568f2c = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
                    /* try { // try from 036c1df0 to 037c1df7 has its CatchHandler @ 036c1f34 */
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (System_String_o *)(*pNVar2->klass[1]._1.image)(pNVar2,pNVar2->klass[1]._1.gc_desc);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 036c1e30 to 037c1e3b has its CatchHandler @ 036c1f2c */
  return string_TypeInfo->static_fields->Empty;
}


// ===== public static bool HCDIBNJMKLH()  [RVA 0x35C1684]
// IMAPABEJECG$$HCDIBNJMKLH @ RVA 0x35C1684

bool IMAPABEJECG__HCDIBNJMKLH(MethodInfo *method)

{
  bool bVar1;
  undefined1 uVar2;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar3;
  
                    /* try { // try from 036c1690 to 037c169b has its CatchHandler @ 036c179c */
  if ((DAT_04568f2d & 1) == 0) {
                    /* try { // try from 036c169c to 037c16a7 has its CatchHandler @ 036c1798 */
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f2d = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__NCLOHJCDCEJ(method_00);
  if (bVar1) {
    pNVar3 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar3 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c16dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pNVar3->klass[1]._1.fields)(pNVar3,pNVar3->klass[1]._1.events);
      return (bool)uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== internal static LFEFCNOBPGB AJBOOGOHPAI()  [RVA 0x35C1C50]
// IMAPABEJECG$$AJBOOGOHPAI @ RVA 0x35C1C50

LFEFCNOBPGB_o * IMAPABEJECG__AJBOOGOHPAI(MethodInfo *method)

{
  bool bVar1;
  LFEFCNOBPGB_o *__this;
  
                    /* try { // try from 036c1c5c to 037c1def has its CatchHandler @ 036c1c5c
                       catch() { ... } // from try @ 036c1c5c with catch @ 036c1c5c
                       catch() { ... } // from try @ 036c1e4c with catch @ 036c1c5c
                       catch() { ... } // from try @ 036c1f14 with catch @ 036c1c5c
                       catch() { ... } // from try @ 036c1f50 with catch @ 036c1c5c
                       catch() { ... } // from try @ 036c1f80 with catch @ 036c1c5c */
  if ((DAT_04568f2e & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&HLMLENLKHFF_TypeInfo);
    DAT_04568f2e = 1;
  }
  bVar1 = IMAPABEJECG__EMBIGPDBNKJ(method);
  if (bVar1) {
    __this = (LFEFCNOBPGB_o *)thunk_FUN_01bda818(HLMLENLKHFF_TypeInfo);
    HLMLENLKHFF___ctor((HLMLENLKHFF_o *)__this,(MethodInfo *)0x0);
  }
  else {
    __this = (LFEFCNOBPGB_o *)0x0;
  }
  return __this;
}


// ===== internal static bool EMBIGPDBNKJ()  [RVA 0x35C15C0]
// IMAPABEJECG$$EMBIGPDBNKJ @ RVA 0x35C15C0

bool IMAPABEJECG__EMBIGPDBNKJ(MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_04568f2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_04568f2f = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  return iVar1 == 0xb;
}


// ===== public static void OLGAHLHLCKH()  [RVA 0x35C1E40]
// IMAPABEJECG$$OLGAHLHLCKH @ RVA 0x35C1E40

void IMAPABEJECG__OLGAHLHLCKH(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  
                    /* try { // try from 036c1e40 to 037c1e4b has its CatchHandler @ 036c1f28 */
                    /* try { // try from 036c1e4c to 037c1f0f has its CatchHandler @ 036c1c5c */
  if ((DAT_04568f30 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f30 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1].rgctx_data)(pNVar2,pNVar2->klass[1]._2.typeHierarchy);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static void CLKGKNCGJID(string OGPGLGPMEPD, int HFELHFCLPJE, int PKEAOHMFMFD, bool HLJOHNIDBDM = True)  [RVA 0x35C1920]
// IMAPABEJECG$$CLKGKNCGJID @ RVA 0x35C1920

void IMAPABEJECG__CLKGKNCGJID
               (System_String_o *OGPGLGPMEPD,int32_t HFELHFCLPJE,int32_t PKEAOHMFMFD,
               bool HLJOHNIDBDM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  NHJCFGACFDF_o *pNVar2;
  
  method_00 = (MethodInfo *)OGPGLGPMEPD;
  if ((DAT_04568f31 & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo,HFELHFCLPJE,PKEAOHMFMFD);
    DAT_04568f31 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method_00);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_01);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c19a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1]._1.element_class)
                (pNVar2,OGPGLGPMEPD,HFELHFCLPJE,PKEAOHMFMFD,HLJOHNIDBDM,
                 pNVar2->klass[1]._1.castClass);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c19b4 with catch @ 036c19bc
                       try { // try from 036c19bc to 037c19db has its CatchHandler @ 036c1808 */
    FUN_01bab8c8();
  }
                    /* try { // try from 036c19ac to 037c19af has its CatchHandler @ 036c19c0 */
                    /* try { // try from 036c19b0 to 037c19b3 has its CatchHandler @ 036c1808 */
                    /* try { // try from 036c19b4 to 037c19bb has its CatchHandler @ 036c19bc */
  return;
}


// ===== public static string PLPICDIFHHG()  [RVA 0x35C1EA8]
// IMAPABEJECG$$PLPICDIFHHG @ RVA 0x35C1EA8

System_String_o * IMAPABEJECG__PLPICDIFHHG(MethodInfo *method)

{
  NHJCFGACFDF_o *pNVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04568f32 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f32 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar1 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar1 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)(*pNVar1->klass[1]._1.interopData)(pNVar1,pNVar1->klass[1]._1.klass)
    ;
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool NHOLBMHOMCM()  [RVA 0x35C1F08]
// IMAPABEJECG$$NHOLBMHOMCM @ RVA 0x35C1F08

bool IMAPABEJECG__NHOLBMHOMCM(MethodInfo *method)

{
  undefined1 uVar1;
  NHJCFGACFDF_o *pNVar2;
  
                    /* try { // try from 036c1f10 to 037c1f13 has its CatchHandler @ 036c1f30 */
                    /* try { // try from 036c1f14 to 037c1f4b has its CatchHandler @ 036c1c5c */
  if ((DAT_04568f33 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c1e40 with catch @ 036c1f28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c1e30 with catch @ 036c1f2c
                        */
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c1f10 with catch @ 036c1f30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c1df0 with catch @ 036c1f34
                        */
    DAT_04568f33 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c1f4c to 037c1f4f has its CatchHandler @ 036c1f70 */
                    /* try { // try from 036c1f50 to 037c1f77 has its CatchHandler @ 036c1c5c */
                    /* WARNING: Could not recover jumptable at 0x036c1f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pNVar2->klass->vtable)._11_NHOLBMHOMCM.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._11_NHOLBMHOMCM.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int KFHNHPGBJBH()  [RVA 0x35C1F64]
// IMAPABEJECG$$KFHNHPGBJBH @ RVA 0x35C1F64

int32_t IMAPABEJECG__KFHNHPGBJBH(MethodInfo *method)

{
  int32_t iVar1;
  NHJCFGACFDF_o *pNVar2;
  
                    /* catch() { ... } // from try @ 036c1f4c with catch @ 036c1f70 */
                    /* try { // try from 036c1f78 to 037c1f7f has its CatchHandler @ 036c1f94 */
  if ((DAT_04568f34 & 1) == 0) {
                    /* try { // try from 036c1f80 to 037c1f8b has its CatchHandler @ 036c1c5c */
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
                    /* try { // try from 036c1f8c to 037c1f93 has its CatchHandler @ 036c1f94 */
    DAT_04568f34 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c1f78 with catch @ 036c1f94
                       catch(type#2 @ 00000000) { ... } // from try @ 036c1f8c with catch @ 036c1f94
                        */
  IMAPABEJECG__PPCPAHAPCNB(method);
                    /* try { // try from 036c1f98 to 037c20a7 has its CatchHandler @ 036c1f98
                       catch() { ... } // from try @ 036c1f98 with catch @ 036c1f98
                       catch() { ... } // from try @ 036c2294 with catch @ 036c1f98
                       catch() { ... } // from try @ 036c2308 with catch @ 036c1f98
                       catch() { ... } // from try @ 036c2370 with catch @ 036c1f98
                       catch() { ... } // from try @ 036c23a0 with catch @ 036c1f98 */
  pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(pNVar2->klass->vtable)._7_unknown.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._7_unknown.method);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OPAJGJEKAPD(string OGPGLGPMEPD, bool HLJOHNIDBDM = True)  [RVA 0x35C19C0]
// IMAPABEJECG$$OPAJGJEKAPD @ RVA 0x35C19C0

void IMAPABEJECG__OPAJGJEKAPD(System_String_o *OGPGLGPMEPD,bool HLJOHNIDBDM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  NHJCFGACFDF_o *pNVar2;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c19ac with catch @ 036c19c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c18e0 with catch @ 036c19c4
                        */
  method_00 = (MethodInfo *)OGPGLGPMEPD;
  if ((DAT_04568f35 & 1) == 0) {
                    /* try { // try from 036c19dc to 037c19df has its CatchHandler @ 036c1a08 */
                    /* try { // try from 036c19e0 to 037c1a17 has its CatchHandler @ 036c1808 */
    method_00 = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f35 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method_00);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_01);
  if (bVar1) {
                    /* catch() { ... } // from try @ 036c19dc with catch @ 036c1a08 */
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c1a18 to 037c1a1f has its CatchHandler @ 036c1a34 */
                    /* try { // try from 036c1a20 to 037c1a2b has its CatchHandler @ 036c1808 */
                    /* try { // try from 036c1a2c to 037c1a33 has its CatchHandler @ 036c1a34 */
                    /* WARNING: Could not recover jumptable at 0x036c1a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1]._1.name)
                (pNVar2,OGPGLGPMEPD,HLJOHNIDBDM,pNVar2->klass[1]._1.namespaze);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c1a18 with catch @ 036c1a34
                       catch(type#2 @ 00000000) { ... } // from try @ 036c1a2c with catch @ 036c1a34
                        */
  return;
}


// ===== internal static OCHIFKHFMAC LPBAKNGGBMK()  [RVA 0x35C1CAC]
// IMAPABEJECG$$LPBAKNGGBMK @ RVA 0x35C1CAC

OCHIFKHFMAC_o * IMAPABEJECG__LPBAKNGGBMK(MethodInfo *method)

{
  bool bVar1;
  OCHIFKHFMAC_o *__this;
  
  if ((DAT_04568f36 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&OCHIFKHFMAC_TypeInfo);
    DAT_04568f36 = 1;
  }
  bVar1 = IMAPABEJECG__EMBIGPDBNKJ(method);
  if (bVar1) {
    __this = (OCHIFKHFMAC_o *)thunk_FUN_01bda818(OCHIFKHFMAC_TypeInfo);
    OCHIFKHFMAC___ctor(__this,(MethodInfo *)0x0);
  }
  else {
    __this = (OCHIFKHFMAC_o *)0x0;
  }
  return __this;
}


// ===== public static void CBNFJDHJCNK(Action BLMFLPJJMPF, bool BKGBLAKKMDK = False)  [RVA 0x35C1FC0]
// IMAPABEJECG$$CBNFJDHJCNK @ RVA 0x35C1FC0

void IMAPABEJECG__CBNFJDHJCNK(System_Action_o *BLMFLPJJMPF,bool BKGBLAKKMDK,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *a;
  undefined8 uVar3;
  Il2CppClass *pIVar4;
  NHJCFGACFDF_o *pNVar5;
  
  if ((DAT_04568f37 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&IMAPABEJECG_TypeInfo);
    FUN_01bab630(&Method_IMAPABEJECG_LJMPHPOOEHE_FIFJEPLJFGO__);
    FUN_01bab630(&IMAPABEJECG_LJMPHPOOEHE_TypeInfo);
    FUN_01bab630(&StringLiteral_6659/*"GOOGLE_PLAY_V2"*/);
    DAT_04568f37 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(IMAPABEJECG_LJMPHPOOEHE_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)BLMFLPJJMPF;
    method_00 = (MethodInfo *)thunk_FUN_01c20e04(pIVar2,BLMFLPJJMPF);
    IMAPABEJECG__PPCPAHAPCNB(method_00);
    a = IMAPABEJECG__PLPICDIFHHG(method_01);
    bVar1 = System_String__op_Inequality(a,StringLiteral_6659/*"GOOGLE_PLAY_V2"*/,(MethodInfo *)0x0);
    if ((bVar1) || ((bVar1 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), !bVar1 && (!BKGBLAKKMDK)))
       ) {
      pIVar4 = pIVar2->klass;
      if (pIVar4 != (Il2CppClass *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c20a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pIVar4->_1).namespaze)
                  ((pIVar4->_1).element_class,*(undefined8 *)&(pIVar4->_1).byval_arg.bits);
        return;
      }
                    /* try { // try from 036c20a8 to 037c20af has its CatchHandler @ 036c2354 */
      return;
    }
                    /* try { // try from 036c20c4 to 037c20cf has its CatchHandler @ 036c234c */
    pNVar5 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    uVar3 = thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    if (pNVar5 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c2114 to 037c211f has its CatchHandler @ 036c2328 */
                    /* WARNING: Could not recover jumptable at 0x036c2118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar5->klass->vtable)._5_unknown.methodPtr)
                (pNVar5,uVar3,(pNVar5->klass->vtable)._5_unknown.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string BKKOBBDEPFH()  [RVA 0x35C2128]
// IMAPABEJECG$$BKKOBBDEPFH @ RVA 0x35C2128

System_String_o * IMAPABEJECG__BKKOBBDEPFH(MethodInfo *method)

{
  bool bVar1;
  int32_t GMGGINDHNPI;
  MethodInfo *method_00;
  System_String_o *pSVar2;
  NHJCFGACFDF_o *pNVar3;
  
  if ((DAT_04568f38 & 1) == 0) {
    FUN_01bab630(&IMAPABEJECG_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&string_TypeInfo);
    DAT_04568f38 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
  if (bVar1) {
    GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
    pNVar3 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
                    /* try { // try from 036c2180 to 037c2183 has its CatchHandler @ 036c230c */
    if (pNVar3 != (NHJCFGACFDF_o *)0x0) {
                    /* try { // try from 036c2184 to 037c2193 has its CatchHandler @ 036c2320 */
      pSVar2 = (System_String_o *)
               (*pNVar3->klass[1]._1.this_arg.data)
                         (pNVar3,*(undefined8 *)&pNVar3->klass[1]._1.this_arg.bits);
      pSVar2 = GNAFJMPJNKI__HDJCIHBAFNJ(GMGGINDHNPI,pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return string_TypeInfo->static_fields->Empty;
}


// ===== public static void FNGMPMDBIKB()  [RVA 0x35C21D0]
// IMAPABEJECG$$FNGMPMDBIKB @ RVA 0x35C21D0

void IMAPABEJECG__FNGMPMDBIKB(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar2;
  
                    /* try { // try from 036c21dc to 037c21e3 has its CatchHandler @ 036c2310 */
  if ((DAT_04568f39 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f39 = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__NCLOHJCDCEJ(method_00);
  if (bVar1) {
    pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c2228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pNVar2->klass[1]._1.declaringType)(pNVar2,pNVar2->klass[1]._1.parent);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

