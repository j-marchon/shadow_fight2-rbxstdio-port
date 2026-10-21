// GPKDMPJJEOO$$GetHashCode @ RVA 0x319DDE4

int32_t GPKDMPJJEOO__GetHashCode(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PGICCMFLDPI_o *pPVar3;
  Google_Protobuf_Collections_MapField_string__string__o *pGVar4;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pPVar3 = (__this->fields).MIINPPOCPCN;
  if (pPVar3 == (PGICCMFLDPI_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
    method = extraout_x1;
  }
  pGVar4 = (__this->fields).PPDLPBMONBL;
  if (pGVar4 != (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
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

