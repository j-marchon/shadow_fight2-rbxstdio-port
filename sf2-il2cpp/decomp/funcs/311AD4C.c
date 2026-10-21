// KAMBBJFPLGM$$GetHashCode @ RVA 0x311AD4C

int32_t KAMBBJFPLGM__GetHashCode(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  EOLFEKNCPLM_o *pEVar5;
  NGOFOPOGBMJ_o *pNVar6;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar7;
  BPBGAAHBFKH_o *pBVar8;
  Google_Protobuf_Collections_RepeatedField_string__o *pGVar9;
  Google_Protobuf_UnknownFieldSet_o *pGVar10;
  long lVar11;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *pGVar12;
  KEGDLHPEJBG_o *pKVar13;
  long local_28;
  int local_14;
  
  local_28 = 0;
  local_14 = 0;
  pEVar5 = (__this->fields).FLAFELDNABC;
  if (pEVar5 == (EOLFEKNCPLM_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pEVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pEVar5,(pEVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  pNVar6 = (__this->fields).CBEJJIHKEGF;
  if (pNVar6 != (NGOFOPOGBMJ_o *)0x0) {
    uVar3 = (*(pNVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pNVar6,(pNVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).EMOLIBOCKJK;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar7 = (__this->fields).LEJBLHJFJHP;
  if (pGVar7 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    uVar3 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
    iVar1 = (__this->fields).IJBBNNHJPLF;
    uVar3 = uVar3 ^ uVar2;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    lVar11 = (__this->fields).GFIFLFPODAE;
    if (lVar11 != 0) {
      local_28 = lVar11;
      uVar2 = System_Int64__GetHashCode((int64_t)&local_28,(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    lVar11 = (__this->fields).FLFGAIPCCJK;
    if (lVar11 != 0) {
      local_28 = lVar11;
      uVar2 = System_Int64__GetHashCode((int64_t)&local_28,(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    pGVar7 = (__this->fields).AKFPFIHIHOC;
    if (pGVar7 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      uVar2 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
      iVar1 = (__this->fields).GNKNDHJHFOC;
      uVar2 = uVar2 ^ uVar3;
      if (iVar1 != 0) {
        local_14 = iVar1;
        uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      pBVar8 = (__this->fields).IGPJEDLPAGI;
      if (pBVar8 != (BPBGAAHBFKH_o *)0x0) {
        uVar3 = (*(pBVar8->klass->vtable)._2_GetHashCode.methodPtr)
                          (pBVar8,(pBVar8->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      pGVar9 = (__this->fields).HBIHNBPPEEO;
      if (pGVar9 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
        uVar3 = (*(pGVar9->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar9,(pGVar9->klass->vtable)._2_GetHashCode.method);
        pGVar12 = (__this->fields).FDELJPKNGKF;
        if (pGVar12 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
          uVar4 = (*(pGVar12->klass->vtable)._2_GetHashCode.methodPtr)
                            (pGVar12,(pGVar12->klass->vtable)._2_GetHashCode.method);
          pKVar13 = (__this->fields).LIGHEGAMGHD;
          uVar4 = uVar3 ^ uVar2 ^ uVar4;
          if (pKVar13 != (KEGDLHPEJBG_o *)0x0) {
            uVar2 = (*(pKVar13->klass->vtable)._2_GetHashCode.methodPtr)
                              (pKVar13,(pKVar13->klass->vtable)._2_GetHashCode.method);
            uVar4 = uVar2 ^ uVar4;
          }
          pGVar10 = (__this->fields).CKFPENBPNML;
          if (pGVar10 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
            uVar2 = (*(pGVar10->klass->vtable)._2_GetHashCode.methodPtr)
                              (pGVar10,(pGVar10->klass->vtable)._2_GetHashCode.method);
            uVar4 = uVar2 ^ uVar4;
          }
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

