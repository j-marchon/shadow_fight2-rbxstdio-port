// TypeDefIndex 1166
// Namespace: 
// public static class MGENAMAJALB
// Fields:
//   public const string HKGACMNJPIN = "/data/data/com.nekki.shadowfight/files";
//   public const string DIHILMAGNID = "/userdata";
//   private const string ECKGOFOJBCO = "/gamedata";
//   private const string CGOAENKMAIO = "/animations";
//   private const string CMAGKMIHFGC = "/animations/binary";
//   private const string MBPELMMKGMB = "/models";
//   private const string POEMMFLLKNA = "/localizations";
//   private const string CMCOOMPEEIB = "/locations";
//   private const string NLMAHDLOKAJ = "/statistics";
//   private const string IBPHOJINCNO = "/news";
//   private const string APJONHNOKKF = "/dojo_buttons";
//   private const string OBKGNGCPHBH = "/bundles";
//   private const string IGGIEIDIBOL = "/video";
//   private const string MKDFPCGHIEB = "/packs.xml";
//   private const string FPJFKBJOFAJ = "/revenueMultiplier.json";
//   private const string HHJEEILDCGN = "/raid_configs/";
//   private const string FHEMHPOMIKN = "Assets/src/GUI/Resources";
//   private const string LEOBHOMECDJ = "UI/Items/";
//   private const string HGLBKICFLIL = "UI/Users/";
//   private const string KNMDBFIIAKA = "UI/Skills/";
//   public const string MFMLJDLCCJN = "UI/Achievements/";
//   public const string EJPEOLFMGLC = "UI/Fullscreen/";
//   public const string BINMLAIGABD = "Textures/Logos/";
//   public const string ILLNDILEKAM = "Textures/buttons/map/";
//   public const string MFGILCKOBPK = "UI/battles/";
//   public static string HPEEIOBFMMI; // 0x0
//   public static string HDAMIJBIMGF; // 0x8
//   public static string NENINNJGODF; // 0x10
//   public static bool ACGDPPPMKBM; // 0x18
//   private static bool ECCPBJGMNPE; // 0x19

// ===== public static string GAFKBFMBPKO()  [RVA 0x310486C]
// MGENAMAJALB$$GAFKBFMBPKO @ RVA 0x310486C

System_String_o * MGENAMAJALB__GAFKBFMBPKO(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664e6 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1542/*"/raid_configs/"*/);
    DAT_045664e6 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1542/*"/raid_configs/"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static bool PLODHLPNKPP()  [RVA 0x310494C]
// MGENAMAJALB$$PLODHLPNKPP @ RVA 0x310494C

bool MGENAMAJALB__PLODHLPNKPP(MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045664e7 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1512/*"/data/data/com.nekki.shadowfight/files"*/);
    DAT_045664e7 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_String__op_Equality
                    (MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,StringLiteral_1512/*"/data/data/com.nekki.shadowfight/files"*/,
                     (MethodInfo *)0x0);
  return bVar1;
}


// ===== private static void .cctor()  [RVA 0x31049C0]
// MGENAMAJALB$$.cctor @ RVA 0x31049C0

void MGENAMAJALB___cctor(MethodInfo *method)

{
  MGENAMAJALB_StaticFields *pMVar1;
  
  if ((DAT_045664e8 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664e8 = 1;
  }
  MGENAMAJALB_TypeInfo->static_fields->HPEEIOBFMMI = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(MGENAMAJALB_TypeInfo->static_fields,StringLiteral_1/*""*/);
  MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  pMVar1 = MGENAMAJALB_TypeInfo->static_fields;
  pMVar1->ACGDPPPMKBM = true;
  pMVar1->ECCPBJGMNPE = false;
  return;
}


// ===== public static string CPIACIDINLI()  [RVA 0x3104A68]
// MGENAMAJALB$$CPIACIDINLI @ RVA 0x3104A68

System_String_o * MGENAMAJALB__CPIACIDINLI(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045664e9 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1557/*"/userdata"*/);
    DAT_045664e9 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_String__Concat
                     (MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,StringLiteral_1557/*"/userdata"*/,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string HGLLMMAIKHH()  [RVA 0x3104ADC]
// MGENAMAJALB$$HGLLMMAIKHH @ RVA 0x3104ADC

System_String_o * MGENAMAJALB__HGLLMMAIKHH(MethodInfo *method)

{
  if ((DAT_045664ea & 1) == 0) {
    FUN_01bab630(&StringLiteral_3131/*"Assets/src/GUI/Resources"*/);
    DAT_045664ea = 1;
  }
  return StringLiteral_3131/*"Assets/src/GUI/Resources"*/;
}


// ===== public static string CDEFMBKAPPC()  [RVA 0x3104B1C]
// MGENAMAJALB$$CDEFMBKAPPC @ RVA 0x3104B1C

System_String_o * MGENAMAJALB__CDEFMBKAPPC(MethodInfo *method)

{
  if ((DAT_045664eb & 1) == 0) {
    FUN_01bab630(&StringLiteral_14102/*"UI/Skills/"*/);
    DAT_045664eb = 1;
  }
  return StringLiteral_14102/*"UI/Skills/"*/;
}


// ===== public static string ANINCFLIDHO(string EIJDDKJONFO)  [RVA 0x3104B5C]
// MGENAMAJALB$$ANINCFLIDHO @ RVA 0x3104B5C

System_String_o * MGENAMAJALB__ANINCFLIDHO(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045664ec & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_22364/*"{0}/{1}"*/);
    DAT_045664ec = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  if (EIJDDKJONFO != (System_String_o *)0x0) {
    bVar1 = System_String__Contains
                      (EIJDDKJONFO,MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return EIJDDKJONFO;
    }
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = System_String__Format
                       (StringLiteral_22364/*"{0}/{1}"*/,
                        (Il2CppObject *)MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,
                        (Il2CppObject *)EIJDDKJONFO,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OAFGPIANJPJ()  [RVA 0x3104C1C]
// MGENAMAJALB$$OAFGPIANJPJ @ RVA 0x3104C1C

void MGENAMAJALB__OAFGPIANJPJ(MethodInfo *method)

{
  bool bVar1;
  MGENAMAJALB_c *pMVar2;
  System_String_o *pSVar3;
  
  if ((DAT_045664ed & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_045664ed = 1;
  }
  pMVar2 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    pMVar2 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar3 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)pMVar2);
  bVar1 = System_IO_Directory__Exists(pSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pMVar2 = MGENAMAJALB_TypeInfo;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      pMVar2 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
    }
    pSVar3 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)pMVar2);
    NEHNBJKKABI__IIOJEPFDGLE(pSVar3,true,(MethodInfo *)0x0);
  }
  pMVar2 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    pMVar2 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar3 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)pMVar2);
  NEHNBJKKABI__GLNBJGJPBFD(pSVar3,(MethodInfo *)0x0);
  return;
}


// ===== public static string ANDNJCLBPGJ()  [RVA 0x31048D8]
// MGENAMAJALB$$ANDNJCLBPGJ @ RVA 0x31048D8

System_String_o * MGENAMAJALB__ANDNJCLBPGJ(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045664ee & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1522/*"/gamedata"*/);
    DAT_045664ee = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_String__Concat
                     (MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,StringLiteral_1522/*"/gamedata"*/,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string FEEOPEBHPJI()  [RVA 0x3104D1C]
// MGENAMAJALB$$FEEOPEBHPJI @ RVA 0x3104D1C

System_String_o * MGENAMAJALB__FEEOPEBHPJI(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664ef & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1565/*"/video"*/);
    DAT_045664ef = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1565/*"/video"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string JKLFLNNFEMP()  [RVA 0x3104CB0]
// MGENAMAJALB$$JKLFLNNFEMP @ RVA 0x3104CB0

System_String_o * MGENAMAJALB__JKLFLNNFEMP(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664f0 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1507/*"/bundles"*/);
    DAT_045664f0 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1507/*"/bundles"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string AAELNNJNDIF()  [RVA 0x3104DFC]
// MGENAMAJALB$$AAELNNJNDIF @ RVA 0x3104DFC

System_String_o * MGENAMAJALB__AAELNNJNDIF(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664f1 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1503/*"/animations"*/);
    DAT_045664f1 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1503/*"/animations"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static void MDGHLLMANGH()  [RVA 0x3104E68]
// MGENAMAJALB$$MDGHLLMANGH @ RVA 0x3104E68

void MGENAMAJALB__MDGHLLMANGH(MethodInfo *method)

{
  bool bVar1;
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar2;
  
  if ((DAT_045664f2 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_045664f2 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar2 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)method_00);
  bVar1 = NEHNBJKKABI__GLNBJGJPBFD(pSVar2,(MethodInfo *)0x0);
  pSVar2 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)(ulong)bVar1);
  NEHNBJKKABI__GLNBJGJPBFD(pSVar2,(MethodInfo *)0x0);
  return;
}


// ===== public static void GIENGNEGHPJ()  [RVA 0x3104EC8]
// MGENAMAJALB$$GIENGNEGHPJ @ RVA 0x3104EC8

void MGENAMAJALB__GIENGNEGHPJ(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  System_String_o *pSVar4;
  MGENAMAJALB_c *method_01;
  MGENAMAJALB_StaticFields *pMVar5;
  System_String_o **ppSVar6;
  
  if ((DAT_045664f3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_11515/*"SF2Paths::Init: CurrentCachedStorage: "*/);
    FUN_01bab630(&StringLiteral_11516/*"SF2Paths::Init: CurrentStorage: "*/);
    FUN_01bab630(&StringLiteral_1557/*"/userdata"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664f3 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar5 = MGENAMAJALB_TypeInfo->static_fields;
  if (pMVar5->ECCPBJGMNPE != false) {
    return;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar5 = MGENAMAJALB_TypeInfo->static_fields;
  }
  pMVar5->ECCPBJGMNPE = true;
  pMVar5->HPEEIOBFMMI = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(MGENAMAJALB_TypeInfo->static_fields,StringLiteral_1/*""*/);
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = UnityEngine_Application__get_persistentDataPath((MethodInfo *)0x0);
  ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF;
  *ppSVar6 = pSVar3;
  thunk_FUN_01c20e04(ppSVar6,pSVar3);
  pSVar3 = UnityEngine_Application__get_persistentDataPath((MethodInfo *)0x0);
  ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF;
  *ppSVar6 = pSVar3;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar6,pSVar3);
  MGENAMAJALB_TypeInfo->static_fields->ACGDPPPMKBM = true;
  pSVar3 = MGENAMAJALB__EDFAAGIOLKF(method_00);
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                    (MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,(MethodInfo *)0x0);
  uVar1 = (MGENAMAJALB_TypeInfo->_2).cctor_finished;
                    /* try { // try from 03205034 to 03305133 has its CatchHandler @ 03205034
                       catch() { ... } // from try @ 03205034 with catch @ 03205034
                       catch() { ... } // from try @ 03205158 with catch @ 03205034
                       catch() { ... } // from try @ 03205184 with catch @ 03205034
                       catch() { ... } // from try @ 032051ac with catch @ 03205034
                       catch() { ... } // from try @ 032051ec with catch @ 03205034 */
  if (bVar2) {
    if (uVar1 == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
    }
    ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF;
    *ppSVar6 = pSVar3;
    thunk_FUN_01c20e04(ppSVar6,pSVar3);
    ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF;
    *ppSVar6 = pSVar3;
    thunk_FUN_01c20e04(ppSVar6,pSVar3);
  }
  else {
    if (uVar1 == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
    }
    pSVar4 = System_String__Concat
                       (MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,StringLiteral_1557/*"/userdata"*/,
                        (MethodInfo *)0x0);
    bVar2 = System_IO_Directory__Exists(pSVar4,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar4 = System_String__Concat(pSVar3,StringLiteral_1557/*"/userdata"*/,(MethodInfo *)0x0);
      bVar2 = System_IO_Directory__Exists(pSVar4,(MethodInfo *)0x0);
      if (bVar2) {
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF;
        *ppSVar6 = pSVar3;
        thunk_FUN_01c20e04(ppSVar6,pSVar3);
        ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF;
        *ppSVar6 = pSVar3;
        thunk_FUN_01c20e04(ppSVar6,pSVar3);
      }
    }
  }
  method_01 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_01 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  MGENAMAJALB__MDGHLLMANGH((MethodInfo *)method_01);
  pSVar3 = System_String__Concat
                     (StringLiteral_11516/*"SF2Paths::Init: CurrentStorage: "*/,MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,
                      (MethodInfo *)0x0);
                    /* try { // try from 03205134 to 0330513b has its CatchHandler @ 03205190 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 03205154 to 03305157 has its CatchHandler @ 0320518c */
                    /* try { // try from 03205158 to 0330517f has its CatchHandler @ 03205034 */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat
                     (StringLiteral_11515/*"SF2Paths::Init: CurrentCachedStorage: "*/,MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,
                      (MethodInfo *)0x0);
                    /* try { // try from 03205180 to 03305183 has its CatchHandler @ 03205188 */
                    /* try { // try from 03205184 to 033051a7 has its CatchHandler @ 03205034 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03205180 with catch @ 03205188
                        */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  return;
}


// ===== public static string DPOEFEMDMJI()  [RVA 0x310582C]
// MGENAMAJALB$$DPOEFEMDMJI @ RVA 0x310582C

System_String_o * MGENAMAJALB__DPOEFEMDMJI(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664f4 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1528/*"/locations"*/);
    DAT_045664f4 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1528/*"/locations"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string HLHHEMGIIMC()  [RVA 0x3105898]
// MGENAMAJALB$$HLHHEMGIIMC @ RVA 0x3105898

System_String_o * MGENAMAJALB__HLHHEMGIIMC(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664f5 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1527/*"/localizations"*/);
    DAT_045664f5 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1527/*"/localizations"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string GACHMMDHOJE()  [RVA 0x3105904]
// MGENAMAJALB$$GACHMMDHOJE @ RVA 0x3105904

System_String_o * MGENAMAJALB__GACHMMDHOJE(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664f6 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1538/*"/packs.xml"*/);
    DAT_045664f6 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1538/*"/packs.xml"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string OGBJBBKMGCC()  [RVA 0x3105970]
// MGENAMAJALB$$OGBJBBKMGCC @ RVA 0x3105970

System_String_o * MGENAMAJALB__OGBJBBKMGCC(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664f7 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1543/*"/revenueMultiplier.json"*/);
    DAT_045664f7 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1543/*"/revenueMultiplier.json"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string DGOOOLFLFEH()  [RVA 0x31059DC]
// MGENAMAJALB$$DGOOOLFLFEH @ RVA 0x31059DC

System_String_o * MGENAMAJALB__DGOOOLFLFEH(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664f8 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1504/*"/animations/binary"*/);
    DAT_045664f8 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1504/*"/animations/binary"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string LGAGCPLBLHL()  [RVA 0x3105A48]
// MGENAMAJALB$$LGAGCPLBLHL @ RVA 0x3105A48

System_String_o * MGENAMAJALB__LGAGCPLBLHL(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664f9 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1513/*"/dojo_buttons"*/);
    DAT_045664f9 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1513/*"/dojo_buttons"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string GNOADHJNPCJ()  [RVA 0x3104D88]
// MGENAMAJALB$$GNOADHJNPCJ @ RVA 0x3104D88

System_String_o * MGENAMAJALB__GNOADHJNPCJ(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045664fa & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1522/*"/gamedata"*/);
    DAT_045664fa = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_String__Concat
                     (MGENAMAJALB_TypeInfo->static_fields->HPEEIOBFMMI,StringLiteral_1522/*"/gamedata"*/,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string AAHKIHMHJDP()  [RVA 0x3105AB4]
// MGENAMAJALB$$AAHKIHMHJDP @ RVA 0x3105AB4

System_String_o * MGENAMAJALB__AAHKIHMHJDP(MethodInfo *method)

{
  if ((DAT_045664fb & 1) == 0) {
    FUN_01bab630(&StringLiteral_14100/*"UI/Items/"*/);
    DAT_045664fb = 1;
  }
  return StringLiteral_14100/*"UI/Items/"*/;
}


// ===== public static string CAACPGEHHFC()  [RVA 0x3105AF4]
// MGENAMAJALB$$CAACPGEHHFC @ RVA 0x3105AF4

System_String_o * MGENAMAJALB__CAACPGEHHFC(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664fc & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1546/*"/statistics"*/);
    DAT_045664fc = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1546/*"/statistics"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string OPLAHNAJGAJ()  [RVA 0x3105B60]
// MGENAMAJALB$$OPLAHNAJGAJ @ RVA 0x3105B60

System_String_o * MGENAMAJALB__OPLAHNAJGAJ(MethodInfo *method)

{
  if ((DAT_045664fd & 1) == 0) {
    FUN_01bab630(&StringLiteral_14112/*"UI/Users/"*/);
    DAT_045664fd = 1;
  }
  return StringLiteral_14112/*"UI/Users/"*/;
}


// ===== public static string NBLCEHIPPHB()  [RVA 0x3105BA0]
// MGENAMAJALB$$NBLCEHIPPHB @ RVA 0x3105BA0

System_String_o * MGENAMAJALB__NBLCEHIPPHB(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045664fe & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1536/*"/news"*/);
    DAT_045664fe = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1536/*"/news"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string EDFAAGIOLKF()  [RVA 0x3105274]
// MGENAMAJALB$$EDFAAGIOLKF @ RVA 0x3105274

/* WARNING: Removing unreachable block (ram,0x032055c0) */
/* WARNING: Removing unreachable block (ram,0x032055c8) */

System_String_o * MGENAMAJALB__EDFAAGIOLKF(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  intptr_t iVar3;
  UnityEngine_AndroidJavaObject_o *__this;
  UnityEngine_AndroidJavaObject_o *__this_00;
  intptr_t iVar4;
  UnityEngine_jvalue_array *pUVar5;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  UnityEngine_AndroidJavaObject_c *pUVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045664ff & 1) == 0) {
    FUN_01bab630(&UnityEngine_AndroidJavaClass_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_AndroidJavaObject_GetStatic<AndroidJavaObject>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_19250/*"java/io/File"*/);
    FUN_01bab630(&StringLiteral_18407/*"getAbsolutePath"*/);
    FUN_01bab630(&StringLiteral_17275/*"com.unity3d.player.UnityPlayer"*/);
    FUN_01bab630(&StringLiteral_18485/*"getFilesDir"*/);
    FUN_01bab630(&StringLiteral_16428/*"android/content/ContextWrapper"*/);
    FUN_01bab630(&StringLiteral_1512/*"/data/data/com.nekki.shadowfight/files"*/);
                    /* try { // try from 0320532c to 03305333 has its CatchHandler @ 032053d8 */
    FUN_01bab630(&StringLiteral_999/*"()Ljava/io/File;"*/);
    FUN_01bab630(&StringLiteral_1001/*"()Ljava/lang/String;"*/);
                    /* try { // try from 03205344 to 0330534b has its CatchHandler @ 032053d4 */
    FUN_01bab630(&StringLiteral_14653/*"Using fallback path: /data/data/com.nekki.shadowfight/files"*/);
    FUN_01bab630(&StringLiteral_17514/*"currentActivity"*/);
                    /* try { // try from 03205354 to 03305363 has its CatchHandler @ 032053d0 */
    FUN_01bab630(&UnityEngine_jvalue___TypeInfo);
                    /* try { // try from 03205364 to 0330536f has its CatchHandler @ 032053cc */
    DAT_045664ff = 1;
  }
                    /* try { // try from 03205370 to 033053f3 has its CatchHandler @ 03205204 */
  iVar3 = UnityEngine_AndroidJNI__FindClass(StringLiteral_16428/*"android/content/ContextWrapper"*/,(MethodInfo *)0x0);
  iVar3 = UnityEngine_AndroidJNIHelper__GetMethodID
                    (iVar3,StringLiteral_18485/*"getFilesDir"*/,StringLiteral_999/*"()Ljava/io/File;"*/,(MethodInfo *)0x0);
  __this = (UnityEngine_AndroidJavaObject_o *)
           thunk_FUN_01bda818(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor
            ((UnityEngine_AndroidJavaClass_o *)__this,StringLiteral_17275/*"com.unity3d.player.UnityPlayer"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03205364 with catch @ 032053cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03205354 with catch @ 032053d0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03205344 with catch @ 032053d4
                        */
  if (__this == (UnityEngine_AndroidJavaObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320532c with catch @ 032053d8
                        */
                    /* try { // try from 032053f4 to 033053f7 has its CatchHandler @ 03205418 */
  __this_00 = (UnityEngine_AndroidJavaObject_o *)
              UnityEngine_AndroidJavaObject__GetStatic<object>
                        (__this,StringLiteral_17514/*"currentActivity"*/,
                         Method_UnityEngine_AndroidJavaObject_GetStatic<AndroidJavaObject>__);
                    /* try { // try from 032053f8 to 0330541f has its CatchHandler @ 03205204 */
  if (__this_00 == (UnityEngine_AndroidJavaObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar4 = UnityEngine_AndroidJavaObject__GetRawObject(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032053f4 with catch @ 03205418 */
                    /* try { // try from 03205420 to 03305427 has its CatchHandler @ 0320543c */
  pUVar5 = (UnityEngine_jvalue_array *)FUN_01bab718(UnityEngine_jvalue___TypeInfo,0);
                    /* try { // try from 03205428 to 03305433 has its CatchHandler @ 03205204 */
                    /* try { // try from 03205434 to 0330543b has its CatchHandler @ 0320543c */
  iVar3 = UnityEngine_AndroidJNI__CallObjectMethod(iVar4,iVar3,pUVar5,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03205420 with catch @ 0320543c
                       catch(type#2 @ 00000000) { ... } // from try @ 03205434 with catch @ 0320543c
                        */
  iVar4 = UnityEngine_AndroidJNI__FindClass(StringLiteral_19250/*"java/io/File"*/,(MethodInfo *)0x0);
  iVar4 = UnityEngine_AndroidJNIHelper__GetMethodID
                    (iVar4,StringLiteral_18407/*"getAbsolutePath"*/,StringLiteral_1001/*"()Ljava/lang/String;"*/,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_jvalue_array *)FUN_01bab718(UnityEngine_jvalue___TypeInfo,0);
  pSVar6 = UnityEngine_AndroidJNI__CallStringMethod(iVar3,iVar4,pUVar5,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log(StringLiteral_14653/*"Using fallback path: /data/data/com.nekki.shadowfight/files"*/,(MethodInfo *)0x0);
    pSVar6 = StringLiteral_1512/*"/data/data/com.nekki.shadowfight/files"*/;
  }
  pUVar8 = __this_00->klass;
  uVar1._0_1_ = (pUVar8->_2).rank;
  uVar1._1_1_ = (pUVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pUVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar7 = &(pUVar8->vtable)._0_Equals + *piVar10;
        goto LAB_0320552c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar7 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_0320552c:
  (*pVVar7->methodPtr)(__this_00,pVVar7->method);
  if (__this != (UnityEngine_AndroidJavaObject_o *)0x0) {
    pUVar8 = __this->klass;
    uVar2._0_1_ = (pUVar8->_2).rank;
    uVar2._1_1_ = (pUVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pUVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar7 = &(pUVar8->vtable)._0_Equals + *piVar10;
          goto LAB_03205590;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_03205590:
    (*pVVar7->methodPtr)(__this,pVVar7->method);
  }
  return pSVar6;
}


// ===== public static string CIKNLBCABMJ()  [RVA 0x3105C0C]
// MGENAMAJALB$$CIKNLBCABMJ @ RVA 0x3105C0C

System_String_o * MGENAMAJALB__CIKNLBCABMJ(MethodInfo *method)

{
  MGENAMAJALB_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_04566500 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1533/*"/models"*/);
    DAT_04566500 = 1;
  }
  method_00 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)method_00);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1533/*"/models"*/,(MethodInfo *)0x0);
  return pSVar1;
}

