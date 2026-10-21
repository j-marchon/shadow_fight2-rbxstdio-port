// PGICCMFLDPI$$GetHashCode @ RVA 0x32FD1F4

int32_t PGICCMFLDPI__GetHashCode(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  long lVar4;
  long local_18;
  
  local_18 = 0;
  lVar4 = (__this->fields).GDKPGIBMFPA;
                    /* try { // try from 033fd204 to 034fd20b has its CatchHandler @ 033fd34c */
  if (lVar4 == 0) {
                    /* try { // try from 033fd224 to 034fd337 has its CatchHandler @ 033fd08c */
    uVar1 = 1;
  }
  else {
    local_18 = lVar4;
                    /* try { // try from 033fd218 to 034fd223 has its CatchHandler @ 033fd344 */
    uVar1 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar1 ^ 1;
  }
  pGVar3 = (__this->fields).CKFPENBPNML;
  if (pGVar3 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}

