// EIBAKHBHMAO$$GetHashCode @ RVA 0x304F664

int32_t EIBAKHBHMAO__GetHashCode(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  long local_28;
  int local_14;
  
  local_28 = 0;
  local_14 = 0;
  iVar1 = (__this->fields).EMDNDLOODLG;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  lVar5 = (__this->fields).FMNDJOFNPBP;
  if (lVar5 != 0) {
    local_28 = lVar5;
    uVar3 = System_Int64__GetHashCode((int64_t)&local_28,(MethodInfo *)0x0);
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

