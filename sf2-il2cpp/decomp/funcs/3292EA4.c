// OJFPEINHCDP$$GetHashCode @ RVA 0x3292EA4

int32_t OJFPEINHCDP__GetHashCode(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  NODLJPNGNBG_o *pNVar4;
  KDADMJGPAOM_o *pKVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  int local_14;
  
  local_14 = 0;
  pNVar4 = (__this->fields).OPHCNELIOLD;
  if (pNVar4 == (NODLJPNGNBG_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pNVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pNVar4,(pNVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  pKVar5 = (__this->fields).LHFLMBNKPHF;
  if (pKVar5 != (KDADMJGPAOM_o *)0x0) {
    uVar3 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).KLOGBBKOLFL;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar6 = (__this->fields).CKFPENBPNML;
  if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}

