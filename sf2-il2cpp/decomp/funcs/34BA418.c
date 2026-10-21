// IFEDMCHPFIM$$MAHFCKJGBPP @ RVA 0x34BA418

void IFEDMCHPFIM__MAHFCKJGBPP(IFEDMCHPFIM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____c
  *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____o
  *pSVar9;
  long local_38;
  
  if ((DAT_045685c2 & 1) == 0) {
    FUN_01bab630(&IFEDMCHPFIM_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_IReadOnlyDictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
                );
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<IFEDMCHPFIM_FOPNKJCFBLG>__);
    FUN_01bab630(&StringLiteral_853);
    FUN_01bab630(&StringLiteral_11476);
    DAT_045685c2 = 1;
  }
  local_38 = 0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar8 = (__this->fields).GALKDPHFALN;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar8,(MethodInfo *)0x0);
  uVar2 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                    (pSVar8,-1,Method_PCOEHCPGBBG_AICKIDLLIBK<IFEDMCHPFIM_FOPNKJCFBLG>__);
  pSVar8 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,(__this->fields).HAPAKNHBJCO,(MethodInfo *)0x0);
  if ((IFEDMCHPFIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFEDMCHPFIM_TypeInfo);
  }
  if (pSVar8 != (System_String_o *)0x0) {
    pSVar3 = System_String__Split
                       (pSVar8,IFEDMCHPFIM_TypeInfo->static_fields->JAEIAFPCHFF,1,(MethodInfo *)0x0)
    ;
    pSVar9 = IFEDMCHPFIM_TypeInfo->static_fields->IAIFLHDGLGG;
    if (pSVar9 != (System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____o
                   *)0x0) {
      pSVar5 = pSVar9->klass;
      uVar1._0_1_ = (pSVar5->_2).rank;
      uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IReadOnlyDictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
             ) {
            pVVar4 = pSVar5->vtable + (*piVar7 + 1);
            goto LAB_035ba5a0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)
               FUN_01b81914(pSVar9,
                            System_Collections_Generic_IReadOnlyDictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
                            ,1);
LAB_035ba5a0:
      uVar6 = (*pVVar4->methodPtr)(pSVar9,(ulong)uVar2,&local_38,pVVar4->method);
      if ((uVar6 & 1) == 0) {
        pSVar8 = System_String__Concat
                           (StringLiteral_11476,(__this->fields).GALKDPHFALN,StringLiteral_853,
                            (MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar8,(MethodInfo *)0x0);
      }
      else if (local_38 != 0) {
        (**(code **)(local_38 + 0x18))
                  (*(undefined8 *)(local_38 + 0x40),pSVar3,*(undefined8 *)(local_38 + 0x28));
      }
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

