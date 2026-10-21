// KOKJOMBFNCD$$EKLNCAHPGMC @ RVA 0x319E3CC

void KOKJOMBFNCD__EKLNCAHPGMC
               (System_String_o *HCPBLAONAAA,System_String_o *HLHFHPEGMJL,int32_t HDJJLOJPNLE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KOKJOMBFNCD_StaticFields *pKVar3;
  KCCMMLBMGMO_c *pKVar4;
  UnityEngine_Application_LogCallback_o *pUVar5;
  ulong uVar6;
  int32_t *piVar7;
  KCCMMLBMGMO_o *pKVar8;
  int32_t local_2c;
  System_String_o *local_28;
  System_String_o *local_18;
  
  local_2c = HDJJLOJPNLE;
  local_28 = HLHFHPEGMJL;
  local_18 = HCPBLAONAAA;
  if ((DAT_04566aca & 1) == 0) {
    FUN_01bab630(&KCCMMLBMGMO_TypeInfo);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    DAT_04566aca = 1;
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566bb3 == '\0') {
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    DAT_04566bb3 = '\x01';
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar3 = KOKJOMBFNCD_TypeInfo->static_fields;
  if (pKVar3->_JAIDNCGGKNI_k__BackingField != false) {
    if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pKVar3 = KOKJOMBFNCD_TypeInfo->static_fields;
    }
    pKVar8 = pKVar3->OGNPGJGNGNF;
    if (pKVar8 != (KCCMMLBMGMO_o *)0x0) {
      if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pKVar8 = KOKJOMBFNCD_TypeInfo->static_fields->OGNPGJGNGNF;
        if (pKVar8 == (KCCMMLBMGMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      pKVar4 = pKVar8->klass;
      uVar1._0_1_ = (pKVar4->_2).rank;
      uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pKVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)KCCMMLBMGMO_TypeInfo) {
            pVVar2 = pKVar4->vtable + *piVar7;
            goto LAB_0329e4f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar8,KCCMMLBMGMO_TypeInfo,0);
LAB_0329e4f0:
      (*pVVar2->methodPtr)(pKVar8,&local_18,&local_28,&local_2c,pVVar2->method);
    }
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar5 = KOKJOMBFNCD_TypeInfo->static_fields->LBHLJBEDMMP;
  if (pUVar5 != (UnityEngine_Application_LogCallback_o *)0x0) {
    (*(code *)(pUVar5->fields).super.super.invoke_impl)
              ((pUVar5->fields).super.super.method_code,local_18,local_28,local_2c,
               (pUVar5->fields).super.super.method);
  }
  return;
}

