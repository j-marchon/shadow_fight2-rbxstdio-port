// PBGDDCFGPJI$$GetHashCode @ RVA 0x34BCAF0

int32_t PBGDDCFGPJI__GetHashCode(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  GLPEFEEGCPM_o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pGVar3 = (__this->fields).KEIBPDJHHBB;
  if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}

