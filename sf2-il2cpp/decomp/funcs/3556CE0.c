// NLBPJNEGNNM$$GetHashCode @ RVA 0x3556CE0

int32_t NLBPJNEGNNM__GetHashCode(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  KAMBBJFPLGM_o *pKVar3;
  HCFOFHGNBKP_o *pHVar4;
  GLPEFEEGCPM_o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  
                    /* try { // try from 03656ce8 to 03756cef has its CatchHandler @ 03656f2c */
  pKVar3 = (__this->fields).OPHCNELIOLD;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pKVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar3,(pKVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
                    /* try { // try from 03656d04 to 03756d0b has its CatchHandler @ 03656f24 */
  }
                    /* try { // try from 03656d0c to 03756d43 has its CatchHandler @ 03656b28 */
  pHVar4 = (__this->fields).PMMFPJJOPKE;
  if (pHVar4 != (HCFOFHGNBKP_o *)0x0) {
    uVar2 = (*(pHVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pHVar4,(pHVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).IIIJBPAFNNF;
  if (pGVar5 != (GLPEFEEGCPM_o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar6 = (__this->fields).CKFPENBPNML;
  if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03656d44 to 03756d4b has its CatchHandler @ 03656f90 */
    uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
                    /* try { // try from 03656d54 to 03756d63 has its CatchHandler @ 03656f28 */
  return uVar1;
}

