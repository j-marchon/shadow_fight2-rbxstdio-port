// TypeDefIndex 202
// Namespace: 
// public sealed class KAMBBJFPLGM : IMessage<KAMBBJFPLGM>, IMessage, IEquatable<KAMBBJFPLGM>, IDeepCloneable<KAMBBJFPLGM>
// Fields:
//   private static readonly MessageParser<KAMBBJFPLGM> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int MGJAPFLANJC = 1;
//   private EOLFEKNCPLM FLAFELDNABC; // 0x18
//   public const int NMBPAEEGAMC = 2;
//   private NGOFOPOGBMJ CBEJJIHKEGF; // 0x20
//   public const int EHGPOBHFGIO = 3;
//   private int EMOLIBOCKJK; // 0x28
//   public const int JMDGHCOJCLH = 4;
//   private static readonly FieldCodec<PIADCKMDDAK> JJNDCMILECE; // 0x8
//   private readonly RepeatedField<PIADCKMDDAK> LEJBLHJFJHP; // 0x30
//   public const int AHPMAHBAGOH = 5;
//   private int IJBBNNHJPLF; // 0x38
//   public const int PJFHIEPMFBN = 6;
//   private long GFIFLFPODAE; // 0x40
//   public const int JGAOCKCMHLH = 7;
//   private long FLFGAIPCCJK; // 0x48
//   public const int AJEAFNFDLKJ = 8;
//   private static readonly FieldCodec<PIADCKMDDAK> ACFGKMKAECB; // 0x10
//   private readonly RepeatedField<PIADCKMDDAK> AKFPFIHIHOC; // 0x50
//   public const int HJMCJCMOOPB = 9;
//   private int GNKNDHJHFOC; // 0x58
//   public const int OHFNJCNNAKG = 10;
//   private BPBGAAHBFKH IGPJEDLPAGI; // 0x60
//   public const int FNPMOKNIIMF = 11;
//   private static readonly FieldCodec<string> IIMNAMKPOPF; // 0x18
//   private readonly RepeatedField<string> HBIHNBPPEEO; // 0x68
//   public const int FKCADIGNBOM = 12;
//   private static readonly FieldCodec<EIBAKHBHMAO> ADEIEGJOBLG; // 0x20
//   private readonly RepeatedField<EIBAKHBHMAO> FDELJPKNGKF; // 0x70
//   public const int LOHIHOFAJBH = 13;
//   private KEGDLHPEJBG LIGHEGAMGHD; // 0x78

// ===== public void PGOIFJBNJCE(int CJNHFNHJHPE)  [RVA 0x311A4E4]
// KAMBBJFPLGM$$PGOIFJBNJCE @ RVA 0x311A4E4

void KAMBBJFPLGM__PGOIFJBNJCE(KAMBBJFPLGM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EMOLIBOCKJK = CJNHFNHJHPE;
  return;
}


// ===== public int OFHNGHNPJGE()  [RVA 0x311A4EC]
// KAMBBJFPLGM$$OFHNGHNPJGE @ RVA 0x311A4EC

int32_t KAMBBJFPLGM__OFHNGHNPJGE(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).GNKNDHJHFOC;
}


// ===== public void EAOKPAJBMNI(KEGDLHPEJBG CJNHFNHJHPE)  [RVA 0x311A4F4]
// KAMBBJFPLGM$$EAOKPAJBMNI @ RVA 0x311A4F4

void KAMBBJFPLGM__EAOKPAJBMNI(KAMBBJFPLGM_o *__this,KEGDLHPEJBG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LIGHEGAMGHD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool FOBHCKNLADH()  [RVA 0x311A4FC]
// KAMBBJFPLGM$$FOBHCKNLADH @ RVA 0x311A4FC

bool KAMBBJFPLGM__FOBHCKNLADH(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  EOLFEKNCPLM_o *pEVar1;
  
  pEVar1 = (__this->fields).FLAFELDNABC;
                    /* try { // try from 0321a500 to 0331a507 has its CatchHandler @ 0321a5b4 */
  if (pEVar1 != (EOLFEKNCPLM_o *)0x0) {
    return 0 < (pEVar1->fields).ODDCBFOLIGB;
  }
                    /* try { // try from 0321a518 to 0331a523 has its CatchHandler @ 0321a5b0 */
  return false;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x311A51C]
// KAMBBJFPLGM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x311A51C

Google_Protobuf_Reflection_MessageDescriptor_o *
KAMBBJFPLGM__pb__Google_Protobuf_IMessage_get_Descriptor(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0321a52c to 0331a533 has its CatchHandler @ 0321a5a8 */
  if ((DAT_045665df & 1) == 0) {
                    /* try { // try from 0321a540 to 0331a547 has its CatchHandler @ 0321a5a4 */
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
                    /* try { // try from 0321a548 to 0331a597 has its CatchHandler @ 0321a444 */
    DAT_045665df = 1;
    method = extraout_x1;
  }
  method_00 = KAMBBJFPLGM_TypeInfo;
  if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KAMBBJFPLGM_c *)thunk_FUN_01ba7564(KAMBBJFPLGM_TypeInfo,method);
  }
  pGVar1 = KAMBBJFPLGM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void AMIKJFGIFGK(EOLFEKNCPLM CJNHFNHJHPE)  [RVA 0x311A66C]
// KAMBBJFPLGM$$AMIKJFGIFGK @ RVA 0x311A66C

void KAMBBJFPLGM__AMIKJFGIFGK(KAMBBJFPLGM_o *__this,EOLFEKNCPLM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FLAFELDNABC = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public EOLFEKNCPLM OFJOPJKBAKF()  [RVA 0x311A674]
// KAMBBJFPLGM$$OFJOPJKBAKF @ RVA 0x311A674

EOLFEKNCPLM_o * KAMBBJFPLGM__OFJOPJKBAKF(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).FLAFELDNABC;
}


// ===== public KEGDLHPEJBG ABMODDPMPNF()  [RVA 0x311A67C]
// KAMBBJFPLGM$$ABMODDPMPNF @ RVA 0x311A67C

KEGDLHPEJBG_o * KAMBBJFPLGM__ABMODDPMPNF(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).LIGHEGAMGHD;
}


// ===== public int AANEEALGDAK()  [RVA 0x311A684]
// KAMBBJFPLGM$$AANEEALGDAK @ RVA 0x311A684

int32_t KAMBBJFPLGM__AANEEALGDAK(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).IJBBNNHJPLF;
}


// ===== public RepeatedField<EIBAKHBHMAO> CLCOHBGBNMI()  [RVA 0x311A68C]
// KAMBBJFPLGM$$CLCOHBGBNMI @ RVA 0x311A68C

Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *
KAMBBJFPLGM__CLCOHBGBNMI(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).FDELJPKNGKF;
}


// ===== public void KDLCDMKAPCP(long CJNHFNHJHPE)  [RVA 0x311A694]
// KAMBBJFPLGM$$KDLCDMKAPCP @ RVA 0x311A694

void KAMBBJFPLGM__KDLCDMKAPCP(KAMBBJFPLGM_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GFIFLFPODAE = CJNHFNHJHPE;
  return;
}


// ===== public static MessageParser<KAMBBJFPLGM> PGCAHPDCJBC()  [RVA 0x311A69C]
// KAMBBJFPLGM$$PGCAHPDCJBC @ RVA 0x311A69C

Google_Protobuf_MessageParser_KAMBBJFPLGM__o * KAMBBJFPLGM__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045665e0 & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_045665e0 = 1;
  }
  if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KAMBBJFPLGM_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public bool KILBJDNIPBK()  [RVA 0x311A6F4]
// KAMBBJFPLGM$$KILBJDNIPBK @ RVA 0x311A6F4

bool KAMBBJFPLGM__KILBJDNIPBK(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return 0 < (__this->fields).IJBBNNHJPLF;
}


// ===== public void MergeFrom(KAMBBJFPLGM IBKIPBJJCPG)  [RVA 0x311A704]
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


// ===== public RepeatedField<string> EGOANAEBHLD()  [RVA 0x311A9B8]
// KAMBBJFPLGM$$EGOANAEBHLD @ RVA 0x311A9B8

Google_Protobuf_Collections_RepeatedField_string__o *
KAMBBJFPLGM__EGOANAEBHLD(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).HBIHNBPPEEO;
}


// ===== public RepeatedField<PIADCKMDDAK> PHGEMEGMPML()  [RVA 0x311A9C0]
// KAMBBJFPLGM$$PHGEMEGMPML @ RVA 0x311A9C0

Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *
KAMBBJFPLGM__PHGEMEGMPML(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).LEJBLHJFJHP;
}


// ===== private static void .cctor()  [RVA 0x311A9C8]
// KAMBBJFPLGM$$.cctor @ RVA 0x311A9C8

void KAMBBJFPLGM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KAMBBJFPLGM__o *__this;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_FieldCodec_string__o *pGVar2;
  Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *pGVar3;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o **ppGVar4;
  Google_Protobuf_FieldCodec_string__o **ppGVar5;
  Google_Protobuf_FieldCodec_EIBAKHBHMAO__o **ppGVar6;
  
  if ((DAT_045665e2 & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<EIBAKHBHMAO>__);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<KAMBBJFPLGM>_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KAMBBJFPLGM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KAMBBJFPLGM>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_KAMBBJFPLGM_<>c_PGGMGGKMLPG__);
    FUN_01bab630(&KAMBBJFPLGM_<>c_TypeInfo);
    DAT_045665e2 = 1;
  }
  if ((KAMBBJFPLGM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KAMBBJFPLGM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KAMBBJFPLGM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KAMBBJFPLGM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KAMBBJFPLGM>__ctor__);
  KAMBBJFPLGM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KAMBBJFPLGM_TypeInfo->static_fields,__this);
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045660fa == '\0') {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045660fa = '\x01';
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_PIADCKMDDAK__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x22,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar4 = &KAMBBJFPLGM_TypeInfo->static_fields->JJNDCMILECE;
  *ppGVar4 = pGVar1;
  thunk_FUN_01c20e04(ppGVar4,pGVar1);
  if (DAT_045660fa == '\0') {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045660fa = '\x01';
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_PIADCKMDDAK__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x42,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar4 = &KAMBBJFPLGM_TypeInfo->static_fields->ACFGKMKAECB;
  *ppGVar4 = pGVar1;
  thunk_FUN_01c20e04(ppGVar4,pGVar1);
  pGVar2 = Google_Protobuf_FieldCodec__ForString(0x5a,(MethodInfo *)0x0);
  ppGVar5 = &KAMBBJFPLGM_TypeInfo->static_fields->IIMNAMKPOPF;
  *ppGVar5 = pGVar2;
  thunk_FUN_01c20e04(ppGVar5,pGVar2);
  if ((EIBAKHBHMAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566663 == '\0') {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    DAT_04566663 = '\x01';
  }
  if ((EIBAKHBHMAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar3 = (Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x62,(Google_Protobuf_MessageParser_T__o *)
                           EIBAKHBHMAO_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<EIBAKHBHMAO>__);
  ppGVar6 = &KAMBBJFPLGM_TypeInfo->static_fields->ADEIEGJOBLG;
  *ppGVar6 = pGVar3;
  thunk_FUN_01c20e04(ppGVar6,pGVar3);
  return;
}


// ===== public long NNACDGAAJMH()  [RVA 0x311AC90]
// KAMBBJFPLGM$$NNACDGAAJMH @ RVA 0x311AC90

int64_t KAMBBJFPLGM__NNACDGAAJMH(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).GFIFLFPODAE;
}


// ===== public bool MKICELHALEL()  [RVA 0x311AC98]
// KAMBBJFPLGM$$MKICELHALEL @ RVA 0x311AC98

bool KAMBBJFPLGM__MKICELHALEL(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  int iVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  
  pEVar2 = (__this->fields).FLAFELDNABC;
  if ((pEVar2 != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
    iVar1 = (pGVar3->fields).PFJPLCAIGJH;
    if (iVar1 == 3) {
      return true;
    }
    return iVar1 - 1U < 2;
  }
  return false;
}


// ===== public RepeatedField<PIADCKMDDAK> LAFDNPFOAHL()  [RVA 0x311ACD4]
// KAMBBJFPLGM$$LAFDNPFOAHL @ RVA 0x311ACD4

Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *
KAMBBJFPLGM__LAFDNPFOAHL(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).AKFPFIHIHOC;
}


// ===== public void CAOLCIPLNBK(BPBGAAHBFKH CJNHFNHJHPE)  [RVA 0x311ACDC]
// KAMBBJFPLGM$$CAOLCIPLNBK @ RVA 0x311ACDC

void KAMBBJFPLGM__CAOLCIPLNBK(KAMBBJFPLGM_o *__this,BPBGAAHBFKH_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IGPJEDLPAGI = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override string ToString()  [RVA 0x311ACE4]
// KAMBBJFPLGM$$ToString @ RVA 0x311ACE4

System_String_o * KAMBBJFPLGM__ToString(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045665e3 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045665e3 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public long EENNLBMPOMA()  [RVA 0x311AD3C]
// KAMBBJFPLGM$$EENNLBMPOMA @ RVA 0x311AD3C

int64_t KAMBBJFPLGM__EENNLBMPOMA(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).FLFGAIPCCJK;
}


// ===== public void ONFKPLLCLPP(int CJNHFNHJHPE)  [RVA 0x311AD44]
// KAMBBJFPLGM$$ONFKPLLCLPP @ RVA 0x311AD44

void KAMBBJFPLGM__ONFKPLLCLPP(KAMBBJFPLGM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GNKNDHJHFOC = CJNHFNHJHPE;
  return;
}


// ===== public override int GetHashCode()  [RVA 0x311AD4C]
// KAMBBJFPLGM$$GetHashCode @ RVA 0x311AD4C

int32_t KAMBBJFPLGM__GetHashCode(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  EOLFEKNCPLM_o *pEVar5;
  NGOFOPOGBMJ_o *pNVar6;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar7;
  BPBGAAHBFKH_o *pBVar8;
  Google_Protobuf_Collections_RepeatedField_string__o *pGVar9;
  Google_Protobuf_UnknownFieldSet_o *pGVar10;
  long lVar11;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *pGVar12;
  KEGDLHPEJBG_o *pKVar13;
  long local_28;
  int local_14;
  
  local_28 = 0;
  local_14 = 0;
  pEVar5 = (__this->fields).FLAFELDNABC;
  if (pEVar5 == (EOLFEKNCPLM_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pEVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pEVar5,(pEVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  pNVar6 = (__this->fields).CBEJJIHKEGF;
  if (pNVar6 != (NGOFOPOGBMJ_o *)0x0) {
    uVar3 = (*(pNVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pNVar6,(pNVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).EMOLIBOCKJK;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar7 = (__this->fields).LEJBLHJFJHP;
  if (pGVar7 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    uVar3 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
    iVar1 = (__this->fields).IJBBNNHJPLF;
    uVar3 = uVar3 ^ uVar2;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    lVar11 = (__this->fields).GFIFLFPODAE;
    if (lVar11 != 0) {
      local_28 = lVar11;
      uVar2 = System_Int64__GetHashCode((int64_t)&local_28,(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    lVar11 = (__this->fields).FLFGAIPCCJK;
    if (lVar11 != 0) {
      local_28 = lVar11;
      uVar2 = System_Int64__GetHashCode((int64_t)&local_28,(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    pGVar7 = (__this->fields).AKFPFIHIHOC;
    if (pGVar7 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      uVar2 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
      iVar1 = (__this->fields).GNKNDHJHFOC;
      uVar2 = uVar2 ^ uVar3;
      if (iVar1 != 0) {
        local_14 = iVar1;
        uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      pBVar8 = (__this->fields).IGPJEDLPAGI;
      if (pBVar8 != (BPBGAAHBFKH_o *)0x0) {
        uVar3 = (*(pBVar8->klass->vtable)._2_GetHashCode.methodPtr)
                          (pBVar8,(pBVar8->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      pGVar9 = (__this->fields).HBIHNBPPEEO;
      if (pGVar9 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
        uVar3 = (*(pGVar9->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar9,(pGVar9->klass->vtable)._2_GetHashCode.method);
        pGVar12 = (__this->fields).FDELJPKNGKF;
        if (pGVar12 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
          uVar4 = (*(pGVar12->klass->vtable)._2_GetHashCode.methodPtr)
                            (pGVar12,(pGVar12->klass->vtable)._2_GetHashCode.method);
          pKVar13 = (__this->fields).LIGHEGAMGHD;
          uVar4 = uVar3 ^ uVar2 ^ uVar4;
          if (pKVar13 != (KEGDLHPEJBG_o *)0x0) {
            uVar2 = (*(pKVar13->klass->vtable)._2_GetHashCode.methodPtr)
                              (pKVar13,(pKVar13->klass->vtable)._2_GetHashCode.method);
            uVar4 = uVar2 ^ uVar4;
          }
          pGVar10 = (__this->fields).CKFPENBPNML;
          if (pGVar10 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
            uVar2 = (*(pGVar10->klass->vtable)._2_GetHashCode.methodPtr)
                              (pGVar10,(pGVar10->klass->vtable)._2_GetHashCode.method);
            uVar4 = uVar2 ^ uVar4;
          }
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x311AEEC]
// KAMBBJFPLGM$$MergeFrom @ RVA 0x311AEEC

void KAMBBJFPLGM__MergeFrom
               (KAMBBJFPLGM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KEGDLHPEJBG_o **ppKVar1;
  BPBGAAHBFKH_o **ppBVar2;
  NGOFOPOGBMJ_o **ppNVar3;
  EOLFEKNCPLM_o **ppEVar4;
  KAMBBJFPLGM_Fields *pKVar5;
  uint uVar6;
  int32_t iVar7;
  int64_t iVar8;
  KEGDLHPEJBG_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar9;
  NGOFOPOGBMJ_o *__this_01;
  BPBGAAHBFKH_o *__this_02;
  EOLFEKNCPLM_o *pEVar10;
  Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *codec;
  MethodInfo_295E0C0 *method_00;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_03;
  
  if ((DAT_045665e4 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_045665e4 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
LAB_0321b2b4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar6 == 0) {
    return;
  }
  ppKVar1 = &(__this->fields).LIGHEGAMGHD;
  ppBVar2 = &(__this->fields).IGPJEDLPAGI;
  ppNVar3 = &(__this->fields).CBEJJIHKEGF;
  ppEVar4 = &(__this->fields).FLAFELDNABC;
  pKVar5 = &__this->fields;
LAB_0321afc0:
  if (uVar6 < 0x31) {
    if (0x18 < uVar6) {
      if (uVar6 == 0x22) {
        __this_03 = (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)
                    (__this->fields).LEJBLHJFJHP;
        if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (__this_03 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
          codec = (Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *)
                  KAMBBJFPLGM_TypeInfo->static_fields->JJNDCMILECE;
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__
          ;
          goto LAB_0321b27c;
        }
        goto LAB_0321b2b4;
      }
      if (uVar6 == 0x28) {
        iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).IJBBNNHJPLF = iVar7;
      }
      else {
        if (uVar6 != 0x30) goto LAB_0321b0f4;
        iVar8 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GFIFLFPODAE = iVar8;
      }
      goto LAB_0321b288;
    }
    if (uVar6 == 10) {
      pEVar10 = *ppEVar4;
      if (pEVar10 == (EOLFEKNCPLM_o *)0x0) {
        pEVar10 = (EOLFEKNCPLM_o *)thunk_FUN_01bda818(EOLFEKNCPLM_TypeInfo);
        EOLFEKNCPLM___ctor(pEVar10,(MethodInfo *)0x0);
        *ppEVar4 = pEVar10;
        thunk_FUN_01c20e04(ppEVar4,pEVar10);
        pEVar10 = *ppEVar4;
      }
    }
    else {
      if (uVar6 != 0x12) {
        if (uVar6 != 0x18) goto LAB_0321b0f4;
        iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).EMOLIBOCKJK = iVar7;
        goto LAB_0321b288;
      }
      pEVar10 = (EOLFEKNCPLM_o *)*ppNVar3;
      if (pEVar10 == (EOLFEKNCPLM_o *)0x0) {
        __this_01 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
        NGOFOPOGBMJ___ctor(__this_01,(MethodInfo *)0x0);
        *ppNVar3 = __this_01;
        thunk_FUN_01c20e04(ppNVar3,__this_01);
        pEVar10 = (EOLFEKNCPLM_o *)*ppNVar3;
      }
    }
  }
  else {
    if (uVar6 < 0x49) {
      if (uVar6 == 0x38) {
        iVar8 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).FLFGAIPCCJK = iVar8;
      }
      else {
        if (uVar6 == 0x42) {
          __this_03 = (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)
                      (__this->fields).AKFPFIHIHOC;
          if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_03 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
            codec = (Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *)
                    KAMBBJFPLGM_TypeInfo->static_fields->ACFGKMKAECB;
            method_00 = 
            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__;
            goto LAB_0321b27c;
          }
          goto LAB_0321b2b4;
        }
        if (uVar6 != 0x48) goto LAB_0321b0f4;
        iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GNKNDHJHFOC = iVar7;
      }
      goto LAB_0321b288;
    }
    if (0x5a < uVar6) {
      if (uVar6 != 0x62) {
        if (uVar6 != 0x6a) {
LAB_0321b0f4:
          pGVar9 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pKVar5->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pKVar5->CKFPENBPNML = pGVar9;
          thunk_FUN_01c20e04(pKVar5,pGVar9);
          goto LAB_0321b288;
        }
        pEVar10 = (EOLFEKNCPLM_o *)*ppKVar1;
        if (pEVar10 == (EOLFEKNCPLM_o *)0x0) {
          __this_00 = (KEGDLHPEJBG_o *)thunk_FUN_01bda818(KEGDLHPEJBG_TypeInfo);
          KEGDLHPEJBG___ctor(__this_00,(MethodInfo *)0x0);
          *ppKVar1 = __this_00;
          thunk_FUN_01c20e04(ppKVar1,__this_00);
          pEVar10 = (EOLFEKNCPLM_o *)*ppKVar1;
        }
        goto LAB_0321b244;
      }
      __this_03 = (__this->fields).FDELJPKNGKF;
      if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_03 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
        codec = KAMBBJFPLGM_TypeInfo->static_fields->ADEIEGJOBLG;
        method_00 = Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_AddEntriesFrom__;
LAB_0321b27c:
        Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,AIGOBLJEBCA,
                   (Google_Protobuf_FieldCodec_T__o *)codec,method_00);
        goto LAB_0321b288;
      }
      goto LAB_0321b2b4;
    }
    if (uVar6 != 0x52) {
      if (uVar6 != 0x5a) goto LAB_0321b0f4;
      __this_03 = (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)
                  (__this->fields).HBIHNBPPEEO;
      if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_03 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
        codec = (Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *)
                KAMBBJFPLGM_TypeInfo->static_fields->IIMNAMKPOPF;
        method_00 = Method_Google_Protobuf_Collections_RepeatedField<string>_AddEntriesFrom__;
        goto LAB_0321b27c;
      }
      goto LAB_0321b2b4;
    }
    pEVar10 = (EOLFEKNCPLM_o *)*ppBVar2;
    if (pEVar10 == (EOLFEKNCPLM_o *)0x0) {
      __this_02 = (BPBGAAHBFKH_o *)thunk_FUN_01bda818(BPBGAAHBFKH_TypeInfo);
      BPBGAAHBFKH___ctor(__this_02,(MethodInfo *)0x0);
      *ppBVar2 = __this_02;
      thunk_FUN_01c20e04(ppBVar2,__this_02);
      pEVar10 = (EOLFEKNCPLM_o *)*ppBVar2;
    }
  }
LAB_0321b244:
  Google_Protobuf_CodedInputStream__ReadMessage
            (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pEVar10,(MethodInfo *)0x0);
LAB_0321b288:
  uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar6 == 0) {
    return;
  }
  goto LAB_0321afc0;
}


// ===== public void LMILBHACLBI(int CJNHFNHJHPE)  [RVA 0x311B2B8]
// KAMBBJFPLGM$$LMILBHACLBI @ RVA 0x311B2B8

void KAMBBJFPLGM__LMILBHACLBI(KAMBBJFPLGM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IJBBNNHJPLF = CJNHFNHJHPE;
  return;
}


// ===== public bool ODJAMCJCHGG()  [RVA 0x311B2C0]
// KAMBBJFPLGM$$ODJAMCJCHGG @ RVA 0x311B2C0

bool KAMBBJFPLGM__ODJAMCJCHGG(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  bool bVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  
  if ((DAT_045665e5 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045665e5 = 1;
  }
  pEVar2 = (__this->fields).FLAFELDNABC;
  if ((pEVar2 == (EOLFEKNCPLM_o *)0x0) ||
     (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 == (GKLPDMLELJF_o *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < (pGVar3->fields).ADEIKPGDIPM.fields.value &&
            (pGVar3->fields).ADEIKPGDIPM.fields.hasValue != false;
  }
  return bVar1;
}


// ===== public void PJKNJFIFAFD(NGOFOPOGBMJ CJNHFNHJHPE)  [RVA 0x311B338]
// KAMBBJFPLGM$$PJKNJFIFAFD @ RVA 0x311B338

void KAMBBJFPLGM__PJKNJFIFAFD(KAMBBJFPLGM_o *__this,NGOFOPOGBMJ_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CBEJJIHKEGF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public KAMBBJFPLGM Clone()  [RVA 0x311B340]
// KAMBBJFPLGM$$Clone @ RVA 0x311B340

KAMBBJFPLGM_o * KAMBBJFPLGM__Clone(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045665e6 & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_045665e6 = 1;
    method = extraout_x1;
  }
  __this_00 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo,method);
  KAMBBJFPLGM___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public BPBGAAHBFKH BEIPEFPMCFP()  [RVA 0x311B588]
// KAMBBJFPLGM$$BEIPEFPMCFP @ RVA 0x311B588

BPBGAAHBFKH_o * KAMBBJFPLGM__BEIPEFPMCFP(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).IGPJEDLPAGI;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x311B590]
// KAMBBJFPLGM$$Equals @ RVA 0x311B590

bool KAMBBJFPLGM__Equals(KAMBBJFPLGM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045665e7 & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_045665e7 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KAMBBJFPLGM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KAMBBJFPLGM__Equals(__this,(KAMBBJFPLGM_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public int JCIGPDGHOMK()  [RVA 0x311B794]
// KAMBBJFPLGM$$JCIGPDGHOMK @ RVA 0x311B794

int32_t KAMBBJFPLGM__JCIGPDGHOMK(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).EMOLIBOCKJK;
}


// ===== public void .ctor(KAMBBJFPLGM IBKIPBJJCPG)  [RVA 0x311B398]
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


// ===== public bool Equals(KAMBBJFPLGM IBKIPBJJCPG)  [RVA 0x311B5F4]
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


// ===== public bool GLMBJCDGFOJ()  [RVA 0x311B8F0]
// KAMBBJFPLGM$$GLMBJCDGFOJ @ RVA 0x311B8F0

bool KAMBBJFPLGM__GLMBJCDGFOJ(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return 0 < (__this->fields).GNKNDHJHFOC;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x311B900]
// KAMBBJFPLGM$$WriteTo @ RVA 0x311B900

void KAMBBJFPLGM__WriteTo
               (KAMBBJFPLGM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_02;
  
  if ((DAT_045665ea & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_WriteTo__);
    DAT_045665ea = 1;
  }
  if ((__this->fields).FLAFELDNABC != (EOLFEKNCPLM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).FLAFELDNABC,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).CBEJJIHKEGF != (NGOFOPOGBMJ_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).CBEJJIHKEGF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).EMOLIBOCKJK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).EMOLIBOCKJK,(MethodInfo *)0x0);
  }
  pGVar1 = (__this->fields).LEJBLHJFJHP;
  if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)KAMBBJFPLGM_TypeInfo->static_fields->JJNDCMILECE,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    if ((__this->fields).IJBBNNHJPLF != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).IJBBNNHJPLF,(MethodInfo *)0x0);
    }
    if ((__this->fields).GFIFLFPODAE != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt64
                (JBGJLELBMJF,(__this->fields).GFIFLFPODAE,(MethodInfo *)0x0);
    }
    if ((__this->fields).FLFGAIPCCJK != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x38,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt64
                (JBGJLELBMJF,(__this->fields).FLFGAIPCCJK,(MethodInfo *)0x0);
    }
    pGVar1 = (__this->fields).AKFPFIHIHOC;
    if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)KAMBBJFPLGM_TypeInfo->static_fields->ACFGKMKAECB
                 ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
      if ((__this->fields).GNKNDHJHFOC != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x48,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteInt32
                  (JBGJLELBMJF,(__this->fields).GNKNDHJHFOC,(MethodInfo *)0x0);
      }
      if ((__this->fields).IGPJEDLPAGI != (BPBGAAHBFKH_o *)0x0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x52,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteMessage
                  (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IGPJEDLPAGI,
                   (MethodInfo *)0x0);
      }
      __this_02 = (__this->fields).HBIHNBPPEEO;
      if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_02 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,JBGJLELBMJF,
                   (Google_Protobuf_FieldCodec_T__o *)
                   KAMBBJFPLGM_TypeInfo->static_fields->IIMNAMKPOPF,
                   Method_Google_Protobuf_Collections_RepeatedField<string>_WriteTo__);
        __this_00 = (__this->fields).FDELJPKNGKF;
        if (__this_00 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,JBGJLELBMJF,
                     (Google_Protobuf_FieldCodec_T__o *)
                     KAMBBJFPLGM_TypeInfo->static_fields->ADEIEGJOBLG,
                     Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_WriteTo__);
          if ((__this->fields).LIGHEGAMGHD != (KEGDLHPEJBG_o *)0x0) {
            if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
            Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x6a,(MethodInfo *)0x0);
            Google_Protobuf_CodedOutputStream__WriteMessage
                      (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LIGHEGAMGHD,
                       (MethodInfo *)0x0);
          }
          __this_01 = (__this->fields).CKFPENBPNML;
          if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
            Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
            return;
          }
          return;
        }
      }
    }
  }
LAB_0321bbf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x311A568]
// KAMBBJFPLGM$$FFHIHGCDGAK @ RVA 0x311A568

Google_Protobuf_Reflection_MessageDescriptor_o * KAMBBJFPLGM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045665eb & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 0321a598 to 0331a59f has its CatchHandler @ 0321a5ac */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
                    /* try { // try from 0321a5a0 to 0331a5cf has its CatchHandler @ 0321a444 */
    DAT_045665eb = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a540 with catch @ 0321a5a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a52c with catch @ 0321a5a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a598 with catch @ 0321a5ac
                        */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a518 with catch @ 0321a5b0
                        */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a500 with catch @ 0321a5b4
                        */
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 0321a5d0 to 0331a5d3 has its CatchHandler @ 0321a5f4 */
    DAT_04565d86 = '\x01';
  }
                    /* try { // try from 0321a5d4 to 0331a5fb has its CatchHandler @ 0321a444 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* catch() { ... } // from try @ 0321a5d0 with catch @ 0321a5f4 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0321a5fc to 0331a603 has its CatchHandler @ 0321a618 */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
                    /* try { // try from 0321a604 to 0331a60f has its CatchHandler @ 0321a444 */
  uVar6 = (ulong)uVar1;
                    /* try { // try from 0321a610 to 0331a617 has its CatchHandler @ 0321a618 */
  if (uVar6 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321a5fc with catch @ 0321a618
                       catch(type#2 @ 00000000) { ... } // from try @ 0321a610 with catch @ 0321a618
                        */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0321a650;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0321a650:
                    /* WARNING: Could not recover jumptable at 0x0321a664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x1c,pVVar2->method);
  return pGVar3;
}


// ===== public NGOFOPOGBMJ OIPOEHHCBCP()  [RVA 0x311BBF4]
// KAMBBJFPLGM$$OIPOEHHCBCP @ RVA 0x311BBF4

NGOFOPOGBMJ_o * KAMBBJFPLGM__OIPOEHHCBCP(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  return (__this->fields).CBEJJIHKEGF;
}


// ===== public void .ctor()  [RVA 0x311B79C]
// KAMBBJFPLGM$$.ctor @ RVA 0x311B79C

void KAMBBJFPLGM___ctor(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar2;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_string__o **ppGVar3;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o **ppGVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_045665ec & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<string>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_TypeInfo);
    DAT_045665ec = 1;
    method = extraout_x1;
  }
  pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
           thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo,method
                             );
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar2 = &(__this->fields).LEJBLHJFJHP;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
           thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar2 = &(__this->fields).AKFPFIHIHOC;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  __this_00 = (Google_Protobuf_Collections_RepeatedField_string__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<string>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<string>__ctor__);
  ppGVar3 = &(__this->fields).HBIHNBPPEEO;
  *ppGVar3 = __this_00;
  thunk_FUN_01c20e04(ppGVar3,__this_00);
  __this_01 = (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
             Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>__ctor__);
  ppGVar4 = &(__this->fields).FDELJPKNGKF;
  *ppGVar4 = __this_01;
  thunk_FUN_01c20e04(ppGVar4,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void BHLEJMIAPEE(long CJNHFNHJHPE)  [RVA 0x311BBFC]
// KAMBBJFPLGM$$BHLEJMIAPEE @ RVA 0x311BBFC

void KAMBBJFPLGM__BHLEJMIAPEE(KAMBBJFPLGM_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FLFGAIPCCJK = CJNHFNHJHPE;
  return;
}


// ===== public int CalculateSize()  [RVA 0x311BC04]
// KAMBBJFPLGM$$CalculateSize @ RVA 0x311BC04

int32_t KAMBBJFPLGM__CalculateSize(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_01;
  EOLFEKNCPLM_o *value;
  NGOFOPOGBMJ_o *value_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar4;
  long lVar5;
  BPBGAAHBFKH_o *value_01;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_02;
  KEGDLHPEJBG_o *value_02;
  int iVar6;
  
  if ((DAT_045665ed & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_CalculateSize__);
    DAT_045665ed = 1;
    method = extraout_x1;
  }
  value = (__this->fields).FLAFELDNABC;
  if (value == (EOLFEKNCPLM_o *)0x0) {
    iVar6 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar6 = iVar2 + 1;
  }
  value_00 = (__this->fields).CBEJJIHKEGF;
  if (value_00 != (NGOFOPOGBMJ_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar6 = iVar6 + iVar2 + 1;
  }
  iVar1 = (__this->fields).EMOLIBOCKJK;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar6 = iVar6 + iVar2 + 1;
  }
  pGVar4 = (__this->fields).LEJBLHJFJHP;
  if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                       (Google_Protobuf_FieldCodec_T__o *)
                       KAMBBJFPLGM_TypeInfo->static_fields->JJNDCMILECE,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                      );
    iVar1 = (__this->fields).IJBBNNHJPLF;
    iVar6 = iVar2 + iVar6;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar6 = iVar6 + iVar2 + 1;
    }
    lVar5 = (__this->fields).GFIFLFPODAE;
    if (lVar5 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar5,(MethodInfo *)0x0);
      iVar6 = iVar6 + iVar2 + 1;
    }
    lVar5 = (__this->fields).FLFGAIPCCJK;
    if (lVar5 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar5,(MethodInfo *)0x0);
      iVar6 = iVar6 + iVar2 + 1;
    }
    pGVar4 = (__this->fields).AKFPFIHIHOC;
    if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                         (Google_Protobuf_FieldCodec_T__o *)
                         KAMBBJFPLGM_TypeInfo->static_fields->ACFGKMKAECB,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                        );
      iVar1 = (__this->fields).GNKNDHJHFOC;
      iVar6 = iVar2 + iVar6;
      if (iVar1 != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
        iVar6 = iVar6 + iVar2 + 1;
      }
      value_01 = (__this->fields).IGPJEDLPAGI;
      if (value_01 != (BPBGAAHBFKH_o *)0x0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                          ((Google_Protobuf_IMessage_o *)value_01,(MethodInfo *)0x0);
        iVar6 = iVar6 + iVar2 + 1;
      }
      __this_02 = (__this->fields).HBIHNBPPEEO;
      if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_02 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
        iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                           (Google_Protobuf_FieldCodec_T__o *)
                           KAMBBJFPLGM_TypeInfo->static_fields->IIMNAMKPOPF,
                           Method_Google_Protobuf_Collections_RepeatedField<string>_CalculateSize__)
        ;
        __this_01 = (__this->fields).FDELJPKNGKF;
        if (__this_01 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
          iVar3 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                             (Google_Protobuf_FieldCodec_T__o *)
                             KAMBBJFPLGM_TypeInfo->static_fields->ADEIEGJOBLG,
                             Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_CalculateSize__
                            );
          value_02 = (__this->fields).LIGHEGAMGHD;
          iVar6 = iVar2 + iVar6 + iVar3;
          if (value_02 != (KEGDLHPEJBG_o *)0x0) {
            if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                              ((Google_Protobuf_IMessage_o *)value_02,(MethodInfo *)0x0);
            iVar6 = iVar6 + iVar2 + 1;
          }
          __this_00 = (__this->fields).CKFPENBPNML;
          if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
            iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
            iVar6 = iVar2 + iVar6;
          }
          return iVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

