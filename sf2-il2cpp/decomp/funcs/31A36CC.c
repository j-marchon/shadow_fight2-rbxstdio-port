// HGADMOBFBBF$$GetHashCode @ RVA 0x31A36CC

int32_t HGADMOBFBBF__GetHashCode(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  KDADMJGPAOM_o *pKVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pKVar3 = (__this->fields).LHFLMBNKPHF;
  if (pKVar3 == (KDADMJGPAOM_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pKVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar3,(pKVar3->klass->vtable)._2_GetHashCode.method);
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

