// GKKKJLJFGBG$$GetHashCode @ RVA 0x316A384

int32_t GKKKJLJFGBG__GetHashCode(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_int__o *pGVar3;
  undefined8 uVar4;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  undefined1 auVar7 [16];
  
  pGVar3 = (__this->fields).DFKIAOPJPCE;
  uVar4 = 0;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    auVar7 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                       (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    method = auVar7._8_8_;
    uVar4 = auVar7._0_8_;
    pGVar5 = (__this->fields).LJDACDDNJOD;
    if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
      uVar1 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      pGVar6 = (__this->fields).CKFPENBPNML;
      uVar1 = auVar7._0_4_ ^ uVar1 ^ 1;
      if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
        uVar1 = uVar2 ^ uVar1;
      }
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar4,method);
}

