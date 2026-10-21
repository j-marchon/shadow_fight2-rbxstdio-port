// NLFLMJPNOLF$$.ctor @ RVA 0x32A76A0

void NLFLMJPNOLF___ctor(NLFLMJPNOLF_o *__this,NLFLMJPNOLF_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
                    /* try { // try from 033a76a8 to 034a76af has its CatchHandler @ 033a77d0 */
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04567406 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
                    /* try { // try from 033a76cc to 034a76ff has its CatchHandler @ 033a7844 */
    DAT_04567406 = 1;
    method_00 = extraout_x1;
  }
  NLFLMJPNOLF___ctor(__this,method_00);
  if (IBKIPBJJCPG != (NLFLMJPNOLF_o *)0x0) {
    (__this->fields).OHMDCKEDOGH = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
    (__this->fields).IILCHFKCEEH = (IBKIPBJJCPG->fields).IILCHFKCEEH;
    __this_00 = (IBKIPBJJCPG->fields).MABPCBMOECE;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
      pGVar1 = Google_Protobuf_Collections_RepeatedField<long>__Clone
                         (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
      (__this->fields).MABPCBMOECE = (Google_Protobuf_Collections_RepeatedField_long__o *)pGVar1;
      thunk_FUN_01c20e04();
                    /* try { // try from 033a7714 to 034a771b has its CatchHandler @ 033a7830 */
                    /* try { // try from 033a771c to 034a776f has its CatchHandler @ 033a7424 */
      (__this->fields).BHAOPCFDKCG = (IBKIPBJJCPG->fields).BHAOPCFDKCG;
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

