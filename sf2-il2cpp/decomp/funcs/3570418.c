// NLDPAHFABGL$$GetHashCode @ RVA 0x3570418

int32_t NLDPAHFABGL__GetHashCode(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PGICCMFLDPI_o *pPVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  long local_18;
  
  local_18 = 0;
                    /* try { // try from 03670424 to 0377042b has its CatchHandler @ 03672fc8 */
  lVar5 = (__this->fields).ADEIKPGDIPM;
  if (lVar5 == 0) {
    uVar1 = 1;
  }
  else {
    local_18 = lVar5;
                    /* try { // try from 0367043c to 03770443 has its CatchHandler @ 03672fc4 */
    uVar1 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar1 ^ 1;
                    /* try { // try from 03670444 to 03770453 has its CatchHandler @ 03672fc0 */
  }
  lVar5 = (__this->fields).IFDGNOKADMK;
  if (lVar5 != 0) {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
                    /* try { // try from 03670464 to 0377046b has its CatchHandler @ 03672fbc */
    uVar1 = uVar2 ^ uVar1;
  }
  pPVar3 = (__this->fields).MIINPPOCPCN;
  if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
    uVar2 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 0367047c to 03770483 has its CatchHandler @ 03672fb8 */
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03670490 to 03770497 has its CatchHandler @ 03672fb4 */
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}

