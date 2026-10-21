// PPICCLAKFCA$$MELMBOKBFFN @ RVA 0x32DE380

void PPICCLAKFCA__MELMBOKBFFN
               (PPICCLAKFCA_o *__this,System_Nullable_int__o BEAPBDKDNFI,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t iVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  HGAPAPKMHCF_CdnZoneMappingConfig__c *pHVar10;
  HCOKCPNMKFK_c *pHVar11;
  ulong uVar12;
  int *piVar13;
  int32_t *piVar14;
  HGAPAPKMHCF_CdnZoneMappingConfig__o *pHVar15;
  long *plVar16;
  HCOKCPNMKFK_o *pHVar17;
  System_String_o *local_30;
  System_Nullable_int__Fields local_28;
  
  local_28 = BEAPBDKDNFI.fields;
  if ((DAT_045675db & 1) == 0) {
    FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<int,_string>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_045675db = 1;
  }
  local_30 = (System_String_o *)0x0;
  if (((ulong)BEAPBDKDNFI.fields & 0xff) == 0) {
    return;
  }
  pHVar15 = (__this->fields).OAOMFCGPCBP;
  if (pHVar15 != (HGAPAPKMHCF_CdnZoneMappingConfig__o *)0x0) {
    pHVar10 = pHVar15->klass;
    uVar1._0_1_ = (pHVar10->_2).rank;
    uVar1._1_1_ = (pHVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar14 = &((pHVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo) {
          pVVar6 = pHVar10->vtable + *piVar14;
          goto LAB_033de450;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pHVar15,MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo,0)
    ;
LAB_033de450:
    lVar7 = (*pVVar6->methodPtr)(pHVar15,pVVar6->method);
    if (lVar7 != 0) {
      plVar16 = *(long **)(lVar7 + 0x18);
      iVar5 = System_Nullable<int>__get_Value
                        ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_get_Value__);
      if (plVar16 != (long *)0x0) {
        lVar7 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IReadOnlyDictionary_int__string__c **)(piVar13 + -2) ==
                System_Collections_Generic_IReadOnlyDictionary<int,_string>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_033de4d8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01b81914(plVar16,
                              System_Collections_Generic_IReadOnlyDictionary<int,_string>_TypeInfo,1
                             );
LAB_033de4d8:
        uVar12 = (*(code *)*puVar8)(plVar16,iVar5,&local_30,puVar8[1]);
        if ((uVar12 & 1) != 0) {
          pHVar17 = (__this->fields).BCHLEFPBFHO;
          if (pHVar17 == (HCOKCPNMKFK_o *)0x0) goto LAB_033de5e8;
          pHVar11 = pHVar17->klass;
          uVar2._0_1_ = (pHVar11->_2).rank;
          uVar2._1_1_ = (pHVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar2;
          if (uVar12 != 0) {
            piVar14 = &((pHVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                  (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
                pVVar6 = pHVar11->vtable + (*piVar14 + 2);
                goto LAB_033de550;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pHVar17,HCOKCPNMKFK_TypeInfo,2);
LAB_033de550:
          pSVar9 = (System_String_o *)(*pVVar6->methodPtr)(pHVar17,pVVar6->method);
          bVar4 = System_String__op_Equality(pSVar9,local_30,(MethodInfo *)0x0);
          pSVar9 = local_30;
          if (!bVar4) {
            pHVar17 = (__this->fields).BCHLEFPBFHO;
            if (pHVar17 == (HCOKCPNMKFK_o *)0x0) goto LAB_033de5e8;
            pHVar11 = pHVar17->klass;
            uVar3._0_1_ = (pHVar11->_2).rank;
            uVar3._1_1_ = (pHVar11->_2).minimumAlignment;
            uVar12 = (ulong)uVar3;
            if (uVar12 != 0) {
              piVar14 = &((pHVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
                  pVVar6 = pHVar11->vtable + (*piVar14 + 1);
                  goto LAB_033de5c8;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            pVVar6 = (VirtualInvokeData *)FUN_01b81914(pHVar17,HCOKCPNMKFK_TypeInfo,1);
LAB_033de5c8:
            (*pVVar6->methodPtr)(pHVar17,pSVar9,pVVar6->method);
          }
        }
        return;
      }
    }
  }
LAB_033de5e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

