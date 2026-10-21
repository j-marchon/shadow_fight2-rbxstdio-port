// BKMLILFFPIH$$GetHashCode @ RVA 0x3046F54

int32_t BKMLILFFPIH__GetHashCode(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  BECIPDJBAOG_o *pBVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pBVar3 = (__this->fields).MJIIHOLHNCK;
  if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pBVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pBVar3,(pBVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pKVar4 = (__this->fields).OPHCNELIOLD;
  if (pKVar4 != (KAMBBJFPLGM_o *)0x0) {
    uVar2 = (*(pKVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar4,(pKVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
                    /* try { // try from 03146fb0 to 03247083 has its CatchHandler @ 03146fb0
                       catch() { ... } // from try @ 03146fb0 with catch @ 03146fb0
                       catch() { ... } // from try @ 031470ac with catch @ 03146fb0
                       catch() { ... } // from try @ 0314714c with catch @ 03146fb0 */
  return uVar1;
}

