// KKGHPKOFEHM$$GetHashCode @ RVA 0x308D518

int32_t KKGHPKOFEHM__GetHashCode(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar4;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pKVar3 = (__this->fields).OPHCNELIOLD;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pKVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar3,(pKVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
    method = extraout_x1;
  }
  pGVar4 = (__this->fields).NNDJCFCJGMO;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    pGVar5 = (__this->fields).CKFPENBPNML;
    uVar2 = uVar2 ^ uVar1;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar1 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

