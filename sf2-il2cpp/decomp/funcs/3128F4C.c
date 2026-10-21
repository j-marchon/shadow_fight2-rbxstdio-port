// JMCDPBKILIN$$GetHashCode @ RVA 0x3128F4C

int32_t JMCDPBKILIN__GetHashCode(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  KAMBBJFPLGM_o *pKVar5;
  
  pGVar3 = (__this->fields).MJIIHOLHNCK;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
    uVar1 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    pKVar5 = (__this->fields).OPHCNELIOLD;
    uVar1 = uVar1 ^ 1;
    if (pKVar5 != (KAMBBJFPLGM_o *)0x0) {
      uVar2 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
    pGVar4 = (__this->fields).CKFPENBPNML;
    if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

