// MEPKDDGONGE$$.ctor @ RVA 0x3178EB8

void MEPKDDGONGE___ctor(MEPKDDGONGE_o *__this,MEPKDDGONGE_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_string__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03278e64 with catch @ 03278eb8
                        */
                    /* try { // try from 03278ed0 to 03378ed3 has its CatchHandler @ 03278ef4 */
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_0456696f & 1) == 0) {
                    /* try { // try from 03278ed4 to 03378efb has its CatchHandler @ 03278dc0 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Clone__);
    DAT_0456696f = 1;
    method_00 = extraout_x1;
  }
  MEPKDDGONGE___ctor(__this,method_00);
  if (IBKIPBJJCPG != (MEPKDDGONGE_o *)0x0) {
                    /* catch() { ... } // from try @ 03278ed0 with catch @ 03278ef4 */
    (__this->fields).CCCDGBNPNOD = (IBKIPBJJCPG->fields).CCCDGBNPNOD;
                    /* try { // try from 03278efc to 03378f03 has its CatchHandler @ 03278f18 */
    pGVar1 = (IBKIPBJJCPG->fields).IECICFJIDPO;
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
                    /* try { // try from 03278f04 to 03378f0f has its CatchHandler @ 03278dc0 */
                    /* try { // try from 03278f10 to 03378f17 has its CatchHandler @ 03278f18 */
      pGVar1 = (Google_Protobuf_Collections_RepeatedField_string__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                          Method_Google_Protobuf_Collections_RepeatedField<string>_Clone__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03278efc with catch @ 03278f18
                       catch(type#2 @ 00000000) { ... } // from try @ 03278f10 with catch @ 03278f18
                        */
      (__this->fields).IECICFJIDPO = pGVar1;
      thunk_FUN_01c20e04();
      pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(&__this->fields,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

