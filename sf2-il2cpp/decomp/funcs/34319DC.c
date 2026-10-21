// NLBIMFJEHGC$$MAHFCKJGBPP @ RVA 0x34319DC

void NLBIMFJEHGC__MAHFCKJGBPP(NLBIMFJEHGC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  VirtualInvokeData *pVVar7;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar8;
  long lVar9;
  ACHLOMELAJE_o *__this_00;
  KCJCIJHMEJF_c *pKVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *pSVar14;
  KCJCIJHMEJF_o *pKVar15;
  int32_t local_58;
  int32_t local_54;
  
  if ((DAT_04568173 & 1) == 0) {
    FUN_01bab630(&DPJEINFKCGA_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&Method_NLBIMFJEHGC_MAJGKIEKCIF_MDFKDJPLEEF__);
    FUN_01bab630(&NLBIMFJEHGC_MAJGKIEKCIF_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<DPJEINFKCGA>__);
    FUN_01bab630(&StringLiteral_11473);
    FUN_01bab630(&StringLiteral_22395);
    FUN_01bab630(&StringLiteral_11475);
    FUN_01bab630(&StringLiteral_853);
    FUN_01bab630(&StringLiteral_11474);
    FUN_01bab630(&StringLiteral_4257);
    DAT_04568173 = 1;
  }
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(NLBIMFJEHGC_MAJGKIEKCIF_TypeInfo);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar14 = (__this->fields).OJEDDJHFLOG;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar6 = (Il2CppClass *)MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar14,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar5 = pIVar5 + 1;
    pIVar5->klass = pIVar6;
    thunk_FUN_01c20e04(pIVar5,pIVar6);
    pSVar14 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,(__this->fields).OIKLOAGFFGO,(MethodInfo *)0x0);
    iVar4 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                      (pSVar14,-1,Method_PCOEHCPGBBG_AICKIDLLIBK<DPJEINFKCGA>__);
    if (iVar4 == -1) {
      pSVar14 = (__this->fields).OIKLOAGFFGO;
      puVar11 = &StringLiteral_11475;
LAB_03531ce4:
      pSVar14 = System_String__Concat
                          ((System_String_o *)*puVar11,pSVar14,StringLiteral_853,(MethodInfo *)0x0);
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar14,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045662dd == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_045662dd = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
    if (pKVar15 != (KCJCIJHMEJF_o *)0x0) {
      pKVar10 = pKVar15->klass;
      uVar1._0_1_ = (pKVar10->_2).rank;
      uVar1._1_1_ = (pKVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pKVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
            pVVar7 = pKVar10->vtable + (*piVar13 + 9);
            goto LAB_03531c48;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar15,KCJCIJHMEJF_TypeInfo,9);
LAB_03531c48:
      source = (System_Collections_Generic_IEnumerable_TSource__o *)
               (*pVVar7->methodPtr)(pKVar15,pVVar7->method);
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      pIVar8 = System_Linq_Enumerable__FirstOrDefault<object>
                         (source,predicate,
                          Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
      if (pIVar8 == (Il2CppObject *)0x0) {
        pSVar14 = (__this->fields).OJEDDJHFLOG;
        puVar11 = &StringLiteral_11474;
        goto LAB_03531ce4;
      }
      pIVar6 = pIVar8->klass;
      uVar2._0_1_ = (pIVar6->_2).rank;
      uVar2._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
            pVVar7 = pIVar6->vtable + (*piVar13 + 1);
            goto LAB_03531d40;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar8,NCCFNKMICGK_TypeInfo,1);
LAB_03531d40:
      lVar9 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) == iVar4) {
          pIVar6 = pIVar5->klass;
          local_54 = iVar4;
          pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(DPJEINFKCGA_TypeInfo,&local_54);
          pSVar14 = System_String__Format
                              (StringLiteral_22395,StringLiteral_11473,(Il2CppObject *)pIVar6,pIVar5
                               ,(MethodInfo *)0x0);
          KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,pSVar14,(MethodInfo *)0x0);
LAB_03531ef4:
          BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
          return;
        }
        pIVar6 = pIVar8->klass;
        uVar3._0_1_ = (pIVar6->_2).rank;
        uVar3._1_1_ = (pIVar6->_2).minimumAlignment;
        uVar12 = (ulong)uVar3;
        if (uVar12 != 0) {
          piVar13 = &((pIVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              pVVar7 = pIVar6->vtable + (*piVar13 + 1);
              goto LAB_03531e08;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar8,NCCFNKMICGK_TypeInfo,1);
LAB_03531e08:
        lVar9 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
        if (lVar9 != 0) {
          *(int32_t *)(lVar9 + 0x18) = iVar4;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_045662dd == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_045662dd = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pIVar8 = (Il2CppObject *)NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField
          ;
          local_58 = iVar4;
          pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(DPJEINFKCGA_TypeInfo,&local_58);
          pSVar14 = System_String__Format(StringLiteral_4257,pIVar5,(MethodInfo *)0x0);
          KFJJHMDIFIG__DHAAGKPHJLA(pIVar8,pSVar14,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_00 != (ACHLOMELAJE_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
            goto LAB_03531ef4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

