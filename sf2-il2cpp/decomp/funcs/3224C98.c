// GLPEFEEGCPM$$GetHashCode @ RVA 0x3224C98

int32_t GLPEFEEGCPM__GetHashCode(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  FADHMEJJCPO_o *pFVar3;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar4;
  long lVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  long local_18;
  
  local_18 = 0;
  pFVar3 = (__this->fields).PBBGNHKFEPG;
  if (pFVar3 == (FADHMEJJCPO_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pFVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pFVar3,(pFVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  lVar5 = (__this->fields).LAEGCKIFDOC;
  if (lVar5 != 0) {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar4 = (__this->fields).MPAIPMANDEO;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    pGVar6 = (__this->fields).CKFPENBPNML;
    uVar2 = uVar2 ^ uVar1;
    if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar1 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

