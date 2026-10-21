// TypeDefIndex 1752
// Namespace: 
// public class GBAAAJLKFDA : MOBODMIBMKA
// Fields:
//   private static readonly HashSet<long> KBLOLGCKCIM; // 0x0
//   private readonly EGPGCNBJPEH HMAMEMNGEPE; // 0x10
//   private readonly HGAPAPKMHCF<ServiceZonesConfig> OAOMFCGPCBP; // 0x18
//   private readonly CJLNLIOJFLM CMJNDHHGCBI; // 0x20

// ===== private bool AEBJBGAOPJP(string EHKEOHNBLCK, long EAJPLEMEEAB)  [RVA 0x31E114C]
// GBAAAJLKFDA$$AEBJBGAOPJP @ RVA 0x31E114C

bool GBAAAJLKFDA__AEBJBGAOPJP
               (GBAAAJLKFDA_o *__this,System_String_o *EHKEOHNBLCK,int64_t EAJPLEMEEAB,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_long__o *__this_00;
  
  if ((DAT_04566d44 & 1) == 0) {
    FUN_01bab630(&GBAAAJLKFDA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<long>_Contains__);
    FUN_01bab630(&StringLiteral_6018/*"Exception occurred"*/);
    DAT_04566d44 = 1;
  }
  bVar1 = System_String__IsNullOrWhiteSpace(EHKEOHNBLCK,(MethodInfo *)0x0);
  if (!bVar1) {
    if (EHKEOHNBLCK == (System_String_o *)0x0) goto LAB_032e121c;
                    /* try { // try from 032e11a8 to 033e11af has its CatchHandler @ 032e121c */
    bVar1 = System_String__StartsWith(EHKEOHNBLCK,StringLiteral_6018/*"Exception occurred"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return false;
    }
  }
                    /* try { // try from 032e11d4 to 033e11df has its CatchHandler @ 032e1218 */
  if ((GBAAAJLKFDA_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032e11e0 to 033e1203 has its CatchHandler @ 032e1110 */
    thunk_FUN_01ba7564();
  }
  __this_00 = GBAAAJLKFDA_TypeInfo->static_fields->KBLOLGCKCIM;
  if (__this_00 != (System_Collections_Generic_HashSet_long__o *)0x0) {
                    /* try { // try from 032e1204 to 033e1207 has its CatchHandler @ 032e1214 */
    bVar1 = System_Collections_Generic_HashSet<long>__Contains
                      (__this_00,EAJPLEMEEAB,
                       Method_System_Collections_Generic_HashSet<long>_Contains__);
                    /* try { // try from 032e1208 to 033e120b has its CatchHandler @ 032e1210 */
                    /* try { // try from 032e120c to 033e120f has its CatchHandler @ 032e1218 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e1208 with catch @ 032e1210
                       try { // try from 032e1210 to 033e1233 has its CatchHandler @ 032e1110 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e1204 with catch @ 032e1214
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e11d4 with catch @ 032e1218
                       catch(type#1 @ 03f99f68) { ... } // from try @ 032e120c with catch @ 032e1218
                        */
    return !bVar1;
  }
LAB_032e121c:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e11a8 with catch @ 032e121c
                        */
  FUN_01bab8c8();
}


// ===== private TimeSpan GFBIJKKKMEI(ValueTuple<int, string> BHHBEIACGPB, TimeSpan MINHPKOPAIE)  [RVA 0x31E1220]
// GBAAAJLKFDA$$GFBIJKKKMEI @ RVA 0x31E1220

System_TimeSpan_o
GBAAAJLKFDA__GFBIJKKKMEI
          (GBAAAJLKFDA_o *__this,System_ValueTuple_int__string__o BHHBEIACGPB,
          System_TimeSpan_o MINHPKOPAIE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_TimeSpan_o SVar8;
  CJLNLIOJFLM_c *pCVar9;
  long lVar10;
  HGAPAPKMHCF_ServiceZonesConfig__c *pHVar11;
  ulong uVar12;
  int *piVar13;
  int32_t *piVar14;
  HGAPAPKMHCF_ServiceZonesConfig__o *pHVar15;
  CJLNLIOJFLM_o *pCVar16;
  double dVar17;
  System_TimeSpan_Fields local_48;
  
                    /* try { // try from 032e1234 to 033e1237 has its CatchHandler @ 032e1258 */
                    /* try { // try from 032e1238 to 033e125f has its CatchHandler @ 032e1110 */
  local_48 = MINHPKOPAIE.fields._ticks;
  if ((DAT_04566d45 & 1) == 0) {
                    /* catch() { ... } // from try @ 032e1234 with catch @ 032e1258 */
    FUN_01bab630(&CJLNLIOJFLM_TypeInfo,BHHBEIACGPB.fields._0_8_,BHHBEIACGPB.fields.Item2);
                    /* try { // try from 032e1260 to 033e1267 has its CatchHandler @ 032e127c */
                    /* try { // try from 032e1268 to 033e1273 has its CatchHandler @ 032e1110 */
    FUN_01bab630(&UniRx_IReactiveProperty<Nullable<int>>_TypeInfo);
                    /* try { // try from 032e1274 to 033e127b has its CatchHandler @ 032e127c */
    FUN_01bab630(&MJPJANJNDCI<ServiceZonesConfig>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032e1260 with catch @ 032e127c
                       catch(type#2 @ 00000000) { ... } // from try @ 032e1274 with catch @ 032e127c
                        */
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566d45 = 1;
  }
  pCVar16 = (__this->fields).CMJNDHHGCBI;
  if (pCVar16 != (CJLNLIOJFLM_o *)0x0) {
    pCVar9 = pCVar16->klass;
    uVar1._0_1_ = (pCVar9->_2).rank;
    uVar1._1_1_ = (pCVar9->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar14 = &((pCVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
          pVVar5 = pCVar9->vtable + *piVar14;
          goto LAB_032e1300;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar16,CJLNLIOJFLM_TypeInfo,0);
LAB_032e1300:
    plVar6 = (long *)(*pVVar5->methodPtr)(pCVar16,pVVar5->method);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(UniRx_IReactiveProperty_Nullable_int___c **)(piVar13 + -2) ==
              UniRx_IReactiveProperty<Nullable<int>>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_032e1368;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,UniRx_IReactiveProperty<Nullable<int>>_TypeInfo,0);
LAB_032e1368:
      cVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (cVar4 == '\0') {
        return (System_TimeSpan_o)MINHPKOPAIE.fields._ticks._ticks;
      }
      pCVar16 = (__this->fields).CMJNDHHGCBI;
      if (pCVar16 != (CJLNLIOJFLM_o *)0x0) {
        pCVar9 = pCVar16->klass;
        uVar2._0_1_ = (pCVar9->_2).rank;
        uVar2._1_1_ = (pCVar9->_2).minimumAlignment;
        uVar12 = (ulong)uVar2;
        if (uVar12 != 0) {
          piVar14 = &((pCVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
              pVVar5 = pCVar9->vtable + *piVar14;
              goto LAB_032e13d0;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar16,CJLNLIOJFLM_TypeInfo,0);
LAB_032e13d0:
        plVar6 = (long *)(*pVVar5->methodPtr)(pCVar16,pVVar5->method);
        if (plVar6 != (long *)0x0) {
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(UniRx_IReactiveProperty_Nullable_int___c **)(piVar13 + -2) ==
                  UniRx_IReactiveProperty<Nullable<int>>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_032e1430;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01b81914(plVar6,UniRx_IReactiveProperty<Nullable<int>>_TypeInfo,0);
LAB_032e1430:
          uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (((uVar12 & 0xff) != 0) && ((int)(uVar12 >> 0x20) == BHHBEIACGPB.fields.Item1)) {
            return (System_TimeSpan_o)MINHPKOPAIE.fields._ticks._ticks;
          }
          if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          dVar17 = System_TimeSpan__get_TotalMilliseconds
                             ((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
          pHVar15 = (__this->fields).OAOMFCGPCBP;
          if (pHVar15 != (HGAPAPKMHCF_ServiceZonesConfig__o *)0x0) {
            pHVar11 = pHVar15->klass;
            uVar3._0_1_ = (pHVar11->_2).rank;
            uVar3._1_1_ = (pHVar11->_2).minimumAlignment;
            uVar12 = (ulong)uVar3;
            if (uVar12 != 0) {
              piVar14 = &((pHVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)MJPJANJNDCI<ServiceZonesConfig>_TypeInfo) {
                  pVVar5 = pHVar11->vtable + *piVar14;
                  goto LAB_032e14d4;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            pVVar5 = (VirtualInvokeData *)
                     FUN_01b81914(pHVar15,MJPJANJNDCI<ServiceZonesConfig>_TypeInfo,0);
LAB_032e14d4:
            lVar10 = (*pVVar5->methodPtr)(pHVar15,pVVar5->method);
            if (lVar10 != 0) {
              SVar8 = System_TimeSpan__FromMilliseconds
                                (dVar17 * (double)*(float *)(lVar10 + 0x10),(MethodInfo *)0x0);
              return (System_TimeSpan_o)SVar8.fields._ticks._ticks;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int EICHAFPOAJF(List<ValueTuple<int, string>> BKADBAPFLBB)  [RVA 0x31E1520]
// GBAAAJLKFDA$$EICHAFPOAJF @ RVA 0x31E1520

int32_t GBAAAJLKFDA__EICHAFPOAJF
                  (GBAAAJLKFDA_o *__this,
                  System_Collections_Generic_List_ValueTuple_int__string___o *BKADBAPFLBB,
                  MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Predicate_T__o *match;
  CJLNLIOJFLM_c *pCVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  CJLNLIOJFLM_o *pCVar11;
  
  if ((DAT_04566d46 & 1) == 0) {
    FUN_01bab630(&CJLNLIOJFLM_TypeInfo);
    FUN_01bab630(&Method_GBAAAJLKFDA_GLFIBMIKOIA__);
    FUN_01bab630(&UniRx_IReadOnlyReactiveProperty<Nullable<int>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_FindIndex__);
    FUN_01bab630(&System_Predicate<ValueTuple<int,_string>>_TypeInfo);
    DAT_04566d46 = 1;
  }
  pCVar11 = (__this->fields).CMJNDHHGCBI;
  if (pCVar11 != (CJLNLIOJFLM_o *)0x0) {
    pCVar6 = pCVar11->klass;
    uVar1._0_1_ = (pCVar6->_2).rank;
    uVar1._1_1_ = (pCVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pCVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
          pVVar3 = pCVar6->vtable + *piVar9;
          goto LAB_032e15dc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar11,CJLNLIOJFLM_TypeInfo,0);
LAB_032e15dc:
    plVar4 = (long *)(*pVVar3->methodPtr)(pCVar11,pVVar3->method);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(UniRx_IReadOnlyReactiveProperty_Nullable_int___c **)(piVar10 + -2) ==
              UniRx_IReadOnlyReactiveProperty<Nullable<int>>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_032e1648;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar4,UniRx_IReadOnlyReactiveProperty<Nullable<int>>_TypeInfo,1);
LAB_032e1648:
      uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar8 & 1) != 0) {
        match = (System_Predicate_T__o *)
                thunk_FUN_01bda818(System_Predicate<ValueTuple<int,_string>>_TypeInfo);
        System_Predicate<ValueTuple<int,_object>>___ctor();
        if (BKADBAPFLBB == (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0)
        goto LAB_032e16b4;
        iVar2 = System_Collections_Generic_List<ValueTuple<int,_object>>__FindIndex
                          ((System_Collections_Generic_List_T__o *)BKADBAPFLBB,match,
                           Method_System_Collections_Generic_List<ValueTuple<int,_string>>_FindIndex__
                          );
        if (-1 < iVar2) {
          return iVar2;
        }
      }
      return 0;
    }
  }
LAB_032e16b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<ValueTuple<int, string>> KCEBKFGFKIF(string CJFAPGEEPLM)  [RVA 0x31E16B8]
// GBAAAJLKFDA$$KCEBKFGFKIF @ RVA 0x31E16B8

/* WARNING: Removing unreachable block (ram,0x032e1d1c) */

System_Collections_Generic_List_ValueTuple_int__string___o *
GBAAAJLKFDA__KCEBKFGFKIF(GBAAAJLKFDA_o *__this,System_String_o *CJFAPGEEPLM,MethodInfo *method)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  System_ValueTuple_int__object__o item;
  System_Uri_o *uri;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_ValueTuple_int__string___o *__this_00;
  Il2CppMethodPointer *ppIVar6;
  long lVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  System_String_o *pSVar10;
  System_UriBuilder_o *__this_01;
  System_String_o **ppSVar11;
  MethodInfo_2BC3064 *in_x4;
  HGAPAPKMHCF_ServiceZonesConfig__c *pHVar12;
  long lVar13;
  System_ValueTuple_int__string__array *pSVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  long *plVar18;
  HGAPAPKMHCF_ServiceZonesConfig__o *pHVar19;
  long *plVar20;
  System_ValueTuple_int__object__o __this_02;
  Il2CppObject *local_88;
  System_String_o *pSStack_80;
  System_Uri_o *local_78;
  System_String_o *local_70;
  System_Uri_o *local_68;
  
  if ((DAT_04566d47 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<ServiceZone>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<ServiceZone>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<int,_ServiceZone>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ValueTuple<int,_string>>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<ServiceZonesConfig>_TypeInfo);
    FUN_01bab630(&System_UriBuilder_TypeInfo);
    FUN_01bab630(&System_Uri_TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<int,_string>__ctor__);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_18862/*"https://"*/);
    FUN_01bab630(&StringLiteral_7876/*"Invalid url '"*/);
    DAT_04566d47 = 1;
  }
  local_70 = (System_String_o *)0x0;
  local_68 = (System_Uri_o *)0x0;
  local_78 = (System_Uri_o *)0x0;
  __this_00 = (System_Collections_Generic_List_ValueTuple_int__string___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ValueTuple<int,_string>>_TypeInfo);
  System_Collections_Generic_List<ValueTuple<int,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<ValueTuple<int,_string>>__ctor__);
  pHVar19 = (__this->fields).OAOMFCGPCBP;
  if (pHVar19 != (HGAPAPKMHCF_ServiceZonesConfig__o *)0x0) {
    pHVar12 = pHVar19->klass;
    uVar2._0_1_ = (pHVar12->_2).rank;
    uVar2._1_1_ = (pHVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar2;
    if (uVar15 != 0) {
      piVar16 = &((pHVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<ServiceZonesConfig>_TypeInfo) {
          ppIVar6 = &pHVar12->vtable[*piVar16].methodPtr;
          goto LAB_032e1838;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    ppIVar6 = (Il2CppMethodPointer *)
              FUN_01b81914(pHVar19,MJPJANJNDCI<ServiceZonesConfig>_TypeInfo,0);
LAB_032e1838:
    lVar7 = (**ppIVar6)(pHVar19,(MethodInfo *)ppIVar6[1]);
    if (lVar7 == 0) {
      return __this_00;
    }
    if ((System_Uri_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = System_Uri__TryCreate(CJFAPGEEPLM,1,&local_68,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar8 = LOHCAIACKLI__AHFEHPEEIDJ(CJFAPGEEPLM,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat(StringLiteral_7876/*"Invalid url '"*/,pSVar8,StringLiteral_802/*"'"*/,(MethodInfo *)0x0);
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar8,(MethodInfo *)0x0);
      return __this_00;
    }
    if (local_68 != (System_Uri_o *)0x0) {
      pSVar8 = System_Uri__get_Authority(local_68,(MethodInfo *)0x0);
      plVar18 = *(long **)(lVar7 + 0x18);
      if (plVar18 != (long *)0x0) {
        lVar7 = *plVar18;
        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IReadOnlyDictionary_int__ServiceZone__c **)
                 (piVar17 + -2) ==
                System_Collections_Generic_IReadOnlyDictionary<int,_ServiceZone>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar17 + 4) * 0x10 + 0x138);
              goto LAB_032e1938;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01b81914(plVar18,
                              System_Collections_Generic_IReadOnlyDictionary<int,_ServiceZone>_TypeInfo
                              ,4);
LAB_032e1938:
        plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
        if (plVar18 != (long *)0x0) {
          lVar7 = *plVar18;
          uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerable_ServiceZone__c **)(piVar17 + -2) ==
                  System_Collections_Generic_IEnumerable<ServiceZone>_TypeInfo) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_032e19a0;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01b81914(plVar18,System_Collections_Generic_IEnumerable<ServiceZone>_TypeInfo
                                ,0);
LAB_032e19a0:
          plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar7 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_032e1a20;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)FUN_01b81914(plVar18,System_Collections_IEnumerator_TypeInfo,0);
LAB_032e1a20:
            uVar15 = (*(code *)*puVar9)(plVar18,puVar9[1]);
            if ((uVar15 & 1) == 0) {
              if (plVar18 == (long *)0x0) {
                return __this_00;
              }
              lVar7 = *plVar18;
              uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar15 == 0) goto LAB_032e1ca4;
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_032e1c8c;
            }
            lVar7 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IEnumerator_ServiceZone__c **)(piVar17 + -2) ==
                    System_Collections_Generic_IEnumerator<ServiceZone>_TypeInfo) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_032e1a7c;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_01b81914(plVar18,
                                  System_Collections_Generic_IEnumerator<ServiceZone>_TypeInfo,0);
LAB_032e1a7c:
            lVar7 = (*(code *)*puVar9)(plVar18,puVar9[1]);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            plVar20 = *(long **)(lVar7 + 0x18);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            lVar13 = *plVar20;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IReadOnlyDictionary_string__string__c **)
                     (piVar17 + -2) ==
                    System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo) {
                  puVar9 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_032e1ae8;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_01b81914(plVar20,
                                  System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo
                                  ,1);
LAB_032e1ae8:
            uVar15 = (*(code *)*puVar9)(plVar20,pSVar8,&local_70,puVar9[1]);
            if ((uVar15 & 1) != 0) {
              pSVar10 = System_String__Concat(StringLiteral_18862/*"https://"*/,local_70,(MethodInfo *)0x0);
              if ((System_Uri_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar4 = System_Uri__TryCreate(pSVar10,1,&local_78,(MethodInfo *)0x0);
              uri = local_68;
              if (bVar4) {
                __this_01 = (System_UriBuilder_o *)thunk_FUN_01bda818(System_UriBuilder_TypeInfo);
                System_UriBuilder___ctor(__this_01,uri,(MethodInfo *)0x0);
                if (local_78 == (System_Uri_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar10 = System_Uri__get_Host(local_78,(MethodInfo *)0x0);
                if (__this_01 == (System_UriBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_UriBuilder__set_Host(__this_01,pSVar10,(MethodInfo *)0x0);
                if (local_78 == (System_Uri_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar4 = System_Uri__get_IsDefaultPort(local_78,(MethodInfo *)0x0);
                if (bVar4) {
                  iVar5 = -1;
                }
                else {
                  if (local_78 == (System_Uri_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  iVar5 = System_Uri__get_Port(local_78,(MethodInfo *)0x0);
                }
                System_UriBuilder__set_Port(__this_01,iVar5,(MethodInfo *)0x0);
                uVar1 = *(undefined4 *)(lVar7 + 0x10);
                iVar5 = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                                  (__this_01,(__this_01->klass->vtable)._3_ToString.method);
                local_88 = (Il2CppObject *)0x0;
                pSStack_80 = (System_String_o *)0x0;
                __this_02.fields.Item2._0_4_ = uVar1;
                __this_02.fields._0_8_ = &local_88;
                __this_02.fields.Item2._4_4_ = 0;
                System_ValueTuple<int,_object>___ctor
                          (__this_02,iVar5,Method_System_ValueTuple<int,_string>__ctor__,in_x4);
                lVar7 = Method_System_Collections_Generic_List<ValueTuple<int,_string>>_Add__;
                if (__this_00 == (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0)
                {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                item.fields.Item2 = (Il2CppObject *)pSStack_80;
                item.fields._0_8_ = local_88;
                pSVar14 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pSVar14 == (System_ValueTuple_int__string__array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar3 = (__this_00->fields)._size;
                if (uVar3 < (uint)pSVar14->max_length) {
                  (__this_00->fields)._size = uVar3 + 1;
                  ppSVar11 = &pSVar14->m_Items[(int)uVar3].fields.Item2;
                  *ppSVar11 = pSStack_80;
                  *(Il2CppObject **)&pSVar14->m_Items[(int)uVar3].fields = local_88;
                  thunk_FUN_01c20e04(ppSVar11,0);
                }
                else {
                  System_Collections_Generic_List<ValueTuple<int,_object>>__AddWithResize
                            ((System_Collections_Generic_List_T__o *)__this_00,item,
                             *(MethodInfo_26954D8 **)
                              (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_032e1c8c:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_032e1cc0;
    }
  }
LAB_032e1ca4:
  puVar9 = (undefined8 *)FUN_01b81914(plVar18,System_IDisposable_TypeInfo,0);
LAB_032e1cc0:
  (*(code *)*puVar9)(plVar18,puVar9[1]);
  return __this_00;
}


// ===== public void KNMENIBLFGF(OJJLPLHNGBP OKBIKHHKOEN)  [RVA 0x31E1E18]
// GBAAAJLKFDA$$KNMENIBLFGF @ RVA 0x31E1E18

void GBAAAJLKFDA__KNMENIBLFGF(GBAAAJLKFDA_o *__this,OJJLPLHNGBP_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t iVar1;
  GBAAAJLKFDA_MHBELAIPHEK_o *__this_00;
  GBAAAJLKFDA_o **ppGVar2;
  System_Collections_Generic_List_ValueTuple_int__string___o *pSVar3;
  EGPGCNBJPEH_o *__this_01;
  System_Collections_Generic_List_ValueTuple_int__string___o **ppSVar4;
  OJJLPLHNGBP_o **ppOVar5;
  
  if ((DAT_04566d48 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_get_Count__);
    FUN_01bab630(&GBAAAJLKFDA_MHBELAIPHEK_TypeInfo);
    DAT_04566d48 = 1;
  }
  __this_00 = (GBAAAJLKFDA_MHBELAIPHEK_o *)thunk_FUN_01bda818(GBAAAJLKFDA_MHBELAIPHEK_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (GBAAAJLKFDA_MHBELAIPHEK_o *)0x0) {
    ppGVar2 = &(__this_00->fields).__4__this;
    *ppGVar2 = __this;
    thunk_FUN_01c20e04(ppGVar2,__this);
    ppOVar5 = &(__this_00->fields).parameters;
    *ppOVar5 = OKBIKHHKOEN;
    thunk_FUN_01c20e04(ppOVar5,OKBIKHHKOEN);
    if (*ppOVar5 != (OJJLPLHNGBP_o *)0x0) {
      pSVar3 = GBAAAJLKFDA__KCEBKFGFKIF(__this,((*ppOVar5)->fields).super.PHONOLEMBHN,method);
      ppSVar4 = &(__this_00->fields).zones;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4,pSVar3);
      pSVar3 = *ppSVar4;
      if (pSVar3 != (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0) {
        if ((pSVar3->fields)._size != 0) {
          iVar1 = GBAAAJLKFDA__EICHAFPOAJF(__this,pSVar3,method);
          (__this_00->fields).startIndex = iVar1;
          GBAAAJLKFDA_MHBELAIPHEK__GPFEGDLLACA(__this_00,0,method);
          return;
        }
        __this_01 = (__this->fields).HMAMEMNGEPE;
        if (__this_01 != (EGPGCNBJPEH_o *)0x0) {
          EGPGCNBJPEH__KNMENIBLFGF(__this_01,*ppOVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool GLFIBMIKOIA(ValueTuple<int, string> KEFILECBPMF)  [RVA 0x31E2188]
// GBAAAJLKFDA$$GLFIBMIKOIA @ RVA 0x31E2188

bool GBAAAJLKFDA__GLFIBMIKOIA
               (GBAAAJLKFDA_o *__this,System_ValueTuple_int__string__o KEFILECBPMF,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  CJLNLIOJFLM_c *pCVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  CJLNLIOJFLM_o *pCVar10;
  
  if ((DAT_04566d49 & 1) == 0) {
    FUN_01bab630(&CJLNLIOJFLM_TypeInfo,KEFILECBPMF.fields._0_8_,KEFILECBPMF.fields.Item2);
    FUN_01bab630(&UniRx_IReactiveProperty<Nullable<int>>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_04566d49 = 1;
  }
  pCVar10 = (__this->fields).CMJNDHHGCBI;
  if (pCVar10 != (CJLNLIOJFLM_o *)0x0) {
    pCVar5 = pCVar10->klass;
    uVar1._0_1_ = (pCVar5->_2).rank;
    uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pCVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
          pVVar2 = pCVar5->vtable + *piVar8;
          goto LAB_032e2238;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar10,CJLNLIOJFLM_TypeInfo,0);
LAB_032e2238:
    plVar3 = (long *)(*pVVar2->methodPtr)(pCVar10,pVVar2->method);
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(UniRx_IReactiveProperty_Nullable_int___c **)(piVar9 + -2) ==
              UniRx_IReactiveProperty<Nullable<int>>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_032e22a0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,UniRx_IReactiveProperty<Nullable<int>>_TypeInfo,0);
LAB_032e22a0:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      return (uVar7 & 0xff) != 0 && (int)(uVar7 >> 0x20) == KEFILECBPMF.fields.Item1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(EGPGCNBJPEH LKMJPHDHCID, HGAPAPKMHCF<ServiceZonesConfig> HLFCHMCOPID, CJLNLIOJFLM EKHFOALLOGF)  [RVA 0x31E22D4]
// GBAAAJLKFDA$$.ctor @ RVA 0x31E22D4

void GBAAAJLKFDA___ctor(GBAAAJLKFDA_o *__this,EGPGCNBJPEH_o *LKMJPHDHCID,
                       HGAPAPKMHCF_ServiceZonesConfig__o *HLFCHMCOPID,CJLNLIOJFLM_o *EKHFOALLOGF,
                       MethodInfo *method)

{
  HGAPAPKMHCF_ServiceZonesConfig__o **ppHVar1;
  CJLNLIOJFLM_o **ppCVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HMAMEMNGEPE = LKMJPHDHCID;
  thunk_FUN_01c20e04(&__this->fields,LKMJPHDHCID);
  ppHVar1 = &(__this->fields).OAOMFCGPCBP;
  *ppHVar1 = HLFCHMCOPID;
  thunk_FUN_01c20e04(ppHVar1,HLFCHMCOPID);
  ppCVar2 = &(__this->fields).CMJNDHHGCBI;
  *ppCVar2 = EKHFOALLOGF;
  thunk_FUN_01c20e04(ppCVar2,EKHFOALLOGF);
  return;
}


// ===== public void ILGCEJBAOHG(BKMILGLGFCM OKBIKHHKOEN)  [RVA 0x31E2334]
// GBAAAJLKFDA$$ILGCEJBAOHG @ RVA 0x31E2334

void GBAAAJLKFDA__ILGCEJBAOHG(GBAAAJLKFDA_o *__this,BKMILGLGFCM_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t iVar1;
  GBAAAJLKFDA_NPHBGNFGBKL_o *__this_00;
  GBAAAJLKFDA_o **ppGVar2;
  System_Collections_Generic_List_ValueTuple_int__string___o *pSVar3;
  EGPGCNBJPEH_o *__this_01;
  System_Collections_Generic_List_ValueTuple_int__string___o **ppSVar4;
  BKMILGLGFCM_o **ppBVar5;
  
  if ((DAT_04566d4a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_get_Count__);
    FUN_01bab630(&GBAAAJLKFDA_NPHBGNFGBKL_TypeInfo);
    DAT_04566d4a = 1;
  }
  __this_00 = (GBAAAJLKFDA_NPHBGNFGBKL_o *)thunk_FUN_01bda818(GBAAAJLKFDA_NPHBGNFGBKL_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (GBAAAJLKFDA_NPHBGNFGBKL_o *)0x0) {
    ppGVar2 = &(__this_00->fields).__4__this;
    *ppGVar2 = __this;
    thunk_FUN_01c20e04(ppGVar2,__this);
    ppBVar5 = &(__this_00->fields).parameters;
    *ppBVar5 = OKBIKHHKOEN;
    thunk_FUN_01c20e04(ppBVar5,OKBIKHHKOEN);
    if (*ppBVar5 != (BKMILGLGFCM_o *)0x0) {
      pSVar3 = GBAAAJLKFDA__KCEBKFGFKIF(__this,((*ppBVar5)->fields).super.PHONOLEMBHN,method);
      ppSVar4 = &(__this_00->fields).zones;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4,pSVar3);
      pSVar3 = *ppSVar4;
      if (pSVar3 != (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0) {
        if ((pSVar3->fields)._size != 0) {
          iVar1 = GBAAAJLKFDA__EICHAFPOAJF(__this,pSVar3,method);
          (__this_00->fields).startIndex = iVar1;
          GBAAAJLKFDA_NPHBGNFGBKL__CFKEANHONJK(__this_00,0,method);
          return;
        }
        __this_01 = (__this->fields).HMAMEMNGEPE;
        if (__this_01 != (EGPGCNBJPEH_o *)0x0) {
          EGPGCNBJPEH__ILGCEJBAOHG(__this_01,*ppBVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x31E2638]
// GBAAAJLKFDA$$.cctor @ RVA 0x31E2638

void GBAAAJLKFDA___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_long__o *__this;
  
  if ((DAT_04566d4b & 1) == 0) {
    FUN_01bab630(&GBAAAJLKFDA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<long>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<long>_TypeInfo);
    DAT_04566d4b = 1;
  }
  __this = (System_Collections_Generic_HashSet_long__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<long>_TypeInfo);
  System_Collections_Generic_HashSet<long>___ctor
            (__this,Method_System_Collections_Generic_HashSet<long>__ctor__);
  if (__this != (System_Collections_Generic_HashSet_long__o *)0x0) {
    System_Collections_Generic_HashSet<long>__Add
              (__this,400,Method_System_Collections_Generic_HashSet<long>_Add__);
    System_Collections_Generic_HashSet<long>__Add
              (__this,0x191,Method_System_Collections_Generic_HashSet<long>_Add__);
    System_Collections_Generic_HashSet<long>__Add
              (__this,0x193,Method_System_Collections_Generic_HashSet<long>_Add__);
    System_Collections_Generic_HashSet<long>__Add
              (__this,0x194,Method_System_Collections_Generic_HashSet<long>_Add__);
    System_Collections_Generic_HashSet<long>__Add
              (__this,0x195,Method_System_Collections_Generic_HashSet<long>_Add__);
    GBAAAJLKFDA_TypeInfo->static_fields->KBLOLGCKCIM = __this;
    thunk_FUN_01c20e04(GBAAAJLKFDA_TypeInfo->static_fields,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

