// APOIPFMPGEP$$MAHFCKJGBPP @ RVA 0x355291C

void APOIPFMPGEP__MAHFCKJGBPP(APOIPFMPGEP_o *__this,PKHMIGFEJCL_o *HLAGOHADLKH,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Action_o **ppSVar3;
  VirtualInvokeData *pVVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  FCJBEKHDLAF_o *__this_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_String_o *pSVar8;
  System_Action_o *pSVar9;
  float fVar10;
  undefined4 extraout_var;
  
  if ((DAT_04568b49 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_19);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3663);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_APOIPFMPGEP_<>c_NICCDBKOBKP__);
    FUN_01bab630(&APOIPFMPGEP_<>c_TypeInfo);
    DAT_04568b49 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,HLAGOHADLKH,(MethodInfo *)0x0);
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3663,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_19,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  }
  else {
    pSVar8 = (__this->fields).DFOJKFFDFAH;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar10 = MFBNFJGBPBB__DCIAJFJIMNK(HLAGOHADLKH,pSVar8,(MethodInfo *)0x0);
    if (fVar10 <= 0.0) {
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_00 == (FCJBEKHDLAF_o *)0x0) goto LAB_03652c6c;
      FCJBEKHDLAF__IILEMANDADN(__this_00,false,(MethodInfo *)0x0);
    }
    else {
      pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
      if ((APOIPFMPGEP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(APOIPFMPGEP_<>c_TypeInfo);
      }
      pSVar9 = APOIPFMPGEP_<>c_TypeInfo->static_fields->__9__2_0;
      if (pSVar9 == (System_Action_o *)0x0) {
        if ((APOIPFMPGEP_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(APOIPFMPGEP_<>c_TypeInfo);
        }
        pSVar9 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        ppSVar3 = &APOIPFMPGEP_<>c_TypeInfo->static_fields->__9__2_0;
        *ppSVar3 = pSVar9;
        thunk_FUN_01c20e04(ppSVar3,pSVar9);
      }
      if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
LAB_03652c6c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + (*piVar7 + 2);
            goto LAB_03652c3c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_03652c3c:
      (*pVVar4->methodPtr)(CONCAT44(extraout_var,fVar10),pPVar2,pSVar9,pVVar4->method);
    }
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

