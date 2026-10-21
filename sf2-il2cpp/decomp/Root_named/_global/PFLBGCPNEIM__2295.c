// TypeDefIndex 2295
// Namespace: 
// public class PFLBGCPNEIM
// Fields:

// ===== public static QuestAction EOHMFJFFFIN(string HCBBECJJIKK, string HBDNGIDONHG, FPPKHNNABAD LFHPEEKGNDO, XmlNode AHDGNOJPPIB)  [RVA 0x3308E58]
// PFLBGCPNEIM$$EOHMFJFFFIN @ RVA 0x3308E58

QuestAction_o *
PFLBGCPNEIM__EOHMFJFFFIN
          (System_String_o *HCBBECJJIKK,System_String_o *HBDNGIDONHG,FPPKHNNABAD_o *LFHPEEKGNDO,
          System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  QuestAction_o *__this;
  System_Type_o *BKFOLMBMFNP;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  FPPKHNNABAD_o *method_01;
  int32_t local_34;
  
  method_01 = LFHPEEKGNDO;
  if ((DAT_04567777 & 1) == 0) {
    FUN_01bab630(&PFLBGCPNEIM_var);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_4850/*"Create: can't find QuestActionType by name '"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    DAT_04567777 = 1;
  }
  local_34 = 0;
  bVar1 = PFLBGCPNEIM__HGMMJIIEOLF(HCBBECJJIKK,&local_34,(MethodInfo *)method_01);
  handle = PFLBGCPNEIM_var;
  if (bVar1) {
    __this = PFLBGCPNEIM__EOHMFJFFFIN(local_34,HBDNGIDONHG,LFHPEEKGNDO,AHDGNOJPPIB,method);
  }
  else {
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    BKFOLMBMFNP = System_Type__GetTypeFromHandle
                            ((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    JLNPKGGFFDD = System_String__Concat
                            (StringLiteral_4850/*"Create: can't find QuestActionType by name '"*/,HCBBECJJIKK,StringLiteral_853/*"'!"*/,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM(BKFOLMBMFNP,JLNPKGGFFDD,(MethodInfo *)0x0);
    __this = PFLBGCPNEIM__OABMGIDBMKF(method_00);
    if (__this == (QuestAction_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    QuestAction__GIMAJOGGBHM(__this,HBDNGIDONHG,LFHPEEKGNDO,AHDGNOJPPIB,(MethodInfo *)0x0);
  }
  return __this;
}


// ===== public void .ctor()  [RVA 0x33090C4]
// PFLBGCPNEIM$$.ctor @ RVA 0x33090C4

void PFLBGCPNEIM___ctor(PFLBGCPNEIM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static QuestAction EOHMFJFFFIN(AJEILKOPHHM ACCIHBHMFPN, string HBDNGIDONHG, FPPKHNNABAD LFHPEEKGNDO, XmlNode AHDGNOJPPIB)  [RVA 0x3309064]
// PFLBGCPNEIM$$EOHMFJFFFIN @ RVA 0x3309064

QuestAction_o *
PFLBGCPNEIM__EOHMFJFFFIN
          (int32_t ACCIHBHMFPN,System_String_o *HBDNGIDONHG,FPPKHNNABAD_o *LFHPEEKGNDO,
          System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  QuestAction_o *__this;
  
  __this = PFLBGCPNEIM__EOHMFJFFFIN(ACCIHBHMFPN,(MethodInfo *)HBDNGIDONHG);
  if ((__this == (QuestAction_o *)0x0) &&
     (__this = PFLBGCPNEIM__OABMGIDBMKF((MethodInfo *)0x0), __this == (QuestAction_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  QuestAction__GIMAJOGGBHM(__this,HBDNGIDONHG,LFHPEEKGNDO,AHDGNOJPPIB,(MethodInfo *)0x0);
  return __this;
}


// ===== private static QuestAction OABMGIDBMKF()  [RVA 0x3309010]
// PFLBGCPNEIM$$OABMGIDBMKF @ RVA 0x3309010

QuestAction_o * PFLBGCPNEIM__OABMGIDBMKF(MethodInfo *method)

{
  QuestAction_o *__this;
  
  if ((DAT_04567778 & 1) == 0) {
    FUN_01bab630(&QuestAction_TypeInfo);
    DAT_04567778 = 1;
  }
  __this = (QuestAction_o *)thunk_FUN_01bda818(QuestAction_TypeInfo);
  QuestAction___ctor(__this,(MethodInfo *)0x0);
  return __this;
}


// ===== private static bool HGMMJIIEOLF(string HCBBECJJIKK, out AJEILKOPHHM ACCIHBHMFPN)  [RVA 0x3308F94]
// PFLBGCPNEIM$$HGMMJIIEOLF @ RVA 0x3308F94

bool PFLBGCPNEIM__HGMMJIIEOLF(System_String_o *HCBBECJJIKK,int32_t *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567779 & 1) == 0) {
    FUN_01bab630(&Method_System_Enum_TryParse<AJEILKOPHHM>__);
    FUN_01bab630(&System_Enum_TypeInfo);
    DAT_04567779 = 1;
  }
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_Enum__TryParse<Int32Enum>
                    (HCBBECJJIKK,ACCIHBHMFPN,Method_System_Enum_TryParse<AJEILKOPHHM>__);
  return bVar1;
}


// ===== private static QuestAction EOHMFJFFFIN(AJEILKOPHHM ACCIHBHMFPN)  [RVA 0x33090CC]
// PFLBGCPNEIM$$EOHMFJFFFIN @ RVA 0x33090CC

QuestAction_o * PFLBGCPNEIM__EOHMFJFFFIN(int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool MJDICHGKPGE;
  MethodInfo *extraout_x1;
  CJEKKMKJEAC_c **ppCVar1;
  PFOMHOLCODE_o *__this;
  
  if ((DAT_0456777a & 1) == 0) {
    FUN_01bab630(&AABOAOAKHJG_TypeInfo);
    FUN_01bab630(&AEFLBOOACFE_TypeInfo);
    FUN_01bab630(&AEHNMLBLOKM_TypeInfo);
    FUN_01bab630(&AEKKBHAJLKG_TypeInfo);
    FUN_01bab630(&AHIBJNBMCEH_TypeInfo);
    FUN_01bab630(&AMLGCIBIOLF_TypeInfo);
    FUN_01bab630(&APOIPFMPGEP_TypeInfo);
    FUN_01bab630(&BAFPOJFOFOC_TypeInfo);
    FUN_01bab630(&BAIOKFJKEGH_TypeInfo);
    FUN_01bab630(&BBJEEHDMNGJ_TypeInfo);
    FUN_01bab630(&BEBGDJMGAAH_TypeInfo);
    FUN_01bab630(&BEFJPGCDBEE_TypeInfo);
    FUN_01bab630(&BEIKJHAKEJD_TypeInfo);
    FUN_01bab630(&BIGKABINLII_TypeInfo);
    FUN_01bab630(&BKMLEIEGODD_TypeInfo);
    FUN_01bab630(&BNCEMOJHFEP_TypeInfo);
    FUN_01bab630(&CAIJHMHNAFD_TypeInfo);
    FUN_01bab630(&CDALLFPPGAM_TypeInfo);
    FUN_01bab630(&CDBANCEFAAK_TypeInfo);
    FUN_01bab630(&CEGBGLPICEM_TypeInfo);
    FUN_01bab630(&CJEKKMKJEAC_TypeInfo);
    FUN_01bab630(&CJGFJKLFPEP_TypeInfo);
    FUN_01bab630(&QuestActionTapjoyActionCall_TypeInfo);
    FUN_01bab630(&CLDHEOAJIKF_TypeInfo);
    FUN_01bab630(&COFBEOFIPDC_TypeInfo);
    FUN_01bab630(&CPJDJFPABGI_TypeInfo);
    FUN_01bab630(&CPNAEAEFLBL_TypeInfo);
    FUN_01bab630(&DCEFHLHFCFL_TypeInfo);
    FUN_01bab630(&DDHELENPHIO_TypeInfo);
    FUN_01bab630(&DDOFLCBMJNB_TypeInfo);
    FUN_01bab630(&DEMKOLGFNKK_TypeInfo);
    FUN_01bab630(&DEOCJNLGODA_TypeInfo);
    FUN_01bab630(&DICFMPEJCCB_TypeInfo);
    FUN_01bab630(&ECAJEFMDDMA_TypeInfo);
    FUN_01bab630(&EJALJLHMDHM_TypeInfo);
    FUN_01bab630(&ELMGFLNCPAB_TypeInfo);
    FUN_01bab630(&FAMICAJFCDH_TypeInfo);
    FUN_01bab630(&FCIFBMHDLFG_TypeInfo);
    FUN_01bab630(&FFFAKMHNGKI_TypeInfo);
    FUN_01bab630(&FFKCANJCNJM_TypeInfo);
    FUN_01bab630(&FFKDCDODJDP_TypeInfo);
    FUN_01bab630(&QuestActionRaidFightScrollToNextCharge_TypeInfo);
    FUN_01bab630(&FGFEKCDKLKC_TypeInfo);
    FUN_01bab630(&FHGJKGBAMBP_TypeInfo);
    FUN_01bab630(&FINCDDIHLGL_TypeInfo);
    FUN_01bab630(&FJFMOEDIMLC_TypeInfo);
    FUN_01bab630(&FJGADJEEFPF_TypeInfo);
    FUN_01bab630(&FKMBNOGKHBO_TypeInfo);
    FUN_01bab630(&FMKJPMHJENJ_TypeInfo);
    FUN_01bab630(&FPEDBNDDLIM_TypeInfo);
    FUN_01bab630(&QuestActionBlockDialogTouches_TypeInfo);
    FUN_01bab630(&GDGKFONEPEI_TypeInfo);
    FUN_01bab630(&GDLJOHLHGIP_TypeInfo);
    FUN_01bab630(&GELGBIEICHA_TypeInfo);
    FUN_01bab630(&GHOCIIJPJPP_TypeInfo);
    FUN_01bab630(&GJFEBIOGCEH_TypeInfo);
    FUN_01bab630(&GKLDDAPBAGG_TypeInfo);
    FUN_01bab630(&GMGNDFKPHHM_TypeInfo);
    FUN_01bab630(&GOHEJPCANLI_TypeInfo);
    FUN_01bab630(&GPKCJIOFDBN_TypeInfo);
    FUN_01bab630(&HAACHEFPDEN_TypeInfo);
    FUN_01bab630(&HCOBJLNDDLF_TypeInfo);
    FUN_01bab630(&HDKIINEJFCF_TypeInfo);
    FUN_01bab630(&HEINPCIAMNL_TypeInfo);
    FUN_01bab630(&HIDBJLDNKNB_TypeInfo);
    FUN_01bab630(&HKBBPPENHEI_TypeInfo);
    FUN_01bab630(&HKBKCBIKBNO_TypeInfo);
    FUN_01bab630(&QuestActionVariable_TypeInfo);
    FUN_01bab630(&HMPHKHINKGB_TypeInfo);
    FUN_01bab630(&HNCJMEBNIMP_TypeInfo);
    FUN_01bab630(&QuestActionDeleteSave_TypeInfo);
    FUN_01bab630(&HOKPBBJFFKF_TypeInfo);
    FUN_01bab630(&IBKEPOJPLBG_TypeInfo);
    FUN_01bab630(&IBNHAGICAJF_TypeInfo);
    FUN_01bab630(&IELOCGKAGEO_TypeInfo);
    FUN_01bab630(&IFEDMCHPFIM_TypeInfo);
    FUN_01bab630(&IGFGOIGJEFE_TypeInfo);
    FUN_01bab630(&IGIKNPKIFBM_TypeInfo);
    FUN_01bab630(&IHDMJONELHA_TypeInfo);
    FUN_01bab630(&QuestActionAttachFile_TypeInfo);
    FUN_01bab630(&IJDEPDNLOGC_TypeInfo);
    FUN_01bab630(&IMJHLANAMIK_TypeInfo);
    FUN_01bab630(&IOBFFNAMHPO_TypeInfo);
    FUN_01bab630(&IOCCJDEBNHF_TypeInfo);
    FUN_01bab630(&JBADJCFCDMD_TypeInfo);
    FUN_01bab630(&JBBABEFDNOL_TypeInfo);
    FUN_01bab630(&JBMMBPOLLKD_TypeInfo);
    FUN_01bab630(&JCJCFBLNNBN_TypeInfo);
    FUN_01bab630(&JDJOEMLOACI_TypeInfo);
    FUN_01bab630(&JECFCDCELIF_TypeInfo);
    FUN_01bab630(&JHJLHLANACF_TypeInfo);
    FUN_01bab630(&JIALPJBDBEE_TypeInfo);
    FUN_01bab630(&JIGBNLJHKJO_TypeInfo);
    FUN_01bab630(&QuestActionRunCallback_TypeInfo);
    FUN_01bab630(&JLBGMAOAPIK_TypeInfo);
    FUN_01bab630(&JLHAELMHHJL_TypeInfo);
    FUN_01bab630(&KBIHIFKKALH_TypeInfo);
    FUN_01bab630(&KFDKHMMJMOM_TypeInfo);
    FUN_01bab630(&KFOPKHPGAAK_TypeInfo);
    FUN_01bab630(&KHIBJFLBJNH_TypeInfo);
    FUN_01bab630(&KILNKIOAMLO_TypeInfo);
    FUN_01bab630(&KIPMGLIDBHC_TypeInfo);
    FUN_01bab630(&KLFOGICEHJC_TypeInfo);
    FUN_01bab630(&KPAMLIAJBOE_TypeInfo);
    FUN_01bab630(&LFDIILCDADL_TypeInfo);
    FUN_01bab630(&LGGIHLMJLBB_TypeInfo);
    FUN_01bab630(&LJAPFDJNGGA_TypeInfo);
    FUN_01bab630(&LJFLEGDMCMI_TypeInfo);
    FUN_01bab630(&LKHLBHNHPNJ_TypeInfo);
    FUN_01bab630(&LMICCGAMENM_TypeInfo);
    FUN_01bab630(&MADFGOOGMDP_TypeInfo);
    FUN_01bab630(&MBPDLNAIMDJ_TypeInfo);
    FUN_01bab630(&MFEIPBOPIFF_TypeInfo);
    FUN_01bab630(&MGAKCABPDII_TypeInfo);
    FUN_01bab630(&MGJNNCKDJCP_TypeInfo);
    FUN_01bab630(&QuestActionShowSetTutorial_TypeInfo);
    FUN_01bab630(&MLLHFIDIHPA_TypeInfo);
    FUN_01bab630(&QuestActionRestartApplication_TypeInfo);
    FUN_01bab630(&MOIBIDOJAJJ_TypeInfo);
    FUN_01bab630(&QuestActionRaidIndicateRaidBtn_TypeInfo);
    FUN_01bab630(&NCIDPNGDKEC_TypeInfo);
    FUN_01bab630(&NENOHHACMFD_TypeInfo);
    FUN_01bab630(&NGCEHDLJOMI_TypeInfo);
    FUN_01bab630(&NHIDABDELLO_TypeInfo);
    FUN_01bab630(&NJJFMGMKALF_TypeInfo);
    FUN_01bab630(&NKILLHEPOMM_TypeInfo);
    FUN_01bab630(&NLAJHFAOEDB_TypeInfo);
    FUN_01bab630(&NLBIMFJEHGC_TypeInfo);
    FUN_01bab630(&NLHMCOFIBKF_TypeInfo);
    FUN_01bab630(&QuestActionUnlockCharacter_TypeInfo);
    FUN_01bab630(&NOIIFNBIAHC_TypeInfo);
    FUN_01bab630(&NOMBKAHPOHM_TypeInfo);
    FUN_01bab630(&NPBOPPPBNND_TypeInfo);
    FUN_01bab630(&OAFGMIGFHAD_TypeInfo);
    FUN_01bab630(&OEBAPDOPOBH_TypeInfo);
    FUN_01bab630(&OHFEMEPFLLI_TypeInfo);
    FUN_01bab630(&OICCPAIHLMK_TypeInfo);
    FUN_01bab630(&QuestActionDownloadPack_TypeInfo);
    FUN_01bab630(&OIFELEICIFM_TypeInfo);
    FUN_01bab630(&QuestActionSetEnergy_TypeInfo);
    FUN_01bab630(&OKMFGNJAIMJ_TypeInfo);
    FUN_01bab630(&OLEEAAIDPIF_TypeInfo);
    FUN_01bab630(&OMIMKLCLLBI_TypeInfo);
    FUN_01bab630(&PAOMOCCOFDE_TypeInfo);
    FUN_01bab630(&PBBLIKILADK_TypeInfo);
    FUN_01bab630(&PFOMHOLCODE_TypeInfo);
    FUN_01bab630(&PHGCJKBCONG_TypeInfo);
    FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
    FUN_01bab630(&PJLHCJDBPLB_TypeInfo);
    FUN_01bab630(&PMAECPJOCHA_TypeInfo);
    DAT_0456777a = 1;
    method = extraout_x1;
  }
  __this = (PFOMHOLCODE_o *)0x0;
  switch(ACCIHBHMFPN) {
  case 0:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(PFOMHOLCODE_TypeInfo,method);
    PFOMHOLCODE___ctor(__this,(MethodInfo *)0x0);
    break;
  case 1:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(LGGIHLMJLBB_TypeInfo,method);
    LGGIHLMJLBB___ctor((LGGIHLMJLBB_o *)__this,(MethodInfo *)0x0);
    break;
  case 2:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(CPJDJFPABGI_TypeInfo,method);
    CPJDJFPABGI___ctor((CPJDJFPABGI_o *)__this,(MethodInfo *)0x0);
    break;
  case 3:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(ECAJEFMDDMA_TypeInfo,method);
    MJDICHGKPGE = true;
    goto LAB_034098f0;
  case 4:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(ECAJEFMDDMA_TypeInfo,method);
    MJDICHGKPGE = false;
LAB_034098f0:
    ECAJEFMDDMA___ctor((ECAJEFMDDMA_o *)__this,MJDICHGKPGE,(MethodInfo *)0x0);
    break;
  case 5:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IBNHAGICAJF_TypeInfo,method);
    IBNHAGICAJF___ctor((IBNHAGICAJF_o *)__this,(MethodInfo *)0x0);
    break;
  case 6:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionVariable_TypeInfo,method);
    QuestActionVariable___ctor((QuestActionVariable_o *)__this,(MethodInfo *)0x0);
    break;
  case 7:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FFKCANJCNJM_TypeInfo,method);
    FFKCANJCNJM___ctor((FFKCANJCNJM_o *)__this,(MethodInfo *)0x0);
    break;
  case 8:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HKBBPPENHEI_TypeInfo,method);
    HKBBPPENHEI___ctor((HKBBPPENHEI_o *)__this,(MethodInfo *)0x0);
    break;
  case 9:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionDownloadPack_TypeInfo,method);
    QuestActionDownloadPack___ctor((QuestActionDownloadPack_o *)__this,(MethodInfo *)0x0);
    break;
  case 10:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(OEBAPDOPOBH_TypeInfo,method);
    OEBAPDOPOBH___ctor((OEBAPDOPOBH_o *)__this,(MethodInfo *)0x0);
    break;
  case 0xb:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(LKHLBHNHPNJ_TypeInfo,method);
    LKHLBHNHPNJ___ctor((LKHLBHNHPNJ_o *)__this,(MethodInfo *)0x0);
    break;
  case 0xc:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(CPNAEAEFLBL_TypeInfo,method);
    CPNAEAEFLBL___ctor((CPNAEAEFLBL_o *)__this,(MethodInfo *)0x0);
    break;
  case 0xd:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(GMGNDFKPHHM_TypeInfo,method);
    GMGNDFKPHHM___ctor((GMGNDFKPHHM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0xe:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(AMLGCIBIOLF_TypeInfo,method);
    AMLGCIBIOLF___ctor((AMLGCIBIOLF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0xf:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(MLLHFIDIHPA_TypeInfo,method);
    MLLHFIDIHPA___ctor((MLLHFIDIHPA_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x10:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(CAIJHMHNAFD_TypeInfo,method);
    CAIJHMHNAFD___ctor((CAIJHMHNAFD_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x11:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(KPAMLIAJBOE_TypeInfo,method);
    KPAMLIAJBOE___ctor((KPAMLIAJBOE_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x12:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(PHLKGOCKIGP_TypeInfo,method);
    PHLKGOCKIGP___ctor((PHLKGOCKIGP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x13:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JBMMBPOLLKD_TypeInfo,method);
    JBMMBPOLLKD___ctor((JBMMBPOLLKD_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x14:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FAMICAJFCDH_TypeInfo,method);
    FAMICAJFCDH___ctor((FAMICAJFCDH_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x15:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(OICCPAIHLMK_TypeInfo,method);
    OICCPAIHLMK___ctor((OICCPAIHLMK_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x16:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(CEGBGLPICEM_TypeInfo,method);
    CEGBGLPICEM___ctor((CEGBGLPICEM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x17:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(BAIOKFJKEGH_TypeInfo,method);
    BAIOKFJKEGH___ctor((BAIOKFJKEGH_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x18:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HNCJMEBNIMP_TypeInfo,method);
    HNCJMEBNIMP___ctor((HNCJMEBNIMP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x19:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HDKIINEJFCF_TypeInfo,method);
    HDKIINEJFCF___ctor((HDKIINEJFCF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x1a:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(LFDIILCDADL_TypeInfo,method);
    LFDIILCDADL___ctor((LFDIILCDADL_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x1b:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NLHMCOFIBKF_TypeInfo,method);
    NLHMCOFIBKF___ctor((NLHMCOFIBKF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x1c:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HOKPBBJFFKF_TypeInfo,method);
    HOKPBBJFFKF___ctor((HOKPBBJFFKF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x1d:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(KFOPKHPGAAK_TypeInfo,method);
    KFOPKHPGAAK___ctor((KFOPKHPGAAK_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x1e:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FFKDCDODJDP_TypeInfo,method);
    FFKDCDODJDP___ctor((FFKDCDODJDP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x1f:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IBKEPOJPLBG_TypeInfo,method);
    IBKEPOJPLBG___ctor((IBKEPOJPLBG_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x20:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionAttachFile_TypeInfo,method);
    QuestActionAttachFile___ctor((QuestActionAttachFile_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x21:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(LMICCGAMENM_TypeInfo,method);
    LMICCGAMENM___ctor((LMICCGAMENM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x22:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NOMBKAHPOHM_TypeInfo,method);
    NOMBKAHPOHM___ctor((NOMBKAHPOHM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x23:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JCJCFBLNNBN_TypeInfo,method);
    JCJCFBLNNBN___ctor((JCJCFBLNNBN_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x24:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HEINPCIAMNL_TypeInfo,method);
    HEINPCIAMNL___ctor((HEINPCIAMNL_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x25:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionSetEnergy_TypeInfo,method);
    QuestActionSetEnergy___ctor((QuestActionSetEnergy_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x26:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(GELGBIEICHA_TypeInfo,method);
    GELGBIEICHA___ctor((GELGBIEICHA_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x27:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(BEIKJHAKEJD_TypeInfo,method);
    BEIKJHAKEJD___ctor((BEIKJHAKEJD_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x28:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FGFEKCDKLKC_TypeInfo,method);
    FGFEKCDKLKC___ctor((FGFEKCDKLKC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x29:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(DDHELENPHIO_TypeInfo,method);
    DDHELENPHIO___ctor((DDHELENPHIO_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x2a:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FJGADJEEFPF_TypeInfo,method);
    FJGADJEEFPF___ctor((FJGADJEEFPF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x2b:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HIDBJLDNKNB_TypeInfo,method);
    HIDBJLDNKNB___ctor((HIDBJLDNKNB_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x2c:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FCIFBMHDLFG_TypeInfo,method);
    FCIFBMHDLFG___ctor((FCIFBMHDLFG_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x2d:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FPEDBNDDLIM_TypeInfo,method);
    FPEDBNDDLIM___ctor((FPEDBNDDLIM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x2e:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(KBIHIFKKALH_TypeInfo,method);
    KBIHIFKKALH___ctor((KBIHIFKKALH_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x2f:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(PJLHCJDBPLB_TypeInfo,method);
    PJLHCJDBPLB___ctor((PJLHCJDBPLB_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x30:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(EJALJLHMDHM_TypeInfo,method);
    EJALJLHMDHM___ctor((EJALJLHMDHM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x31:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(MBPDLNAIMDJ_TypeInfo,method);
    MBPDLNAIMDJ___ctor((MBPDLNAIMDJ_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x32:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(GDGKFONEPEI_TypeInfo,method);
    GDGKFONEPEI___ctor((GDGKFONEPEI_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x33:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FKMBNOGKHBO_TypeInfo,method);
    FKMBNOGKHBO___ctor((FKMBNOGKHBO_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x34:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(LJFLEGDMCMI_TypeInfo,method);
    LJFLEGDMCMI___ctor((LJFLEGDMCMI_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x35:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JLBGMAOAPIK_TypeInfo,method);
    JLBGMAOAPIK___ctor((JLBGMAOAPIK_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x36:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(COFBEOFIPDC_TypeInfo,method);
    COFBEOFIPDC___ctor((COFBEOFIPDC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x37:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NPBOPPPBNND_TypeInfo,method);
    NPBOPPPBNND___ctor((NPBOPPPBNND_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x38:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(BNCEMOJHFEP_TypeInfo,method);
    BNCEMOJHFEP___ctor((BNCEMOJHFEP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x39:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionTapjoyActionCall_TypeInfo,method);
    QuestActionTapjoyActionCall___ctor((QuestActionTapjoyActionCall_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x3a:
  case 0x3b:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(CJGFJKLFPEP_TypeInfo,method);
    CJGFJKLFPEP___ctor((CJGFJKLFPEP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x3c:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FHGJKGBAMBP_TypeInfo,method);
    FHGJKGBAMBP___ctor((FHGJKGBAMBP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x3d:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IGIKNPKIFBM_TypeInfo,method);
    IGIKNPKIFBM___ctor((IGIKNPKIFBM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x3e:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JECFCDCELIF_TypeInfo,method);
    JECFCDCELIF___ctor((JECFCDCELIF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x3f:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(DDOFLCBMJNB_TypeInfo,method);
    DDOFLCBMJNB___ctor((DDOFLCBMJNB_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x40:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(OMIMKLCLLBI_TypeInfo,method);
    OMIMKLCLLBI___ctor((OMIMKLCLLBI_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x41:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionRestartApplication_TypeInfo,method);
    QuestActionRestartApplication___ctor((QuestActionRestartApplication_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x42:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(DICFMPEJCCB_TypeInfo,method);
    DICFMPEJCCB___ctor((DICFMPEJCCB_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x43:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IGFGOIGJEFE_TypeInfo,method);
    IGFGOIGJEFE___ctor((IGFGOIGJEFE_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x44:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(OHFEMEPFLLI_TypeInfo,method);
    OHFEMEPFLLI___ctor((OHFEMEPFLLI_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x45:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NKILLHEPOMM_TypeInfo,method);
    NKILLHEPOMM___ctor((NKILLHEPOMM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x46:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HKBKCBIKBNO_TypeInfo,method);
    HKBKCBIKBNO___ctor((HKBKCBIKBNO_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x47:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(OLEEAAIDPIF_TypeInfo,method);
    OLEEAAIDPIF___ctor((OLEEAAIDPIF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x48:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(MGJNNCKDJCP_TypeInfo,method);
    MGJNNCKDJCP___ctor((MGJNNCKDJCP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x49:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(DEOCJNLGODA_TypeInfo,method);
    DEOCJNLGODA___ctor((DEOCJNLGODA_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x4a:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(BAFPOJFOFOC_TypeInfo,method);
    BAFPOJFOFOC___ctor((BAFPOJFOFOC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x4b:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(GDLJOHLHGIP_TypeInfo,method);
    GDLJOHLHGIP___ctor((GDLJOHLHGIP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x4c:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(CDALLFPPGAM_TypeInfo,method);
    CDALLFPPGAM___ctor((CDALLFPPGAM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x4d:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IJDEPDNLOGC_TypeInfo,method);
    IJDEPDNLOGC___ctor((IJDEPDNLOGC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x4e:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NGCEHDLJOMI_TypeInfo,method);
    NGCEHDLJOMI___ctor((NGCEHDLJOMI_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x4f:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(GHOCIIJPJPP_TypeInfo,method);
    GHOCIIJPJPP___ctor((GHOCIIJPJPP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x50:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(GJFEBIOGCEH_TypeInfo,method);
    GJFEBIOGCEH___ctor((GJFEBIOGCEH_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x51:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(ELMGFLNCPAB_TypeInfo,method);
    ELMGFLNCPAB___ctor((ELMGFLNCPAB_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x52:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(BIGKABINLII_TypeInfo,method);
    BIGKABINLII___ctor((BIGKABINLII_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x53:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JBADJCFCDMD_TypeInfo,method);
    JBADJCFCDMD___ctor((JBADJCFCDMD_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x54:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(AEHNMLBLOKM_TypeInfo,method);
    AEHNMLBLOKM___ctor((AEHNMLBLOKM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x55:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(PHGCJKBCONG_TypeInfo,method);
    PHGCJKBCONG___ctor((PHGCJKBCONG_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x56:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(LJAPFDJNGGA_TypeInfo,method);
    LJAPFDJNGGA___ctor((LJAPFDJNGGA_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x57:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NENOHHACMFD_TypeInfo,method);
    NENOHHACMFD___ctor((NENOHHACMFD_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x58:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(BKMLEIEGODD_TypeInfo,method);
    BKMLEIEGODD___ctor((BKMLEIEGODD_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x59:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(OIFELEICIFM_TypeInfo,method);
    OIFELEICIFM___ctor((OIFELEICIFM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x5a:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionShowSetTutorial_TypeInfo,method);
    QuestActionShowSetTutorial___ctor((QuestActionShowSetTutorial_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x5b:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(DCEFHLHFCFL_TypeInfo,method);
    DCEFHLHFCFL___ctor((DCEFHLHFCFL_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x5c:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JIALPJBDBEE_TypeInfo,method);
    JIALPJBDBEE___ctor((JIALPJBDBEE_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x5d:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(BEFJPGCDBEE_TypeInfo,method);
    BEFJPGCDBEE___ctor((BEFJPGCDBEE_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x5e:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(AABOAOAKHJG_TypeInfo,method);
    AABOAOAKHJG___ctor((AABOAOAKHJG_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x5f:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JHJLHLANACF_TypeInfo,method);
    JHJLHLANACF___ctor((JHJLHLANACF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x60:
    ppCVar1 = (CJEKKMKJEAC_c **)&IOCCJDEBNHF_TypeInfo;
    goto LAB_0340a990;
  case 0x61:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FFFAKMHNGKI_TypeInfo,method);
    FFFAKMHNGKI___ctor((FFFAKMHNGKI_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x62:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(BBJEEHDMNGJ_TypeInfo,method);
    BBJEEHDMNGJ___ctor((BBJEEHDMNGJ_o *)__this,(MethodInfo *)0x0);
    break;
  case 99:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(MFEIPBOPIFF_TypeInfo,method);
    MFEIPBOPIFF___ctor((MFEIPBOPIFF_o *)__this,(MethodInfo *)0x0);
    break;
  case 100:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(PAOMOCCOFDE_TypeInfo,method);
    PAOMOCCOFDE___ctor((PAOMOCCOFDE_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x65:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(MADFGOOGMDP_TypeInfo,method);
    MADFGOOGMDP___ctor((MADFGOOGMDP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x66:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(OAFGMIGFHAD_TypeInfo,method);
    OAFGMIGFHAD___ctor((OAFGMIGFHAD_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x67:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(AEFLBOOACFE_TypeInfo,method);
    AEFLBOOACFE___ctor((AEFLBOOACFE_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x68:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionDeleteSave_TypeInfo,method);
    QuestActionDeleteSave___ctor((QuestActionDeleteSave_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x69:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionUnlockCharacter_TypeInfo,method);
    QuestActionUnlockCharacter___ctor((QuestActionUnlockCharacter_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x6a:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionBlockDialogTouches_TypeInfo,method);
    QuestActionBlockDialogTouches___ctor((QuestActionBlockDialogTouches_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x6b:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HMPHKHINKGB_TypeInfo,method);
    HMPHKHINKGB___ctor((HMPHKHINKGB_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x6c:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(CLDHEOAJIKF_TypeInfo,method);
    CLDHEOAJIKF___ctor((CLDHEOAJIKF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x6d:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(APOIPFMPGEP_TypeInfo,method);
    APOIPFMPGEP___ctor((APOIPFMPGEP_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x6e:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(PMAECPJOCHA_TypeInfo,method);
    PMAECPJOCHA___ctor((PMAECPJOCHA_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x6f:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(OKMFGNJAIMJ_TypeInfo,method);
    OKMFGNJAIMJ___ctor((OKMFGNJAIMJ_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x70:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NLAJHFAOEDB_TypeInfo,method);
    NLAJHFAOEDB___ctor((NLAJHFAOEDB_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x71:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(MGAKCABPDII_TypeInfo,method);
    MGAKCABPDII___ctor((MGAKCABPDII_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x72:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(KILNKIOAMLO_TypeInfo,method);
    KILNKIOAMLO___ctor((KILNKIOAMLO_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x74:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JDJOEMLOACI_TypeInfo,method);
    JDJOEMLOACI___ctor((JDJOEMLOACI_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x75:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(AHIBJNBMCEH_TypeInfo,method);
    AHIBJNBMCEH___ctor((AHIBJNBMCEH_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x76:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JIGBNLJHKJO_TypeInfo,method);
    JIGBNLJHKJO___ctor((JIGBNLJHKJO_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x77:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JLHAELMHHJL_TypeInfo,method);
    JLHAELMHHJL___ctor((JLHAELMHHJL_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x78:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(PBBLIKILADK_TypeInfo,method);
    PBBLIKILADK___ctor((PBBLIKILADK_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x79:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(GOHEJPCANLI_TypeInfo,method);
    GOHEJPCANLI___ctor((GOHEJPCANLI_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x7a:
  case 0x7b:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NHIDABDELLO_TypeInfo,method);
    NHIDABDELLO___ctor((NHIDABDELLO_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x7c:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(KIPMGLIDBHC_TypeInfo,method);
    KIPMGLIDBHC___ctor((KIPMGLIDBHC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x7d:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(KLFOGICEHJC_TypeInfo,method);
    KLFOGICEHJC___ctor((KLFOGICEHJC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x7e:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(KHIBJFLBJNH_TypeInfo,method);
    KHIBJFLBJNH___ctor((KHIBJFLBJNH_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x7f:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IHDMJONELHA_TypeInfo,method);
    IHDMJONELHA___ctor((IHDMJONELHA_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x80:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(KFDKHMMJMOM_TypeInfo,method);
    KFDKHMMJMOM___ctor((KFDKHMMJMOM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x81:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionRaidIndicateRaidBtn_TypeInfo,method);
    QuestActionRaidIndicateRaidBtn___ctor((QuestActionRaidIndicateRaidBtn_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x82:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NOIIFNBIAHC_TypeInfo,method);
    NOIIFNBIAHC___ctor((NOIIFNBIAHC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x83:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(DEMKOLGFNKK_TypeInfo,method);
    DEMKOLGFNKK___ctor((DEMKOLGFNKK_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x84:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IMJHLANAMIK_TypeInfo,method);
    IMJHLANAMIK___ctor((IMJHLANAMIK_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x85:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionRaidFightScrollToNextCharge_TypeInfo,method);
    QuestActionRaidFightScrollToNextCharge___ctor((QuestActionRaidFightScrollToNextCharge_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x86:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HCOBJLNDDLF_TypeInfo,method);
    HCOBJLNDDLF___ctor((HCOBJLNDDLF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x87:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(CDBANCEFAAK_TypeInfo,method);
    CDBANCEFAAK___ctor((CDBANCEFAAK_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x88:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(GPKCJIOFDBN_TypeInfo,method);
    GPKCJIOFDBN___ctor((GPKCJIOFDBN_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x89:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(BEBGDJMGAAH_TypeInfo,method);
    BEBGDJMGAAH___ctor((BEBGDJMGAAH_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x8a:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IOBFFNAMHPO_TypeInfo,method);
    IOBFFNAMHPO___ctor((IOBFFNAMHPO_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x8b:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(AEKKBHAJLKG_TypeInfo,method);
    AEKKBHAJLKG___ctor((AEKKBHAJLKG_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x8f:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FJFMOEDIMLC_TypeInfo,method);
    FJFMOEDIMLC___ctor((FJFMOEDIMLC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x90:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(GKLDDAPBAGG_TypeInfo,method);
    GKLDDAPBAGG___ctor((GKLDDAPBAGG_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x91:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NLBIMFJEHGC_TypeInfo,method);
    NLBIMFJEHGC___ctor((NLBIMFJEHGC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x92:
    ppCVar1 = &CJEKKMKJEAC_TypeInfo;
LAB_0340a990:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818((IOCCJDEBNHF_c *)*ppCVar1,method);
    QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x93:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(MOIBIDOJAJJ_TypeInfo,method);
    MOIBIDOJAJJ___ctor((MOIBIDOJAJJ_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x94:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IFEDMCHPFIM_TypeInfo,method);
    IFEDMCHPFIM___ctor((IFEDMCHPFIM_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x95:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(QuestActionRunCallback_TypeInfo,method);
    QuestActionRunCallback___ctor((QuestActionRunCallback_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x96:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FINCDDIHLGL_TypeInfo,method);
    FINCDDIHLGL___ctor((FINCDDIHLGL_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x97:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(IELOCGKAGEO_TypeInfo,method);
    IELOCGKAGEO___ctor((IELOCGKAGEO_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x98:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(JBBABEFDNOL_TypeInfo,method);
    JBBABEFDNOL___ctor((JBBABEFDNOL_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x99:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(FMKJPMHJENJ_TypeInfo,method);
    FMKJPMHJENJ___ctor((FMKJPMHJENJ_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x9a:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NCIDPNGDKEC_TypeInfo,method);
    NCIDPNGDKEC___ctor((NCIDPNGDKEC_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x9b:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(NJJFMGMKALF_TypeInfo,method);
    NJJFMGMKALF___ctor((NJJFMGMKALF_o *)__this,(MethodInfo *)0x0);
    break;
  case 0x9c:
    __this = (PFOMHOLCODE_o *)thunk_FUN_01bda818(HAACHEFPDEN_TypeInfo,method);
    HAACHEFPDEN___ctor((HAACHEFPDEN_o *)__this,(MethodInfo *)0x0);
  }
  return (QuestAction_o *)__this;
}

