// ECENNHNBAME$$PLEKHOPFKNM @ RVA 0x3017E34

/* WARNING: Removing unreachable block (ram,0x031180d8) */

void ECENNHNBAME__PLEKHOPFKNM
               (ECENNHNBAME_o *__this,System_Byte_array *IMMNELPBGIF,MethodInfo *method)

{
  UnityEngine_Vector3_array_array **ppUVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int32_t iVar6;
  IOACNDPCIFK_o *__this_00;
  UnityEngine_Vector3_array_array *pUVar7;
  UnityEngine_Vector3_array *pUVar8;
  VirtualInvokeData *pVVar9;
  IOACNDPCIFK_c *pIVar10;
  int32_t *piVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar18;
  
  if ((DAT_04565bde & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&IOACNDPCIFK_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3_____TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04565bde = 1;
  }
  __this_00 = (IOACNDPCIFK_o *)thunk_FUN_01bda818(IOACNDPCIFK_TypeInfo);
  IOACNDPCIFK___ctor(__this_00,IMMNELPBGIF,(MethodInfo *)0x0);
  if (__this_00 == (IOACNDPCIFK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = (*(__this_00->klass->vtable)._8_DOGNHIEBHJB.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._8_DOGNHIEBHJB.method);
  pUVar7 = (UnityEngine_Vector3_array_array *)
           FUN_01bab718(UnityEngine_Vector3_____TypeInfo,(ulong)uVar4);
  ppUVar1 = &(__this->fields).MMENPDNBNHN;
  (__this->fields).MMENPDNBNHN = pUVar7;
  thunk_FUN_01c20e04(ppUVar1);
  if (0 < (int)uVar4) {
    uVar12 = 0;
    do {
      (*(__this_00->klass->vtable)._6_DBEDJLMLPIF.methodPtr)
                (__this_00,(__this_00->klass->vtable)._6_DBEDJLMLPIF.method);
      uVar5 = (*(__this_00->klass->vtable)._8_DOGNHIEBHJB.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._8_DOGNHIEBHJB.method);
      pUVar7 = *ppUVar1;
      pUVar8 = (UnityEngine_Vector3_array *)
               FUN_01bab718(UnityEngine_Vector3___TypeInfo,(ulong)uVar5);
      if (pUVar7 == (UnityEngine_Vector3_array_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((uint)pUVar7->max_length <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pUVar7->m_Items[uVar12] = pUVar8;
      thunk_FUN_01c20e04();
      if (0 < (int)uVar5) {
        uVar13 = 0;
        lVar14 = 0x20;
        do {
          pUVar7 = *ppUVar1;
          if (pUVar7 == (UnityEngine_Vector3_array_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((uint)pUVar7->max_length <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pUVar8 = pUVar7->m_Items[uVar12];
          uVar15 = (*(__this_00->klass->vtable)._10_HHEEPMNEACO.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._10_HHEEPMNEACO.method);
          fVar16 = (float)(*(__this_00->klass->vtable)._10_HHEEPMNEACO.methodPtr)
                                    (__this_00,(__this_00->klass->vtable)._10_HHEEPMNEACO.method);
          uVar17 = (*(__this_00->klass->vtable)._10_HHEEPMNEACO.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._10_HHEEPMNEACO.method);
          if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((uint)pUVar8->max_length <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          uVar13 = uVar13 + 1;
          puVar2 = (undefined4 *)((long)pUVar8->m_Items + lVar14 + -0x20);
          lVar14 = lVar14 + 0xc;
          *puVar2 = uVar15;
          puVar2[1] = -fVar16;
          puVar2[2] = uVar17;
        } while (uVar5 != uVar13);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
  }
  iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
  if (iVar6 == 0) {
    CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(uVar4 - 1,(MethodInfo *)0x0)
    ;
    (__this->fields).IPAGCJKIPEN.fields = CVar18;
  }
  pIVar10 = __this_00->klass;
  uVar3._0_1_ = (pIVar10->_2).rank;
  uVar3._1_1_ = (pIVar10->_2).minimumAlignment;
  uVar12 = (ulong)uVar3;
  if (uVar12 != 0) {
    piVar11 = &((pIVar10->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar9 = &(pIVar10->vtable)._0_Equals + *piVar11;
        goto LAB_0311808c;
      }
      uVar12 = uVar12 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_0311808c:
  (*pVVar9->methodPtr)(__this_00,pVVar9->method);
  return;
}

