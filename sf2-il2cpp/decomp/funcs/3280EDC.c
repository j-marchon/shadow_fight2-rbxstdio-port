// FMIEFKAKOMG$$GetHashCode @ RVA 0x3280EDC

int32_t FMIEFKAKOMG__GetHashCode(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  BECIPDJBAOG_o *pBVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
                    /* try { // try from 03380ee4 to 03480ee7 has its CatchHandler @ 03380f0c */
                    /* try { // try from 03380ee8 to 03480eeb has its CatchHandler @ 03380f08 */
  pBVar3 = (__this->fields).MJIIHOLHNCK;
                    /* try { // try from 03380eec to 03480ef7 has its CatchHandler @ 03380878 */
  if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
                    /* catch() { ... } // from try @ 03380ef8 with catch @ 03380f04 */
    uVar1 = 1;
  }
  else {
                    /* try { // try from 03380ef8 to 03480efb has its CatchHandler @ 03380f04 */
    uVar1 = (*(pBVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pBVar3,(pBVar3->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 03380efc to 03480eff has its CatchHandler @ 03380f00 */
    uVar1 = uVar1 ^ 1;
                    /* catch() { ... } // from try @ 03380efc with catch @ 03380f00
                       try { // try from 03380f00 to 03480f2f has its CatchHandler @ 03380878 */
  }
                    /* catch() { ... } // from try @ 03380ee8 with catch @ 03380f08 */
  pKVar4 = (__this->fields).OPHCNELIOLD;
                    /* catch() { ... } // from try @ 03380ee4 with catch @ 03380f0c */
  if (pKVar4 != (KAMBBJFPLGM_o *)0x0) {
                    /* catch() { ... } // from try @ 03380e14 with catch @ 03380f10 */
                    /* catch() { ... } // from try @ 03380b9c with catch @ 03380f14 */
                    /* catch() { ... } // from try @ 03380dd4 with catch @ 03380f18 */
    uVar2 = (*(pKVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar4,(pKVar4->klass->vtable)._2_GetHashCode.method);
                    /* catch() { ... } // from try @ 03380b5c with catch @ 03380f1c */
    uVar1 = uVar2 ^ uVar1;
  }
                    /* catch() { ... } // from try @ 03380d78 with catch @ 03380f20 */
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03380f30 to 03480f33 has its CatchHandler @ 03380f4c */
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}

