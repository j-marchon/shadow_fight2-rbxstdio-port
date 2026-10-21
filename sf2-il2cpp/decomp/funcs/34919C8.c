// GLCAPECMBLM$$MHENCNPBING @ RVA 0x34919C8

void GLCAPECMBLM__MHENCNPBING(GLCAPECMBLM_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  int32_t iVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  OLKKAIFGGAK_o *__this_02;
  HDBPKHNKOGI_o *pHVar3;
  float fVar4;
  
                    /* try { // try from 035919cc to 036919d3 has its CatchHandler @ 03591ac4 */
  __this_00 = (__this->fields).PBDIPLHDHHD;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 035919e4 to 036919eb has its CatchHandler @ 03591ac0 */
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pHVar3 = (__this->fields).AHCMAIOOIKM;
    if ((pHVar3 != (HDBPKHNKOGI_o *)0x0) &&
       (__this_02 = (__this->fields).BCKBBGCOMJD, __this_02 != (OLKKAIFGGAK_o *)0x0)) {
      fVar4 = (pHVar3->fields).NDGEJKPCAPM;
                    /* try { // try from 03591a04 to 03691a0b has its CatchHandler @ 03591a34 */
      iVar2 = OLKKAIFGGAK__MALPGCALHNK(__this_02,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        auVar1._4_8_ = 0;
        auVar1._0_4_ = fVar4 * (float)iVar2;
                    /* try { // try from 03591a24 to 03691a2b has its CatchHandler @ 03591abc */
                    /* try { // try from 03591a2c to 03691a43 has its CatchHandler @ 035918b0 */
        UnityEngine_Transform__set_localEulerAngles
                  (__this_01,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a04 with catch @ 03591a34
                        */
  FUN_01bab8c8();
}

