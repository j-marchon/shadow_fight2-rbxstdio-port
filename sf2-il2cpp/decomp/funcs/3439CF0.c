// AADKBCFCLKK$$GetHashCode @ RVA 0x3439CF0

int32_t AADKBCFCLKK__GetHashCode(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  KDADMJGPAOM_o *pKVar3;
  PGICCMFLDPI_o *pPVar4;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  long lVar7;
  undefined1 local_24 [4];
  long local_18;
  
                    /* try { // try from 03539cf0 to 03639cff has its CatchHandler @ 03539d48 */
  if ((DAT_045681be & 1) == 0) {
                    /* try { // try from 03539d14 to 03639d1b has its CatchHandler @ 03539edc */
    FUN_01bab630(&bool_TypeInfo);
    DAT_045681be = 1;
  }
  local_18 = 0;
                    /* try { // try from 03539d24 to 03639d27 has its CatchHandler @ 03539d40 */
  local_24[0] = 0;
  lVar7 = (__this->fields).AMKHEHFFAKJ;
                    /* try { // try from 03539d2c to 03639d2f has its CatchHandler @ 03539d3c */
  if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 03539cf0 with catch @ 03539d48 */
    uVar1 = 1;
  }
  else {
                    /* try { // try from 03539d30 to 03639d67 has its CatchHandler @ 035397b4 */
    local_18 = lVar7;
                    /* catch() { ... } // from try @ 03539c84 with catch @ 03539d34 */
                    /* catch() { ... } // from try @ 03539ca4 with catch @ 03539d38 */
                    /* catch() { ... } // from try @ 03539d2c with catch @ 03539d3c */
    uVar1 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03539d24 with catch @ 03539d40 */
    uVar1 = uVar1 ^ 1;
                    /* catch() { ... } // from try @ 03539cc8 with catch @ 03539d44 */
  }
                    /* catch() { ... } // from try @ 03539cb4 with catch @ 03539d4c */
  pKVar3 = (__this->fields).LHFLMBNKPHF;
                    /* catch() { ... } // from try @ 03539c60 with catch @ 03539d50 */
  if (pKVar3 != (KDADMJGPAOM_o *)0x0) {
    uVar2 = (*(pKVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar3,(pKVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pPVar4 = (__this->fields).LBKLNIPHGMM;
                    /* try { // try from 03539d68 to 03639d6b has its CatchHandler @ 03539e78 */
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
                    /* try { // try from 03539d6c to 03639e23 has its CatchHandler @ 035397b4 */
    uVar2 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  lVar7 = (__this->fields).IKNCNGMNPPK;
  if (lVar7 != 0) {
    local_18 = lVar7;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  if ((__this->fields).IOLELGMBJFL != false) {
    local_24[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar2 = System_Boolean__GetHashCode(SUB81(local_24,0),(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).MPAIPMANDEO;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    pPVar4 = (__this->fields).FAEDHKAJJNK;
    uVar2 = uVar2 ^ uVar1;
    if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
      uVar1 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
    pGVar6 = (__this->fields).CKFPENBPNML;
    if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar1 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
                    /* try { // try from 03539e24 to 03639e43 has its CatchHandler @ 03539fd0 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

