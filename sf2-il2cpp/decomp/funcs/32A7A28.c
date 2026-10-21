// NLFLMJPNOLF$$Equals @ RVA 0x32A7A28

bool NLFLMJPNOLF__Equals(NLFLMJPNOLF_o *__this,NLFLMJPNOLF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04567408 & 1) == 0) {
                    /* try { // try from 033a7a48 to 034a7a87 has its CatchHandler @ 033a7b10 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
    DAT_04567408 = 1;
  }
  if (IBKIPBJJCPG != (NLFLMJPNOLF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).OHMDCKEDOGH == (IBKIPBJJCPG->fields).OHMDCKEDOGH) &&
       ((__this->fields).IILCHFKCEEH == (IBKIPBJJCPG->fields).IILCHFKCEEH)) {
      __this_00 = (__this->fields).MABPCBMOECE;
                    /* try { // try from 033a7a88 to 034a7aa3 has its CatchHandler @ 033a7424 */
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033a7abc with catch @ 033a7af4 */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<long>__Equals
                        (__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).MABPCBMOECE,
                         Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
                    /* try { // try from 033a7aa4 to 034a7ab3 has its CatchHandler @ 033a7b28 */
                    /* try { // try from 033a7ab8 to 034a7abb has its CatchHandler @ 033a7af8 */
                    /* try { // try from 033a7abc to 034a7abf has its CatchHandler @ 033a7af4 */
                    /* try { // try from 033a7ac0 to 034a7ac3 has its CatchHandler @ 033a7af0 */
      if ((bVar1) &&
         (((__this->fields).BHAOPCFDKCG != false) == ((IBKIPBJJCPG->fields).BHAOPCFDKCG != false)))
      {
                    /* catch() { ... } // from try @ 033a7a14 with catch @ 033a7adc */
                    /* catch() { ... } // from try @ 033a7ac8 with catch @ 033a7ae0 */
                    /* catch() { ... } // from try @ 033a79f4 with catch @ 033a7ae4 */
                    /* catch() { ... } // from try @ 033a7ac4 with catch @ 033a7ae8 */
                    /* catch() { ... } // from try @ 033a7970 with catch @ 033a7aec */
                    /* catch() { ... } // from try @ 033a7ac0 with catch @ 033a7af0 */
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* try { // try from 033a7ac4 to 034a7ac7 has its CatchHandler @ 033a7ae8 */
                    /* try { // try from 033a7ac8 to 034a7acb has its CatchHandler @ 033a7ae0 */
                    /* try { // try from 033a7ad0 to 034a7ad3 has its CatchHandler @ 033a7ad4 */
                    /* catch() { ... } // from try @ 033a7ad0 with catch @ 033a7ad4 */
                    /* catch() { ... } // from try @ 033a7acc with catch @ 033a7ad8 */
  return false;
}

