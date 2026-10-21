// TypeDefIndex 2673
// Namespace: 
// public static class JLAHCMDABIM
// Fields:
//   public const string HDBLMKNIMBF = "get_player";
//   public const string KBCDKGHAFCF = "link_account";
//   public const string PJBOPPNIFDB = "chat";
//   public const string HAAGPDLMBCO = "ping";
//   public const string HIDJGBCMFOO = "join_zone";
//   public const string OMNNLMJPLIH = "kick";
//   public const string JIACKDHCMJF = "reboot_event";
//   public const string PFMILCFCOND = "ledger_update_event";
//   public const string AMBKBKDFDAJ = "join_raid_matcher";
//   public const string CLPMIIBNKNJ = "leave_raid_matcher";
//   public const string GOIAMLFFHPH = "refresh_gems";
//   public const string NEKMECNBEAL = "refresh_free_gems";
//   public const string NFKBBGFEACG = "create_player";
//   public const string LCBAJDEAPHB = "get_season_leaderboard";
//   public const string LMOLOHFLBDO = "get_var";
//   public const string NMODHCMFOCC = "set_var";
//   public const string DBBEHAEOLCI = "update_client_profile";
//   public const string LFAHMDLOPDO = "clan_get_short_info";
//   public const string EMACLEPPHDP = "update_tutorial";
//   public const string FCKLAKOOGJA = "get_short_players";
//   public const string GLEHIONGFLO = "get_league";
//   public const string CKGFMGEBONI = "raid_battle_player_finish";
//   public const string GGMHLBKCOJO = "raid_battle_finish_round";
//   public const string AGFJEAJEKPK = "raid_battle_get_info";
//   public const string PIJCDGLHOOK = "raid_battle_player_start";
//   public const string NBJKICFIFFN = "raid_battle_leave";
//   public const string NAHELCEKBBG = "raid_battle_start_round";
//   public const string KMGGOKFKJBO = "buy_pack";
//   public const string NNCAAOLKJIO = "receive_gift";
//   public const string GDKDKAPOJJE = "get_public_player";
//   public const string ECPEPCHEPBB = "daily_quest_refresh";
//   public const string JKODLEDJHOH = "daily_quest_renew";
//   public const string BHHELNOGNGA = "daily_quest_renew_force";
//   public const string DDKPKAJILPN = "refresh_league_event";
//   public const string DPCIEANPEMD = "season_started_event";
//   public const string KFIIKNMBCKE = "season_finished_event";
//   public const string BMNBMHLCPHC = "refresh_player_event";
//   public const string BALEJLHAKNL = "refresh_raid_player_event";
//   public const string BKOJICNOPKF = "raid_battle_finish_round_event";
//   public const string ACLOFHAJECL = "raid_battle_expire_event";
//   public const string ABMFDCIMIDP = "raid_battle_finish_event";
//   public const string KJIDJJHGGHK = "raid_battle_start_event";
//   public const string DCGKEGFHMJH = "chat_event";
//   public const string OEGGOMIOALB = "mute_event";
//   public const string IEPHGMDOPJH = "bp_claim_reward";
//   public const string JKMDCINIALM = "bp_refresh";
//   public const string BHLIHGBAFBK = "stop_raid_battle_cheat";
//   public const string FDGKJLKGELH = "reset_player_cheat";
//   public const string CCAGMPOJJFI = "set_resource_cheat";
//   private static bool JOBALMMDPAF; // 0x0

// ===== public static Type JKNEODPGLPM()  [RVA 0x33C4E80]
// JLAHCMDABIM$$JKNEODPGLPM @ RVA 0x33C4E80

System_Type_o * JLAHCMDABIM__JKNEODPGLPM(MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  
  if ((DAT_04567def & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04567def = 1;
  }
  handle = Google_Protobuf_WellKnownTypes_Empty_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void GLILMAEBNIA()  [RVA 0x33C4EEC]
// JLAHCMDABIM$$GLILMAEBNIA @ RVA 0x33C4EEC

void JLAHCMDABIM__GLILMAEBNIA(MethodInfo *method)

{
  Il2CppType *handle;
  MethodInfo *pMVar1;
  System_Type_o *pSVar2;
  System_Type_o *MCEDPEFKJDE;
  
  if ((DAT_04567df0 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_var);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&OMFJHNMDIBF_var);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_20549/*"reset_player_cheat"*/);
    FUN_01bab630(&StringLiteral_21240/*"stop_raid_battle_cheat"*/);
    FUN_01bab630(&StringLiteral_20951/*"set_resource_cheat"*/);
    DAT_04567df0 = 1;
  }
  handle = Google_Protobuf_WellKnownTypes_Empty_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = (MethodInfo *)
           System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  pSVar2 = JLAHCMDABIM__JKNEODPGLPM(pMVar1);
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo);
  }
  NetworkEventManager__LFENGGKOJDO(StringLiteral_21240/*"stop_raid_battle_cheat"*/,(System_Type_o *)pMVar1,pSVar2,(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = JLAHCMDABIM__JKNEODPGLPM(pMVar1);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20549/*"reset_player_cheat"*/,(System_Type_o *)pMVar1,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OMFJHNMDIBF_var,(MethodInfo *)0x0);
  MCEDPEFKJDE = System_Type__GetTypeFromHandle
                          ((System_RuntimeTypeHandle_o)OMFJHNMDIBF_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20951/*"set_resource_cheat"*/,pSVar2,MCEDPEFKJDE,(MethodInfo *)0x0);
  return;
}


// ===== private static void CHIFKJAPCHK()  [RVA 0x33C5064]
// JLAHCMDABIM$$CHIFKJAPCHK @ RVA 0x33C5064

void JLAHCMDABIM__CHIFKJAPCHK(MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  System_Type_o *pSVar2;
  
  if ((DAT_04567df1 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_var);
    FUN_01bab630(&HBHFOKIPAHA_var);
    FUN_01bab630(&HBLHCCMEEEC_var);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&IMBPILFKGEO_var);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int32Value_var);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_var);
    FUN_01bab630(&LKAFKHBBNOH_var);
    FUN_01bab630(&MGDJPGGPDJI_var);
    FUN_01bab630(&NLFLMJPNOLF_var);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_17042/*"clan_raid_destroy_event"*/);
    FUN_01bab630(&StringLiteral_17057/*"clan_update_profile_event"*/);
    FUN_01bab630(&StringLiteral_17036/*"clan_member_rating_event"*/);
    FUN_01bab630(&StringLiteral_17034/*"clan_member_kick_event"*/);
    FUN_01bab630(&StringLiteral_17017/*"clan_change_role_event"*/);
    FUN_01bab630(&StringLiteral_17052/*"clan_raid_update_event"*/);
    FUN_01bab630(&StringLiteral_17039/*"clan_raid_create_event"*/);
    FUN_01bab630(&StringLiteral_17014/*"clan_change_leader_event"*/);
    FUN_01bab630(&StringLiteral_17033/*"clan_member_join_event"*/);
    FUN_01bab630(&StringLiteral_17035/*"clan_member_leave_event"*/);
    DAT_04567df1 = 1;
  }
  handle = Google_Protobuf_WellKnownTypes_Int32Value_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)MGDJPGGPDJI_var,(MethodInfo *)0x0);
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo);
  }
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17033/*"clan_member_join_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)MGDJPGGPDJI_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17035/*"clan_member_leave_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)LKAFKHBBNOH_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17034/*"clan_member_kick_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)HBLHCCMEEEC_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17036/*"clan_member_rating_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)EEHFEPPDBHL_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17057/*"clan_update_profile_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)IMBPILFKGEO_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17014/*"clan_change_leader_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)HBHFOKIPAHA_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17017/*"clan_change_role_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NLFLMJPNOLF_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17039/*"clan_raid_create_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NLFLMJPNOLF_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17052/*"clan_raid_update_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17042/*"clan_raid_destroy_event"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  return;
}


// ===== public static void GIENGNEGHPJ()  [RVA 0x33C54A4]
// JLAHCMDABIM$$GIENGNEGHPJ @ RVA 0x33C54A4

void JLAHCMDABIM__GIENGNEGHPJ(MethodInfo *method)

{
  Il2CppType *handle;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Type_o *pSVar1;
  System_Type_o *pSVar2;
  MethodInfo *pMVar3;
  MethodInfo *method_02;
  
  if ((DAT_04567df2 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_var);
    FUN_01bab630(&AJINOJNMEEK_var);
    FUN_01bab630(&ALOGBMGGBEP_var);
    FUN_01bab630(&BKMLILFFPIH_var);
    FUN_01bab630(&BPBGAAHBFKH_var);
    FUN_01bab630(&CADIGFIBFEN_var);
    FUN_01bab630(&CDAAECGFKON_var);
    FUN_01bab630(&DBOOKMFPFNI_var);
    FUN_01bab630(&DLOALGNBPNL_var);
    FUN_01bab630(&EAJJPPPJENA_var);
    FUN_01bab630(&EIBAKHBHMAO_var);
    FUN_01bab630(&ELBBEAGGAOH_var);
    FUN_01bab630(&EMBNHHOCCBH_var);
    FUN_01bab630(&ENFPENIMCIK_var);
    FUN_01bab630(&EOLFEKNCPLM_var);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_var);
    FUN_01bab630(&FDHCLNDLIDG_var);
    FUN_01bab630(&FIMAAAOEIGM_var);
    FUN_01bab630(&FMIEFKAKOMG_var);
    FUN_01bab630(&GGDHPLABCGI_var);
    FUN_01bab630(&GKKKJLJFGBG_var);
    FUN_01bab630(&GKLPDMLELJF_var);
    FUN_01bab630(&GLPEFEEGCPM_var);
    FUN_01bab630(&HCKHJECBIJC_var);
    FUN_01bab630(&HDDKPFAHBBN_var);
    FUN_01bab630(&HGADMOBFBBF_var);
    FUN_01bab630(&IBMLPPNMDCI_var);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int32Value_var);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_var);
    FUN_01bab630(&JCFJFJCKLKG_var);
    FUN_01bab630(&JGELBDHDHAO_var);
    FUN_01bab630(&JLAHCMDABIM_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_var);
    FUN_01bab630(&KBLFOOJFIIG_var);
    FUN_01bab630(&KCPFIELGGLA_var);
    FUN_01bab630(&KJNCNBJIJPC_var);
    FUN_01bab630(&KKGHPKOFEHM_var);
    FUN_01bab630(&LFELBGMCDHD_var);
    FUN_01bab630(&LMEMJBOBHBE_var);
    FUN_01bab630(&MEPKDDGONGE_var);
    FUN_01bab630(&NGOFOPOGBMJ_var);
    FUN_01bab630(&NLBPJNEGNNM_var);
    FUN_01bab630(&NODLJPNGNBG_var);
    FUN_01bab630(&OJFPEINHCDP_var);
    FUN_01bab630(&OJHLANCHFPC_var);
    FUN_01bab630(&OJKCDJCBOBL_var);
    FUN_01bab630(&OKKPDLAJBFD_var);
    FUN_01bab630(&OLCBPIHLPEC_var);
    FUN_01bab630(&OLHGMELLLFK_var);
    FUN_01bab630(&PBGDDCFGPJI_var);
    FUN_01bab630(&PGICCMFLDPI_var);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_StringValue_var);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_16781/*"bp_refresh"*/);
    FUN_01bab630(&StringLiteral_20399/*"raid_battle_finish_round_event"*/);
    FUN_01bab630(&StringLiteral_20462/*"receive_gift"*/);
    FUN_01bab630(&StringLiteral_16846/*"buy_pack"*/);
    FUN_01bab630(&StringLiteral_17577/*"daily_quest_renew"*/);
    FUN_01bab630(&StringLiteral_19386/*"leave_raid_matcher"*/);
    FUN_01bab630(&StringLiteral_20400/*"raid_battle_get_info"*/);
    FUN_01bab630(&StringLiteral_17576/*"daily_quest_refresh"*/);
    FUN_01bab630(&StringLiteral_21837/*"update_client_profile"*/);
    FUN_01bab630(&StringLiteral_18642/*"get_league"*/);
    FUN_01bab630(&StringLiteral_17578/*"daily_quest_renew_force"*/);
    FUN_01bab630(&StringLiteral_19448/*"link_account"*/);
    FUN_01bab630(&StringLiteral_20954/*"set_var"*/);
    FUN_01bab630(&StringLiteral_20401/*"raid_battle_leave"*/);
    FUN_01bab630(&StringLiteral_20405/*"raid_battle_start_event"*/);
    FUN_01bab630(&StringLiteral_19388/*"ledger_update_event"*/);
    FUN_01bab630(&StringLiteral_18644/*"get_public_player"*/);
    FUN_01bab630(&StringLiteral_19266/*"join_raid_matcher"*/);
    FUN_01bab630(&StringLiteral_20479/*"refresh_league_event"*/);
    FUN_01bab630(&StringLiteral_20480/*"refresh_player_event"*/);
    FUN_01bab630(&StringLiteral_20713/*"season_started_event"*/);
    FUN_01bab630(&StringLiteral_16777/*"bp_claim_reward"*/);
    FUN_01bab630(&StringLiteral_19267/*"join_zone"*/);
    FUN_01bab630(&StringLiteral_17028/*"clan_get_short_info"*/);
    FUN_01bab630(&StringLiteral_19304/*"kick"*/);
    FUN_01bab630(&StringLiteral_16981/*"chat"*/);
    FUN_01bab630(&StringLiteral_16985/*"chat_event"*/);
    FUN_01bab630(&StringLiteral_18646/*"get_short_players"*/);
    FUN_01bab630(&StringLiteral_18645/*"get_season_leaderboard"*/);
    FUN_01bab630(&StringLiteral_18647/*"get_var"*/);
    FUN_01bab630(&StringLiteral_17447/*"create_player"*/);
    FUN_01bab630(&StringLiteral_20481/*"refresh_raid_player_event"*/);
    FUN_01bab630(&StringLiteral_18643/*"get_player"*/);
    FUN_01bab630(&StringLiteral_21839/*"update_tutorial"*/);
    FUN_01bab630(&StringLiteral_20477/*"refresh_free_gems"*/);
    FUN_01bab630(&StringLiteral_20396/*"raid_battle_expire_event"*/);
    FUN_01bab630(&StringLiteral_20209/*"ping"*/);
    FUN_01bab630(&StringLiteral_20712/*"season_finished_event"*/);
    FUN_01bab630(&StringLiteral_20397/*"raid_battle_finish_event"*/);
    FUN_01bab630(&StringLiteral_20460/*"reboot_event"*/);
    FUN_01bab630(&StringLiteral_20403/*"raid_battle_player_start"*/);
    FUN_01bab630(&StringLiteral_20402/*"raid_battle_player_finish"*/);
    FUN_01bab630(&StringLiteral_20398/*"raid_battle_finish_round"*/);
    FUN_01bab630(&StringLiteral_20478/*"refresh_gems"*/);
    FUN_01bab630(&StringLiteral_19782/*"mute_event"*/);
    method = (MethodInfo *)FUN_01bab630(&StringLiteral_20406/*"raid_battle_start_round"*/);
    DAT_04567df2 = 1;
  }
  if (JLAHCMDABIM_TypeInfo->static_fields->JOBALMMDPAF != false) {
    return;
  }
  JLAHCMDABIM_TypeInfo->static_fields->JOBALMMDPAF = true;
  JLAHCMDABIM__GLILMAEBNIA(method);
  JLAHCMDABIM__DOGPIGAMLBP(method_00);
  JLAHCMDABIM__CHIFKJAPCHK(method_01);
  handle = Google_Protobuf_WellKnownTypes_Empty_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)ELBBEAGGAOH_var,(MethodInfo *)0x0);
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo);
  }
  NetworkEventManager__LFENGGKOJDO(StringLiteral_19448/*"link_account"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)ELBBEAGGAOH_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_18643/*"get_player"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)AJINOJNMEEK_var,(MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_16981/*"chat"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)PGICCMFLDPI_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OKKPDLAJBFD_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20209/*"ping"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)CADIGFIBFEN_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_19267/*"join_zone"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)LMEMJBOBHBE_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_19304/*"kick"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)PGICCMFLDPI_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20460/*"reboot_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)KAMBBJFPLGM_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_19388/*"ledger_update_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)DBOOKMFPFNI_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_19266/*"join_raid_matcher"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_19386/*"leave_raid_matcher"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)EAJJPPPJENA_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20478/*"refresh_gems"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)GKKKJLJFGBG_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)EAJJPPPJENA_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20477/*"refresh_free_gems"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)FDHCLNDLIDG_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)ELBBEAGGAOH_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17447/*"create_player"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)GGDHPLABCGI_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)JCFJFJCKLKG_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_18645/*"get_season_leaderboard"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_StringValue_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_StringValue_var,
                      (MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_18647/*"get_var"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)ALOGBMGGBEP_var,(MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20954/*"set_var"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OLHGMELLLFK_var,(MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_21837/*"update_client_profile"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OJKCDJCBOBL_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)DLOALGNBPNL_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17028/*"clan_get_short_info"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_21839/*"update_tutorial"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)IBMLPPNMDCI_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)LFELBGMCDHD_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_18646/*"get_short_players"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)PBGDDCFGPJI_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_18642/*"get_league"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)JGELBDHDHAO_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)CDAAECGFKON_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20402/*"raid_battle_player_finish"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)KJNCNBJIJPC_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)FIMAAAOEIGM_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20398/*"raid_battle_finish_round"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)KCPFIELGGLA_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20403/*"raid_battle_player_start"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NGOFOPOGBMJ_var,(MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20401/*"raid_battle_leave"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NGOFOPOGBMJ_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OJHLANCHFPC_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20400/*"raid_battle_get_info"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)MEPKDDGONGE_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)HGADMOBFBBF_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20406/*"raid_battle_start_round"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)HDDKPFAHBBN_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)FMIEFKAKOMG_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_16846/*"buy_pack"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)HDDKPFAHBBN_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)BKMLILFFPIH_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20462/*"receive_gift"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)KBLFOOJFIIG_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)EOLFEKNCPLM_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_18644/*"get_public_player"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)BPBGAAHBFKH_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17576/*"daily_quest_refresh"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)BPBGAAHBFKH_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17577/*"daily_quest_renew"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)HCKHJECBIJC_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)BPBGAAHBFKH_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17578/*"daily_quest_renew_force"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)GLPEFEEGCPM_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20479/*"refresh_league_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)KKGHPKOFEHM_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20713/*"season_started_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NLBPJNEGNNM_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20712/*"season_finished_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)GKLPDMLELJF_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20480/*"refresh_player_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NODLJPNGNBG_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20481/*"refresh_raid_player_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OJFPEINHCDP_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20399/*"raid_battle_finish_round_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(method_02);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20396/*"raid_battle_expire_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)AADKBCFCLKK_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20397/*"raid_battle_finish_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)AADKBCFCLKK_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_20405/*"raid_battle_start_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OLCBPIHLPEC_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_16985/*"chat_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)EIBAKHBHMAO_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_19782/*"mute_event"*/,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)ENFPENIMCIK_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)EMBNHHOCCBH_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_16777/*"bp_claim_reward"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)KAMBBJFPLGM_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_16781/*"bp_refresh"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  return;
}


// ===== private static void DOGPIGAMLBP()  [RVA 0x33C6554]
// JLAHCMDABIM$$DOGPIGAMLBP @ RVA 0x33C6554

void JLAHCMDABIM__DOGPIGAMLBP(MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  System_Type_o *pSVar2;
  MethodInfo *pMVar3;
  
  if ((DAT_04567df3 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_var);
    FUN_01bab630(&EEHFEPPDBHL_var);
    FUN_01bab630(&EPCCNLNOALL_var);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_var);
    FUN_01bab630(&FAACNCKMEJM_var);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int32Value_var);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_var);
    FUN_01bab630(&KAMBBJFPLGM_var);
    FUN_01bab630(&LKJJCAEOJBG_var);
    FUN_01bab630(&NLFLMJPNOLF_var);
    FUN_01bab630(&OJEHKJHEBID_var);
    FUN_01bab630(&OJKCDJCBOBL_var);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_17020/*"clan_destroy"*/);
    FUN_01bab630(&StringLiteral_17046/*"clan_raid_kick"*/);
    FUN_01bab630(&StringLiteral_17024/*"clan_free_join"*/);
    FUN_01bab630(&StringLiteral_17055/*"clan_update_profile"*/);
    FUN_01bab630(&StringLiteral_17022/*"clan_find"*/);
    FUN_01bab630(&StringLiteral_17044/*"clan_raid_join"*/);
    FUN_01bab630(&StringLiteral_17018/*"clan_create"*/);
    FUN_01bab630(&StringLiteral_17012/*"clan_change_leader"*/);
    FUN_01bab630(&StringLiteral_17031/*"clan_leave"*/);
    FUN_01bab630(&StringLiteral_17040/*"clan_raid_destroy"*/);
    FUN_01bab630(&StringLiteral_17048/*"clan_raid_leave"*/);
    FUN_01bab630(&StringLiteral_17026/*"clan_get_by_id"*/);
    FUN_01bab630(&StringLiteral_17050/*"clan_raid_start"*/);
    FUN_01bab630(&StringLiteral_17029/*"clan_kick"*/);
    FUN_01bab630(&StringLiteral_17037/*"clan_raid_create"*/);
    FUN_01bab630(&StringLiteral_17015/*"clan_change_role"*/);
    DAT_04567df3 = 1;
  }
  handle = DMOPGPMINJD_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)EPCCNLNOALL_var,(MethodInfo *)0x0);
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo);
  }
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17018/*"clan_create"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)KAMBBJFPLGM_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17020/*"clan_destroy"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17012/*"clan_change_leader"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)LKJJCAEOJBG_var,(MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17015/*"clan_change_role"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)EPCCNLNOALL_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17024/*"clan_free_join"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OJEHKJHEBID_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17026/*"clan_get_by_id"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)KAMBBJFPLGM_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17031/*"clan_leave"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)EEHFEPPDBHL_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OJEHKJHEBID_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17055/*"clan_update_profile"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17029/*"clan_kick"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)FAACNCKMEJM_var,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)OJKCDJCBOBL_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17022/*"clan_find"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int32Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NLFLMJPNOLF_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17037/*"clan_raid_create"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NLFLMJPNOLF_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17044/*"clan_raid_join"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NLFLMJPNOLF_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17048/*"clan_raid_leave"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)NLFLMJPNOLF_var,(MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17046/*"clan_raid_kick"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)
           System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar1 = JLAHCMDABIM__JKNEODPGLPM(pMVar3);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17050/*"clan_raid_start"*/,(System_Type_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Empty_var,
                      (MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)Google_Protobuf_WellKnownTypes_Int64Value_var,
                      (MethodInfo *)0x0);
  NetworkEventManager__LFENGGKOJDO(StringLiteral_17040/*"clan_raid_destroy"*/,pSVar1,pSVar2,(MethodInfo *)0x0);
  return;
}

