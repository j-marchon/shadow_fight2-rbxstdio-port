// KAMBBJFPLGM$$Equals @ RVA 0x311B5F4

bool KAMBBJFPLGM__Equals(KAMBBJFPLGM_o *__this,KAMBBJFPLGM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_01;
  
  if ((DAT_045665e9 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_Equals__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Equals__);
    DAT_045665e9 = 1;
  }
  if (IBKIPBJJCPG != (KAMBBJFPLGM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).FLAFELDNABC,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).FLAFELDNABC,(MethodInfo *)0x0);
    if (((bVar1) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).CBEJJIHKEGF,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).CBEJJIHKEGF,(MethodInfo *)0x0),
        bVar1)) && ((__this->fields).EMOLIBOCKJK == (IBKIPBJJCPG->fields).EMOLIBOCKJK)) {
      pGVar2 = (__this->fields).LEJBLHJFJHP;
      if (pGVar2 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
LAB_0321b790:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).LEJBLHJFJHP,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
      if (((bVar1) && ((__this->fields).IJBBNNHJPLF == (IBKIPBJJCPG->fields).IJBBNNHJPLF)) &&
         (((__this->fields).GFIFLFPODAE == (IBKIPBJJCPG->fields).GFIFLFPODAE &&
          ((__this->fields).FLFGAIPCCJK == (IBKIPBJJCPG->fields).FLFGAIPCCJK)))) {
        pGVar2 = (__this->fields).AKFPFIHIHOC;
        if (pGVar2 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
        goto LAB_0321b790;
        bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).AKFPFIHIHOC,
                           Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
        if (((bVar1) && ((__this->fields).GNKNDHJHFOC == (IBKIPBJJCPG->fields).GNKNDHJHFOC)) &&
           (bVar1 = System_Object__Equals
                              ((Il2CppObject *)(__this->fields).IGPJEDLPAGI,
                               (Il2CppObject *)(IBKIPBJJCPG->fields).IGPJEDLPAGI,(MethodInfo *)0x0),
           bVar1)) {
          __this_00 = (__this->fields).HBIHNBPPEEO;
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_string__o *)0x0)
          goto LAB_0321b790;
          bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                             (Google_Protobuf_Collections_RepeatedField_T__o *)
                             (IBKIPBJJCPG->fields).HBIHNBPPEEO,
                             Method_Google_Protobuf_Collections_RepeatedField<string>_Equals__);
          if (bVar1) {
            __this_01 = (__this->fields).FDELJPKNGKF;
            if (__this_01 == (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0)
            goto LAB_0321b790;
            bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                               (Google_Protobuf_Collections_RepeatedField_T__o *)
                               (IBKIPBJJCPG->fields).FDELJPKNGKF,
                               Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_Equals__
                              );
            if ((bVar1) &&
               (bVar1 = System_Object__Equals
                                  ((Il2CppObject *)(__this->fields).LIGHEGAMGHD,
                                   (Il2CppObject *)(IBKIPBJJCPG->fields).LIGHEGAMGHD,
                                   (MethodInfo *)0x0), bVar1)) {
              bVar1 = System_Object__Equals
                                ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                                 (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0
                                );
              return bVar1;
            }
          }
        }
      }
    }
  }
  return false;
}

