// KAMBBJFPLGM$$.ctor @ RVA 0x311B398

void KAMBBJFPLGM___ctor(KAMBBJFPLGM_o *__this,KAMBBJFPLGM_o *IBKIPBJJCPG,MethodInfo *method)

{
  EOLFEKNCPLM_o *pEVar1;
  NGOFOPOGBMJ_o *pNVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar3;
  BPBGAAHBFKH_o *pBVar4;
  Google_Protobuf_Collections_RepeatedField_string__o *pGVar5;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *pGVar6;
  KEGDLHPEJBG_o *pKVar7;
  Google_Protobuf_UnknownFieldSet_o *pGVar8;
  KAMBBJFPLGM_o *extraout_x1;
  KAMBBJFPLGM_o *method_00;
  NGOFOPOGBMJ_o **ppNVar9;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar10;
  int64_t iVar11;
  
  method_00 = IBKIPBJJCPG;
  if ((DAT_045665e8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_Clone__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Clone__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    DAT_045665e8 = 1;
    method_00 = extraout_x1;
  }
  KAMBBJFPLGM___ctor(__this,(MethodInfo *)method_00);
  if (IBKIPBJJCPG != (KAMBBJFPLGM_o *)0x0) {
    pEVar1 = (IBKIPBJJCPG->fields).FLAFELDNABC;
    if (pEVar1 == (EOLFEKNCPLM_o *)0x0) {
      pEVar1 = (EOLFEKNCPLM_o *)0x0;
    }
    else {
      pEVar1 = EOLFEKNCPLM__Clone(pEVar1,(MethodInfo *)0x0);
    }
    if (__this != (KAMBBJFPLGM_o *)0x0) {
      (__this->fields).FLAFELDNABC = pEVar1;
      thunk_FUN_01c20e04();
      pNVar2 = (IBKIPBJJCPG->fields).CBEJJIHKEGF;
      if (pNVar2 == (NGOFOPOGBMJ_o *)0x0) {
        pNVar2 = (NGOFOPOGBMJ_o *)0x0;
      }
      else {
        pNVar2 = NGOFOPOGBMJ__Clone(pNVar2,(MethodInfo *)0x0);
      }
      ppNVar9 = &(__this->fields).CBEJJIHKEGF;
      *ppNVar9 = pNVar2;
      thunk_FUN_01c20e04(ppNVar9);
      (__this->fields).EMOLIBOCKJK = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
      pGVar3 = (IBKIPBJJCPG->fields).LEJBLHJFJHP;
      if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        pGVar3 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
        ppGVar10 = &(__this->fields).LEJBLHJFJHP;
        *ppGVar10 = pGVar3;
        thunk_FUN_01c20e04(ppGVar10,pGVar3);
        (__this->fields).IJBBNNHJPLF = (IBKIPBJJCPG->fields).IJBBNNHJPLF;
        iVar11 = (IBKIPBJJCPG->fields).GFIFLFPODAE;
        (__this->fields).FLFGAIPCCJK = (IBKIPBJJCPG->fields).FLFGAIPCCJK;
        (__this->fields).GFIFLFPODAE = iVar11;
        pGVar3 = (IBKIPBJJCPG->fields).AKFPFIHIHOC;
        if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
          pGVar3 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
                   Google_Protobuf_Collections_RepeatedField<object>__Clone
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__)
          ;
          ppGVar10 = &(__this->fields).AKFPFIHIHOC;
          *ppGVar10 = pGVar3;
          thunk_FUN_01c20e04(ppGVar10,pGVar3);
          (__this->fields).GNKNDHJHFOC = (IBKIPBJJCPG->fields).GNKNDHJHFOC;
          pBVar4 = (IBKIPBJJCPG->fields).IGPJEDLPAGI;
          if (pBVar4 == (BPBGAAHBFKH_o *)0x0) {
            pBVar4 = (BPBGAAHBFKH_o *)0x0;
          }
          else {
            pBVar4 = BPBGAAHBFKH__Clone(pBVar4,(MethodInfo *)0x0);
          }
          (__this->fields).IGPJEDLPAGI = pBVar4;
          thunk_FUN_01c20e04();
          pGVar5 = (IBKIPBJJCPG->fields).HBIHNBPPEEO;
          if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
            pGVar5 = (Google_Protobuf_Collections_RepeatedField_string__o *)
                     Google_Protobuf_Collections_RepeatedField<object>__Clone
                               ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,
                                Method_Google_Protobuf_Collections_RepeatedField<string>_Clone__);
            (__this->fields).HBIHNBPPEEO = pGVar5;
            thunk_FUN_01c20e04();
            pGVar6 = (IBKIPBJJCPG->fields).FDELJPKNGKF;
            if (pGVar6 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
              pGVar6 = (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)
                       Google_Protobuf_Collections_RepeatedField<object>__Clone
                                 ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,
                                  Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_Clone__
                                 );
              (__this->fields).FDELJPKNGKF = pGVar6;
              thunk_FUN_01c20e04();
              pKVar7 = (IBKIPBJJCPG->fields).LIGHEGAMGHD;
              if (pKVar7 == (KEGDLHPEJBG_o *)0x0) {
                pKVar7 = (KEGDLHPEJBG_o *)0x0;
              }
              else {
                pKVar7 = KEGDLHPEJBG__Clone(pKVar7,(MethodInfo *)0x0);
              }
              (__this->fields).LIGHEGAMGHD = pKVar7;
              thunk_FUN_01c20e04();
              pGVar8 = Google_Protobuf_UnknownFieldSet__Clone
                                 ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
              (__this->fields).CKFPENBPNML = pGVar8;
              thunk_FUN_01c20e04(&__this->fields,pGVar8);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

