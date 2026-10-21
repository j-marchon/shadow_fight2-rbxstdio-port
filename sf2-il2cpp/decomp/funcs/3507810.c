// KEIAEKNFNNA$$PBGLGLCDHKF @ RVA 0x3507810

/* WARNING: Removing unreachable block (ram,0x03607c20) */

void KEIAEKNFNNA__PBGLGLCDHKF(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t year;
  int32_t month;
  int32_t day;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  OPHDIHJPHDE_o *KDODLJFNAAC;
  System_Collections_Generic_List_OPHDIHJPHDE__o *GIAHCGHPBBA;
  Nekki_Utils_GlobalTimer_o *pNVar5;
  System_DateTime_o OLFIPBLKDAH;
  int64_t NMECKCPAKAA;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  FMOAMIIOKNP_o *pFVar6;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__c *pSVar7;
  long lVar8;
  Core_Configs_Models_LocalDailyConfig_o *pCVar9;
  System_Action_o *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  int *piVar13;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar14;
  undefined8 local_50;
  System_DateTime_Fields local_48;
  uint64_t local_38;
  
  if ((DAT_045688a4 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&FMOAMIIOKNP_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045688a4 = 1;
  }
  local_38 = 0;
  local_48._dateData = 0;
  pFVar6 = (__this->fields).JEPHJLEICLO;
  if (pFVar6 != (FMOAMIIOKNP_o *)0x0) {
    pSVar14 = (pFVar6->fields)._APDMACJCLEG_k__BackingField;
    if (pSVar14 != (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)0x0) {
      pSVar7 = pSVar14->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar11 = (ulong)uVar1;
      if (uVar11 != 0) {
        piVar12 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo) {
            pVVar2 = pSVar7->vtable + *piVar12;
            goto LAB_03607900;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      in_x2 = (MethodInfo *)0x0;
      pVVar2 = (VirtualInvokeData *)FUN_01b81914(pSVar14);
LAB_03607900:
      plVar3 = (long *)(*pVVar2->methodPtr)(pSVar14,pVVar2->method);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03607970;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        in_x2 = (MethodInfo *)0x0;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_03607970:
        uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar11 & 1) == 0) goto LAB_036079e8;
        lVar8 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OPHDIHJPHDE__c **)(piVar13 + -2) ==
                System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_036079cc;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        in_x2 = (MethodInfo *)0x0;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_036079cc:
        KDODLJFNAAC = (OPHDIHJPHDE_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        KEIAEKNFNNA__ONDFOFCHBKF(__this,KDODLJFNAAC,in_x2);
      } while( true );
    }
    goto LAB_03607c18;
  }
  goto LAB_03607a54;
LAB_036079e8:
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03607a44;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03607a44:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
LAB_03607a54:
  GIAHCGHPBBA = NLCLFNMIEJC__GGEDMGGBCHN((__this->fields).DCAEFFHDMGE,(MethodInfo *)0x0);
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
  }
  pNVar5 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (pNVar5 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    if ((pNVar5->fields).GAPAJLLHGHO == false) {
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_38 = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
    }
    else {
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar5 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
      if (pNVar5 == (Nekki_Utils_GlobalTimer_o *)0x0) goto LAB_03607c18;
      local_38 = (uint64_t)Nekki_Utils_GlobalTimer__get_Now(pNVar5,(MethodInfo *)0x0);
    }
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_DateTime_TypeInfo);
    }
    year = System_DateTime__get_Year((System_DateTime_o)&local_38,(MethodInfo *)0x0);
    month = System_DateTime__get_Month((System_DateTime_o)&local_38,(MethodInfo *)0x0);
    day = System_DateTime__get_Day((System_DateTime_o)&local_38,(MethodInfo *)0x0);
    local_50 = 0;
    System_DateTime___ctor((System_DateTime_o)&local_50,year,month,day,(MethodInfo *)0x0);
    local_48._dateData = local_50;
    local_48._dateData =
         (uint64_t)System_DateTime__AddDays((System_DateTime_o)&local_48,1.0,(MethodInfo *)0x0);
    pCVar9 = (__this->fields).DCAEFFHDMGE;
    if (pCVar9 != (Core_Configs_Models_LocalDailyConfig_o *)0x0) {
      OLFIPBLKDAH = System_DateTime__AddHours
                              ((System_DateTime_o)&local_48,
                               (double)(pCVar9->fields)._ResetHour_k__BackingField,(MethodInfo *)0x0
                              );
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
      }
      NMECKCPAKAA = Nekki_Utils_GlobalTimer__TotalSeconds(OLFIPBLKDAH,(MethodInfo *)0x0);
      pFVar6 = (FMOAMIIOKNP_o *)thunk_FUN_01bda818(FMOAMIIOKNP_TypeInfo);
      FMOAMIIOKNP___ctor(pFVar6,NMECKCPAKAA,
                         (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)GIAHCGHPBBA,
                         (MethodInfo *)0x0);
      (__this->fields).JEPHJLEICLO = pFVar6;
      thunk_FUN_01c20e04(&__this->fields,pFVar6);
      NLCLFNMIEJC__BONNGEGNMLF
                ((__this->fields).JEPHJLEICLO,(__this->fields).DCAEFFHDMGE,(MethodInfo *)0x0);
      KEIAEKNFNNA__OPIPNIPKEKA(__this,method_00);
      pSVar10 = (__this->fields).PJFFBLOPKBC;
      if (pSVar10 != (System_Action_o *)0x0) {
        (*(code *)(pSVar10->fields).super.super.invoke_impl)
                  ((pSVar10->fields).super.super.method_code,(pSVar10->fields).super.super.method);
      }
      return;
    }
  }
LAB_03607c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

