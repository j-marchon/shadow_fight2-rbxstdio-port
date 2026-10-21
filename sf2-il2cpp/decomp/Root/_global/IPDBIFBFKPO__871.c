// TypeDefIndex 871
// Namespace: 
// public class IPDBIFBFKPO : CELDGLHBCAM
// Fields:

// ===== public override void IELLEFEFFJD()  [RVA 0x308D058]
// IPDBIFBFKPO$$IELLEFEFFJD @ RVA 0x308D058

void IPDBIFBFKPO__IELLEFEFFJD(IPDBIFBFKPO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  NOCMDCMLGPN_o *pNVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  NOCMDCMLGPN_c *pNVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04566068 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_IPDBIFBFKPO_CDGABBBODIB__);
    FUN_01bab630(&NOCMDCMLGPN_TypeInfo);
    DAT_04566068 = 1;
  }
  CELDGLHBCAM__IELLEFEFFJD((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = IFAMAAGNCBJ__AODPLNDFMKH((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pNVar2 == (NOCMDCMLGPN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar5 = pNVar2->klass;
  uVar1._0_1_ = (pNVar5->_2).rank;
  uVar1._1_1_ = (pNVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pNVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)NOCMDCMLGPN_TypeInfo) {
        pVVar4 = pNVar5->vtable + (*piVar7 + 1);
        goto LAB_0318d168;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pNVar2,NOCMDCMLGPN_TypeInfo,1);
LAB_0318d168:
                    /* WARNING: Could not recover jumptable at 0x0318d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pNVar2,uVar3,pVVar4->method);
  return;
}


// ===== private void CDGABBBODIB()  [RVA 0x308D188]
// IPDBIFBFKPO$$CDGABBBODIB @ RVA 0x308D188

void IPDBIFBFKPO__CDGABBBODIB(IPDBIFBFKPO_o *__this,MethodInfo *method)

{
  (__this->fields).super._DGMNNLJEMIB_k__BackingField = true;
  return;
}


// ===== public void .ctor()  [RVA 0x308D194]
// IPDBIFBFKPO$$.ctor @ RVA 0x308D194

void IPDBIFBFKPO___ctor(IPDBIFBFKPO_o *__this,MethodInfo *method)

{
  CELDGLHBCAM___ctor((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  return;
}

