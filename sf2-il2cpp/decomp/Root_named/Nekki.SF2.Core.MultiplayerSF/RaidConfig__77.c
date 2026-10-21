// Original name: Nekki.SF2.Core.MultiplayerSF.RaidConfig  (obfuscated JMDPBFOCHHP)
// TypeDefIndex 77
// Namespace: 
// public class RaidConfig
// Fields:
//   public const string MLKJPEANEEP = "MISSILE";
//   public const string ADHLODCKKEH = "POTION";
//   public const string JJLCIHJLELH = "HORN";
//   public const string BMAMDPJKEIA = "EQUIPMENT";
//   private const string BOFKNIMEEJB = "unity/config.xml";
//   private const string JIGOPDFLDKC = "unity/tacticSettings.xml";
//   private const string HIELEMIJGOO = "unity/Leagues.xml";
//   private const string COHLFIODCPL = "unity/LootContainers.xml";
//   private const string BAPPFPMEJPB = "unity/RaidItems.xml";
//   private const string EICMLPMNKFE = "unity/VerifyAchievements.xml";
//   private const string CELIKCJKJLI = "unity/ServerPerks.xml";
//   private const string IJPPCOCKPKI = "unity/DailyQuests.xml";
//   private const string PBHJKPKPLOH = "unity/RestrictedItems.xml";
//   private const string CJDHJMPIBOG = "unity/ClanSettings.xml";
//   private const string BODMAENNOKJ = "unity/BattlePass.xml";
//   private const string LODBMCHBCNH = "raid_configs.zip";
//   private const string FKODMELJOPN = "econfig.zip";
//   private const string KMJHPHFIBAO = "raid_configs.zip.enc";
//   private const string EKEDALAPBJI = "raid_configs.zip.sha";
//   public POLAJNLKPAK FMPOOGLPALN; // 0x10
//   private Action MPJHFDGCCKC; // 0x18
//   private Action FHJBJEIIMOB; // 0x20
//   private XmlDocument KGCDBPOBGFH; // 0x28
//   private RaidConfig.KJLILNPHJHI OGPANCKIAED; // 0x30
//   private RaidConfig.PEFEIMKBGAH EJCCMMEGGFF; // 0x38
//   private RaidConfig.DOLANMCGDMB MEDFNFOOABH; // 0x40
//   private readonly RaidConfig.AEDJNABHPOF ICGFIOLHAMK; // 0x48
//   private readonly List<NEFKBLNBOAB> NDPALCPICPD; // 0x50
//   private CancellationTokenSource PKFOIMOONKL; // 0x58
//   private RaidConfig.AEJBILHMFDB <JMEOCLFDHMM>k__BackingField; // 0x60
//   private RaidConfig.EMDEPOFJFEF <GJCMAADAOHD>k__BackingField; // 0x68
//   private RaidConfig.NMAJABPDEPE <IGLEEEJGEEJ>k__BackingField; // 0x70
//   private RaidConfig.EJICJNOEGGE <LEIIIBPIJGJ>k__BackingField; // 0x78
//   private RaidConfig.BEGFIIECDMN <MFDCPFIBKNL>k__BackingField; // 0x80
//   private RaidConfig.DLMLPMIANHI <OLABMBDNACG>k__BackingField; // 0x88
//   private RaidConfig.DBNJFPILODG <LGFNDLOCGPB>k__BackingField; // 0x90
//   private RaidConfig.JMEJFGKJNEA <NFFDCNIMBHK>k__BackingField; // 0x98
//   private RaidConfig.NOPCEDPNNKO OFMMMBIIDAE; // 0xA0

// ===== public void DACLMDDNEBN(Action CJNHFNHJHPE)  [RVA 0x2FF7054]
// RaidConfig$$DACLMDDNEBN @ RVA 0x2FF7054

void RaidConfig__DACLMDDNEBN(RaidConfig_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 030f7054 to 031f705f has its CatchHandler @ 030f6f50 */
                    /* try { // try from 030f7060 to 031f7067 has its CatchHandler @ 030f7068 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f7048 with catch @ 030f7068
                       catch(type#2 @ 00000000) { ... } // from try @ 030f7060 with catch @ 030f7068
                        */
                    /* try { // try from 030f706c to 031f70ab has its CatchHandler @ 030f706c
                       catch() { ... } // from try @ 030f706c with catch @ 030f706c
                       catch() { ... } // from try @ 030f70e8 with catch @ 030f706c
                       catch() { ... } // from try @ 030f7170 with catch @ 030f706c */
  if ((DAT_04565aa8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565aa8 = 1;
  }
  ppSVar4 = &(__this->fields).FHJBJEIIMOB;
  a = *ppSVar4;
                    /* try { // try from 030f70ac to 031f70bb has its CatchHandler @ 030f712c */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
                    /* try { // try from 030f70cc to 031f70d3 has its CatchHandler @ 030f7128 */
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* try { // try from 030f70dc to 031f70e7 has its CatchHandler @ 030f7124 */
      return;
    }
  }
                    /* try { // try from 030f70e8 to 031f7143 has its CatchHandler @ 030f706c */
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public RaidConfig.ENBCJNLAHAC DIFLKMKBENA(string KGLJICLJHEL, bool LLCJCPCKPJL = False)  [RVA 0x2FF70F0]
// RaidConfig$$DIFLKMKBENA @ RVA 0x2FF70F0

RaidConfig_ENBCJNLAHAC_o *
RaidConfig__DIFLKMKBENA
          (RaidConfig_o *__this,System_String_o *KGLJICLJHEL,bool LLCJCPCKPJL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  RaidConfig_ENBCJNLAHAC_o *pJVar1;
  RaidConfig_NOPCEDPNNKO_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_01;
  
  if ((DAT_04565aa9 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f70dc with catch @ 030f7124
                        */
    FUN_01bab630(&Method_JMDPBFOCHHP_JCBHBCKINBL_IJBIJOFGJKM__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f70cc with catch @ 030f7128
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f70ac with catch @ 030f712c
                        */
    FUN_01bab630(&RaidConfig_JCBHBCKINBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_Find__);
                    /* try { // try from 030f7144 to 031f7147 has its CatchHandler @ 030f7158 */
    FUN_01bab630(&System_Predicate<RaidConfig_ENBCJNLAHAC>_TypeInfo);
    DAT_04565aa9 = 1;
  }
                    /* catch() { ... } // from try @ 030f7144 with catch @ 030f7158 */
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(RaidConfig_JCBHBCKINBL_TypeInfo);
                    /* try { // try from 030f7164 to 031f716f has its CatchHandler @ 030f7184 */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 030f7170 to 031f717b has its CatchHandler @ 030f706c */
    __this_00[1].monitor = KGLJICLJHEL;
                    /* try { // try from 030f717c to 031f7183 has its CatchHandler @ 030f7184 */
    *(bool *)&__this_00[1].klass = LLCJCPCKPJL;
    thunk_FUN_01c20e04(&__this_00[1].monitor,KGLJICLJHEL);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f7164 with catch @ 030f7184
                       catch(type#2 @ 00000000) { ... } // from try @ 030f717c with catch @ 030f7184
                        */
    pJVar2 = (__this->fields).OFMMMBIIDAE;
                    /* try { // try from 030f7188 to 031f71c7 has its CatchHandler @ 030f7188
                       catch() { ... } // from try @ 030f7188 with catch @ 030f7188
                       catch() { ... } // from try @ 030f71f4 with catch @ 030f7188
                       catch() { ... } // from try @ 030f722c with catch @ 030f7188
                       catch() { ... } // from try @ 030f7274 with catch @ 030f7188 */
    if (pJVar2 == (RaidConfig_NOPCEDPNNKO_o *)0x0) {
                    /* try { // try from 030f71ec to 031f71f3 has its CatchHandler @ 030f722c */
                    /* try { // try from 030f71f4 to 031f7227 has its CatchHandler @ 030f7188 */
      return (RaidConfig_ENBCJNLAHAC_o *)0x0;
    }
    __this_01 = (pJVar2->fields).NPGALOBDIHL;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<RaidConfig_ENBCJNLAHAC>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
                    /* try { // try from 030f71c8 to 031f71d7 has its CatchHandler @ 030f7234 */
      pJVar1 = (RaidConfig_ENBCJNLAHAC_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_Find__);
      return pJVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JNOBNELLFNE(EDLFPEGBIFO HPACPFLKHPK)  [RVA 0x2FF7204]
// RaidConfig$$JNOBNELLFNE @ RVA 0x2FF7204

/* WARNING: Removing unreachable block (ram,0x030f75cc) */

void RaidConfig__JNOBNELLFNE(RaidConfig_o *__this,EDLFPEGBIFO_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *AAIHDEKMIJG;
  System_IO_MemoryStream_o *__this_00;
  Ionic_Zip_ZipFile_o *__this_01;
  System_IO_MemoryStream_o *__this_02;
  System_IO_MemoryStream_o *__this_03;
  System_Collections_Generic_ICollection_ZipEntry__o *pSVar2;
  System_Func_ZipEntry__bool__o **ppSVar3;
  Ionic_Zip_ZipEntry_o *__this_04;
  Ionic_Zip_ZipEntry_o *__this_05;
  System_Byte_array *GAODLOAEKJN;
  MethodInfo *pMVar4;
  System_Byte_array *pSVar5;
  System_Func_ZipEntry__bool__o *pSVar6;
  
                    /* try { // try from 030f7228 to 031f722b has its CatchHandler @ 030f7230 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f71ec with catch @ 030f722c
                       try { // try from 030f722c to 031f724b has its CatchHandler @ 030f7188 */
  if ((DAT_04565aaa & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f7228 with catch @ 030f7230
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f71c8 with catch @ 030f7234
                        */
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<ZipEntry>__);
    FUN_01bab630(&System_Func<ZipEntry,_bool>_TypeInfo);
                    /* try { // try from 030f724c to 031f724f has its CatchHandler @ 030f725c */
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
                    /* catch() { ... } // from try @ 030f724c with catch @ 030f725c */
    FUN_01bab630(&Method_JMDPBFOCHHP_<>c_BJDFMJMEIGJ__);
                    /* try { // try from 030f7268 to 031f7273 has its CatchHandler @ 030f7288 */
    FUN_01bab630(&Method_JMDPBFOCHHP_<>c_DGLOHKJKCOA__);
                    /* try { // try from 030f7274 to 031f727f has its CatchHandler @ 030f7188 */
    FUN_01bab630(&RaidConfig_<>c_TypeInfo);
                    /* try { // try from 030f7280 to 031f7287 has its CatchHandler @ 030f7288 */
    FUN_01bab630(&Ionic_Zip_ZipFile_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f7268 with catch @ 030f7288
                       catch(type#2 @ 00000000) { ... } // from try @ 030f7280 with catch @ 030f7288
                        */
    FUN_01bab630(&StringLiteral_10820/*"RaidConfig::DownloadConfigCallback: encrypted not found"*/);
    DAT_04565aaa = 1;
  }
  if (HPACPFLKHPK == (EDLFPEGBIFO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = EDLFPEGBIFO__BOJJBGPIKDP(HPACPFLKHPK,(MethodInfo *)0x0);
  if (!bVar1) {
    RaidConfig__HKKGCOJHKGP(__this,(System_String_o *)0x0,method);
    return;
  }
  AAIHDEKMIJG = RaidConfig__EMHGIBKDBOG((MethodInfo *)(ulong)bVar1);
  NEHNBJKKABI__HEPJLJJMBML
            (AAIHDEKMIJG,(HPACPFLKHPK->fields)._GOFDPKCMIJO_k__BackingField,(MethodInfo *)0x0);
  pSVar5 = (HPACPFLKHPK->fields)._GOFDPKCMIJO_k__BackingField;
  __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_00,pSVar5,(MethodInfo *)0x0);
  if ((Ionic_Zip_ZipFile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = Ionic_Zip_ZipFile__Read((System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  __this_02 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_02,(MethodInfo *)0x0);
  __this_03 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_01 == (Ionic_Zip_ZipFile_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar2 = Ionic_Zip_ZipFile__get_Entries(__this_01,(MethodInfo *)0x0);
  if ((RaidConfig_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(RaidConfig_<>c_TypeInfo);
  }
  pSVar6 = RaidConfig_<>c_TypeInfo->static_fields->__9__113_0;
  if (pSVar6 == (System_Func_ZipEntry__bool__o *)0x0) {
    if ((RaidConfig_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(RaidConfig_<>c_TypeInfo);
    }
    pSVar6 = (System_Func_ZipEntry__bool__o *)
             thunk_FUN_01bda818(System_Func<ZipEntry,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar3 = &RaidConfig_<>c_TypeInfo->static_fields->__9__113_0;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
  }
  __this_04 = (Ionic_Zip_ZipEntry_o *)
              System_Linq_Enumerable__FirstOrDefault<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                         (System_Func_TSource__bool__o *)pSVar6,
                         (MethodInfo_1EA1A5C *)
                         Method_System_Linq_Enumerable_FirstOrDefault<ZipEntry>__);
  pSVar2 = Ionic_Zip_ZipFile__get_Entries(__this_01,(MethodInfo *)0x0);
  if ((RaidConfig_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(RaidConfig_<>c_TypeInfo);
  }
  pSVar6 = RaidConfig_<>c_TypeInfo->static_fields->__9__113_1;
  if (pSVar6 == (System_Func_ZipEntry__bool__o *)0x0) {
    if ((RaidConfig_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(RaidConfig_<>c_TypeInfo);
    }
    pSVar6 = (System_Func_ZipEntry__bool__o *)
             thunk_FUN_01bda818(System_Func<ZipEntry,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar3 = &RaidConfig_<>c_TypeInfo->static_fields->__9__113_1;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
  }
  pMVar4 = Method_System_Linq_Enumerable_FirstOrDefault<ZipEntry>__;
  __this_05 = (Ionic_Zip_ZipEntry_o *)
              System_Linq_Enumerable__FirstOrDefault<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                         (System_Func_TSource__bool__o *)pSVar6,
                         (MethodInfo_1EA1A5C *)
                         Method_System_Linq_Enumerable_FirstOrDefault<ZipEntry>__);
  if ((__this_04 == (Ionic_Zip_ZipEntry_o *)0x0) || (__this_05 == (Ionic_Zip_ZipEntry_o *)0x0)) {
    RaidConfig__HKKGCOJHKGP(__this,StringLiteral_10820/*"RaidConfig::DownloadConfigCallback: encrypted not found"*/,pMVar4);
    if (__this_02 == (System_IO_MemoryStream_o *)0x0) goto joined_r0x030f7554;
  }
  else {
    Ionic_Zip_ZipEntry__Extract(__this_04,(System_IO_Stream_o *)__this_02,(MethodInfo *)0x0);
    Ionic_Zip_ZipEntry__Extract(__this_05,(System_IO_Stream_o *)__this_03,(MethodInfo *)0x0);
    if (__this_02 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = (System_Byte_array *)
             (*(__this_02->klass->vtable)._42_ToArray.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._42_ToArray.method);
    pSVar5 = EJDKNOPLIBB__IKCICIMJLJJ(pSVar5,(MethodInfo *)0x0);
    if (__this_03 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    GAODLOAEKJN = (System_Byte_array *)
                  (*(__this_03->klass->vtable)._42_ToArray.methodPtr)
                            (__this_03,(__this_03->klass->vtable)._42_ToArray.method);
    pMVar4 = (MethodInfo *)0x0;
    bVar1 = EJDKNOPLIBB__INOIIEOAMKP(pSVar5,GAODLOAEKJN,(MethodInfo *)0x0);
    if (bVar1) {
      RaidConfig__KJJAGIJIFOL(__this,pSVar5,pMVar4);
    }
    else {
      RaidConfig__HKKGCOJHKGP(__this,(System_String_o *)0x0,pMVar4);
    }
  }
  System_IO_Stream__Dispose((System_IO_Stream_o *)__this_02,(MethodInfo *)0x0);
joined_r0x030f7554:
  if (__this_03 != (System_IO_MemoryStream_o *)0x0) {
    System_IO_Stream__Dispose((System_IO_Stream_o *)__this_03,(MethodInfo *)0x0);
  }
  if (__this_01 != (Ionic_Zip_ZipFile_o *)0x0) {
    Ionic_Zip_ZipFile__Dispose(__this_01,(MethodInfo *)0x0);
  }
  if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
    System_IO_Stream__Dispose((System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  }
                    /* try { // try from 030f7598 to 031f7693 has its CatchHandler @ 030f7598
                       catch() { ... } // from try @ 030f7598 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7da4 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7e40 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7e80 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7f08 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7f44 with catch @ 030f7598 */
  return;
}


// ===== public RaidConfig.FNILDHLJBBJ OJOIAONADNG(string HAEPFHOGAIM)  [RVA 0x2FF7AD0]
// RaidConfig$$OJOIAONADNG @ RVA 0x2FF7AD0

RaidConfig_FNILDHLJBBJ_o *
RaidConfig__OJOIAONADNG(RaidConfig_o *__this,System_String_o *HAEPFHOGAIM,MethodInfo *method)

{
  RaidConfig_EMDEPOFJFEF_o *__this_00;
  RaidConfig_FNILDHLJBBJ_o *pJVar1;
  
  __this_00 = (__this->fields)._GJCMAADAOHD_k__BackingField;
                    /* try { // try from 030f7ad4 to 031f7ad7 has its CatchHandler @ 030f7ec4 */
  if (__this_00 != (RaidConfig_EMDEPOFJFEF_o *)0x0) {
                    /* try { // try from 030f7ad8 to 031f7adb has its CatchHandler @ 030f7ec0 */
    pJVar1 = RaidConfig_EMDEPOFJFEF__OJOIAONADNG(__this_00,HAEPFHOGAIM,method);
    return pJVar1;
  }
                    /* try { // try from 030f7adc to 031f7adf has its CatchHandler @ 030f7ebc */
  return (RaidConfig_FNILDHLJBBJ_o *)0x0;
}


// ===== public RaidConfig.HJLEKMDIDPO FPPDGOEOJCH(string DIIDFLPOBMC)  [RVA 0x2FF7BE8]
// RaidConfig$$FPPDGOEOJCH @ RVA 0x2FF7BE8

RaidConfig_HJLEKMDIDPO_o *
RaidConfig__FPPDGOEOJCH(RaidConfig_o *__this,System_String_o *DIIDFLPOBMC,MethodInfo *method)

{
  RaidConfig_NOPCEDPNNKO_o *__this_00;
  RaidConfig_HJLEKMDIDPO_o *pJVar1;
  
  __this_00 = (__this->fields).OFMMMBIIDAE;
  if (__this_00 != (RaidConfig_NOPCEDPNNKO_o *)0x0) {
    pJVar1 = RaidConfig_NOPCEDPNNKO__FPPDGOEOJCH(__this_00,DIIDFLPOBMC,method);
    return pJVar1;
  }
  return (RaidConfig_HJLEKMDIDPO_o *)0x0;
}


// ===== public RaidConfig.NMAJABPDEPE CBGCLALJPMI()  [RVA 0x2FF7CE0]
// RaidConfig$$CBGCLALJPMI @ RVA 0x2FF7CE0

RaidConfig_NMAJABPDEPE_o * RaidConfig__CBGCLALJPMI(RaidConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._IGLEEEJGEEJ_k__BackingField;
}


// ===== public void AGBJDHHPIPL(Action CJNHFNHJHPE)  [RVA 0x2FF7CE8]
// RaidConfig$$AGBJDHHPIPL @ RVA 0x2FF7CE8

void RaidConfig__AGBJDHHPIPL(RaidConfig_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
                    /* try { // try from 030f7ce8 to 031f7d1f has its CatchHandler @ 030f7db0 */
  if ((DAT_04565aab & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565aab = 1;
  }
  ppSVar4 = &(__this->fields).FHJBJEIIMOB;
  source = *ppSVar4;
                    /* try { // try from 030f7d28 to 031f7d4f has its CatchHandler @ 030f7dc8 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 030f7d50 to 031f7d67 has its CatchHandler @ 030f7db4 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 030f7d6c to 031f7da3 has its CatchHandler @ 030f7dac */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public XmlNode LLLJKOCLBMA()  [RVA 0x2FF7D84]
// RaidConfig$$LLLJKOCLBMA @ RVA 0x2FF7D84

System_Xml_XmlNode_o * RaidConfig__LLLJKOCLBMA(RaidConfig_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  MethodInfo *in_x2;
  
  if ((DAT_04565aac & 1) == 0) {
                    /* catch() { ... } // from try @ 030f7c3c with catch @ 030f7da4
                       try { // try from 030f7da4 to 031f7e1f has its CatchHandler @ 030f7598 */
                    /* catch() { ... } // from try @ 030f7c28 with catch @ 030f7da8 */
                    /* catch() { ... } // from try @ 030f7d6c with catch @ 030f7dac */
    FUN_01bab630(&StringLiteral_19579/*"map"*/);
                    /* catch() { ... } // from try @ 030f7ce8 with catch @ 030f7db0 */
                    /* catch() { ... } // from try @ 030f7d50 with catch @ 030f7db4 */
    DAT_04565aac = 1;
  }
                    /* catch() { ... } // from try @ 030f7ccc with catch @ 030f7db8 */
                    /* catch() { ... } // from try @ 030f7bcc with catch @ 030f7dbc */
                    /* catch() { ... } // from try @ 030f7bb4 with catch @ 030f7dc0 */
                    /* catch() { ... } // from try @ 030f7ba8 with catch @ 030f7dc4 */
                    /* catch() { ... } // from try @ 030f7b70 with catch @ 030f7dc8
                       catch() { ... } // from try @ 030f7cb8 with catch @ 030f7dc8
                       catch() { ... } // from try @ 030f7d28 with catch @ 030f7dc8 */
  pSVar1 = RaidConfig__IFFHCBKGMKC(__this,StringLiteral_19579/*"map"*/,in_x2);
  return pSVar1;
}


// ===== public bool NNBJOLPDGOM(string KGLJICLJHEL)  [RVA 0x2FF7E50]
// RaidConfig$$NNBJOLPDGOM @ RVA 0x2FF7E50

bool RaidConfig__NNBJOLPDGOM(RaidConfig_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  RaidConfig_NOPCEDPNNKO_o *__this_00;
  RaidConfig_EFAJBOEHPLJ_o *pJVar2;
  
  __this_00 = (__this->fields).OFMMMBIIDAE;
  bVar1 = false;
  if (__this_00 != (RaidConfig_NOPCEDPNNKO_o *)0x0) {
                    /* try { // try from 030f7e5c to 031f7e6b has its CatchHandler @ 030f7e74 */
    pJVar2 = RaidConfig_NOPCEDPNNKO__BHJOLIJDBLO(__this_00,KGLJICLJHEL,method);
    bVar1 = pJVar2 != (RaidConfig_EFAJBOEHPLJ_o *)0x0;
  }
  return bVar1;
}


// ===== public void HBEAEDIIABG(RaidConfig.DOLANMCGDMB IMMNELPBGIF)  [RVA 0x2FF7E80]
// RaidConfig$$HBEAEDIIABG @ RVA 0x2FF7E80

void RaidConfig__HBEAEDIIABG
               (RaidConfig_o *__this,RaidConfig_DOLANMCGDMB_o *IMMNELPBGIF,MethodInfo *method)

{
                    /* try { // try from 030f7e80 to 031f7eef has its CatchHandler @ 030f7598 */
  (__this->fields).MEDFNFOOABH = IMMNELPBGIF;
                    /* catch() { ... } // from try @ 030f79d0 with catch @ 030f7e84 */
  thunk_FUN_01c20e04();
  return;
}


// ===== public RaidConfig.JMEJFGKJNEA EBDNAPOFNAI()  [RVA 0x2FF7E88]
// RaidConfig$$EBDNAPOFNAI @ RVA 0x2FF7E88

RaidConfig_JMEJFGKJNEA_o * RaidConfig__EBDNAPOFNAI(RaidConfig_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 030f7978 with catch @ 030f7e88 */
                    /* catch() { ... } // from try @ 030f7960 with catch @ 030f7e8c */
  return (__this->fields)._NFFDCNIMBHK_k__BackingField;
}


// ===== private void OPKHHDFGOAB()  [RVA 0x2FF7E90]
// RaidConfig$$OPKHHDFGOAB @ RVA 0x2FF7E90

void RaidConfig__OPKHHDFGOAB(RaidConfig_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  RaidConfig_AEDJNABHPOF_c *pJVar3;
  ulong uVar4;
  int32_t *piVar5;
  RaidConfig_AEDJNABHPOF_o *pJVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
                    /* catch() { ... } // from try @ 030f7b40 with catch @ 030f7e90 */
                    /* catch() { ... } // from try @ 030f77a8 with catch @ 030f7e94 */
                    /* catch() { ... } // from try @ 030f7b3c with catch @ 030f7e98 */
                    /* catch() { ... } // from try @ 030f775c with catch @ 030f7e9c */
                    /* catch() { ... } // from try @ 030f7b34 with catch @ 030f7ea0 */
                    /* catch() { ... } // from try @ 030f7b00 with catch @ 030f7ea4 */
  if ((DAT_04565aad & 1) == 0) {
                    /* catch() { ... } // from try @ 030f79f4 with catch @ 030f7ea8
                       catch() { ... } // from try @ 030f7b80 with catch @ 030f7ea8 */
                    /* catch() { ... } // from try @ 030f777c with catch @ 030f7eac */
                    /* catch() { ... } // from try @ 030f7888 with catch @ 030f7eb0 */
    auVar7 = FUN_01bab630(&RaidConfig_AEDJNABHPOF_TypeInfo);
                    /* catch() { ... } // from try @ 030f7920 with catch @ 030f7eb4 */
                    /* catch() { ... } // from try @ 030f78bc with catch @ 030f7eb8 */
    DAT_04565aad = 1;
  }
                    /* catch() { ... } // from try @ 030f7adc with catch @ 030f7ebc */
  pJVar6 = (__this->fields).ICGFIOLHAMK;
                    /* catch() { ... } // from try @ 030f7ad8 with catch @ 030f7ec0 */
  if (pJVar6 == (RaidConfig_AEDJNABHPOF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
                    /* catch() { ... } // from try @ 030f7ad4 with catch @ 030f7ec4 */
                    /* catch() { ... } // from try @ 030f7acc with catch @ 030f7ec8 */
  pJVar3 = pJVar6->klass;
  uVar1._0_1_ = (pJVar3->_2).rank;
  uVar1._1_1_ = (pJVar3->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 030f7ae8 with catch @ 030f7ecc */
                    /* catch() { ... } // from try @ 030f7ae0 with catch @ 030f7ed0
                       catch() { ... } // from try @ 030f7af4 with catch @ 030f7ed0 */
  uVar4 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 030f77e8 with catch @ 030f7ed4 */
  if (uVar4 != 0) {
    piVar5 = &((pJVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)RaidConfig_AEDJNABHPOF_TypeInfo) {
        pVVar2 = pJVar3->vtable + (*piVar5 + 1);
        goto LAB_030f7f1c;
      }
                    /* try { // try from 030f7ef0 to 031f7f07 has its CatchHandler @ 030f7f3c */
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pJVar6,RaidConfig_AEDJNABHPOF_TypeInfo,1);
                    /* try { // try from 030f7f08 to 031f7f2b has its CatchHandler @ 030f7598 */
LAB_030f7f1c:
                    /* WARNING: Could not recover jumptable at 0x030f7f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 030f7f2c to 031f7f3b has its CatchHandler @ 030f7f3c */
  (*pVVar2->methodPtr)(pJVar6,pVVar2->method);
  return;
}


// ===== public void KKEGDNJHNFP(RaidConfig.DLMLPMIANHI CJNHFNHJHPE)  [RVA 0x2FF7F34]
// RaidConfig$$KKEGDNJHNFP @ RVA 0x2FF7F34

void RaidConfig__KKEGDNJHNFP
               (RaidConfig_o *__this,RaidConfig_DLMLPMIANHI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OLABMBDNACG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void JBIIFMPKKEK(RaidConfig.NFKNNOPFJEE HLDACJIELGJ)  [RVA 0x2FF7F3C]
// RaidConfig$$JBIIFMPKKEK @ RVA 0x2FF7F3C

void RaidConfig__JBIIFMPKKEK
               (RaidConfig_o *__this,RaidConfig_NFKNNOPFJEE_o *HLDACJIELGJ,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  RaidConfig_AEDJNABHPOF_c *pJVar3;
  ulong uVar4;
  int32_t *piVar5;
  RaidConfig_AEDJNABHPOF_o *pJVar6;
  
                    /* catch() { ... } // from try @ 030f7ef0 with catch @ 030f7f3c
                       catch() { ... } // from try @ 030f7f2c with catch @ 030f7f3c */
                    /* try { // try from 030f7f40 to 031f7f43 has its CatchHandler @ 030f7f4c */
                    /* try { // try from 030f7f44 to 031f7f4f has its CatchHandler @ 030f7598 */
                    /* catch() { ... } // from try @ 030f7e7c with catch @ 030f7f4c
                       catch() { ... } // from try @ 030f7f40 with catch @ 030f7f4c */
  if ((DAT_04565aae & 1) == 0) {
    FUN_01bab630(&RaidConfig_AEDJNABHPOF_TypeInfo);
    DAT_04565aae = 1;
  }
  pJVar6 = (__this->fields).ICGFIOLHAMK;
  if (pJVar6 == (RaidConfig_AEDJNABHPOF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pJVar3 = pJVar6->klass;
  uVar1._0_1_ = (pJVar3->_2).rank;
  uVar1._1_1_ = (pJVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pJVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)RaidConfig_AEDJNABHPOF_TypeInfo) {
        pVVar2 = pJVar3->vtable + *piVar5;
        goto LAB_030f7fc8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pJVar6,RaidConfig_AEDJNABHPOF_TypeInfo,0);
LAB_030f7fc8:
                    /* WARNING: Could not recover jumptable at 0x030f7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pJVar6,HLDACJIELGJ,pVVar2->method);
  return;
}


// ===== public void OKPNEHLBHFK(RaidConfig.NOPCEDPNNKO CJNHFNHJHPE)  [RVA 0x2FF7FE4]
// RaidConfig$$OKPNEHLBHFK @ RVA 0x2FF7FE4

void RaidConfig__OKPNEHLBHFK
               (RaidConfig_o *__this,RaidConfig_NOPCEDPNNKO_o *CJNHFNHJHPE,MethodInfo *method)

{
  MCEIBCKPIAD_o *__this_00;
  RaidConfig_NOPCEDPNNKO_o **ppJVar1;
  
  if ((DAT_04565aaf & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565aaf = 1;
  }
  ppJVar1 = &(__this->fields).OFMMMBIIDAE;
  *ppJVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppJVar1,CJNHFNHJHPE);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__IOMECNCIENO((MethodInfo *)0x0);
  if (__this_00 != (MCEIBCKPIAD_o *)0x0) {
    MCEIBCKPIAD__GIENGNEGHPJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string EMHGIBKDBOG()  [RVA 0x2FF7864]
// RaidConfig$$EMHGIBKDBOG @ RVA 0x2FF7864

System_String_o * RaidConfig__EMHGIBKDBOG(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565ab0 & 1) == 0) {
                    /* try { // try from 030f7888 to 031f788b has its CatchHandler @ 030f7eb0 */
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_17972/*"econfig.zip"*/);
    DAT_04565ab0 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 030f78bc to 031f78cf has its CatchHandler @ 030f7eb8 */
  pSVar1 = SF2Paths__GAFKBFMBPKO((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_17972/*"econfig.zip"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int JNBAJJCCJFH()  [RVA 0x2FF8068]
// RaidConfig$$JNBAJJCCJFH @ RVA 0x2FF8068

int32_t RaidConfig__JNBAJJCCJFH(RaidConfig_o *__this,MethodInfo *method)

{
  RaidConfig_DOLANMCGDMB_o *pJVar1;
  
  pJVar1 = (__this->fields).MEDFNFOOABH;
  if (pJVar1 != (RaidConfig_DOLANMCGDMB_o *)0x0) {
    return (pJVar1->fields).EFNOLDEKHCI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ACGICDNPFPE(XmlDocument PCMFDDODKED)  [RVA 0x2FF8084]
// RaidConfig$$ACGICDNPFPE @ RVA 0x2FF8084

void RaidConfig__ACGICDNPFPE
               (RaidConfig_o *__this,System_Xml_XmlDocument_o *PCMFDDODKED,MethodInfo *method)

{
  (__this->fields).KGCDBPOBGFH = PCMFDDODKED;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void HFGKCGLMKNG(Action CJNHFNHJHPE)  [RVA 0x2FF808C]
// RaidConfig$$HFGKCGLMKNG @ RVA 0x2FF808C

void RaidConfig__HFGKCGLMKNG(RaidConfig_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04565ab1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565ab1 = 1;
  }
  ppSVar4 = &(__this->fields).MPJHFDGCCKC;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public RaidConfig.DBNJFPILODG DEKIMGDLODF()  [RVA 0x2FF8128]
// RaidConfig$$DEKIMGDLODF @ RVA 0x2FF8128

RaidConfig_DBNJFPILODG_o * RaidConfig__DEKIMGDLODF(RaidConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._LGFNDLOCGPB_k__BackingField;
}


// ===== private void ECPPCMKAGNG()  [RVA 0x2FF8130]
// RaidConfig$$ECPPCMKAGNG @ RVA 0x2FF8130

void RaidConfig__ECPPCMKAGNG(RaidConfig_o *__this,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  System_Threading_CancellationTokenSource_o *__this_00;
  Il2CppObject *pIVar5;
  RaidConfig_o *__this_01;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_TimeSpan_o SVar8;
  System_Threading_CancellationToken_o SVar9;
  VirtualInvokeData *pVVar10;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo_27FB8F4 *method_01;
  undefined8 in_x7;
  RaidConfig_c *pJVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_Threading_CancellationTokenSource_o **ppSVar14;
  System_Nullable_TimeSpan__o __this_02;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04565ab2 & 1) == 0) {
    FUN_01bab630(&System_Action<EDLFPEGBIFO>_TypeInfo);
    FUN_01bab630(&CFOCLEDKNKL_TypeInfo);
    FUN_01bab630(&System_Threading_CancellationTokenSource_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_JMDPBFOCHHP_JNOBNELLFNE__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>__ctor__);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04565ab2 = 1;
    method = extraout_x1;
  }
  RaidConfig__HFCBMLPLEAN(__this,method);
  __this_00 = (System_Threading_CancellationTokenSource_o *)
              thunk_FUN_01bda818(System_Threading_CancellationTokenSource_TypeInfo);
  System_Threading_CancellationTokenSource___ctor(__this_00,(MethodInfo *)0x0);
  ppSVar14 = &(__this->fields).PKFOIMOONKL;
  *ppSVar14 = __this_00;
  thunk_FUN_01c20e04(ppSVar14,__this_00);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar5 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  __this_01 = (RaidConfig_o *)IFAMAAGNCBJ__FJMALJPIMBO((MethodInfo *)0x0);
  pSVar6 = RaidConfig__NNJKLBBDFFO(__this_01,method_00);
  uVar7 = thunk_FUN_01bda818(System_Action<EDLFPEGBIFO>_TypeInfo);
  method_01 = (MethodInfo_27FB8F4 *)0x0;
  System_Action<object>___ctor();
  if (pIVar5 != (Il2CppObject *)0x0) {
    iVar1 = *(int *)&pIVar5[4].klass;
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    SVar8 = System_TimeSpan__FromMilliseconds((double)iVar1,(MethodInfo *)0x0);
    local_50 = 0;
    uStack_48 = 0;
    __this_02.fields.value.fields._ticks = SVar8.fields._ticks;
    __this_02.fields._0_8_ = &local_50;
    System_Nullable<TimeSpan>___ctor
              (__this_02,(System_TimeSpan_o)Method_System_Nullable<TimeSpan>__ctor__._ticks,
               method_01);
    if ((*ppSVar14 != (System_Threading_CancellationTokenSource_o *)0x0) &&
       (SVar9 = System_Threading_CancellationTokenSource__get_Token(*ppSVar14,(MethodInfo *)0x0),
       uVar4 = uStack_48, uVar3 = local_50, __this_01 != (RaidConfig_o *)0x0)) {
      pJVar11 = __this_01->klass;
      uVar2._0_1_ = (pJVar11->_2).rank;
      uVar2._1_1_ = (pJVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pJVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)CFOCLEDKNKL_TypeInfo) {
            pVVar10 = &(pJVar11->vtable)._0_Equals + *piVar13;
            goto LAB_030f831c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar10 = (VirtualInvokeData *)FUN_01b81914(__this_01,CFOCLEDKNKL_TypeInfo,0);
LAB_030f831c:
      (*pVVar10->methodPtr)
                (__this_01,pSVar6,uVar7,0,0,1,1,in_x7,uVar3,uVar4,1,SVar9.fields._source,
                 pVVar10->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HFCBMLPLEAN()  [RVA 0x2FF836C]
// RaidConfig$$HFCBMLPLEAN @ RVA 0x2FF836C

void RaidConfig__HFCBMLPLEAN(RaidConfig_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o **ppSVar1;
  
  ppSVar1 = &(__this->fields).PKFOIMOONKL;
  if (*ppSVar1 == (System_Threading_CancellationTokenSource_o *)0x0) {
    return;
  }
  System_Threading_CancellationTokenSource__Cancel(*ppSVar1,(MethodInfo *)0x0);
  if (*ppSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) {
    System_Threading_CancellationTokenSource__Dispose(*ppSVar1,(MethodInfo *)0x0);
    *ppSVar1 = (System_Threading_CancellationTokenSource_o *)0x0;
    thunk_FUN_01c20e04(ppSVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RaidConfig.BEGFIIECDMN KIENKNOPIHE()  [RVA 0x2FF84D4]
// RaidConfig$$KIENKNOPIHE @ RVA 0x2FF84D4

RaidConfig_BEGFIIECDMN_o * RaidConfig__KIENKNOPIHE(RaidConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._MFDCPFIBKNL_k__BackingField;
}


// ===== public void AHHIFNGFKMO(RaidConfig.EMDEPOFJFEF CJNHFNHJHPE)  [RVA 0x2FF84DC]
// RaidConfig$$AHHIFNGFKMO @ RVA 0x2FF84DC

void RaidConfig__AHHIFNGFKMO
               (RaidConfig_o *__this,RaidConfig_EMDEPOFJFEF_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GJCMAADAOHD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void GGCHIHDMAEA(RaidConfig.DBNJFPILODG CJNHFNHJHPE)  [RVA 0x2FF84E4]
// RaidConfig$$GGCHIHDMAEA @ RVA 0x2FF84E4

void RaidConfig__GGCHIHDMAEA
               (RaidConfig_o *__this,RaidConfig_DBNJFPILODG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LGFNDLOCGPB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public RaidConfig.AEJBILHMFDB NGNDIIKOGCP()  [RVA 0x2FF84EC]
// RaidConfig$$NGNDIIKOGCP @ RVA 0x2FF84EC

RaidConfig_AEJBILHMFDB_o * RaidConfig__NGNDIIKOGCP(RaidConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._JMEOCLFDHMM_k__BackingField;
}


// ===== public RaidConfig.EJICJNOEGGE BCCIOHLIDLA()  [RVA 0x2FF84F4]
// RaidConfig$$BCCIOHLIDLA @ RVA 0x2FF84F4

RaidConfig_EJICJNOEGGE_o * RaidConfig__BCCIOHLIDLA(RaidConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._LEIIIBPIJGJ_k__BackingField;
}


// ===== private static string HHONKPEIEAD()  [RVA 0x2FF84FC]
// RaidConfig$$HHONKPEIEAD @ RVA 0x2FF84FC

System_String_o * RaidConfig__HHONKPEIEAD(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565ab3 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_20409/*"raid_configs.zip"*/);
    DAT_04565ab3 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__GAFKBFMBPKO((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_20409/*"raid_configs.zip"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public RaidConfig.EFAJBOEHPLJ BHJOLIJDBLO(string BJEEDJEKAMF)  [RVA 0x2FF7E70]
// RaidConfig$$BHJOLIJDBLO @ RVA 0x2FF7E70

RaidConfig_EFAJBOEHPLJ_o *
RaidConfig__BHJOLIJDBLO(RaidConfig_o *__this,System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  RaidConfig_NOPCEDPNNKO_o *__this_00;
  RaidConfig_EFAJBOEHPLJ_o *pJVar1;
  
                    /* catch() { ... } // from try @ 030f7e3c with catch @ 030f7e70 */
  __this_00 = (__this->fields).OFMMMBIIDAE;
                    /* catch() { ... } // from try @ 030f7e20 with catch @ 030f7e74
                       catch() { ... } // from try @ 030f7e5c with catch @ 030f7e74 */
  if (__this_00 != (RaidConfig_NOPCEDPNNKO_o *)0x0) {
    pJVar1 = RaidConfig_NOPCEDPNNKO__BHJOLIJDBLO(__this_00,BJEEDJEKAMF,method);
    return pJVar1;
  }
                    /* try { // try from 030f7e7c to 031f7e7f has its CatchHandler @ 030f7f4c */
  return (RaidConfig_EFAJBOEHPLJ_o *)0x0;
}


// ===== public void OEAMOGGHOEA(RaidConfig.EJICJNOEGGE CJNHFNHJHPE)  [RVA 0x2FF8654]
// RaidConfig$$OEAMOGGHOEA @ RVA 0x2FF8654

void RaidConfig__OEAMOGGHOEA
               (RaidConfig_o *__this,RaidConfig_EJICJNOEGGE_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LEIIIBPIJGJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x2FF865C]
// RaidConfig$$.ctor @ RVA 0x2FF865C

void RaidConfig___ctor(RaidConfig_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  POLAJNLKPAK_o *__this_00;
  RaidConfig_GIIEJKGFDPL_o *__this_01;
  RaidConfig_AEDJNABHPOF_o **ppJVar3;
  System_Collections_Generic_List_NEFKBLNBOAB__o *pSVar4;
  NEFKBLNBOAB_o *pNVar5;
  NLGPPDPDGPH_o *__this_02;
  MethodInfo *extraout_x1;
  NEFKBLNBOAB_array *pNVar6;
  System_Collections_Generic_List_NEFKBLNBOAB__o **ppSVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_04565ab4 & 1) == 0) {
    FUN_01bab630(&CODBIIHHEEC_TypeInfo);
    FUN_01bab630(&FLAGGMBLIEL_TypeInfo);
    FUN_01bab630(&RaidConfig_GIIEJKGFDPL_TypeInfo);
    FUN_01bab630(&IIJACPOFEEK_TypeInfo);
    FUN_01bab630(&JDEOKJDONFF_TypeInfo);
    FUN_01bab630(&KDGKPFMAMKK_TypeInfo);
    FUN_01bab630(&KECOALKGCOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NEFKBLNBOAB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NEFKBLNBOAB>_TypeInfo);
    FUN_01bab630(&MHGKHENCBFO_TypeInfo);
    FUN_01bab630(&NLGPPDPDGPH_TypeInfo);
    FUN_01bab630(&OEGNNGJNBJD_TypeInfo);
    FUN_01bab630(&OMKKIBHMGFH_TypeInfo);
    FUN_01bab630(&OMNKOCMMBEN_TypeInfo);
    FUN_01bab630(&OOODKCJANAD_TypeInfo);
    FUN_01bab630(&POLAJNLKPAK_TypeInfo);
    FUN_01bab630(&StringLiteral_21794/*"unity/RaidItems.xml"*/);
    FUN_01bab630(&StringLiteral_21795/*"unity/RestrictedItems.xml"*/);
    FUN_01bab630(&StringLiteral_21792/*"unity/Leagues.xml"*/);
    FUN_01bab630(&StringLiteral_21798/*"unity/config.xml"*/);
    FUN_01bab630(&StringLiteral_21791/*"unity/DailyQuests.xml"*/);
    FUN_01bab630(&StringLiteral_21790/*"unity/ClanSettings.xml"*/);
    FUN_01bab630(&StringLiteral_21793/*"unity/LootContainers.xml"*/);
    FUN_01bab630(&StringLiteral_21789/*"unity/BattlePass.xml"*/);
    FUN_01bab630(&StringLiteral_21800/*"unity/tacticSettings.xml"*/);
    FUN_01bab630(&StringLiteral_21796/*"unity/ServerPerks.xml"*/);
    FUN_01bab630(&StringLiteral_21797/*"unity/VerifyAchievements.xml"*/);
    DAT_04565ab4 = 1;
    method = extraout_x1;
  }
  __this_00 = (POLAJNLKPAK_o *)thunk_FUN_01bda818(POLAJNLKPAK_TypeInfo,method);
  POLAJNLKPAK___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).FMPOOGLPALN = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  auVar8 = thunk_FUN_01bda818(RaidConfig_GIIEJKGFDPL_TypeInfo);
  __this_01 = auVar8._0_8_;
  RaidConfig_GIIEJKGFDPL___ctor(__this_01,auVar8._8_8_);
  ppJVar3 = &(__this->fields).ICGFIOLHAMK;
  *ppJVar3 = (RaidConfig_AEDJNABHPOF_o *)__this_01;
  thunk_FUN_01c20e04(ppJVar3,__this_01);
  pSVar4 = (System_Collections_Generic_List_NEFKBLNBOAB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NEFKBLNBOAB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<NEFKBLNBOAB>__ctor__);
  ppSVar7 = &(__this->fields).NDPALCPICPD;
  *ppSVar7 = pSVar4;
  thunk_FUN_01c20e04(ppSVar7,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar4 = *ppSVar7;
  pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(OMNKOCMMBEN_TypeInfo);
  OMNKOCMMBEN___ctor((OMNKOCMMBEN_o *)pNVar5,StringLiteral_21798/*"unity/config.xml"*/,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
  if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
    pNVar6 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
      uVar1 = (pSVar4->fields)._size;
      if (uVar1 < (uint)pNVar6->max_length) {
        (pSVar4->fields)._size = uVar1 + 1;
        pNVar6->m_Items[(int)uVar1] = pNVar5;
        thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pNVar5,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar4 = *ppSVar7;
      pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(JDEOKJDONFF_TypeInfo);
      JDEOKJDONFF___ctor((JDEOKJDONFF_o *)pNVar5,StringLiteral_21800/*"unity/tacticSettings.xml"*/,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
      if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
        pNVar6 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
          uVar1 = (pSVar4->fields)._size;
          if (uVar1 < (uint)pNVar6->max_length) {
            (pSVar4->fields)._size = uVar1 + 1;
            pNVar6->m_Items[(int)uVar1] = pNVar5;
            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pNVar5,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar4 = *ppSVar7;
          pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(OEGNNGJNBJD_TypeInfo);
          OEGNNGJNBJD___ctor((OEGNNGJNBJD_o *)pNVar5,StringLiteral_21792/*"unity/Leagues.xml"*/,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
          if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
            pNVar6 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
              uVar1 = (pSVar4->fields)._size;
              if (uVar1 < (uint)pNVar6->max_length) {
                (pSVar4->fields)._size = uVar1 + 1;
                pNVar6->m_Items[(int)uVar1] = pNVar5;
                thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (Il2CppObject *)pNVar5,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              pSVar4 = *ppSVar7;
              pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(KECOALKGCOI_TypeInfo);
              KECOALKGCOI___ctor((KECOALKGCOI_o *)pNVar5,StringLiteral_21793/*"unity/LootContainers.xml"*/,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
              if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                pNVar6 = (pSVar4->fields)._items;
                (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                  uVar1 = (pSVar4->fields)._size;
                  if (uVar1 < (uint)pNVar6->max_length) {
                    (pSVar4->fields)._size = uVar1 + 1;
                    pNVar6->m_Items[(int)uVar1] = pNVar5;
                    thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar4,
                               (Il2CppObject *)pNVar5,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar4 = *ppSVar7;
                  pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(KDGKPFMAMKK_TypeInfo);
                  KDGKPFMAMKK___ctor((KDGKPFMAMKK_o *)pNVar5,StringLiteral_21794/*"unity/RaidItems.xml"*/,(MethodInfo *)0x0);
                  lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                  if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                    pNVar6 = (pSVar4->fields)._items;
                    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                    if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                      uVar1 = (pSVar4->fields)._size;
                      if (uVar1 < (uint)pNVar6->max_length) {
                        (pSVar4->fields)._size = uVar1 + 1;
                        pNVar6->m_Items[(int)uVar1] = pNVar5;
                        thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar4,
                                   (Il2CppObject *)pNVar5,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      pSVar4 = *ppSVar7;
                      pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(IIJACPOFEEK_TypeInfo);
                      IIJACPOFEEK___ctor((IIJACPOFEEK_o *)pNVar5,StringLiteral_21797/*"unity/VerifyAchievements.xml"*/,
                                         (MethodInfo *)0x0);
                      lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                      if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                        pNVar6 = (pSVar4->fields)._items;
                        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                        if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                          uVar1 = (pSVar4->fields)._size;
                          if (uVar1 < (uint)pNVar6->max_length) {
                            (pSVar4->fields)._size = uVar1 + 1;
                            pNVar6->m_Items[(int)uVar1] = pNVar5;
                            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar4,
                                       (Il2CppObject *)pNVar5,
                                       *(MethodInfo_26E4DAC **)
                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                          }
                          pSVar4 = *ppSVar7;
                          pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(OOODKCJANAD_TypeInfo);
                          OOODKCJANAD___ctor((OOODKCJANAD_o *)pNVar5,StringLiteral_21796/*"unity/ServerPerks.xml"*/,
                                             (MethodInfo *)0x0);
                          lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                          if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                            pNVar6 = (pSVar4->fields)._items;
                            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                            if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                              uVar1 = (pSVar4->fields)._size;
                              if (uVar1 < (uint)pNVar6->max_length) {
                                (pSVar4->fields)._size = uVar1 + 1;
                                pNVar6->m_Items[(int)uVar1] = pNVar5;
                                thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar4,
                                           (Il2CppObject *)pNVar5,
                                           *(MethodInfo_26E4DAC **)
                                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                              }
                              pSVar4 = *ppSVar7;
                              pNVar5 = (NEFKBLNBOAB_o *)thunk_FUN_01bda818(FLAGGMBLIEL_TypeInfo);
                              FLAGGMBLIEL___ctor((FLAGGMBLIEL_o *)pNVar5,StringLiteral_21791/*"unity/DailyQuests.xml"*/,
                                                 (MethodInfo *)0x0);
                              lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                              if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                                pNVar6 = (pSVar4->fields)._items;
                                (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                                if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                  uVar1 = (pSVar4->fields)._size;
                                  if (uVar1 < (uint)pNVar6->max_length) {
                                    (pSVar4->fields)._size = uVar1 + 1;
                                    pNVar6->m_Items[(int)uVar1] = pNVar5;
                                    thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                                  }
                                  else {
                                    System_Collections_Generic_List<object>__AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar4,
                                               (Il2CppObject *)pNVar5,
                                               *(MethodInfo_26E4DAC **)
                                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                                  }
                                  pSVar4 = *ppSVar7;
                                  __this_02 = (NLGPPDPDGPH_o *)
                                              thunk_FUN_01bda818(NLGPPDPDGPH_TypeInfo);
                                  NLGPPDPDGPH___ctor(__this_02,(MethodInfo *)0x0);
                                  lVar2 = Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                                  if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o *)
                                                0x0) {
                                    pNVar6 = (pSVar4->fields)._items;
                                    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                                    if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                      uVar1 = (pSVar4->fields)._size;
                                      if (uVar1 < (uint)pNVar6->max_length) {
                                        (pSVar4->fields)._size = uVar1 + 1;
                                        pNVar6->m_Items[(int)uVar1] = (NEFKBLNBOAB_o *)__this_02;
                                        thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,__this_02);
                                      }
                                      else {
                                        System_Collections_Generic_List<object>__AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)
                                                   pSVar4,(Il2CppObject *)__this_02,
                                                   *(MethodInfo_26E4DAC **)
                                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      pSVar4 = *ppSVar7;
                                      pNVar5 = (NEFKBLNBOAB_o *)
                                               thunk_FUN_01bda818(MHGKHENCBFO_TypeInfo);
                                      MHGKHENCBFO___ctor((MHGKHENCBFO_o *)pNVar5,StringLiteral_21795/*"unity/RestrictedItems.xml"*/
                                                         ,(MethodInfo *)0x0);
                                      lVar2 = 
                                      Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                                      if (pSVar4 != (System_Collections_Generic_List_NEFKBLNBOAB__o
                                                     *)0x0) {
                                        pNVar6 = (pSVar4->fields)._items;
                                        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                                        if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                          uVar1 = (pSVar4->fields)._size;
                                          if (uVar1 < (uint)pNVar6->max_length) {
                                            (pSVar4->fields)._size = uVar1 + 1;
                                            pNVar6->m_Items[(int)uVar1] = pNVar5;
                                            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar5);
                                          }
                                          else {
                                            System_Collections_Generic_List<object>__AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)
                                                       pSVar4,(Il2CppObject *)pNVar5,
                                                       *(MethodInfo_26E4DAC **)
                                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) +
                                                        0x70));
                                          }
                                          pSVar4 = *ppSVar7;
                                          pNVar5 = (NEFKBLNBOAB_o *)
                                                   thunk_FUN_01bda818(CODBIIHHEEC_TypeInfo);
                                          CODBIIHHEEC___ctor((CODBIIHHEEC_o *)pNVar5,
                                                             StringLiteral_21790/*"unity/ClanSettings.xml"*/,(MethodInfo *)0x0);
                                          lVar2 = 
                                          Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__;
                                          if (pSVar4 != (
                                                  System_Collections_Generic_List_NEFKBLNBOAB__o *)
                                                  0x0) {
                                            pNVar6 = (pSVar4->fields)._items;
                                            (pSVar4->fields)._version =
                                                 (pSVar4->fields)._version + 1;
                                            if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                              uVar1 = (pSVar4->fields)._size;
                                              if (uVar1 < (uint)pNVar6->max_length) {
                                                (pSVar4->fields)._size = uVar1 + 1;
                                                pNVar6->m_Items[(int)uVar1] = pNVar5;
                                                thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,
                                                                   pNVar5);
                                              }
                                              else {
                                                System_Collections_Generic_List<object>__AddWithResize
                                                          ((
                                                  System_Collections_Generic_List_object__o *)pSVar4
                                                  ,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70
                                                   ));
                                              }
                                              pSVar4 = *ppSVar7;
                                              pNVar5 = (NEFKBLNBOAB_o *)
                                                       thunk_FUN_01bda818(OMKKIBHMGFH_TypeInfo);
                                              OMKKIBHMGFH___ctor((OMKKIBHMGFH_o *)pNVar5,
                                                                 StringLiteral_21789/*"unity/BattlePass.xml"*/,
                                                                 (MethodInfo *)0x0);
                                              lVar2 = 
                                              Method_System_Collections_Generic_List<NEFKBLNBOAB>_Add__
                                              ;
                                              if (pSVar4 != (
                                                  System_Collections_Generic_List_NEFKBLNBOAB__o *)
                                                  0x0) {
                                                pNVar6 = (pSVar4->fields)._items;
                                                (pSVar4->fields)._version =
                                                     (pSVar4->fields)._version + 1;
                                                if (pNVar6 != (NEFKBLNBOAB_array *)0x0) {
                                                  uVar1 = (pSVar4->fields)._size;
                                                  if (uVar1 < (uint)pNVar6->max_length) {
                                                    (pSVar4->fields)._size = uVar1 + 1;
                                                    pNVar6->m_Items[(int)uVar1] = pNVar5;
                                                    thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,
                                                                       pNVar5);
                                                    return;
                                                  }
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar4
                                                  ,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BDMPKICHMAJ(RaidConfig.JMEJFGKJNEA CJNHFNHJHPE)  [RVA 0x2FF8FAC]
// RaidConfig$$BDMPKICHMAJ @ RVA 0x2FF8FAC

void RaidConfig__BDMPKICHMAJ
               (RaidConfig_o *__this,RaidConfig_JMEJFGKJNEA_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._NFFDCNIMBHK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool EHALIINDAED(string KGLJICLJHEL)  [RVA 0x2FF8FB4]
// RaidConfig$$EHALIINDAED @ RVA 0x2FF8FB4

bool RaidConfig__EHALIINDAED(RaidConfig_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  RaidConfig_NOPCEDPNNKO_o *__this_00;
  RaidConfig_HJLEKMDIDPO_o *pJVar2;
  
  __this_00 = (__this->fields).OFMMMBIIDAE;
  bVar1 = false;
  if (__this_00 != (RaidConfig_NOPCEDPNNKO_o *)0x0) {
    pJVar2 = RaidConfig_NOPCEDPNNKO__FPPDGOEOJCH(__this_00,KGLJICLJHEL,method);
    bVar1 = pJVar2 != (RaidConfig_HJLEKMDIDPO_o *)0x0;
  }
  return bVar1;
}


// ===== public RaidConfig.DLMLPMIANHI POKGAHAGGND()  [RVA 0x2FF8FD4]
// RaidConfig$$POKGAHAGGND @ RVA 0x2FF8FD4

RaidConfig_DLMLPMIANHI_o * RaidConfig__POKGAHAGGND(RaidConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._OLABMBDNACG_k__BackingField;
}


// ===== private XmlNode IFFHCBKGMKC(string KGLJICLJHEL)  [RVA 0x2FF7DCC]
// RaidConfig$$IFFHCBKGMKC @ RVA 0x2FF7DCC

System_Xml_XmlNode_o *
RaidConfig__IFFHCBKGMKC(RaidConfig_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Xml_XmlDocument_o *pSVar1;
  long *plVar2;
  System_Xml_XmlNode_o *pSVar3;
  
                    /* catch() { ... } // from try @ 030f773c with catch @ 030f7dcc */
                    /* catch() { ... } // from try @ 030f7a98 with catch @ 030f7dd0 */
                    /* catch() { ... } // from try @ 030f7b8c with catch @ 030f7dd4 */
                    /* catch() { ... } // from try @ 030f76fc with catch @ 030f7dd8
                       catch() { ... } // from try @ 030f7b90 with catch @ 030f7dd8 */
                    /* catch() { ... } // from try @ 030f7b28 with catch @ 030f7ddc
                       catch() { ... } // from try @ 030f7c84 with catch @ 030f7ddc
                       catch() { ... } // from try @ 030f7cc4 with catch @ 030f7ddc */
                    /* catch() { ... } // from try @ 030f7b84 with catch @ 030f7de0 */
                    /* catch() { ... } // from try @ 030f7700 with catch @ 030f7de4 */
  if ((DAT_04565ab5 & 1) == 0) {
                    /* catch() { ... } // from try @ 030f7a48 with catch @ 030f7de8 */
                    /* catch() { ... } // from try @ 030f771c with catch @ 030f7dec */
                    /* catch() { ... } // from try @ 030f7b48 with catch @ 030f7df0 */
    FUN_01bab630(&StringLiteral_17601/*"data"*/);
                    /* catch() { ... } // from try @ 030f7a74 with catch @ 030f7df4
                       catch() { ... } // from try @ 030f7b88 with catch @ 030f7df4 */
                    /* catch() { ... } // from try @ 030f7694 with catch @ 030f7df8 */
    DAT_04565ab5 = 1;
  }
                    /* catch() { ... } // from try @ 030f7b7c with catch @ 030f7dfc */
  pSVar1 = (__this->fields).KGCDBPOBGFH;
                    /* catch() { ... } // from try @ 030f79a4 with catch @ 030f7e00 */
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
                    /* catch() { ... } // from try @ 030f7b44 with catch @ 030f7e04 */
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_17601/*"data"*/,
                                (pSVar1->klass->vtable)._51_get_Item.method);
                    /* try { // try from 030f7e20 to 031f7e37 has its CatchHandler @ 030f7e74 */
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030f7e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 030f7e3c to 031f7e3f has its CatchHandler @ 030f7e70 */
      pSVar3 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar2 + 0x468))(plVar2,KGLJICLJHEL,*(undefined8 *)(*plVar2 + 0x470));
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 030f7e40 to 031f7e5b has its CatchHandler @ 030f7598 */
  return (System_Xml_XmlNode_o *)0x0;
}


// ===== private void HKKGCOJHKGP(string MFOBJMOIKBA)  [RVA 0x2FF77E0]
// RaidConfig$$HKKGCOJHKGP @ RVA 0x2FF77E0

void RaidConfig__HKKGCOJHKGP(RaidConfig_o *__this,System_String_o *MFOBJMOIKBA,MethodInfo *method)

{
  RaidConfig_o *method_00;
  RaidConfig_o *extraout_x0;
  System_String_o *AAIHDEKMIJG;
  System_Action_o *pSVar1;
  
                    /* try { // try from 030f77e8 to 031f782b has its CatchHandler @ 030f7ed4 */
  method_00 = __this;
  if ((DAT_04565ab6 & 1) == 0) {
    method_00 = (RaidConfig_o *)FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04565ab6 = 1;
  }
  if (MFOBJMOIKBA != (System_String_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError((Il2CppObject *)MFOBJMOIKBA,(MethodInfo *)0x0);
    method_00 = extraout_x0;
  }
  pSVar1 = (__this->fields).FHJBJEIIMOB;
  if (pSVar1 != (System_Action_o *)0x0) {
    method_00 = (RaidConfig_o *)
                (*(code *)(pSVar1->fields).super.super.invoke_impl)
                          ((pSVar1->fields).super.super.method_code,
                           (pSVar1->fields).super.super.method);
  }
  AAIHDEKMIJG = RaidConfig__EMHGIBKDBOG((MethodInfo *)method_00);
  NEHNBJKKABI__MGLIGNDGBCN(AAIHDEKMIJG,(MethodInfo *)0x0);
  return;
}


// ===== public float LGJNPFBALBD(string DIIDFLPOBMC)  [RVA 0x2FF8FF0]
// RaidConfig$$LGJNPFBALBD @ RVA 0x2FF8FF0

float RaidConfig__LGJNPFBALBD
                (RaidConfig_o *__this,System_String_o *DIIDFLPOBMC,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  RaidConfig_NOPCEDPNNKO_o *pJVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565ab7 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_HJLEKMDIDPO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_HJLEKMDIDPO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_HJLEKMDIDPO>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_GetEnumerator__);
    DAT_04565ab7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pJVar3 = (__this->fields).OFMMMBIIDAE;
  fVar4 = 0.0;
  if (pJVar3 != (RaidConfig_NOPCEDPNNKO_o *)0x0) {
    __this_00 = (pJVar3->fields).GADHINPJDAF;
    if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<RaidConfig_HJLEKMDIDPO>_MoveNext__
                        );
      pIVar1 = local_48.fields._current;
      if (!bVar2) goto LAB_030f90b4;
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__op_Equality
                        (DIIDFLPOBMC,(System_String_o *)local_48.fields._current[1].klass,
                         (MethodInfo *)0x0);
    } while (!bVar2);
    fVar4 = *(float *)&pIVar1[5].klass;
LAB_030f90b4:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,
               Method_System_Collections_Generic_List_Enumerator<RaidConfig_HJLEKMDIDPO>_Dispose__)
    ;
  }
  return fVar4;
}


// ===== public RaidConfig.EMDEPOFJFEF JIHDGJJOJMG()  [RVA 0x2FF9164]
// RaidConfig$$JIHDGJJOJMG @ RVA 0x2FF9164

RaidConfig_EMDEPOFJFEF_o * RaidConfig__JIHDGJJOJMG(RaidConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._GJCMAADAOHD_k__BackingField;
}


// ===== public void GFECENPAABF(RaidConfig.PEFEIMKBGAH IMMNELPBGIF)  [RVA 0x2FF916C]
// RaidConfig$$GFECENPAABF @ RVA 0x2FF916C

void RaidConfig__GFECENPAABF
               (RaidConfig_o *__this,RaidConfig_PEFEIMKBGAH_o *IMMNELPBGIF,MethodInfo *method)

{
  (__this->fields).EJCCMMEGGFF = IMMNELPBGIF;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void GIENGNEGHPJ()  [RVA 0x2FF9174]
// RaidConfig$$GIENGNEGHPJ @ RVA 0x2FF9174

void RaidConfig__GIENGNEGHPJ(RaidConfig_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  
  if ((DAT_04565ab8 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    DAT_04565ab8 = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  pSVar2 = SF2Paths__GAFKBFMBPKO((MethodInfo *)0x0);
  bVar1 = System_IO_Directory__Exists(pSVar2,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (!bVar1) {
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = SF2Paths__GAFKBFMBPKO((MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory(pSVar2,(MethodInfo *)0x0);
    method_00 = extraout_x1_01;
  }
  RaidConfig__ECPPCMKAGNG(__this,method_00);
  return;
}


// ===== public void KMFCDLHDCOH(RaidConfig.NMAJABPDEPE CJNHFNHJHPE)  [RVA 0x2FF91FC]
// RaidConfig$$KMFCDLHDCOH @ RVA 0x2FF91FC

void RaidConfig__KMFCDLHDCOH
               (RaidConfig_o *__this,RaidConfig_NMAJABPDEPE_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IGLEEEJGEEJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void KJJAGIJIFOL(byte[] IMMNELPBGIF)  [RVA 0x2FF78D4]
// RaidConfig$$KJJAGIJIFOL @ RVA 0x2FF78D4

void RaidConfig__KJJAGIJIFOL
               (RaidConfig_o *__this,System_Byte_array *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  AFDHGAMMHEC_o *__this_00;
  MethodInfo *extraout_x0;
  System_Collections_Generic_List_NEFKBLNBOAB__o *__this_01;
  ulong uVar2;
  MethodInfo *method_00;
  System_String_o *AAIHDEKMIJG;
  System_Byte_array *extraout_x1;
  System_Byte_array *method_01;
  MethodInfo *method_02;
  System_Action_o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_01 = IMMNELPBGIF;
  if ((DAT_04565ab9 & 1) == 0) {
    FUN_01bab630(&AFDHGAMMHEC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_Dispose__);
                    /* try { // try from 030f7920 to 031f793b has its CatchHandler @ 030f7eb4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NEFKBLNBOAB>_GetEnumerator__);
    DAT_04565ab9 = 1;
    method_01 = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  RaidConfig__CECFFDLGAOH(__this,(MethodInfo *)method_01);
  __this_00 = (AFDHGAMMHEC_o *)thunk_FUN_01bda818(AFDHGAMMHEC_TypeInfo);
                    /* try { // try from 030f7960 to 031f7963 has its CatchHandler @ 030f7e8c */
  AFDHGAMMHEC___ctor(__this_00,IMMNELPBGIF,(MethodInfo *)0x0);
  method_00 = extraout_x0;
  if (__this_00 != (AFDHGAMMHEC_o *)0x0) {
    __this_01 = (__this->fields).NDPALCPICPD;
    if (__this_01 == (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 030f7a48 to 031f7a5b has its CatchHandler @ 030f7de8 */
      FUN_01bab8c8();
    }
                    /* try { // try from 030f7978 to 031f7983 has its CatchHandler @ 030f7e88 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<NEFKBLNBOAB>_GetEnumerator__);
    do {
                    /* try { // try from 030f79a4 to 031f79cb has its CatchHandler @ 030f7e00 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_MoveNext__);
      if (!bVar1) {
        bVar1 = true;
        goto LAB_030f79d8;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                        (local_48.fields._current,__this,__this_00,
                         (local_48.fields._current)->klass->vtable[4].method);
    } while ((uVar2 & 1) != 0);
    bVar1 = false;
                    /* try { // try from 030f79d0 to 031f79df has its CatchHandler @ 030f7e84 */
LAB_030f79d8:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_Dispose__);
    method_00 = (MethodInfo *)
                (*(__this_00->klass->vtable)._6_Dispose.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._6_Dispose.method);
                    /* try { // try from 030f79f4 to 031f79fb has its CatchHandler @ 030f7ea8 */
    if (bVar1) {
      pSVar3 = (__this->fields).MPJHFDGCCKC;
      goto joined_r0x030f7a08;
    }
  }
  pSVar3 = (__this->fields).FHJBJEIIMOB;
joined_r0x030f7a08:
  if (pSVar3 != (System_Action_o *)0x0) {
    method_00 = (MethodInfo *)
                (*(code *)(pSVar3->fields).super.super.invoke_impl)
                          ((pSVar3->fields).super.super.method_code,
                           (pSVar3->fields).super.super.method);
  }
  AAIHDEKMIJG = RaidConfig__EMHGIBKDBOG(method_00);
  NEHNBJKKABI__MGLIGNDGBCN(AAIHDEKMIJG,(MethodInfo *)0x0);
  RaidConfig__OPKHHDFGOAB(__this,method_02);
  return;
}


// ===== public void FHEABBABDPP(RaidConfig.AEJBILHMFDB CJNHFNHJHPE)  [RVA 0x2FF9370]
// RaidConfig$$FHEABBABDPP @ RVA 0x2FF9370

void RaidConfig__FHEABBABDPP
               (RaidConfig_o *__this,RaidConfig_AEJBILHMFDB_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JMEOCLFDHMM_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private string NNJKLBBDFFO()  [RVA 0x2FF83B4]
// RaidConfig$$NNJKLBBDFFO @ RVA 0x2FF83B4

System_String_o * RaidConfig__NNJKLBBDFFO(RaidConfig_o *__this,MethodInfo *method)

{
  bool bVar1;
  GCPFDLNAFDF_o *PCMFDDODKED;
  System_String_o *pSVar2;
  Il2CppObject *arg1;
  MethodInfo *extraout_x1;
  int32_t local_24;
  
  if ((DAT_04565aba & 1) == 0) {
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_22431/*"{0}?{1}"*/);
    DAT_04565aba = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  PCMFDDODKED = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  pSVar2 = BJFOKHADDPO__BBDBMLMOMDN((KADDELABILH_o *)PCMFDDODKED,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = string_TypeInfo->static_fields->Empty;
  }
  else {
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_24 = LIIFLGALGNK__HLMBDJOGONJ(1000000,(MethodInfo *)0x0);
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    pSVar2 = System_String__Format
                       (StringLiteral_22431/*"{0}?{1}"*/,(Il2CppObject *)pSVar2,arg1,(MethodInfo *)0x0);
  }
  return pSVar2;
}


// ===== public void LAAKMPJDNIA(RaidConfig.BEGFIIECDMN CJNHFNHJHPE)  [RVA 0x2FF9378]
// RaidConfig$$LAAKMPJDNIA @ RVA 0x2FF9378

void RaidConfig__LAAKMPJDNIA
               (RaidConfig_o *__this,RaidConfig_BEGFIIECDMN_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MFDCPFIBKNL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void CECFFDLGAOH()  [RVA 0x2FF9204]
// RaidConfig$$CECFFDLGAOH @ RVA 0x2FF9204

void RaidConfig__CECFFDLGAOH(RaidConfig_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  RaidConfig_AEJBILHMFDB_o **ppJVar3;
  RaidConfig_EMDEPOFJFEF_o **ppJVar4;
  RaidConfig_KJLILNPHJHI_o **ppJVar5;
  RaidConfig_NMAJABPDEPE_o **ppJVar6;
  RaidConfig_NOPCEDPNNKO_o **ppJVar7;
  RaidConfig_EJICJNOEGGE_o **ppJVar8;
  RaidConfig_DBNJFPILODG_o **ppJVar9;
  POLAJNLKPAK_o *__this_00;
  MCEIBCKPIAD_o *__this_01;
  RaidConfig_AEDJNABHPOF_c *pJVar10;
  ulong uVar11;
  int32_t *piVar12;
  RaidConfig_JMEJFGKJNEA_o **ppJVar13;
  RaidConfig_AEDJNABHPOF_o *pJVar14;
  
  if ((DAT_04565abb & 1) == 0) {
    FUN_01bab630(&RaidConfig_AEDJNABHPOF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565abb = 1;
  }
  pJVar14 = (__this->fields).ICGFIOLHAMK;
  if (pJVar14 != (RaidConfig_AEDJNABHPOF_o *)0x0) {
    pJVar10 = pJVar14->klass;
    uVar1._0_1_ = (pJVar10->_2).rank;
    uVar1._1_1_ = (pJVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pJVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)RaidConfig_AEDJNABHPOF_TypeInfo) {
          pVVar2 = pJVar10->vtable + (*piVar12 + 2);
          goto LAB_030f929c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pJVar14,RaidConfig_AEDJNABHPOF_TypeInfo,2);
LAB_030f929c:
    (*pVVar2->methodPtr)(pJVar14,pVVar2->method);
    ppJVar3 = &(__this->fields)._JMEOCLFDHMM_k__BackingField;
    *ppJVar3 = (RaidConfig_AEJBILHMFDB_o *)0x0;
    thunk_FUN_01c20e04(ppJVar3,0);
    ppJVar4 = &(__this->fields)._GJCMAADAOHD_k__BackingField;
    *ppJVar4 = (RaidConfig_EMDEPOFJFEF_o *)0x0;
    thunk_FUN_01c20e04(ppJVar4,0);
    ppJVar5 = &(__this->fields).OGPANCKIAED;
    *ppJVar5 = (RaidConfig_KJLILNPHJHI_o *)0x0;
    thunk_FUN_01c20e04(ppJVar5,0);
    ppJVar6 = &(__this->fields)._IGLEEEJGEEJ_k__BackingField;
    *ppJVar6 = (RaidConfig_NMAJABPDEPE_o *)0x0;
    thunk_FUN_01c20e04(ppJVar6,0);
    ppJVar7 = &(__this->fields).OFMMMBIIDAE;
    *ppJVar7 = (RaidConfig_NOPCEDPNNKO_o *)0x0;
    thunk_FUN_01c20e04(ppJVar7,0);
    ppJVar8 = &(__this->fields)._LEIIIBPIJGJ_k__BackingField;
    *ppJVar8 = (RaidConfig_EJICJNOEGGE_o *)0x0;
    thunk_FUN_01c20e04(ppJVar8,0);
    ppJVar9 = &(__this->fields)._LGFNDLOCGPB_k__BackingField;
    *ppJVar9 = (RaidConfig_DBNJFPILODG_o *)0x0;
    thunk_FUN_01c20e04(ppJVar9,0);
    ppJVar13 = &(__this->fields)._NFFDCNIMBHK_k__BackingField;
    *ppJVar13 = (RaidConfig_JMEJFGKJNEA_o *)0x0;
    thunk_FUN_01c20e04(ppJVar13,0);
    __this_00 = (__this->fields).FMPOOGLPALN;
    if (__this_00 != (POLAJNLKPAK_o *)0x0) {
      POLAJNLKPAK__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__IOMECNCIENO((MethodInfo *)0x0);
      if (__this_01 != (MCEIBCKPIAD_o *)0x0) {
        MCEIBCKPIAD__DGLJCGNHLIG(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RaidConfig.ODJJOAOCFKO DOKLIOAMCCO(string FLMDPLPNBFC)  [RVA 0x2FF9380]
// RaidConfig$$DOKLIOAMCCO @ RVA 0x2FF9380

RaidConfig_ODJJOAOCFKO_o *
RaidConfig__DOKLIOAMCCO(RaidConfig_o *__this,System_String_o *FLMDPLPNBFC,MethodInfo *method)

{
  RaidConfig_NOPCEDPNNKO_o *__this_00;
  RaidConfig_ODJJOAOCFKO_o *pJVar1;
  
  __this_00 = (__this->fields).OFMMMBIIDAE;
  if (__this_00 != (RaidConfig_NOPCEDPNNKO_o *)0x0) {
    pJVar1 = RaidConfig_NOPCEDPNNKO__DOKLIOAMCCO(__this_00,FLMDPLPNBFC,method);
    return pJVar1;
  }
  return (RaidConfig_ODJJOAOCFKO_o *)0x0;
}


// ===== public RaidConfig.NOPCEDPNNKO DNEELBNKEAP()  [RVA 0x2FF93C8]
// RaidConfig$$DNEELBNKEAP @ RVA 0x2FF93C8

RaidConfig_NOPCEDPNNKO_o * RaidConfig__DNEELBNKEAP(RaidConfig_o *__this,MethodInfo *method)

{
  return (__this->fields).OFMMMBIIDAE;
}


// ===== public HJEODECHNDG KAPJBGIIHAA()  [RVA 0x2FF93D0]
// RaidConfig$$KAPJBGIIHAA @ RVA 0x2FF93D0

HJEODECHNDG_o * RaidConfig__KAPJBGIIHAA(RaidConfig_o *__this,MethodInfo *method)

{
  RaidConfig_PEFEIMKBGAH_o *pJVar1;
  
  pJVar1 = (__this->fields).EJCCMMEGGFF;
  if (pJVar1 != (RaidConfig_PEFEIMKBGAH_o *)0x0) {
    return (pJVar1->fields).NJLMCECHLLG;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ONKKKOBNNHD(RaidConfig.KJLILNPHJHI CJNHFNHJHPE)  [RVA 0x2FF93EC]
// RaidConfig$$ONKKKOBNNHD @ RVA 0x2FF93EC

void RaidConfig__ONKKKOBNNHD
               (RaidConfig_o *__this,RaidConfig_KJLILNPHJHI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OGPANCKIAED = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public RaidConfig.EBEGCDCOHHJ NNCKFAHCIBE(int CBJKJCKDKJB)  [RVA 0x2FF93F4]
// RaidConfig$$NNCKFAHCIBE @ RVA 0x2FF93F4

RaidConfig_EBEGCDCOHHJ_o *
RaidConfig__NNCKFAHCIBE(RaidConfig_o *__this,int32_t CBJKJCKDKJB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  RaidConfig_EBEGCDCOHHJ_o *pJVar3;
  RaidConfig_NMAJABPDEPE_o *pJVar4;
  
  if ((DAT_04565abc & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_get_Item__
                );
    DAT_04565abc = 1;
  }
  pJVar4 = (__this->fields)._IGLEEEJGEEJ_k__BackingField;
  if ((pJVar4 != (RaidConfig_NMAJABPDEPE_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(pJVar4->fields).HJGMOINDJAK,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,CBJKJCKDKJB,
                       Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_ContainsKey__
                      );
    if (!bVar1) {
      return (RaidConfig_EBEGCDCOHHJ_o *)0x0;
    }
    pJVar4 = (__this->fields)._IGLEEEJGEEJ_k__BackingField;
    if ((pJVar4 != (RaidConfig_NMAJABPDEPE_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 (pJVar4->fields).HJGMOINDJAK,
       pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
      pJVar3 = (RaidConfig_EBEGCDCOHHJ_o *)
               System_Collections_Generic_Dictionary<int,_object>__get_Item
                         (pSVar2,CBJKJCKDKJB,
                          Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_get_Item__
                         );
      return pJVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void IKLEHIPAKCK()  [RVA 0x2FF8FDC]
// RaidConfig$$IKLEHIPAKCK @ RVA 0x2FF8FDC

void RaidConfig__IKLEHIPAKCK(MethodInfo *method)

{
  System_String_o *AAIHDEKMIJG;
  
  AAIHDEKMIJG = RaidConfig__EMHGIBKDBOG(method);
  NEHNBJKKABI__MGLIGNDGBCN(AAIHDEKMIJG,(MethodInfo *)0x0);
  return;
}


// ===== public void ALGENHCLPJG(Action CJNHFNHJHPE)  [RVA 0x2FF9498]
// RaidConfig$$ALGENHCLPJG @ RVA 0x2FF9498

void RaidConfig__ALGENHCLPJG(RaidConfig_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04565abd & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565abd = 1;
  }
  ppSVar4 = &(__this->fields).MPJHFDGCCKC;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public RaidConfig.BGJBFFKJHHD MJHBGJIIKEB(string KGLJICLJHEL)  [RVA 0x2FF9534]
// RaidConfig$$MJHBGJIIKEB @ RVA 0x2FF9534

RaidConfig_BGJBFFKJHHD_o *
RaidConfig__MJHBGJIIKEB(RaidConfig_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  RaidConfig_BGJBFFKJHHD_o *pJVar3;
  RaidConfig_KJLILNPHJHI_o *pJVar4;
  
  if ((DAT_04565abe & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_get_Item__
                );
    DAT_04565abe = 1;
  }
  pJVar4 = (__this->fields).OGPANCKIAED;
  if (pJVar4 == (RaidConfig_KJLILNPHJHI_o *)0x0) {
    return (RaidConfig_BGJBFFKJHHD_o *)0x0;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pJVar4->fields).EHGOHNHDKPP;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_ContainsKey__
                      );
    if (!bVar1) {
      return (RaidConfig_BGJBFFKJHHD_o *)0x0;
    }
    pJVar4 = (__this->fields).OGPANCKIAED;
    if ((pJVar4 != (RaidConfig_KJLILNPHJHI_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (pJVar4->fields).EHGOHNHDKPP,
       pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      pJVar3 = (RaidConfig_BGJBFFKJHHD_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                          Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_get_Item__
                         );
      return pJVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string BBIAIOFGMEA()  [RVA 0x2FF95D8]
// RaidConfig$$BBIAIOFGMEA @ RVA 0x2FF95D8

System_String_o * RaidConfig__BBIAIOFGMEA(RaidConfig_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_o *item;
  System_Collections_Generic_List_string__o *collection;
  RaidConfig_PEFEIMKBGAH_o *pJVar5;
  System_String_array *pSVar6;
  
  if ((DAT_04565abf & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04565abf = 1;
  }
  pJVar5 = (__this->fields).EJCCMMEGGFF;
  if ((pJVar5 == (RaidConfig_PEFEIMKBGAH_o *)0x0) ||
     (pSVar4 = (pJVar5->fields).AMKLDMEBJDP,
     pSVar4 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_030f97bc;
  if ((pSVar4->fields)._size == 0) {
    collection = (pJVar5->fields).JNCNFDFICON;
    if (collection == (System_Collections_Generic_List_string__o *)0x0) goto LAB_030f97bc;
    if ((collection->fields)._size < 1) {
      return (System_String_o *)0x0;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar4,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<string>_AddRange__);
    pJVar5 = (__this->fields).EJCCMMEGGFF;
    if ((pJVar5 == (RaidConfig_PEFEIMKBGAH_o *)0x0) ||
       (pSVar4 = (pJVar5->fields).JNCNFDFICON,
       pSVar4 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_030f97bc;
    iVar3 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar3,(MethodInfo *)0x0);
      pJVar5 = (__this->fields).EJCCMMEGGFF;
      if (pJVar5 == (RaidConfig_PEFEIMKBGAH_o *)0x0) goto LAB_030f97bc;
    }
  }
  pSVar4 = (pJVar5->fields).AMKLDMEBJDP;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    iVar3 = (pSVar4->fields)._size;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = LIIFLGALGNK__HLMBDJOGONJ(iVar3,(MethodInfo *)0x0);
    pJVar5 = (__this->fields).EJCCMMEGGFF;
    if ((pJVar5 != (RaidConfig_PEFEIMKBGAH_o *)0x0) &&
       (pSVar4 = (pJVar5->fields).AMKLDMEBJDP,
       pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
      item = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,iVar3,
                        Method_System_Collections_Generic_List<string>_get_Item__);
      pJVar5 = (__this->fields).EJCCMMEGGFF;
      if ((pJVar5 != (RaidConfig_PEFEIMKBGAH_o *)0x0) &&
         (pSVar4 = (pJVar5->fields).AMKLDMEBJDP,
         pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar4,iVar3,
                   Method_System_Collections_Generic_List<string>_RemoveAt__);
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pJVar5 = (__this->fields).EJCCMMEGGFF;
        if ((pJVar5 != (RaidConfig_PEFEIMKBGAH_o *)0x0) &&
           (pSVar4 = (pJVar5->fields).JNCNFDFICON,
           pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
          pSVar6 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pSVar6 != (System_String_array *)0x0) {
            uVar1 = (pSVar4->fields)._size;
            if (uVar1 < (uint)pSVar6->max_length) {
              (pSVar4->fields)._size = uVar1 + 1;
              pSVar6->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            return item;
          }
        }
      }
    }
  }
LAB_030f97bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

