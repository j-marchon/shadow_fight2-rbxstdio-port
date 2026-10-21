// KEIAEKNFNNA$$MBLOPJIFOMC @ RVA 0x3506848

/* WARNING: Removing unreachable block (ram,0x03606c6c) */
/* WARNING: Removing unreachable block (ram,0x03606b54) */

void KEIAEKNFNNA__MBLOPJIFOMC(KEIAEKNFNNA_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  PCKJEMMFMKL_o *__this_00;
  PCKJEMMFMKL_OMJBBKMFKIJ_o *pPVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  OPHDIHJPHDE_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  FMOAMIIOKNP_o *pFVar9;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__c *pSVar10;
  long lVar11;
  System_Collections_Generic_List_T__o *__this_02;
  System_Action_o *pSVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  Core_Configs_Models_LocalDailyQuestInfo_o *pCVar16;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar17;
  int iVar18;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CJNHFNHJHPE;
  int local_68;
  
  if ((DAT_045688a2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MPAKDCNMLEG>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MPAKDCNMLEG>_get_Count__);
    DAT_045688a2 = 1;
  }
  __this_00 = PCKJEMMFMKL__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (PCKJEMMFMKL_o *)0x0) {
LAB_03606c68:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = PCKJEMMFMKL__NNAIMOIPHEE(__this_00,ACCIHBHMFPN,(MethodInfo *)0x0);
  if (pPVar5 == (PCKJEMMFMKL_OMJBBKMFKIJ_o *)0x0) {
    CJNHFNHJHPE = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(1,(MethodInfo *)0x0);
  }
  else {
    CJNHFNHJHPE = (pPVar5->fields).HFBHMJBLLOI.fields;
  }
  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  if (0 < iVar4) {
    bVar2 = false;
    iVar18 = 0;
    local_68 = -1;
    do {
      pFVar9 = (__this->fields).JEPHJLEICLO;
      if ((pFVar9 == (FMOAMIIOKNP_o *)0x0) ||
         (pSVar17 = (pFVar9->fields)._APDMACJCLEG_k__BackingField,
         pSVar17 == (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)0x0))
      goto LAB_03606c68;
      pSVar10 = pSVar17->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar13 = (ulong)uVar1;
      if (uVar13 != 0) {
        piVar14 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo) {
            pVVar6 = pSVar10->vtable + *piVar14;
            goto LAB_036069a4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar17,System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo,0);
LAB_036069a4:
      plVar7 = (long *)(*pVVar6->methodPtr)(pSVar17,pVVar6->method);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03606ba0 to 03706ba3 has its CatchHandler @ 03606bbc */
        FUN_01bab8c8();
      }
      do {
        do {
          lVar11 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03606a04;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03606a04:
          uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar13 & 1) == 0) goto LAB_03606ae8;
          lVar11 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_OPHDIHJPHDE__c **)(piVar15 + -2) ==
                  System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03606a60;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo,
                                0);
LAB_03606a60:
          __this_01 = (OPHDIHJPHDE_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (__this_01 == (OPHDIHJPHDE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while ((__this_01->fields)._DJAIGGFHPMK_k__BackingField != false);
        pCVar16 = (__this_01->fields)._DMCIAIBPJGN_k__BackingField;
        if (pCVar16 == (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while ((pCVar16->fields)._AdsTargetCount_k__BackingField <=
               (__this_01->fields)._PKGCKALOMOF_k__BackingField);
      __this_02 = (System_Collections_Generic_List_T__o *)(pCVar16->fields)._AdsType_k__BackingField
      ;
      if (__this_02 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03606ba8 to 03706bab has its CatchHandler @ 03606bac */
        FUN_01bab8c8();
      }
                    /* try { // try from 03606aa0 to 03706aa7 has its CatchHandler @ 03606bc4 */
                    /* try { // try from 03606abc to 03706ac3 has its CatchHandler @ 03606bc0 */
      if (((__this_02->fields)._size < 1) ||
         (bVar3 = System_Collections_Generic_List<Int32Enum>__Contains
                            (__this_02,ACCIHBHMFPN,
                             Method_System_Collections_Generic_List<MPAKDCNMLEG>_Contains__), bVar3)
         ) {
        OPHDIHJPHDE__IIDDCHPCAPP(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 03606ad4 to 03706adb has its CatchHandler @ 03606bb8 */
        if (local_68 == -1) {
          local_68 = (pCVar16->fields)._Id_k__BackingField;
        }
        bVar2 = true;
      }
LAB_03606ae8:
      if (plVar7 != (long *)0x0) {
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03606b3c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03606b3c:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
      method_02 = (MethodInfo *)0x0;
      iVar18 = iVar18 + 1;
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE,
                         (MethodInfo *)0x0);
    } while (iVar18 < iVar4);
    if (bVar2) {
      KEIAEKNFNNA__OPIPNIPKEKA(__this,method_00);
      KEIAEKNFNNA__MGNAAFCFIEH(__this,method_01);
                    /* catch() { ... } // from try @ 03606bdc with catch @ 03606c08 */
      if (-1 < local_68) {
        KEIAEKNFNNA__HHANNAPHADA(__this,local_68,method_02);
      }
      pSVar12 = (__this->fields).PJFFBLOPKBC;
                    /* try { // try from 03606c18 to 03706c1f has its CatchHandler @ 03606c34 */
      if (pSVar12 != (System_Action_o *)0x0) {
                    /* try { // try from 03606c20 to 03706c2b has its CatchHandler @ 036067c4 */
                    /* try { // try from 03606c2c to 03706c33 has its CatchHandler @ 03606c34 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03606c18 with catch @ 03606c34
                       catch(type#2 @ 00000000) { ... } // from try @ 03606c2c with catch @ 03606c34
                        */
                    /* try { // try from 03606c38 to 0370754f has its CatchHandler @ 03606c38
                       catch() { ... } // from try @ 03606c38 with catch @ 03606c38
                       catch() { ... } // from try @ 03607588 with catch @ 03606c38
                       catch() { ... } // from try @ 03607fdc with catch @ 03606c38
                       catch() { ... } // from try @ 03608014 with catch @ 03606c38
                       catch() { ... } // from try @ 03608050 with catch @ 03606c38 */
                    /* WARNING: Could not recover jumptable at 0x03606c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar12->fields).super.super.invoke_impl)
                  ((pSVar12->fields).super.super.method_code,(pSVar12->fields).super.super.method);
        return;
      }
    }
  }
  return;
}

