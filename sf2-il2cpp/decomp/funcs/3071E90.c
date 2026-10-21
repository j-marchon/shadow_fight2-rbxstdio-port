// GGDHPLABCGI$$GetHashCode @ RVA 0x3071E90

int32_t GGDHPLABCGI__GetHashCode(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long local_18;
  
  local_18 = 0;
  uVar2 = (__this->fields).PDOMCPONBNB;
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = (ulong)uVar2 << 0x20;
    uVar2 = System_Int32__GetHashCode((int)&local_18 + 4,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).EMDNDLOODLG;
  if (iVar1 != 0) {
    local_18 = CONCAT44(local_18._4_4_,iVar1);
    uVar3 = System_Int32__GetHashCode((int32_t)&local_18,(MethodInfo *)0x0);
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

