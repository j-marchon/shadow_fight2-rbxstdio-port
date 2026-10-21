// JGELBDHDHAO$$Equals @ RVA 0x350410C

bool JGELBDHDHAO__Equals(JGELBDHDHAO_o *__this,JGELBDHDHAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
                    /* try { // try from 0360410c to 0370410f has its CatchHandler @ 0360411c */
                    /* try { // try from 03604110 to 03704133 has its CatchHandler @ 03603edc */
                    /* catch() { ... } // from try @ 036040c0 with catch @ 03604114 */
                    /* catch() { ... } // from try @ 03604080 with catch @ 03604118 */
                    /* catch() { ... } // from try @ 0360410c with catch @ 0360411c */
                    /* catch() { ... } // from try @ 0360406c with catch @ 03604120 */
  if ((DAT_0456887f & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
                    /* try { // try from 03604134 to 03704137 has its CatchHandler @ 036041b0 */
                    /* try { // try from 03604138 to 03704183 has its CatchHandler @ 03603edc */
    DAT_0456887f = 1;
  }
  if (IBKIPBJJCPG != (JGELBDHDHAO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).IFBHDAMCHNM != false) == ((IBKIPBJJCPG->fields).IFBHDAMCHNM != false)) {
      __this_00 = (__this->fields).DDEAFMPDPBJ;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).DDEAFMPDPBJ,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
                    /* try { // try from 03604184 to 0370419b has its CatchHandler @ 03604238 */
      if (bVar1) {
                    /* try { // try from 0360419c to 037041a3 has its CatchHandler @ 036041c8 */
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* try { // try from 036041a4 to 037041a7 has its CatchHandler @ 036041c0 */
                    /* try { // try from 036041ac to 037041e3 has its CatchHandler @ 03603edc */
                    /* catch() { ... } // from try @ 03604134 with catch @ 036041b0 */
  return false;
}

