// KIKKFANOJDC$$PKANHLOKBAO @ RVA 0x352F2E8

System_String_array * KIKKFANOJDC__PKANHLOKBAO(KIKKFANOJDC_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_String_o *pSVar2;
  VirtualInvokeData *pVVar3;
  long lVar4;
  undefined8 *puVar5;
  MethodInfo *extraout_x1;
  MJPJANJNDCI_CdnMirrorsConfig__c *pMVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  MJPJANJNDCI_CdnMirrorsConfig__o *pMVar11;
  long *plVar12;
  System_String_array *local_28;
  
  if ((DAT_04568a4c & 1) == 0) {
    FUN_01bab630(&FBEOLJNHGNE_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_string[]>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo);
    DAT_04568a4c = 1;
    method = extraout_x1;
  }
  local_28 = (System_String_array *)0x0;
  if ((FBEOLJNHGNE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FBEOLJNHGNE_TypeInfo,method);
  }
  pSVar2 = FBEOLJNHGNE__ILPOBELFLKP((MethodInfo *)0x0);
  pMVar11 = (__this->fields).OAOMFCGPCBP;
  if (pMVar11 != (MJPJANJNDCI_CdnMirrorsConfig__o *)0x0) {
    pMVar6 = pMVar11->klass;
    uVar1._0_1_ = (pMVar6->_2).rank;
    uVar1._1_1_ = (pMVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pMVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo) {
          pVVar3 = pMVar6->vtable + *piVar9;
          goto LAB_0362f3b4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar11,MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo,0);
LAB_0362f3b4:
    lVar4 = (*pVVar3->methodPtr)(pMVar11,pVVar3->method);
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (plVar12 = *(long **)(*(long *)(lVar4 + 0x28) + 0x10), plVar12 != (long *)0x0)) {
      lVar7 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IReadOnlyDictionary_string__string____c **)(piVar10 + -2)
              == System_Collections_Generic_IReadOnlyDictionary<string,_string[]>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0362f430;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar12,
                            System_Collections_Generic_IReadOnlyDictionary<string,_string[]>_TypeInfo
                            ,1);
LAB_0362f430:
      uVar8 = (*(code *)*puVar5)(plVar12,pSVar2,&local_28,puVar5[1]);
      if (((local_28 == (System_String_array *)0x0) || ((uVar8 & 1) == 0)) ||
         (local_28->max_length == 0)) {
        if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0362f478;
        local_28 = *(System_String_array **)(*(long *)(lVar4 + 0x28) + 0x18);
      }
      return local_28;
    }
  }
LAB_0362f478:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

