// CDAAECGFKON$$GetHashCode @ RVA 0x3212330

int32_t CDAAECGFKON__GetHashCode(CDAAECGFKON_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  AADKBCFCLKK_o *pAVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pAVar3 = (__this->fields).PMFAFJFPHGO;
  if (pAVar3 == (AADKBCFCLKK_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pAVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pAVar3,(pAVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pKVar4 = (__this->fields).OPHCNELIOLD;
  if (pKVar4 != (KAMBBJFPLGM_o *)0x0) {
    uVar2 = (*(pKVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar4,(pKVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}

