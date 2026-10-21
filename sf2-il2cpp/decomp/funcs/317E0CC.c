// ICBMOMGINFH$$GetHashCode @ RVA 0x317E0CC

int32_t ICBMOMGINFH__GetHashCode(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  BECIPDJBAOG_o *pBVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  pBVar4 = (__this->fields).MJIIHOLHNCK;
  if (pBVar4 == (BECIPDJBAOG_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pBVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pBVar4,(pBVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).DHNAEFBMBEG;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).FBKKMKKHPBC;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).EJKCJCAPKKG;
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

