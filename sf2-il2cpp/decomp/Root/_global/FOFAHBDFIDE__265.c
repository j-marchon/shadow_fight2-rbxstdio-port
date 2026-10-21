// TypeDefIndex 265
// Namespace: 
// public class FOFAHBDFIDE : CELDGLHBCAM
// Fields:
//   private bool AOELKOLFDPF; // 0x12

// ===== public override void LLCONNGHGKD()  [RVA 0x32302A8]
// FOFAHBDFIDE$$LLCONNGHGKD @ RVA 0x32302A8

void FOFAHBDFIDE__LLCONNGHGKD(FOFAHBDFIDE_o *__this,MethodInfo *method)

{
  if (((__this->fields).super._DGMNNLJEMIB_k__BackingField == false) &&
     ((__this->fields).AOELKOLFDPF == false)) {
    (__this->fields).AOELKOLFDPF = true;
    FOFAHBDFIDE__MGKPJFFNEOL(__this,method);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3230420]
// FOFAHBDFIDE$$.ctor @ RVA 0x3230420

void FOFAHBDFIDE___ctor(FOFAHBDFIDE_o *__this,MethodInfo *method)

{
  CELDGLHBCAM___ctor((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MGKPJFFNEOL()  [RVA 0x32302C8]
// FOFAHBDFIDE$$MGKPJFFNEOL @ RVA 0x32302C8

void FOFAHBDFIDE__MGKPJFFNEOL(FOFAHBDFIDE_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PJFINIPCLBA_o *pPVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  PJFINIPCLBA_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04566fd4 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_FOFAHBDFIDE_ABECCFBBCKD__);
    FUN_01bab630(&PJFINIPCLBA_TypeInfo);
    FUN_01bab630(&StringLiteral_12355/*"StartCheck"*/);
    DAT_04566fd4 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_12355/*"StartCheck"*/,(MethodInfo *)0x0);
  pPVar2 = HEOMBIOLNAB__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
  }
  pSVar3 = BHEDGAKGKPO__CLELDOCGCAE((MethodInfo *)0x0);
  uVar4 = thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  if (pPVar2 == (PJFINIPCLBA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar2->klass;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PJFINIPCLBA_TypeInfo) {
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_033303fc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PJFINIPCLBA_TypeInfo,0);
LAB_033303fc:
                    /* WARNING: Could not recover jumptable at 0x03330418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(pPVar2,pSVar3,uVar4,pVVar5->method);
  return;
}


// ===== private void ABECCFBBCKD(bool IBEBJHMKFGE)  [RVA 0x3230428]
// FOFAHBDFIDE$$ABECCFBBCKD @ RVA 0x3230428

void FOFAHBDFIDE__ABECCFBBCKD(FOFAHBDFIDE_o *__this,bool IBEBJHMKFGE,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  undefined1 local_34 [4];
  
  if ((DAT_04566fd5 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&StringLiteral_22399/*"{0}: success={1}"*/);
    FUN_01bab630(&StringLiteral_9852/*"OnCheckEnd"*/);
    DAT_04566fd5 = 1;
  }
  local_34[0] = IBEBJHMKFGE;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_34);
  JLNPKGGFFDD = System_String__Format(StringLiteral_22399/*"{0}: success={1}"*/,StringLiteral_9852/*"OnCheckEnd"*/,arg1,(MethodInfo *)0x0)
  ;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  (__this->fields).super._DGMNNLJEMIB_k__BackingField = IBEBJHMKFGE;
  HEOMBIOLNAB__JODGPLBHHIA((MethodInfo *)0x0);
  return;
}

