// OKKPDLAJBFD$$GetHashCode @ RVA 0x3021FD8

int32_t OKKPDLAJBFD__GetHashCode(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PGICCMFLDPI_o *pPVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pPVar3 = (__this->fields).LGHDNNJIJGO;
  if (pPVar3 == (PGICCMFLDPI_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pPVar3 = (__this->fields).IPIKAEDIBOD;
  if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
    uVar2 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 03122020 to 0322202b has its CatchHandler @ 03121bac */
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 0312202c to 03222033 has its CatchHandler @ 03122034 */
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
                    /* catch() { ... } // from try @ 03121fb0 with catch @ 03122034
                       catch() { ... } // from try @ 0312202c with catch @ 03122034 */
  return uVar1;
}

