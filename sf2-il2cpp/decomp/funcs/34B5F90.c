// OJEHKJHEBID$$GetHashCode @ RVA 0x34B5F90

int32_t OJEHKJHEBID__GetHashCode(OJEHKJHEBID_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  System_String_o *pSVar5;
  EEHFEPPDBHL_o *pEVar6;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *pGVar7;
  long lVar8;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar9;
  Google_Protobuf_UnknownFieldSet_o *pGVar10;
  int local_24;
  long local_18;
  
  local_18 = 0;
                    /* try { // try from 035b5f9c to 036b5fcf has its CatchHandler @ 035b5d90 */
  local_24 = 0;
  lVar8 = (__this->fields).ADEIKPGDIPM;
  if (lVar8 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar8;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pSVar5 = (__this->fields).GJNOEAKNMOG;
  if (pSVar5 != (System_String_o *)0x0) {
                    /* try { // try from 035b5fd0 to 036b5fd3 has its CatchHandler @ 035b600c */
                    /* try { // try from 035b5fd4 to 036b5fd7 has its CatchHandler @ 035b6000 */
    if ((pSVar5->fields)._stringLength != 0) {
                    /* try { // try from 035b5fd8 to 036b5fdb has its CatchHandler @ 035b5ff8 */
                    /* try { // try from 035b5fdc to 036b5fe3 has its CatchHandler @ 035b6008 */
      uVar3 = (*(pSVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 035b5fe4 to 036b5fe7 has its CatchHandler @ 035b5ff0 */
      uVar2 = uVar3 ^ uVar2;
    }
                    /* try { // try from 035b5fe8 to 036b6027 has its CatchHandler @ 035b5d90 */
    lVar8 = (__this->fields).HAKDPKINDPN;
                    /* catch() { ... } // from try @ 035b5f10 with catch @ 035b5fec */
    if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 035b5fe4 with catch @ 035b5ff0 */
      local_18 = lVar8;
                    /* catch() { ... } // from try @ 035b5f78 with catch @ 035b5ff4 */
                    /* catch() { ... } // from try @ 035b5fd8 with catch @ 035b5ff8 */
                    /* catch() { ... } // from try @ 035b5ee8 with catch @ 035b5ffc */
      uVar3 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035b5fd4 with catch @ 035b6000 */
      uVar2 = uVar3 ^ uVar2;
    }
                    /* catch() { ... } // from try @ 035b5ed0 with catch @ 035b6004 */
    iVar1 = (__this->fields).GPDALMOAKGG;
                    /* catch() { ... } // from try @ 035b5fdc with catch @ 035b6008 */
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 035b5fd0 with catch @ 035b600c */
      local_24 = iVar1;
                    /* catch() { ... } // from try @ 035b5eac with catch @ 035b6010 */
      uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).IBFEHEDKGAL;
    if (iVar1 != 0) {
                    /* try { // try from 035b6028 to 036b602b has its CatchHandler @ 035b604c */
      local_24 = iVar1;
                    /* try { // try from 035b602c to 036b6053 has its CatchHandler @ 035b5d90 */
      uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    pEVar6 = (__this->fields).MMIHELOLFPP;
    if (pEVar6 != (EEHFEPPDBHL_o *)0x0) {
                    /* catch() { ... } // from try @ 035b6028 with catch @ 035b604c */
      uVar3 = (*(pEVar6->klass->vtable)._2_GetHashCode.methodPtr)
                        (pEVar6,(pEVar6->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
                    /* try { // try from 035b6054 to 036b605b has its CatchHandler @ 035b6070 */
    pGVar7 = (__this->fields).MABPCBMOECE;
    if (pGVar7 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
                    /* try { // try from 035b605c to 036b6067 has its CatchHandler @ 035b5d90 */
      uVar3 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 035b6068 to 036b606f has its CatchHandler @ 035b6070 */
      pGVar9 = (__this->fields).MJIHCLLODMF;
      if (pGVar9 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
                    /* catch() { ... } // from try @ 035b6054 with catch @ 035b6070
                       catch() { ... } // from try @ 035b6068 with catch @ 035b6070 */
        uVar4 = (*(pGVar9->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar9,(pGVar9->klass->vtable)._2_GetHashCode.method);
        pGVar10 = (__this->fields).CKFPENBPNML;
        uVar4 = uVar3 ^ uVar2 ^ uVar4;
        if (pGVar10 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          uVar2 = (*(pGVar10->klass->vtable)._2_GetHashCode.methodPtr)
                            (pGVar10,(pGVar10->klass->vtable)._2_GetHashCode.method);
          uVar4 = uVar2 ^ uVar4;
        }
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

