// JJPNLEPEAFM$$MHEOEKBDLKN @ RVA 0x353200C

void JJPNLEPEAFM__MHEOEKBDLKN(Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_String_o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_04568a65 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_JJPNLEPEAFM_JHLIJCCIKHF__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568a65 = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar3 != (Il2CppObject *)0x0) {
    CJNHFNHJHPE = Core_Configs_Models_BuildSettingsExtension__GetRateUrl
                            (pIVar3[9].monitor,(MethodInfo *)0x0);
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Application__OpenURL(CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar7 = pPVar4->klass;
      uVar1._0_1_ = (pPVar7->_2).rank;
      uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar6 = pPVar7->vtable + (*piVar9 + 2);
            goto LAB_03632174;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_03632174:
                    /* WARNING: Could not recover jumptable at 0x03632190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar6->methodPtr)(0x3e4ccccd,pPVar4,uVar5,pVVar6->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

