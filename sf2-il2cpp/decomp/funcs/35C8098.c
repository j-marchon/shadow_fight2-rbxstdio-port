// Core.Appsflyer.BanzaiAppsFlyer$$JGMECBJEPDL @ RVA 0x35C8098

void Core_Appsflyer_BanzaiAppsFlyer__JGMECBJEPDL
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_Action_string__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  HMEJGGGPIPL_o *pHVar3;
  CPHBJEDCAEO_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CPHBJEDCAEO_o *pCVar7;
  
  if ((DAT_04568f77 & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04568f77 = 1;
  }
  pHVar3 = (__this->fields).KAPMLAAGDAI;
  if ((pHVar3 == (HMEJGGGPIPL_o *)0x0) ||
     (pCVar7 = (pHVar3->fields).LODCOBPDCIB, pCVar7 == (CPHBJEDCAEO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar2 = pCVar4->vtable + (*piVar6 + 1);
        goto LAB_036c8130;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CPHBJEDCAEO_TypeInfo,1);
LAB_036c8130:
                    /* WARNING: Could not recover jumptable at 0x036c8144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar7,JLPMKKKMANE,pVVar2->method);
  return;
}

