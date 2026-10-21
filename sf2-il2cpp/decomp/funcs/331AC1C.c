// KJNCNBJIJPC$$Equals @ RVA 0x331AC1C

bool KJNCNBJIJPC__Equals(KJNCNBJIJPC_o *__this,KJNCNBJIJPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_02;
  
  if ((DAT_04567811 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Equals__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Equals__);
    DAT_04567811 = 1;
  }
  if (IBKIPBJJCPG != (KJNCNBJIJPC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).OLGJBKMCGIC == (IBKIPBJJCPG->fields).OLGJBKMCGIC) {
      __this_00 = (__this->fields).DDEAFMPDPBJ;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
LAB_0341ad50:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).DDEAFMPDPBJ,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
      if ((bVar1) && ((__this->fields).OJBIFDEEBNO == (IBKIPBJJCPG->fields).OJBIFDEEBNO)) {
        __this_01 = (__this->fields).EACBGCPPLBO;
        if (__this_01 == (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0)
        goto LAB_0341ad50;
        bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).EACBGCPPLBO,
                           Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Equals__);
        if (bVar1) {
          __this_02 = (__this->fields).KELNJLBBHEC;
          if (__this_02 == (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0)
          goto LAB_0341ad50;
          bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                             (Google_Protobuf_Collections_RepeatedField_T__o *)
                             (IBKIPBJJCPG->fields).KELNJLBBHEC,
                             Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Equals__)
          ;
          if (((bVar1) &&
              (((__this->fields).HFNMLHEEAJM != false) ==
               ((IBKIPBJJCPG->fields).HFNMLHEEAJM != false))) &&
             ((__this->fields).GAGJCDGEGBL == (IBKIPBJJCPG->fields).GAGJCDGEGBL)) {
                    /* try { // try from 0341ad20 to 0351adf3 has its CatchHandler @ 0341ad20
                       catch() { ... } // from try @ 0341ad20 with catch @ 0341ad20
                       catch() { ... } // from try @ 0341ae1c with catch @ 0341ad20
                       catch() { ... } // from try @ 0341ae90 with catch @ 0341ad20
                       catch() { ... } // from try @ 0341aebc with catch @ 0341ad20
                       catch() { ... } // from try @ 0341aefc with catch @ 0341ad20 */
            bVar1 = System_Object__Equals
                              ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                               (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
    }
  }
  return false;
}

