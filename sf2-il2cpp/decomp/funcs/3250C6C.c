// ICPMLKOEANF$$GetHashCode @ RVA 0x3250C6C

int32_t ICPMLKOEANF__GetHashCode(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  int local_24;
  long local_18;
  
  local_18 = 0;
  local_24 = 0;
  lVar5 = (__this->fields).OHMDCKEDOGH;
  if (lVar5 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).NLLKMEMKBAF;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
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

