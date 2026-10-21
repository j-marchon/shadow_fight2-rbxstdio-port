// IOIKBGAJIGO$$AEJJGGKAHBN @ RVA 0x3373D00

/* WARNING: Removing unreachable block (ram,0x0347444c) */
/* WARNING: Removing unreachable block (ram,0x03474338) */
/* WARNING: Removing unreachable block (ram,0x03474458) */

void IOIKBGAJIGO__AEJJGGKAHBN
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,MethodInfo *method)

{
  uint32_t uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  int32_t DJFJIEDMAMJ;
  uint uVar6;
  System_String_o *pSVar7;
  System_Byte_array *pSVar8;
  System_IO_MemoryStream_o *__this;
  System_IO_BinaryReader_o *__this_00;
  long *plVar9;
  long lVar10;
  long lVar11;
  Il2CppObject *pIVar12;
  System_Object_array *pSVar13;
  System_String_o *IELJFIKHNIE;
  KJFHBENFBBO_o *__this_01;
  VirtualInvokeData *pVVar14;
  undefined8 uVar15;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  void *pvVar16;
  System_IO_BinaryReader_c *pSVar17;
  System_IO_MemoryStream_c *pSVar18;
  ulong uVar19;
  int32_t *piVar20;
  int iVar21;
  
  if ((DAT_04567b45 & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&KJFHBENFBBO_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_12172);
    FUN_01bab630(&StringLiteral_12816);
    FUN_01bab630(&StringLiteral_11067);
    DAT_04567b45 = 1;
  }
  if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = IOIKBGAJIGO__JJDDMIBJDKG(IIDPDAKKFFN,DDGBMJNBFPF,method);
  if (bVar4) {
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    pSVar7 = IOIKBGAJIGO__PIPGAPGKBLM
                       (IIDPDAKKFFN,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,
                        in_x3);
    pSVar8 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar7,(MethodInfo *)0x0);
    if ((pSVar8 == (System_Byte_array *)0x0) || (pSVar8->max_length == 0)) {
      pSVar7 = System_String__Concat(StringLiteral_12816,pSVar7,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* try { // try from 03474174 to 0357419b has its CatchHandler @ 03474338 */
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      return;
    }
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = IOIKBGAJIGO__ABNDLGMOFKJ
                       (pSVar8,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_00);
    __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(__this,pSVar8,(MethodInfo *)0x0);
    __this_00 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(__this_00,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = false;
    while( true ) {
      plVar9 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar10 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
      plVar9 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar11 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
      if (lVar10 == lVar11) break;
      DJFJIEDMAMJ = (*(__this_00->klass->vtable)._16_ReadUInt32.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._16_ReadUInt32.method);
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar5 = OCMLPCKBHPN__IKLNIACILPM(IIDPDAKKFFN,DDGBMJNBFPF,DJFJIEDMAMJ,(MethodInfo *)0x0);
      uVar1 = (IFAMAAGNCBJ_TypeInfo->_2).cctor_finished;
      if (bVar5) {
        if (uVar1 == 0) {
          thunk_FUN_01ba7564();
        }
        pIVar12 = IFAMAAGNCBJ__GPBMELHDADN<object>
                            (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
        if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pIVar12[9].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 034741d0 to 035741f7 has its CatchHandler @ 03474334 */
        pvVar16 = ((pIVar12[9].klass)->_1).this_arg.data;
        if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (bVar4 || *(char *)((long)pvVar16 + 0x11) == '\0') {
          iVar21 = 9;
          goto LAB_034741f8;
        }
                    /* try { // try from 03474214 to 0357421b has its CatchHandler @ 0347432c */
        pSVar13 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 03474224 to 0357422f has its CatchHandler @ 0347431c */
                    /* try { // try from 03474234 to 03574247 has its CatchHandler @ 03474318 */
        if ((IIDPDAKKFFN != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(IIDPDAKKFFN,(((pSVar13->obj).klass)->_1).element_class),
           lVar10 == 0)) {
          uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar15,0);
        }
        if ((int)pSVar13->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar13->m_Items[0] = (Il2CppObject *)IIDPDAKKFFN;
        thunk_FUN_01c20e04(pSVar13->m_Items,IIDPDAKKFFN);
                    /* try { // try from 03474258 to 0357426f has its CatchHandler @ 03474330 */
        if ((DDGBMJNBFPF != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(DDGBMJNBFPF,(((pSVar13->obj).klass)->_1).element_class),
           lVar10 == 0)) {
          uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar15,0);
        }
                    /* try { // try from 03474270 to 035742f7 has its CatchHandler @ 0347402c */
        if ((uint)pSVar13->max_length < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar13->m_Items[1] = (Il2CppObject *)DDGBMJNBFPF;
        thunk_FUN_01c20e04(pSVar13->m_Items + 1,DDGBMJNBFPF);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_12172,pSVar13,(MethodInfo *)0x0);
        iVar21 = 9;
        if (__this_00 != (System_IO_BinaryReader_o *)0x0) goto LAB_034742c8;
        goto LAB_03474328;
      }
      if (uVar1 == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar12 = IFAMAAGNCBJ__GPBMELHDADN<object>
                          (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (pIVar12[9].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pvVar16 = ((pIVar12[9].klass)->_1).this_arg.data;
      if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (!bVar4 && *(char *)((long)pvVar16 + 0x11) != '\0') {
        pSVar13 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((IIDPDAKKFFN != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(IIDPDAKKFFN,(((pSVar13->obj).klass)->_1).element_class),
           lVar10 == 0)) {
          uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar15,0);
        }
        if ((int)pSVar13->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar13->m_Items[0] = (Il2CppObject *)IIDPDAKKFFN;
        thunk_FUN_01c20e04(pSVar13->m_Items,IIDPDAKKFFN);
        if ((DDGBMJNBFPF != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(DDGBMJNBFPF,(((pSVar13->obj).klass)->_1).element_class),
           lVar10 == 0)) {
          uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar15,0);
        }
        if ((uint)pSVar13->max_length < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar13->m_Items[1] = (Il2CppObject *)DDGBMJNBFPF;
                    /* try { // try from 0347402c to 03574173 has its CatchHandler @ 0347402c
                       catch() { ... } // from try @ 0347402c with catch @ 0347402c
                       catch() { ... } // from try @ 03474270 with catch @ 0347402c
                       catch() { ... } // from try @ 03474304 with catch @ 0347402c
                       catch() { ... } // from try @ 0347430c with catch @ 0347402c
                       catch() { ... } // from try @ 034743c8 with catch @ 0347402c */
        thunk_FUN_01c20e04(pSVar13->m_Items + 1,DDGBMJNBFPF);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_11067,pSVar13,(MethodInfo *)0x0);
        bVar4 = true;
      }
      if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar7 = KJFHBENFBBO__IIADICPGOMI(__this_00,(MethodInfo *)0x0);
      IELJFIKHNIE = KJFHBENFBBO__IIADICPGOMI(__this_00,(MethodInfo *)0x0);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0);
      uVar6 = (*(__this_00->klass->vtable)._16_ReadUInt32.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._16_ReadUInt32.method);
      if (uVar6 != 0) {
        pSVar8 = (System_Byte_array *)
                 (*(__this_00->klass->vtable)._25_ReadBytes.methodPtr)
                           (__this_00,(ulong)uVar6,(__this_00->klass->vtable)._25_ReadBytes.method);
      }
      __this_01 = (KJFHBENFBBO_o *)thunk_FUN_01bda818(KJFHBENFBBO_TypeInfo);
      KJFHBENFBBO___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (KJFHBENFBBO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      KJFHBENFBBO__BKCFPHNEONL(__this_01,pSVar8,DJFJIEDMAMJ,IELJFIKHNIE,(MethodInfo *)0x0);
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OCMLPCKBHPN__EGJMBCFCADF(__this_01,pSVar7,IELJFIKHNIE,DJFJIEDMAMJ,(MethodInfo *)0x0);
    }
    iVar21 = 0xc;
LAB_034741f8:
    if (__this_00 == (System_IO_BinaryReader_o *)0x0) goto LAB_03474328;
LAB_034742c8:
    pSVar17 = __this_00->klass;
    uVar2._0_1_ = (pSVar17->_2).rank;
    uVar2._1_1_ = (pSVar17->_2).minimumAlignment;
    uVar19 = (ulong)uVar2;
    if (uVar19 != 0) {
      piVar20 = &((pSVar17->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* catch() { ... } // from try @ 03474308 with catch @ 03474314 */
                    /* catch() { ... } // from try @ 03474234 with catch @ 03474318 */
          pVVar14 = &(pSVar17->vtable)._0_Equals + *piVar20;
          goto LAB_0347431c;
        }
        uVar19 = uVar19 - 1;
                    /* try { // try from 034742f8 to 035742fb has its CatchHandler @ 03474328 */
        piVar20 = piVar20 + 4;
                    /* try { // try from 034742fc to 035742ff has its CatchHandler @ 03474324 */
      } while (uVar19 != 0);
    }
                    /* try { // try from 03474300 to 03574303 has its CatchHandler @ 03474320 */
                    /* try { // try from 03474304 to 03574307 has its CatchHandler @ 0347402c */
                    /* try { // try from 03474308 to 0357430b has its CatchHandler @ 03474314 */
    pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
                    /* try { // try from 0347430c to 0357434f has its CatchHandler @ 0347402c */
LAB_0347431c:
                    /* catch() { ... } // from try @ 03474224 with catch @ 0347431c */
                    /* catch() { ... } // from try @ 03474300 with catch @ 03474320 */
                    /* catch() { ... } // from try @ 034742fc with catch @ 03474324 */
    (*pVVar14->methodPtr)(__this_00,pVVar14->method);
LAB_03474328:
                    /* catch() { ... } // from try @ 034742f8 with catch @ 03474328 */
                    /* catch() { ... } // from try @ 03474214 with catch @ 0347432c */
                    /* catch() { ... } // from try @ 03474258 with catch @ 03474330 */
                    /* catch() { ... } // from try @ 034741d0 with catch @ 03474334 */
    if (__this != (System_IO_MemoryStream_o *)0x0) {
      pSVar18 = __this->klass;
      uVar3._0_1_ = (pSVar18->_2).rank;
      uVar3._1_1_ = (pSVar18->_2).minimumAlignment;
                    /* try { // try from 03474350 to 03574353 has its CatchHandler @ 03474360 */
      uVar19 = (ulong)uVar3;
      if (uVar19 != 0) {
                    /* catch() { ... } // from try @ 03474350 with catch @ 03474360 */
        piVar20 = &((pSVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar14 = &(pSVar18->vtable)._0_Equals + *piVar20;
            goto LAB_03474398;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_03474398:
                    /* try { // try from 034743a0 to 035743c7 has its CatchHandler @ 034743dc */
      (*pVVar14->methodPtr)(__this,pVVar14->method);
    }
    if ((iVar21 == 0xc) || (iVar21 == 0)) {
      if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034743c8 to 035743d3 has its CatchHandler @ 0347402c */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034743d4 to 035743db has its CatchHandler @ 034743dc */
                    /* catch() { ... } // from try @ 034743a0 with catch @ 034743dc
                       catch() { ... } // from try @ 034743d4 with catch @ 034743dc */
      System_GC__Collect((MethodInfo *)0x0);
      return;
    }
  }
  return;
}

