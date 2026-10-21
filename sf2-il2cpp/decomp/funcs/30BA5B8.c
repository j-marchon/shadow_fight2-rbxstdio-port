// DMOPGPMINJD$$GetHashCode @ RVA 0x30BA5B8

int32_t DMOPGPMINJD__GetHashCode(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  EEHFEPPDBHL_o *pEVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pSVar3 = (__this->fields).GJNOEAKNMOG;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar1 ^ 1;
    }
    pEVar4 = (__this->fields).MMIHELOLFPP;
    if (pEVar4 != (EEHFEPPDBHL_o *)0x0) {
      uVar2 = (*(pEVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pEVar4,(pEVar4->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

