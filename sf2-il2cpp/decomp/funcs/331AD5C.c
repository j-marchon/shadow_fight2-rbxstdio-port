// KJNCNBJIJPC$$GetHashCode @ RVA 0x331AD5C

int32_t KJNCNBJIJPC__GetHashCode(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar5;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *pGVar6;
  Google_Protobuf_UnknownFieldSet_o *pGVar7;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *pGVar8;
  undefined1 local_18 [4];
  int local_14;
  
  if ((DAT_0456780b & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_0456780b = 1;
  }
  local_14 = 0;
  local_18[0] = 0;
  iVar1 = (__this->fields).OLGJBKMCGIC;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pGVar5 = (__this->fields).DDEAFMPDPBJ;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    iVar1 = (__this->fields).OJBIFDEEBNO;
    uVar3 = uVar3 ^ uVar2;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    pGVar6 = (__this->fields).EACBGCPPLBO;
    if (pGVar6 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
                    /* try { // try from 0341adf4 to 0351adfb has its CatchHandler @ 0341aea0 */
      uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
      pGVar8 = (__this->fields).KELNJLBBHEC;
      if (pGVar8 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
                    /* try { // try from 0341ae04 to 0351ae0b has its CatchHandler @ 0341ae9c */
                    /* try { // try from 0341ae14 to 0351ae1b has its CatchHandler @ 0341ae98 */
        uVar4 = (*(pGVar8->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar8,(pGVar8->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 0341ae1c to 0351ae8b has its CatchHandler @ 0341ad20 */
        uVar4 = uVar2 ^ uVar3 ^ uVar4;
        if ((__this->fields).HFNMLHEEAJM != false) {
          local_18[0] = 1;
          if ((bool_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          uVar2 = System_Boolean__GetHashCode(SUB81(local_18,0),(MethodInfo *)0x0);
          uVar4 = uVar2 ^ uVar4;
        }
        iVar1 = (__this->fields).GAGJCDGEGBL;
        if (iVar1 != 0) {
          local_14 = iVar1;
          uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
          uVar4 = uVar2 ^ uVar4;
        }
        pGVar7 = (__this->fields).CKFPENBPNML;
        if (pGVar7 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          uVar2 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                            (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
          uVar4 = uVar2 ^ uVar4;
        }
                    /* try { // try from 0341ae8c to 0351ae8f has its CatchHandler @ 0341ae94 */
                    /* try { // try from 0341ae90 to 0351aeb7 has its CatchHandler @ 0341ad20 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341ae8c with catch @ 0341ae94
                        */
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341ae14 with catch @ 0341ae98
                        */
  FUN_01bab8c8();
}

