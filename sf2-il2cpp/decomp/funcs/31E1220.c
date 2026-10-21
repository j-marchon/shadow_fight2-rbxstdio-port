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

