// FIMAAAOEIGM$$GetHashCode @ RVA 0x342623C

int32_t FIMAAAOEIGM__GetHashCode(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  AADKBCFCLKK_o *pAVar3;
  PGICCMFLDPI_o *pPVar4;
  KAMBBJFPLGM_o *pKVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04568110 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_04568110 = 1;
    method = extraout_x1;
  }
  pAVar3 = (__this->fields).PMFAFJFPHGO;
  if (pAVar3 == (AADKBCFCLKK_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pAVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pAVar3,(pAVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
    method = extraout_x1_00;
  }
  if ((__this->fields).AFIPKDNMBKJ != false) {
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo,method);
    }
    uVar2 = System_Boolean__GetHashCode(true,(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  pPVar4 = (__this->fields).OBKCJGGIEMF;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar2 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pKVar5 = (__this->fields).OPHCNELIOLD;
  if (pKVar5 != (KAMBBJFPLGM_o *)0x0) {
    uVar2 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar6 = (__this->fields).CKFPENBPNML;
  if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}

