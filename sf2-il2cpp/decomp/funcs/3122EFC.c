// KMDOLFBIGNC$$GetHashCode @ RVA 0x3122EFC

int32_t KMDOLFBIGNC__GetHashCode(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  PGICCMFLDPI_o *pPVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).PDOMCPONBNB;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pPVar4 = (__this->fields).PNGGPPDKHPH;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).HCBJCMDLODI;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}

