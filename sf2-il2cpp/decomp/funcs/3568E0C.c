// HAACHEFPDEN$$MAHFCKJGBPP @ RVA 0x3568E0C

void HAACHEFPDEN__MAHFCKJGBPP(HAACHEFPDEN_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  VirtualInvokeData *pVVar7;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar8;
  long lVar9;
  ACHLOMELAJE_o *__this_00;
  undefined8 *puVar10;
  KCJCIJHMEJF_c *pKVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *pSVar14;
  KCJCIJHMEJF_o *pKVar15;
  
  if ((DAT_04568c13 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&Method_HAACHEFPDEN_KGKNMDODBNH_MDFKDJPLEEF__);
    FUN_01bab630(&HAACHEFPDEN_KGKNMDODBNH_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_850);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_832);
    FUN_01bab630(&StringLiteral_7458);
    FUN_01bab630(&StringLiteral_9798);
    FUN_01bab630(&StringLiteral_3833);
    DAT_04568c13 = 1;
  }
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(HAACHEFPDEN_KGKNMDODBNH_TypeInfo);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar14 = (__this->fields).OJEDDJHFLOG;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar6 = (Il2CppClass *)MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar14,(MethodInfo *)0x0);
  if (pIVar5 == (Il2CppObject *)0x0) goto LAB_03669274;
  pIVar5 = pIVar5 + 1;
  pIVar5->klass = pIVar6;
  thunk_FUN_01c20e04(pIVar5,pIVar6);
  bVar4 = System_String__IsNullOrWhiteSpace((System_String_o *)pIVar5->klass,(MethodInfo *)0x0);
  if (bVar4) {
    pIVar6 = (Il2CppClass *)(__this->fields).OJEDDJHFLOG;
    puVar10 = &StringLiteral_7458;
  }
  else {
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
    if (pKVar15 == (KCJCIJHMEJF_o *)0x0) goto LAB_03669274;
    pKVar11 = pKVar15->klass;
    uVar1._0_1_ = (pKVar11->_2).rank;
    uVar1._1_1_ = (pKVar11->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pKVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
          pVVar7 = pKVar11->vtable + (*piVar13 + 9);
          goto LAB_03669020;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar15,KCJCIJHMEJF_TypeInfo,9);
LAB_03669020:
    source = (System_Collections_Generic_IEnumerable_TSource__o *)
             (*pVVar7->methodPtr)(pKVar15,pVVar7->method);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pIVar8 = System_Linq_Enumerable__FirstOrDefault<object>
                       (source,predicate,Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__
                       );
    if (pIVar8 != (Il2CppObject *)0x0) {
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
            goto LAB_03669128;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar8,NCCFNKMICGK_TypeInfo,1);
LAB_03669128:
      lVar9 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
      if (lVar9 == 0) {
LAB_03669274:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(int *)(lVar9 + 0x18) == 3) {
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
              goto LAB_036691cc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar8,NCCFNKMICGK_TypeInfo,1);
LAB_036691cc:
        lVar9 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
        if (lVar9 != 0) {
          *(undefined1 *)(lVar9 + 0x28) = 0;
          pSVar14 = System_String__Concat
                              (StringLiteral_9798,(System_String_o *)pIVar5->klass,StringLiteral_850
                               ,(MethodInfo *)0x0);
          KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar14,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
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
            goto LAB_036690fc;
          }
        }
        goto LAB_03669274;
      }
      pSVar14 = System_String__Concat
                          (StringLiteral_9798,(System_String_o *)pIVar5->klass,StringLiteral_832,
                           (MethodInfo *)0x0);
      KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,pSVar14,(MethodInfo *)0x0);
      goto LAB_036690fc;
    }
    pIVar6 = pIVar5->klass;
    puVar10 = &StringLiteral_3833;
  }
  pSVar14 = System_String__Concat
                      ((System_String_o *)*puVar10,(System_String_o *)pIVar6,StringLiteral_802,
                       (MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar14,(MethodInfo *)0x0);
LAB_036690fc:
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

