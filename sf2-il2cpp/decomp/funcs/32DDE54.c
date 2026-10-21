// PPICCLAKFCA$$LOGHFAANAPE @ RVA 0x32DDE54

void PPICCLAKFCA__LOGHFAANAPE(PPICCLAKFCA_o *__this,OHAHOONNEIC_o *DKCGCLNOELC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  bool bVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_String_o *str2;
  long lVar9;
  undefined8 *puVar10;
  OHAHOONNEIC_c *pOVar11;
  HGAPAPKMHCF_CdnZoneMappingConfig__c *pHVar12;
  CJLNLIOJFLM_c *pCVar13;
  ulong uVar14;
  int32_t *piVar15;
  int *piVar16;
  CJLNLIOJFLM_o *pCVar17;
  HGAPAPKMHCF_CdnZoneMappingConfig__o *pHVar18;
  long *plVar19;
  undefined8 local_40;
  int local_34;
  System_Uri_o *local_28;
  
  if ((DAT_045675d9 & 1) == 0) {
    FUN_01bab630(&CJLNLIOJFLM_TypeInfo);
    FUN_01bab630(&UniRx_IReactiveProperty<Nullable<int>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_int>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&OHAHOONNEIC_TypeInfo);
    FUN_01bab630(&System_Uri_TypeInfo);
    FUN_01bab630(&StringLiteral_2098);
    DAT_045675d9 = 1;
  }
  local_28 = (System_Uri_o *)0x0;
  local_34 = 0;
  if (DKCGCLNOELC != (OHAHOONNEIC_o *)0x0) {
    pOVar11 = DKCGCLNOELC->klass;
    uVar1._0_1_ = (pOVar11->_2).rank;
    uVar1._1_1_ = (pOVar11->_2).minimumAlignment;
    uVar14 = (ulong)uVar1;
    if (uVar14 != 0) {
      piVar15 = &((pOVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
            (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
          pVVar7 = pOVar11->vtable + *piVar15;
          goto LAB_033ddf60;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,0);
LAB_033ddf60:
    pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
    if ((System_Uri_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Uri_TypeInfo);
    }
    bVar6 = System_Uri__TryCreate(pSVar8,1,&local_28,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    if ((local_28 != (System_Uri_o *)0x0) &&
       (pSVar8 = System_Uri__get_Scheme(local_28,(MethodInfo *)0x0), local_28 != (System_Uri_o *)0x0
       )) {
      str2 = System_Uri__get_Host(local_28,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat(pSVar8,StringLiteral_2098,str2,(MethodInfo *)0x0);
      pHVar18 = (__this->fields).OAOMFCGPCBP;
      if (pHVar18 != (HGAPAPKMHCF_CdnZoneMappingConfig__o *)0x0) {
        pHVar12 = pHVar18->klass;
        uVar2._0_1_ = (pHVar12->_2).rank;
        uVar2._1_1_ = (pHVar12->_2).minimumAlignment;
        uVar14 = (ulong)uVar2;
        if (uVar14 != 0) {
          piVar15 = &((pHVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo) {
              pVVar7 = pHVar12->vtable + *piVar15;
              goto LAB_033de040;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        pVVar7 = (VirtualInvokeData *)
                 FUN_01b81914(pHVar18,MJPJANJNDCI<CdnZoneMappingConfig>_TypeInfo,0);
LAB_033de040:
        lVar9 = (*pVVar7->methodPtr)(pHVar18,pVVar7->method);
        if ((lVar9 != 0) && (plVar19 = *(long **)(lVar9 + 0x10), plVar19 != (long *)0x0)) {
          lVar9 = *plVar19;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IReadOnlyDictionary_string__int__c **)(piVar16 + -2)
                  == System_Collections_Generic_IReadOnlyDictionary<string,_int>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_033de0b0;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01b81914(plVar19,
                                 System_Collections_Generic_IReadOnlyDictionary<string,_int>_TypeInfo
                                 ,1);
LAB_033de0b0:
          uVar14 = (*(code *)*puVar10)(plVar19,pSVar8,&local_34,puVar10[1]);
          if ((uVar14 & 1) == 0) {
            return;
          }
          pCVar17 = (__this->fields).DHBPHINEKBL;
          if (pCVar17 != (CJLNLIOJFLM_o *)0x0) {
            pCVar13 = pCVar17->klass;
            uVar3._0_1_ = (pCVar13->_2).rank;
            uVar3._1_1_ = (pCVar13->_2).minimumAlignment;
            uVar14 = (ulong)uVar3;
            if (uVar14 != 0) {
              piVar15 = &((pCVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                    (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
                  pVVar7 = pCVar13->vtable + *piVar15;
                  goto LAB_033de124;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pCVar17,CJLNLIOJFLM_TypeInfo,0);
LAB_033de124:
            plVar19 = (long *)(*pVVar7->methodPtr)(pCVar17,pVVar7->method);
            if (plVar19 != (long *)0x0) {
              lVar9 = *plVar19;
              uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(UniRx_IReactiveProperty_Nullable_int___c **)(piVar16 + -2) ==
                      UniRx_IReactiveProperty<Nullable<int>>_TypeInfo) {
                    puVar10 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_033de18c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)
                        FUN_01b81914(plVar19,UniRx_IReactiveProperty<Nullable<int>>_TypeInfo,0);
LAB_033de18c:
              uVar14 = (*(code *)*puVar10)(plVar19,puVar10[1]);
              if (((uVar14 & 0xff) != 0) && (local_34 == (int)(uVar14 >> 0x20))) {
                return;
              }
              pCVar17 = (__this->fields).DHBPHINEKBL;
              if (pCVar17 != (CJLNLIOJFLM_o *)0x0) {
                pCVar13 = pCVar17->klass;
                uVar4._0_1_ = (pCVar13->_2).rank;
                uVar4._1_1_ = (pCVar13->_2).minimumAlignment;
                uVar14 = (ulong)uVar4;
                if (uVar14 != 0) {
                  piVar15 = &((pCVar13->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                        (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
                      pVVar7 = pCVar13->vtable + *piVar15;
                      goto LAB_033de204;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                pVVar7 = (VirtualInvokeData *)FUN_01b81914(pCVar17,CJLNLIOJFLM_TypeInfo,0);
LAB_033de204:
                plVar19 = (long *)(*pVVar7->methodPtr)(pCVar17,pVVar7->method);
                local_40 = 0;
                System_Nullable<int>___ctor
                          ((System_Nullable_int__o)&local_40,local_34,
                           Method_System_Nullable<int>__ctor__);
                uVar5 = local_40;
                if (plVar19 != (long *)0x0) {
                  lVar9 = *plVar19;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(UniRx_IReactiveProperty_Nullable_int___c **)(piVar16 + -2) ==
                          UniRx_IReactiveProperty<Nullable<int>>_TypeInfo) {
                        puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_033de288;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar10 = (undefined8 *)
                            FUN_01b81914(plVar19,UniRx_IReactiveProperty<Nullable<int>>_TypeInfo,1);
LAB_033de288:
                  (*(code *)*puVar10)(plVar19,uVar5,puVar10[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

