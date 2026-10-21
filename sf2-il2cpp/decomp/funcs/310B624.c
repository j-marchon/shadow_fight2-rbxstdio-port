// BJEFHIBMHEJ$$GetHashCode @ RVA 0x310B624

int32_t BJEFHIBMHEJ__GetHashCode(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).BNFCJPJJIEJ;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).PDABDFMKGDH;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}

