// KBECBDOOHCO$$GFECOLFOILC @ RVA 0x358F26C

void KBECBDOOHCO__GFECOLFOILC(KBECBDOOHCO_o *__this,CNDPAJOLKFN_o *EKEMKOCPHPO,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields).LDAKOINICNJ;
                    /* catch() { ... } // from try @ 0368f184 with catch @ 0368f27c */
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      EKEMKOCPHPO != (CNDPAJOLKFN_o *)0x0)) && (__this_01 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0368f28c to 0378f29f has its CatchHandler @ 0368f314 */
    value.fields.z = 0.0;
    value.fields.x = (EKEMKOCPHPO->fields).super.OHHDBINAJCB;
    value.fields.y = (EKEMKOCPHPO->fields).super.JOLEIODMLFL;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368f1f0 with catch @ 0368f2a0
                       try { // try from 0368f2a0 to 0378f2bb has its CatchHandler @ 0368efe8 */
  FUN_01bab8c8();
}

