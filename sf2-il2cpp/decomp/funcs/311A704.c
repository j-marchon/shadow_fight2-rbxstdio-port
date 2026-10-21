// KAMBBJFPLGM$$MergeFrom @ RVA 0x311A704

void KAMBBJFPLGM__MergeFrom(KAMBBJFPLGM_o *__this,KAMBBJFPLGM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  EOLFEKNCPLM_o *pEVar2;
  NGOFOPOGBMJ_o *pNVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar4;
  BPBGAAHBFKH_o *pBVar5;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_01;
  KEGDLHPEJBG_o *pKVar6;
  Google_Protobuf_UnknownFieldSet_o *pGVar7;
  long lVar8;
  KAMBBJFPLGM_Fields *pKVar9;
  EOLFEKNCPLM_o **ppEVar10;
  NGOFOPOGBMJ_o **ppNVar11;
  BPBGAAHBFKH_o **ppBVar12;
  KEGDLHPEJBG_o **ppKVar13;
  
  if ((DAT_045665e1 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_045665e1 = 1;
  }
  if (IBKIPBJJCPG == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).FLAFELDNABC != (EOLFEKNCPLM_o *)0x0) {
    ppEVar10 = &(__this->fields).FLAFELDNABC;
    pEVar2 = *ppEVar10;
    if (pEVar2 == (EOLFEKNCPLM_o *)0x0) {
      pEVar2 = (EOLFEKNCPLM_o *)thunk_FUN_01bda818(EOLFEKNCPLM_TypeInfo);
      EOLFEKNCPLM___ctor(pEVar2,(MethodInfo *)0x0);
      *ppEVar10 = pEVar2;
      thunk_FUN_01c20e04(ppEVar10,pEVar2);
      pEVar2 = *ppEVar10;
      if (pEVar2 == (EOLFEKNCPLM_o *)0x0) goto LAB_0321a9b4;
    }
    EOLFEKNCPLM__MergeFrom(pEVar2,(IBKIPBJJCPG->fields).FLAFELDNABC,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).CBEJJIHKEGF != (NGOFOPOGBMJ_o *)0x0) {
    ppNVar11 = &(__this->fields).CBEJJIHKEGF;
    pNVar3 = *ppNVar11;
    if (pNVar3 == (NGOFOPOGBMJ_o *)0x0) {
      pNVar3 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
      NGOFOPOGBMJ___ctor(pNVar3,(MethodInfo *)0x0);
      *ppNVar11 = pNVar3;
      thunk_FUN_01c20e04(ppNVar11,pNVar3);
      pNVar3 = *ppNVar11;
      if (pNVar3 == (NGOFOPOGBMJ_o *)0x0) goto LAB_0321a9b4;
    }
    NGOFOPOGBMJ__MergeFrom(pNVar3,(IBKIPBJJCPG->fields).CBEJJIHKEGF,(MethodInfo *)0x0);
  }
  iVar1 = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
  if (iVar1 != 0) {
    (__this->fields).EMOLIBOCKJK = iVar1;
  }
  pGVar4 = (__this->fields).LEJBLHJFJHP;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).LEJBLHJFJHP,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    iVar1 = (IBKIPBJJCPG->fields).IJBBNNHJPLF;
    if (iVar1 != 0) {
      (__this->fields).IJBBNNHJPLF = iVar1;
    }
    lVar8 = (IBKIPBJJCPG->fields).GFIFLFPODAE;
    if (lVar8 != 0) {
      (__this->fields).GFIFLFPODAE = lVar8;
    }
    lVar8 = (IBKIPBJJCPG->fields).FLFGAIPCCJK;
    if (lVar8 != 0) {
      (__this->fields).FLFGAIPCCJK = lVar8;
    }
    pGVar4 = (__this->fields).AKFPFIHIHOC;
    if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).AKFPFIHIHOC,
                 Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
      iVar1 = (IBKIPBJJCPG->fields).GNKNDHJHFOC;
      if (iVar1 != 0) {
        (__this->fields).GNKNDHJHFOC = iVar1;
      }
      if ((IBKIPBJJCPG->fields).IGPJEDLPAGI != (BPBGAAHBFKH_o *)0x0) {
        ppBVar12 = &(__this->fields).IGPJEDLPAGI;
        pBVar5 = *ppBVar12;
        if (pBVar5 == (BPBGAAHBFKH_o *)0x0) {
          pBVar5 = (BPBGAAHBFKH_o *)thunk_FUN_01bda818(BPBGAAHBFKH_TypeInfo);
          BPBGAAHBFKH___ctor(pBVar5,(MethodInfo *)0x0);
          *ppBVar12 = pBVar5;
          thunk_FUN_01c20e04(ppBVar12,pBVar5);
          pBVar5 = *ppBVar12;
          if (pBVar5 == (BPBGAAHBFKH_o *)0x0) goto LAB_0321a9b4;
        }
        BPBGAAHBFKH__MergeFrom(pBVar5,(IBKIPBJJCPG->fields).IGPJEDLPAGI,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).HBIHNBPPEEO;
      if (__this_00 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                   (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).HBIHNBPPEEO,
                   Method_Google_Protobuf_Collections_RepeatedField<string>_Add__);
        __this_01 = (__this->fields).FDELJPKNGKF;
        if (__this_01 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__Add
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                     (System_Collections_Generic_IEnumerable_T__o *)
                     (IBKIPBJJCPG->fields).FDELJPKNGKF,
                     Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_Add__);
          if ((IBKIPBJJCPG->fields).LIGHEGAMGHD != (KEGDLHPEJBG_o *)0x0) {
            ppKVar13 = &(__this->fields).LIGHEGAMGHD;
            pKVar6 = *ppKVar13;
            if (pKVar6 == (KEGDLHPEJBG_o *)0x0) {
              pKVar6 = (KEGDLHPEJBG_o *)thunk_FUN_01bda818(KEGDLHPEJBG_TypeInfo);
              KEGDLHPEJBG___ctor(pKVar6,(MethodInfo *)0x0);
              *ppKVar13 = pKVar6;
              thunk_FUN_01c20e04(ppKVar13,pKVar6);
              pKVar6 = *ppKVar13;
              if (pKVar6 == (KEGDLHPEJBG_o *)0x0) goto LAB_0321a9b4;
            }
            KEGDLHPEJBG__MergeFrom(pKVar6,(IBKIPBJJCPG->fields).LIGHEGAMGHD,(MethodInfo *)0x0);
          }
          pKVar9 = &__this->fields;
          pGVar7 = Google_Protobuf_UnknownFieldSet__MergeFrom
                             (pKVar9->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,
                              (MethodInfo *)0x0);
          pKVar9->CKFPENBPNML = pGVar7;
          thunk_FUN_01c20e04(pKVar9,pGVar7);
          return;
        }
      }
    }
  }
LAB_0321a9b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

