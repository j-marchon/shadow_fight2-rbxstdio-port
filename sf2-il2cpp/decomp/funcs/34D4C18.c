// MEKONFPICFH$$JLKIHHFHBCL @ RVA 0x34D4C18

void MEKONFPICFH__JLKIHHFHBCL(MEKONFPICFH_o *__this,CFEFALDOEMD_o *NDPJAEAKNPP,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  bool bVar11;
  HOOAAGABMBL_o *__this_00;
  DGGBFKNKEAH_o *pDVar12;
  long lVar13;
  VirtualInvokeData *pVVar14;
  MethodInfo *method_00;
  System_Decimal_o *d1;
  undefined8 extraout_x0;
  System_Decimal_o *d2;
  undefined8 extraout_x1;
  NPGEGIHFHMG_c *pNVar15;
  System_Decimal_StaticFields *__return_storage_ptr__;
  System_Decimal_o *__return_storage_ptr___00;
  CICHCAJBCHK_c *pCVar16;
  ulong uVar17;
  int32_t *piVar18;
  CICHCAJBCHK_o *pCVar19;
  System_String_o *pSVar20;
  NPGEGIHFHMG_o *pNVar21;
  System_String_o *local_f0;
  System_String_o *pSStack_e8;
  undefined8 uStack_e0;
  System_String_o *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  System_String_o *local_c0;
  undefined8 local_b8;
  System_String_o *local_b0;
  System_String_o *pSStack_a8;
  undefined8 uStack_a0;
  System_String_o *pSStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  System_String_o *pSStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_045686d0 & 1) == 0) {
    FUN_01bab630(&CICHCAJBCHK_TypeInfo);
    FUN_01bab630(&System_Decimal_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&NPGEGIHFHMG_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9899);
    FUN_01bab630(&StringLiteral_6884);
    FUN_01bab630(&StringLiteral_3015);
    DAT_045686d0 = 1;
  }
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = (System_String_o *)0x0;
  pSStack_e8 = (System_String_o *)0x0;
  local_f0 = (System_String_o *)0x0;
  local_d8 = (System_String_o *)0x0;
  uStack_e0 = 0;
  if (NDPJAEAKNPP != (CFEFALDOEMD_o *)0x0) {
    pSVar20 = (NDPJAEAKNPP->fields)._CIEBCKIBJHL_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__FEHJLBEGAPO(pSVar20,(MethodInfo *)0x0);
    if (__this_00 == (HOOAAGABMBL_o *)0x0) {
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_9899,(MethodInfo *)0x0);
LAB_035d4fa8:
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pDVar12 = (__this->fields).FHCHDOILFGE;
    if (pDVar12 != (DGGBFKNKEAH_o *)0x0) {
      lVar13 = (*(pDVar12->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                         (pDVar12,(NDPJAEAKNPP->fields)._CIEBCKIBJHL_k__BackingField,
                          (pDVar12->klass->vtable)._9_HNIHOIAMDPC.method);
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x18);
      }
      pNVar21 = (__this->fields).JEAIFGLLHEJ;
      if (pNVar21 == (NPGEGIHFHMG_o *)0x0) {
        if ((System_Decimal_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        method_00 = (MethodInfo *)(System_Decimal_TypeInfo->static_fields->Zero).fields.ulomidLE;
      }
      else {
        pNVar15 = pNVar21->klass;
        uVar1._0_1_ = (pNVar15->_2).rank;
        uVar1._1_1_ = (pNVar15->_2).minimumAlignment;
        uVar17 = (ulong)uVar1;
        if (uVar17 != 0) {
          piVar18 = &((pNVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                (Il2CppClass *)NPGEGIHFHMG_TypeInfo) {
              pVVar14 = pNVar15->vtable + *piVar18;
              goto LAB_035d4dc4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        pVVar14 = (VirtualInvokeData *)FUN_01b81914(pNVar21,NPGEGIHFHMG_TypeInfo,0);
LAB_035d4dc4:
        method_00 = (MethodInfo *)(*pVVar14->methodPtr)(pNVar21,pVVar14->method);
      }
      pSVar20 = HOOAAGABMBL__GFMPCIOBMBJ(__this_00,(MethodInfo *)0x0);
      if ((System_Decimal_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Decimal_TypeInfo);
      }
      __return_storage_ptr__ = System_Decimal_TypeInfo->static_fields;
      PCOEHCPGBBG__DFGOBCMLMCJ
                (&__return_storage_ptr__->Zero,pSVar20,
                 *(System_Decimal_o **)&(__return_storage_ptr__->Zero).fields,
                 *(MethodInfo **)&(__return_storage_ptr__->Zero).fields.lo);
      System_Decimal__op_Multiply(__return_storage_ptr___00,d1,d2,method_00);
      pCVar19 = (__this->fields).FCBJIODFGDB;
      uStack_e0 = 0;
      pSStack_e8 = (System_String_o *)0x0;
      local_d0 = 0;
      local_d8 = (System_String_o *)0x0;
      local_c0 = (System_String_o *)0x0;
      uStack_c8 = 0;
      local_b8 = 0;
      local_f0 = (NDPJAEAKNPP->fields)._CIEBCKIBJHL_k__BackingField;
      thunk_FUN_01c20e04(&local_f0);
      if ((lVar13 == 0) ||
         (pSStack_e8 = *(System_String_o **)(lVar13 + 0x18), pSStack_e8 == (System_String_o *)0x0))
      {
        pSStack_e8 = string_TypeInfo->static_fields->Empty;
      }
      thunk_FUN_01c20e04((ulong)&local_f0 | 8);
      local_d0 = extraout_x0;
      uStack_c8 = extraout_x1;
      local_c0 = HOOAAGABMBL__EHECKFKDKJD(__this_00,(MethodInfo *)0x0);
      thunk_FUN_01c20e04(&local_c0);
      local_d8 = (NDPJAEAKNPP->fields)._MFEDPHDGAGE_k__BackingField;
      thunk_FUN_01c20e04(&local_d8);
      bVar11 = System_String__op_Inequality
                         ((NDPJAEAKNPP->fields)._FDNPEHBNDBI_k__BackingField,StringLiteral_3015,
                          (MethodInfo *)0x0);
      if (bVar11) {
        bVar11 = System_String__op_Inequality
                           ((NDPJAEAKNPP->fields)._FDNPEHBNDBI_k__BackingField,StringLiteral_6884,
                            (MethodInfo *)0x0);
      }
      else {
        bVar11 = false;
      }
      pSVar9 = local_c0;
      uVar8 = uStack_c8;
      uVar7 = local_d0;
      pSVar6 = local_d8;
      uVar5 = uStack_e0;
      pSVar4 = pSStack_e8;
      pSVar20 = local_f0;
      local_b8 = CONCAT71(local_b8._1_7_,bVar11);
      uVar10 = local_b8;
      if (pCVar19 != (CICHCAJBCHK_o *)0x0) {
        pCVar16 = pCVar19->klass;
        uVar2._0_1_ = (pCVar16->_2).rank;
        uVar2._1_1_ = (pCVar16->_2).minimumAlignment;
        uVar17 = (ulong)uVar2;
        if (uVar17 != 0) {
          piVar18 = &((pCVar16->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                (Il2CppClass *)CICHCAJBCHK_TypeInfo) {
              pVVar14 = pCVar16->vtable + (*piVar18 + 1);
              goto LAB_035d4f84;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        pVVar14 = (VirtualInvokeData *)FUN_01b81914(pCVar19,CICHCAJBCHK_TypeInfo,1);
LAB_035d4f84:
        pSStack_a8 = pSVar4;
        local_b0 = pSVar20;
        pSStack_98 = pSVar6;
        uStack_a0 = uVar5;
        uStack_88 = uVar8;
        local_90 = uVar7;
        uStack_78 = uVar10;
        pSStack_80 = pSVar9;
        (*pVVar14->methodPtr)(pCVar19,&local_b0,pVVar14->method);
        goto LAB_035d4fa8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

