// TypeDefIndex 1229
// Namespace: 
// public class OFFIONDOEPM
// Fields:
//   private const string MKNCIBABLLO = "RaidCurrency_Base";
//   private const string JHOFJICNOKD = "RaidCurrency1_Base";
//   private readonly Dictionary<string, string> CFGGMKKNBPJ; // 0x10
//   private readonly Dictionary<string, string> OOHJACAEOCE; // 0x18
//   private readonly Dictionary<string, string> DAPLPNKJGCJ; // 0x20
//   private Dictionary<string, string> FCKJGGOFGBH; // 0x28
//   private Dictionary<string, string> LFMKNBOPODB; // 0x30
//   private static OFFIONDOEPM CBDMFFMCJBK; // 0x0

// ===== private void OMHOCLKLPPA(string NEJHIEOHMCF, string ALHDMEKMLPH, string JHKIMGJEIDF)  [RVA 0x3135A84]
// OFFIONDOEPM$$OMHOCLKLPPA @ RVA 0x3135A84

void OFFIONDOEPM__OMHOCLKLPPA
               (OFFIONDOEPM_o *__this,System_String_o *NEJHIEOHMCF,System_String_o *ALHDMEKMLPH,
               System_String_o *JHKIMGJEIDF,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_045666fe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    DAT_045666fe = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).LFMKNBOPODB;
  value = System_String__Concat(ALHDMEKMLPH,NEJHIEOHMCF,JHKIMGJEIDF,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,(Il2CppObject *)NEJHIEOHMCF,(Il2CppObject *)value,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string CGPGBMMPMDM(string HLEMJLIHJEA)  [RVA 0x3135B08]
// OFFIONDOEPM$$CGPGBMMPMDM @ RVA 0x3135B08

System_String_o * OFFIONDOEPM__CGPGBMMPMDM(System_String_o *HLEMJLIHJEA,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *NEJHIEOHMCF;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  int startIndex;
  
  if ((DAT_045666ff & 1) == 0) {
    FUN_01bab630(&StringLiteral_250/*" />"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_22472/*"{texture"*/);
    FUN_01bab630(&StringLiteral_22473/*"{textures"*/);
    DAT_045666ff = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(HLEMJLIHJEA,(MethodInfo *)0x0);
  if (!bVar1) {
    if (HLEMJLIHJEA == (System_String_o *)0x0) {
LAB_03235cb8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Contains(HLEMJLIHJEA,StringLiteral_22473/*"{textures"*/,(MethodInfo *)0x0);
    if (bVar1) {
      startIndex = 0;
      while (-1 < startIndex) {
        if (HLEMJLIHJEA == (System_String_o *)0x0) goto LAB_03235cb8;
        if ((HLEMJLIHJEA->fields)._stringLength <= startIndex + 1) {
          return HLEMJLIHJEA;
        }
        uVar2 = System_String__IndexOf
                          (HLEMJLIHJEA,StringLiteral_22472/*"{texture"*/,startIndex + 1,(MethodInfo *)0x0);
        if (uVar2 == 0xffffffff) {
          return HLEMJLIHJEA;
        }
        startIndex = uVar2 + 1;
        iVar3 = System_String__IndexOf(HLEMJLIHJEA,StringLiteral_22500/*"}"*/,startIndex,(MethodInfo *)0x0)
        ;
        if (iVar3 == -1) {
          return HLEMJLIHJEA;
        }
        NEJHIEOHMCF = System_String__Substring
                                (HLEMJLIHJEA,startIndex,iVar3 + ~uVar2,(MethodInfo *)0x0);
        pSVar4 = OFFIONDOEPM__CNLBHLNMCCI(NEJHIEOHMCF,method_00);
        bVar1 = System_String__op_Equality(NEJHIEOHMCF,pSVar4,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar4 = System_String__Concat
                             (StringLiteral_2422/*"<quad name="*/,pSVar4,StringLiteral_250/*" />"*/,(MethodInfo *)0x0);
          HLEMJLIHJEA = System_String__Replace(HLEMJLIHJEA,NEJHIEOHMCF,pSVar4,(MethodInfo *)0x0);
          if ((pSVar4 == (System_String_o *)0x0) || (NEJHIEOHMCF == (System_String_o *)0x0))
          goto LAB_03235cb8;
          startIndex = ((pSVar4->fields)._stringLength + uVar2) -
                       (NEJHIEOHMCF->fields)._stringLength;
        }
      }
    }
  }
  return HLEMJLIHJEA;
}


// ===== public static string HHJFGJLPHCH(string ACCIHBHMFPN)  [RVA 0x3135CE0]
// OFFIONDOEPM$$HHJFGJLPHCH @ RVA 0x3135CE0

System_String_o * OFFIONDOEPM__HHJFGJLPHCH(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  int32_t startIndex;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this;
  HBNENINHPGF_o *pHVar3;
  MethodInfo *extraout_x1;
  System_String_o *pSVar4;
  
  if ((DAT_04566700 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_10832/*"RaidCurrency_Base"*/);
    FUN_01bab630(&StringLiteral_3107/*"AscensionTicket"*/);
    FUN_01bab630(&StringLiteral_10831/*"RaidCurrencyForge"*/);
    FUN_01bab630(&StringLiteral_9084/*"MiscSprites.gold"*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_04566700 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
  if (__this != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
    pHVar3 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this,ACCIHBHMFPN,(MethodInfo *)0x0);
    if (pHVar3 == (HBNENINHPGF_o *)0x0) {
      return StringLiteral_9084/*"MiscSprites.gold"*/;
    }
    pSVar4 = (pHVar3->fields)._PGCEKJLODEJ_k__BackingField;
    if (pSVar4 != (System_String_o *)0x0) {
      startIndex = System_String__IndexOf(pSVar4,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
      pSVar4 = System_String__Substring(pSVar4,startIndex,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3107/*"AscensionTicket"*/,(MethodInfo *)0x0);
      puVar1 = &StringLiteral_10832/*"RaidCurrency_Base"*/;
      if (!bVar2) {
        puVar1 = &StringLiteral_10831/*"RaidCurrencyForge"*/;
      }
      pSVar4 = System_String__Concat((System_String_o *)*puVar1,pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GHALIMLMDOP(string IEPECMCLKJB, string AAIHDEKMIJG)  [RVA 0x3135E24]
// OFFIONDOEPM$$GHALIMLMDOP @ RVA 0x3135E24

System_String_o *
OFFIONDOEPM__GHALIMLMDOP
          (System_String_o *IEPECMCLKJB,System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04566701 & 1) == 0) {
    FUN_01bab630(&StringLiteral_15862/*"_"*/);
    FUN_01bab630(&StringLiteral_10185/*"Payment"*/);
    FUN_01bab630(&StringLiteral_21214/*"starter_pack"*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_04566701 = 1;
  }
  bVar1 = System_String__op_Equality(IEPECMCLKJB,StringLiteral_21214/*"starter_pack"*/,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03235f10:
    pSVar3 = System_String__Concat(AAIHDEKMIJG,IEPECMCLKJB,(MethodInfo *)0x0);
    return pSVar3;
  }
  if (IEPECMCLKJB != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(IEPECMCLKJB,StringLiteral_10185/*"Payment"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      return IEPECMCLKJB;
    }
    iVar2 = System_String__IndexOf(IEPECMCLKJB,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
    pSVar3 = System_String__Substring(IEPECMCLKJB,iVar2 + 1,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      iVar2 = System_String__IndexOf(pSVar3,StringLiteral_15862/*"_"*/,(MethodInfo *)0x0);
      IEPECMCLKJB = System_String__Substring(pSVar3,iVar2 + 1,(MethodInfo *)0x0);
      goto LAB_03235f10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JPCINFBICKE()  [RVA 0x3135F44]
// OFFIONDOEPM$$JPCINFBICKE @ RVA 0x3135F44

void OFFIONDOEPM__JPCINFBICKE(OFFIONDOEPM_o *__this,MethodInfo *method)

{
  long lVar1;
  MethodInfo *in_x3;
  ulong uVar2;
  ulong uVar3;
  
  if ((DAT_04566702 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16988/*"chest_bronze"*/);
    FUN_01bab630(&StringLiteral_16991/*"chest_silver"*/);
    FUN_01bab630(&StringLiteral_16990/*"chest_raid"*/);
    FUN_01bab630(&StringLiteral_10853/*"RaidGiantChests"*/);
    FUN_01bab630(&StringLiteral_16989/*"chest_gold"*/);
    FUN_01bab630(&StringLiteral_17976/*"effect_chest_back_light"*/);
    DAT_04566702 = 1;
  }
  lVar1 = FUN_01bab718(string___TypeInfo,5);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = StringLiteral_16988/*"chest_bronze"*/;
    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x20));
    if (1 < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + 0x28) = StringLiteral_16989/*"chest_gold"*/;
      thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x28));
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = StringLiteral_16990/*"chest_raid"*/;
        thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x30));
        if (3 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x38) = StringLiteral_16991/*"chest_silver"*/;
          thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x38));
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) = StringLiteral_17976/*"effect_chest_back_light"*/;
            thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x40));
            if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
              uVar3 = 0;
              uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
              do {
                if (uVar2 <= uVar3) goto LAB_032360f4;
                OFFIONDOEPM__JPCINFBICKE
                          (__this,*(System_String_o **)(lVar1 + 0x20 + uVar3 * 8),
                           StringLiteral_10853/*"RaidGiantChests"*/,in_x3);
                uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
                uVar3 = uVar3 + 1;
              } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
            }
            return;
          }
        }
      }
    }
  }
LAB_032360f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private void FDCGLDMFKPE(string NEJHIEOHMCF, string ALHDMEKMLPH, Dictionary<string, string> FBEEEALALMJ)  [RVA 0x3136190]
// OFFIONDOEPM$$FDCGLDMFKPE @ RVA 0x3136190

void OFFIONDOEPM__FDCGLDMFKPE
               (OFFIONDOEPM_o *__this,System_String_o *NEJHIEOHMCF,System_String_o *ALHDMEKMLPH,
               System_Collections_Generic_Dictionary_string__string__o *FBEEEALALMJ,
               MethodInfo *method)

{
  System_String_o *value;
  
  if ((DAT_04566703 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_04566703 = 1;
  }
  value = System_String__Concat(ALHDMEKMLPH,StringLiteral_1377/*"."*/,NEJHIEOHMCF,(MethodInfo *)0x0);
  if (FBEEEALALMJ != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              ((System_Collections_Generic_Dictionary_object__object__o *)FBEEEALALMJ,
               (Il2CppObject *)NEJHIEOHMCF,(Il2CppObject *)value,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static OFFIONDOEPM AIHNLLGNBLC()  [RVA 0x3136220]
// OFFIONDOEPM$$AIHNLLGNBLC @ RVA 0x3136220

OFFIONDOEPM_o * OFFIONDOEPM__AIHNLLGNBLC(MethodInfo *method)

{
  OFFIONDOEPM_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04566704 & 1) == 0) {
    FUN_01bab630(&OFFIONDOEPM_TypeInfo);
    DAT_04566704 = 1;
  }
  __this = OFFIONDOEPM_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (OFFIONDOEPM_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    OFFIONDOEPM___ctor(__this,auVar1._8_8_);
    OFFIONDOEPM_TypeInfo->static_fields->CBDMFFMCJBK = __this;
    thunk_FUN_01c20e04(OFFIONDOEPM_TypeInfo->static_fields,__this);
  }
  return __this;
}


// ===== public static string GJBPBKGAJOC(string NEJHIEOHMCF)  [RVA 0x3136D7C]
// OFFIONDOEPM$$GJBPBKGAJOC @ RVA 0x3136D7C

System_String_o * OFFIONDOEPM__GJBPBKGAJOC(System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  OFFIONDOEPM_o *pOVar1;
  System_String_o *pSVar2;
  MethodInfo *in_x2;
  
  pOVar1 = OFFIONDOEPM__AIHNLLGNBLC((MethodInfo *)NEJHIEOHMCF);
  if (pOVar1 != (OFFIONDOEPM_o *)0x0) {
    pSVar2 = OFFIONDOEPM__EOFPPCLIMNO(NEJHIEOHMCF,(pOVar1->fields).OOHJACAEOCE,in_x2);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JPCINFBICKE(string NEJHIEOHMCF, string ALHDMEKMLPH)  [RVA 0x31360FC]
// OFFIONDOEPM$$JPCINFBICKE @ RVA 0x31360FC

void OFFIONDOEPM__JPCINFBICKE
               (OFFIONDOEPM_o *__this,System_String_o *NEJHIEOHMCF,System_String_o *ALHDMEKMLPH,
               MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04566705 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_04566705 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).FCKJGGOFGBH;
  value = System_String__Concat(ALHDMEKMLPH,StringLiteral_1377/*"."*/,NEJHIEOHMCF,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,(Il2CppObject *)NEJHIEOHMCF,(Il2CppObject *)value,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GINIOCFKBLK()  [RVA 0x3136E30]
// OFFIONDOEPM$$GINIOCFKBLK @ RVA 0x3136E30

void OFFIONDOEPM__GINIOCFKBLK(OFFIONDOEPM_o *__this,MethodInfo *method)

{
  long lVar1;
  OFFIONDOEPM_o *pOVar2;
  OFFIONDOEPM_o *extraout_x0;
  OFFIONDOEPM_o *extraout_x0_00;
  MethodInfo *in_x4;
  ulong uVar3;
  ulong uVar4;
  
  if ((DAT_04566706 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_18750/*"helix"*/);
    FUN_01bab630(&StringLiteral_21440/*"tentacle"*/);
    FUN_01bab630(&StringLiteral_17060/*"clanlvl_2"*/);
    FUN_01bab630(&StringLiteral_16635/*"back7"*/);
    FUN_01bab630(&StringLiteral_20984/*"shadow7"*/);
    FUN_01bab630(&StringLiteral_18267/*"fish"*/);
    FUN_01bab630(&StringLiteral_20979/*"shadow2"*/);
    FUN_01bab630(&StringLiteral_16694/*"big_square"*/);
    FUN_01bab630(&StringLiteral_19283/*"kanji1"*/);
    FUN_01bab630(&StringLiteral_20983/*"shadow6"*/);
    FUN_01bab630(&StringLiteral_18722/*"hammers"*/);
    FUN_01bab630(&StringLiteral_20655/*"sakura"*/);
    FUN_01bab630(&StringLiteral_16633/*"back5"*/);
    FUN_01bab630(&StringLiteral_22168/*"yin_yang"*/);
    FUN_01bab630(&StringLiteral_17653/*"default_icon"*/);
    FUN_01bab630(&StringLiteral_21160/*"spider"*/);
    FUN_01bab630(&StringLiteral_16636/*"back8"*/);
    FUN_01bab630(&StringLiteral_21073/*"skull"*/);
    FUN_01bab630(&StringLiteral_21192/*"star"*/);
    FUN_01bab630(&StringLiteral_16634/*"back6"*/);
    FUN_01bab630(&StringLiteral_20978/*"shadow10"*/);
    FUN_01bab630(&StringLiteral_17911/*"eagle"*/);
    FUN_01bab630(&StringLiteral_20977/*"shadow1"*/);
    FUN_01bab630(&StringLiteral_18259/*"fire"*/);
    FUN_01bab630(&StringLiteral_17873/*"dragon"*/);
    FUN_01bab630(&StringLiteral_16767/*"bottle"*/);
    FUN_01bab630(&StringLiteral_20982/*"shadow5"*/);
    FUN_01bab630(&StringLiteral_20175/*"paw"*/);
    FUN_01bab630(&StringLiteral_20661/*"samurai"*/);
    FUN_01bab630(&StringLiteral_16569/*"axe"*/);
    FUN_01bab630(&StringLiteral_18198/*"fan"*/);
    FUN_01bab630(&StringLiteral_17506/*"cudo"*/);
    FUN_01bab630(&StringLiteral_18156/*"eye"*/);
    FUN_01bab630(&StringLiteral_18656/*"glaive"*/);
    FUN_01bab630(&StringLiteral_17436/*"crab"*/);
    FUN_01bab630(&StringLiteral_21162/*"spiral"*/);
    FUN_01bab630(&StringLiteral_16629/*"back10"*/);
    FUN_01bab630(&StringLiteral_16637/*"back9"*/);
    FUN_01bab630(&StringLiteral_16932/*"cat_eye"*/);
    FUN_01bab630(&StringLiteral_19454/*"lizard"*/);
    FUN_01bab630(&StringLiteral_17059/*"clanlvl_1"*/);
    FUN_01bab630(&StringLiteral_16630/*"back2"*/);
    FUN_01bab630(&StringLiteral_19450/*"lion"*/);
    FUN_01bab630(&StringLiteral_16631/*"back3"*/);
    FUN_01bab630(&StringLiteral_18268/*"fist"*/);
    FUN_01bab630(&StringLiteral_21038/*"shuriken"*/);
    FUN_01bab630(&StringLiteral_16632/*"back4"*/);
    FUN_01bab630(&StringLiteral_20980/*"shadow3"*/);
    FUN_01bab630(&StringLiteral_20986/*"shadow9"*/);
    FUN_01bab630(&StringLiteral_20985/*"shadow8"*/);
    FUN_01bab630(&StringLiteral_19285/*"katanas"*/);
    FUN_01bab630(&StringLiteral_4394/*"ClanLogoBS"*/);
    FUN_01bab630(&StringLiteral_16695/*"big_square_shadow"*/);
    FUN_01bab630(&StringLiteral_17971/*"eclipse"*/);
    FUN_01bab630(&StringLiteral_21323/*"swords"*/);
    FUN_01bab630(&StringLiteral_21981/*"viking"*/);
    FUN_01bab630(&StringLiteral_21085/*"small_square"*/);
    FUN_01bab630(&StringLiteral_20981/*"shadow4"*/);
    FUN_01bab630(&StringLiteral_4387/*"ClanLogo"*/);
    FUN_01bab630(&StringLiteral_19284/*"katana"*/);
    FUN_01bab630(&StringLiteral_16628/*"back1"*/);
    FUN_01bab630(&StringLiteral_22038/*"wolf"*/);
    FUN_01bab630(&StringLiteral_21094/*"snail"*/);
    FUN_01bab630(&StringLiteral_16433/*"ankh"*/);
    DAT_04566706 = 1;
  }
  lVar1 = FUN_01bab718(string___TypeInfo,0x2a);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = StringLiteral_16433/*"ankh"*/;
      thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x20));
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x28) = StringLiteral_16569/*"axe"*/;
        thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x28));
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = StringLiteral_16694/*"big_square"*/;
          thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x30));
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x38) = StringLiteral_16695/*"big_square_shadow"*/;
            thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x38));
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = StringLiteral_16767/*"bottle"*/;
              thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x40));
              if (5 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x48) = StringLiteral_16932/*"cat_eye"*/;
                thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x48));
                if (6 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x50) = StringLiteral_17059/*"clanlvl_1"*/;
                  thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x50));
                  if (7 < *(uint *)(lVar1 + 0x18)) {
                    *(undefined8 *)(lVar1 + 0x58) = StringLiteral_17060/*"clanlvl_2"*/;
                    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x58));
                    if (8 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x60) = StringLiteral_17436/*"crab"*/;
                      thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x60));
                      if (9 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x68) = StringLiteral_17506/*"cudo"*/;
                        thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x68));
                        if (10 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x70) = StringLiteral_17653/*"default_icon"*/;
                          thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x70));
                          if (0xb < *(uint *)(lVar1 + 0x18)) {
                            *(undefined8 *)(lVar1 + 0x78) = StringLiteral_17873/*"dragon"*/;
                            thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x78));
                            if (0xc < *(uint *)(lVar1 + 0x18)) {
                              *(undefined8 *)(lVar1 + 0x80) = StringLiteral_17911/*"eagle"*/;
                              thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x80));
                              if (0xd < *(uint *)(lVar1 + 0x18)) {
                                *(undefined8 *)(lVar1 + 0x88) = StringLiteral_17971/*"eclipse"*/;
                                thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x88));
                                if (0xe < *(uint *)(lVar1 + 0x18)) {
                                  *(undefined8 *)(lVar1 + 0x90) = StringLiteral_18156/*"eye"*/;
                                  thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x90));
                                  if (0xf < *(uint *)(lVar1 + 0x18)) {
                                    *(undefined8 *)(lVar1 + 0x98) = StringLiteral_18198/*"fan"*/;
                                    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x98));
                                    if (0x10 < *(uint *)(lVar1 + 0x18)) {
                                      *(undefined8 *)(lVar1 + 0xa0) = StringLiteral_18259/*"fire"*/;
                                      thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0xa0));
                                      if (0x11 < *(uint *)(lVar1 + 0x18)) {
                                        *(undefined8 *)(lVar1 + 0xa8) = StringLiteral_18267/*"fish"*/;
                                        thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0xa8));
                                        if (0x12 < *(uint *)(lVar1 + 0x18)) {
                                          *(undefined8 *)(lVar1 + 0xb0) = StringLiteral_18268/*"fist"*/;
                                          thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0xb0));
                                          if (0x13 < *(uint *)(lVar1 + 0x18)) {
                                            *(undefined8 *)(lVar1 + 0xb8) = StringLiteral_18656/*"glaive"*/;
                                            thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0xb8));
                                            if (0x14 < *(uint *)(lVar1 + 0x18)) {
                                              *(undefined8 *)(lVar1 + 0xc0) = StringLiteral_18722/*"hammers"*/;
                                              thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0xc0));
                                              if (0x15 < *(uint *)(lVar1 + 0x18)) {
                                                *(undefined8 *)(lVar1 + 200) = StringLiteral_18750/*"helix"*/;
                                                thunk_FUN_01c20e04((undefined8 *)(lVar1 + 200));
                                                if (0x16 < *(uint *)(lVar1 + 0x18)) {
                                                  *(undefined8 *)(lVar1 + 0xd0) =
                                                       StringLiteral_19283/*"kanji1"*/;
                                                  thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0xd0));
                                                  if (0x17 < *(uint *)(lVar1 + 0x18)) {
                                                    *(undefined8 *)(lVar1 + 0xd8) =
                                                         StringLiteral_19284/*"katana"*/;
                                                    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0xd8))
                                                    ;
                                                    if (0x18 < *(uint *)(lVar1 + 0x18)) {
                                                      *(undefined8 *)(lVar1 + 0xe0) =
                                                           StringLiteral_19285/*"katanas"*/;
                                                      thunk_FUN_01c20e04((undefined8 *)
                                                                         (lVar1 + 0xe0));
                                                      if (0x19 < *(uint *)(lVar1 + 0x18)) {
                                                        *(undefined8 *)(lVar1 + 0xe8) =
                                                             StringLiteral_19450/*"lion"*/;
                                                        thunk_FUN_01c20e04((undefined8 *)
                                                                           (lVar1 + 0xe8));
                                                        if (0x1a < *(uint *)(lVar1 + 0x18)) {
                                                          *(undefined8 *)(lVar1 + 0xf0) =
                                                               StringLiteral_19454/*"lizard"*/;
                                                          thunk_FUN_01c20e04((undefined8 *)
                                                                             (lVar1 + 0xf0));
                                                          if (0x1b < *(uint *)(lVar1 + 0x18)) {
                                                            *(undefined8 *)(lVar1 + 0xf8) =
                                                                 StringLiteral_20175/*"paw"*/;
                                                            thunk_FUN_01c20e04((undefined8 *)
                                                                               (lVar1 + 0xf8));
                                                            if (0x1c < *(uint *)(lVar1 + 0x18)) {
                                                              *(undefined8 *)(lVar1 + 0x100) =
                                                                   StringLiteral_20655/*"sakura"*/;
                                                              thunk_FUN_01c20e04(lVar1 + 0x100);
                                                              if (0x1d < *(uint *)(lVar1 + 0x18)) {
                                                                *(undefined8 *)(lVar1 + 0x108) =
                                                                     StringLiteral_20661/*"samurai"*/;
                                                                thunk_FUN_01c20e04(lVar1 + 0x108);
                                                                if (0x1e < *(uint *)(lVar1 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar1 + 0x110) =
                                                                       StringLiteral_21038/*"shuriken"*/;
                                                                  thunk_FUN_01c20e04(lVar1 + 0x110);
                                                                  if (0x1f < *(uint *)(lVar1 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar1 + 0x118) =
                                                                         StringLiteral_21073/*"skull"*/;
                                                                    thunk_FUN_01c20e04(lVar1 + 0x118
                                                                                      );
                                                                    if (0x20 < *(uint *)(lVar1 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar1 + 0x120) =
                                                         StringLiteral_21085/*"small_square"*/;
                                                    thunk_FUN_01c20e04(lVar1 + 0x120);
                                                    if (0x21 < *(uint *)(lVar1 + 0x18)) {
                                                      *(undefined8 *)(lVar1 + 0x128) =
                                                           StringLiteral_21094/*"snail"*/;
                                                      thunk_FUN_01c20e04(lVar1 + 0x128);
                                                      if (0x22 < *(uint *)(lVar1 + 0x18)) {
                                                        *(undefined8 *)(lVar1 + 0x130) =
                                                             StringLiteral_21160/*"spider"*/;
                                                        thunk_FUN_01c20e04(lVar1 + 0x130);
                                                        if (0x23 < *(uint *)(lVar1 + 0x18)) {
                                                          *(undefined8 *)(lVar1 + 0x138) =
                                                               StringLiteral_21162/*"spiral"*/;
                                                          thunk_FUN_01c20e04(lVar1 + 0x138);
                                                          if (0x24 < *(uint *)(lVar1 + 0x18)) {
                                                            *(undefined8 *)(lVar1 + 0x140) =
                                                                 StringLiteral_21192/*"star"*/;
                                                            thunk_FUN_01c20e04(lVar1 + 0x140);
                                                            if (0x25 < *(uint *)(lVar1 + 0x18)) {
                                                              *(undefined8 *)(lVar1 + 0x148) =
                                                                   StringLiteral_21323/*"swords"*/;
                                                              thunk_FUN_01c20e04(lVar1 + 0x148);
                                                              if (0x26 < *(uint *)(lVar1 + 0x18)) {
                                                                *(undefined8 *)(lVar1 + 0x150) =
                                                                     StringLiteral_21440/*"tentacle"*/;
                                                                thunk_FUN_01c20e04(lVar1 + 0x150);
                                                                if (0x27 < *(uint *)(lVar1 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar1 + 0x158) =
                                                                       StringLiteral_21981/*"viking"*/;
                                                                  thunk_FUN_01c20e04(lVar1 + 0x158);
                                                                  if (0x28 < *(uint *)(lVar1 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar1 + 0x160) =
                                                                         StringLiteral_22038/*"wolf"*/;
                                                                    thunk_FUN_01c20e04(lVar1 + 0x160
                                                                                      );
                                                                    if (0x29 < *(uint *)(lVar1 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar1 + 0x168) =
                                                         StringLiteral_22168/*"yin_yang"*/;
                                                    pOVar2 = (OFFIONDOEPM_o *)
                                                             thunk_FUN_01c20e04(lVar1 + 0x168);
                                                    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
                                                      uVar4 = 0;
                                                      uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
                                                      do {
                                                        if (uVar3 <= uVar4) goto LAB_03237ba8;
                                                        OFFIONDOEPM__FDCGLDMFKPE
                                                                  (pOVar2,*(System_String_o **)
                                                                           (lVar1 + 0x20 + uVar4 * 8
                                                                           ),StringLiteral_4387/*"ClanLogo"*/,
                                                                   (__this->fields).OOHJACAEOCE,
                                                                   in_x4);
                                                        uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
                                                        uVar4 = uVar4 + 1;
                                                        pOVar2 = extraout_x0;
                                                      } while ((long)uVar4 <
                                                               (long)(int)*(uint *)(lVar1 + 0x18));
                                                    }
                                                    lVar1 = FUN_01bab718(string___TypeInfo,0x14);
                                                    if (lVar1 == 0) goto LAB_03237bac;
                                                    if (*(int *)(lVar1 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar1 + 0x20) =
                                                           StringLiteral_16628/*"back1"*/;
                                                      thunk_FUN_01c20e04((undefined8 *)
                                                                         (lVar1 + 0x20));
                                                      if (1 < *(uint *)(lVar1 + 0x18)) {
                                                        *(undefined8 *)(lVar1 + 0x28) =
                                                             StringLiteral_16630/*"back2"*/;
                                                        thunk_FUN_01c20e04((undefined8 *)
                                                                           (lVar1 + 0x28));
                                                        if (2 < *(uint *)(lVar1 + 0x18)) {
                                                          *(undefined8 *)(lVar1 + 0x30) =
                                                               StringLiteral_16631/*"back3"*/;
                                                          thunk_FUN_01c20e04((undefined8 *)
                                                                             (lVar1 + 0x30));
                                                          if (3 < *(uint *)(lVar1 + 0x18)) {
                                                            *(undefined8 *)(lVar1 + 0x38) =
                                                                 StringLiteral_16632/*"back4"*/;
                                                            thunk_FUN_01c20e04((undefined8 *)
                                                                               (lVar1 + 0x38));
                                                            if (4 < *(uint *)(lVar1 + 0x18)) {
                                                              *(undefined8 *)(lVar1 + 0x40) =
                                                                   StringLiteral_16633/*"back5"*/;
                                                              thunk_FUN_01c20e04((undefined8 *)
                                                                                 (lVar1 + 0x40));
                                                              if (5 < *(uint *)(lVar1 + 0x18)) {
                                                                *(undefined8 *)(lVar1 + 0x48) =
                                                                     StringLiteral_16634/*"back6"*/;
                                                                thunk_FUN_01c20e04((undefined8 *)
                                                                                   (lVar1 + 0x48));
                                                                if (6 < *(uint *)(lVar1 + 0x18)) {
                                                                  *(undefined8 *)(lVar1 + 0x50) =
                                                                       StringLiteral_16635/*"back7"*/;
                                                                  thunk_FUN_01c20e04((undefined8 *)
                                                                                     (lVar1 + 0x50))
                                                                  ;
                                                                  if (7 < *(uint *)(lVar1 + 0x18)) {
                                                                    *(undefined8 *)(lVar1 + 0x58) =
                                                                         StringLiteral_16636/*"back8"*/;
                                                                    thunk_FUN_01c20e04((undefined8 *
                                                                                       )(lVar1 + 
                                                  0x58));
                                                  if (8 < *(uint *)(lVar1 + 0x18)) {
                                                    *(undefined8 *)(lVar1 + 0x60) =
                                                         StringLiteral_16637/*"back9"*/;
                                                    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x60))
                                                    ;
                                                    if (9 < *(uint *)(lVar1 + 0x18)) {
                                                      *(undefined8 *)(lVar1 + 0x68) =
                                                           StringLiteral_16629/*"back10"*/;
                                                      thunk_FUN_01c20e04((undefined8 *)
                                                                         (lVar1 + 0x68));
                                                      if (10 < *(uint *)(lVar1 + 0x18)) {
                                                        *(undefined8 *)(lVar1 + 0x70) =
                                                             StringLiteral_20977/*"shadow1"*/;
                                                        thunk_FUN_01c20e04((undefined8 *)
                                                                           (lVar1 + 0x70));
                                                        if (0xb < *(uint *)(lVar1 + 0x18)) {
                                                          *(undefined8 *)(lVar1 + 0x78) =
                                                               StringLiteral_20979/*"shadow2"*/;
                                                          thunk_FUN_01c20e04((undefined8 *)
                                                                             (lVar1 + 0x78));
                                                          if (0xc < *(uint *)(lVar1 + 0x18)) {
                                                            *(undefined8 *)(lVar1 + 0x80) =
                                                                 StringLiteral_20980/*"shadow3"*/;
                                                            thunk_FUN_01c20e04((undefined8 *)
                                                                               (lVar1 + 0x80));
                                                            if (0xd < *(uint *)(lVar1 + 0x18)) {
                                                              *(undefined8 *)(lVar1 + 0x88) =
                                                                   StringLiteral_20981/*"shadow4"*/;
                                                              thunk_FUN_01c20e04((undefined8 *)
                                                                                 (lVar1 + 0x88));
                                                              if (0xe < *(uint *)(lVar1 + 0x18)) {
                                                                *(undefined8 *)(lVar1 + 0x90) =
                                                                     StringLiteral_20982/*"shadow5"*/;
                                                                thunk_FUN_01c20e04((undefined8 *)
                                                                                   (lVar1 + 0x90));
                                                                if (0xf < *(uint *)(lVar1 + 0x18)) {
                                                                  *(undefined8 *)(lVar1 + 0x98) =
                                                                       StringLiteral_20983/*"shadow6"*/;
                                                                  thunk_FUN_01c20e04((undefined8 *)
                                                                                     (lVar1 + 0x98))
                                                                  ;
                                                                  if (0x10 < *(uint *)(lVar1 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar1 + 0xa0) =
                                                                         StringLiteral_20984/*"shadow7"*/;
                                                                    thunk_FUN_01c20e04((undefined8 *
                                                                                       )(lVar1 + 
                                                  0xa0));
                                                  if (0x11 < *(uint *)(lVar1 + 0x18)) {
                                                    *(undefined8 *)(lVar1 + 0xa8) =
                                                         StringLiteral_20985/*"shadow8"*/;
                                                    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0xa8))
                                                    ;
                                                    if (0x12 < *(uint *)(lVar1 + 0x18)) {
                                                      *(undefined8 *)(lVar1 + 0xb0) =
                                                           StringLiteral_20986/*"shadow9"*/;
                                                      thunk_FUN_01c20e04((undefined8 *)
                                                                         (lVar1 + 0xb0));
                                                      if (0x13 < *(uint *)(lVar1 + 0x18)) {
                                                        *(undefined8 *)(lVar1 + 0xb8) =
                                                             StringLiteral_20978/*"shadow10"*/;
                                                        pOVar2 = (OFFIONDOEPM_o *)
                                                                 thunk_FUN_01c20e04((undefined8 *)
                                                                                    (lVar1 + 0xb8));
                                                        if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
                                                          uVar4 = 0;
                                                          uVar3 = *(ulong *)(lVar1 + 0x18) &
                                                                  0xffffffff;
                                                          do {
                                                            if (uVar3 <= uVar4) goto LAB_03237ba8;
                                                            OFFIONDOEPM__FDCGLDMFKPE
                                                                      (pOVar2,*(System_String_o **)
                                                                               (lVar1 + 0x20 +
                                                                               uVar4 * 8),
                                                                       StringLiteral_4394/*"ClanLogoBS"*/,
                                                                       (__this->fields).OOHJACAEOCE,
                                                                       in_x4);
                                                            uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
                                                            uVar4 = uVar4 + 1;
                                                            pOVar2 = extraout_x0_00;
                                                          } while ((long)uVar4 <
                                                                   (long)(int)*(uint *)(lVar1 + 0x18
                                                                                       ));
                                                        }
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
LAB_03237ba8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03237bac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OMHOCLKLPPA()  [RVA 0x3137BB0]
// OFFIONDOEPM$$OMHOCLKLPPA @ RVA 0x3137BB0

void OFFIONDOEPM__OMHOCLKLPPA(OFFIONDOEPM_o *__this,MethodInfo *method)

{
  long lVar1;
  MethodInfo *in_x4;
  ulong uVar2;
  ulong uVar3;
  
  if ((DAT_04566707 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16988/*"chest_bronze"*/);
    FUN_01bab630(&StringLiteral_21095/*"snd_"*/);
    FUN_01bab630(&StringLiteral_16991/*"chest_silver"*/);
    FUN_01bab630(&StringLiteral_16990/*"chest_raid"*/);
    FUN_01bab630(&StringLiteral_16989/*"chest_gold"*/);
    FUN_01bab630(&StringLiteral_17976/*"effect_chest_back_light"*/);
    FUN_01bab630(&StringLiteral_16226/*"_sound"*/);
    DAT_04566707 = 1;
  }
  lVar1 = FUN_01bab718(string___TypeInfo,5);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = StringLiteral_16988/*"chest_bronze"*/;
    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x20));
    if (1 < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + 0x28) = StringLiteral_16989/*"chest_gold"*/;
      thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x28));
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = StringLiteral_16990/*"chest_raid"*/;
        thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x30));
        if (3 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x38) = StringLiteral_16991/*"chest_silver"*/;
          thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x38));
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) = StringLiteral_17976/*"effect_chest_back_light"*/;
            thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x40));
            if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
              uVar3 = 0;
              uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
              do {
                if (uVar2 <= uVar3) goto LAB_03237d80;
                OFFIONDOEPM__OMHOCLKLPPA
                          (__this,*(System_String_o **)(lVar1 + 0x20 + uVar3 * 8),
                           StringLiteral_21095/*"snd_"*/,StringLiteral_16226/*"_sound"*/,in_x4);
                uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
                uVar3 = uVar3 + 1;
              } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
            }
            return;
          }
        }
      }
    }
  }
LAB_03237d80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private void DIKJNJNDEMN(string PMACBPAMPJA, string NEJHIEOHMCF, Dictionary<string, string> FBEEEALALMJ)  [RVA 0x3137D88]
// OFFIONDOEPM$$DIKJNJNDEMN @ RVA 0x3137D88

void OFFIONDOEPM__DIKJNJNDEMN
               (OFFIONDOEPM_o *__this,System_String_o *PMACBPAMPJA,System_String_o *NEJHIEOHMCF,
               System_Collections_Generic_Dictionary_string__string__o *FBEEEALALMJ,
               MethodInfo *method)

{
  if ((DAT_04566708 & 1) == 0) {
    __this = (OFFIONDOEPM_o *)
             FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    DAT_04566708 = 1;
  }
  if (FBEEEALALMJ != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              ((System_Collections_Generic_Dictionary_object__object__o *)FBEEEALALMJ,
               (Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)NEJHIEOHMCF,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public static string CDGICMOFKHE(string BJEEDJEKAMF)  [RVA 0x3137DF0]
// OFFIONDOEPM$$CDGICMOFKHE @ RVA 0x3137DF0

System_String_o * OFFIONDOEPM__CDGICMOFKHE(System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  JMDPBFOCHHP_o *__this;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566709 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566709 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((__this != (JMDPBFOCHHP_o *)0x0) &&
     (pJVar1 = JMDPBFOCHHP__BHJOLIJDBLO(__this,BJEEDJEKAMF,(MethodInfo *)0x0),
     pJVar1 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0)) {
    return (pJVar1->fields).super.APBICPEOMOM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GKOLODJCIOK(string NEJHIEOHMCF)  [RVA 0x3137E64]
// OFFIONDOEPM$$GKOLODJCIOK @ RVA 0x3137E64

System_String_o * OFFIONDOEPM__GKOLODJCIOK(System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  OFFIONDOEPM_o *pOVar1;
  System_String_o *pSVar2;
  MethodInfo *in_x2;
  
  pOVar1 = OFFIONDOEPM__AIHNLLGNBLC((MethodInfo *)NEJHIEOHMCF);
  if (pOVar1 != (OFFIONDOEPM_o *)0x0) {
    pSVar2 = OFFIONDOEPM__EOFPPCLIMNO(NEJHIEOHMCF,(pOVar1->fields).DAPLPNKJGCJ,in_x2);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string JEHAKDBHJJJ(string NEJHIEOHMCF)  [RVA 0x3137E88]
// OFFIONDOEPM$$JEHAKDBHJJJ @ RVA 0x3137E88

System_String_o * OFFIONDOEPM__JEHAKDBHJJJ(System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  bool bVar1;
  OFFIONDOEPM_o *pOVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *pSVar3;
  System_String_o *local_18;
  
  if ((DAT_0456670a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    DAT_0456670a = 1;
  }
  local_18 = (System_String_o *)0x0;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(NEJHIEOHMCF,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)0x0;
  if (!bVar1) {
    pOVar2 = OFFIONDOEPM__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((pOVar2 == (OFFIONDOEPM_o *)0x0) ||
       (__this = (System_Collections_Generic_Dictionary_object__object__o *)
                 (pOVar2->fields).LFMKNBOPODB,
       __this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this,(Il2CppObject *)NEJHIEOHMCF,(Il2CppObject **)&local_18,
                       Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    pSVar3 = local_18;
    if (!bVar1) {
      pSVar3 = NEJHIEOHMCF;
    }
  }
  return pSVar3;
}


// ===== public static string AMJCJJALAJH(string FAICPHKIHHC)  [RVA 0x3137F14]
// OFFIONDOEPM$$AMJCJJALAJH @ RVA 0x3137F14

System_String_o * OFFIONDOEPM__AMJCJJALAJH(System_String_o *FAICPHKIHHC,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456670b & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10829/*"RaidCurrency1_Base"*/);
    FUN_01bab630(&StringLiteral_10832/*"RaidCurrency_Base"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_0456670b = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(FAICPHKIHHC,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_1/*""*/;
  if (!bVar1) {
    if (FAICPHKIHHC == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = System_String__IndexOf(FAICPHKIHHC,0x2e,(MethodInfo *)0x0);
    pSVar4 = FAICPHKIHHC;
    if (iVar3 < 1) {
      uVar2 = System_String__get_Chars(FAICPHKIHHC,0,(MethodInfo *)0x0);
      if (uVar2 != 0x2e) {
        FAICPHKIHHC = System_String__Concat(StringLiteral_1377/*"."*/,FAICPHKIHHC,(MethodInfo *)0x0);
      }
      pSVar4 = System_String__Concat(StringLiteral_10832/*"RaidCurrency_Base"*/,FAICPHKIHHC,(MethodInfo *)0x0);
      if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
      }
      x = (UnityEngine_Object_o *)
          KKCBGIBKOCP__NECCNHODCAE(StringLiteral_14092/*"UI/Atlases/"*/,pSVar4,false,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar4 = System_String__Concat(StringLiteral_10829/*"RaidCurrency1_Base"*/,FAICPHKIHHC,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
  return pSVar4;
}


// ===== public static string GKMBNILEEDE(bool FIICJBPKIJA, string CIIDODDGNBA)  [RVA 0x31380C0]
// OFFIONDOEPM$$GKMBNILEEDE @ RVA 0x31380C0

System_String_o *
OFFIONDOEPM__GKMBNILEEDE(bool FIICJBPKIJA,System_String_o *CIIDODDGNBA,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  
  if ((DAT_0456670c & 1) == 0) {
    FUN_01bab630(&StringLiteral_20276/*"preview_raid."*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_0456670c = 1;
  }
  if (FIICJBPKIJA) {
    if (CIIDODDGNBA == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = System_String__IndexOf(CIIDODDGNBA,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
    if (iVar1 < 0) {
      pSVar2 = System_String__Concat(StringLiteral_20276/*"preview_raid."*/,CIIDODDGNBA,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return CIIDODDGNBA;
}


// ===== private void .ctor()  [RVA 0x3136298]
// OFFIONDOEPM$$.ctor @ RVA 0x3136298

void OFFIONDOEPM___ctor(OFFIONDOEPM_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar2;
  OFFIONDOEPM_o *__this_00;
  OFFIONDOEPM_o *__this_01;
  OFFIONDOEPM_o *__this_02;
  OFFIONDOEPM_o *__this_03;
  System_String_o *pSVar3;
  OFFIONDOEPM_o *pOVar4;
  OFFIONDOEPM_o *__this_04;
  OFFIONDOEPM_o *__this_05;
  OFFIONDOEPM_o *__this_06;
  OFFIONDOEPM_o *__this_07;
  OFFIONDOEPM_o *__this_08;
  OFFIONDOEPM_o *__this_09;
  OFFIONDOEPM_o *__this_10;
  OFFIONDOEPM_o *__this_11;
  OFFIONDOEPM_o *__this_12;
  OFFIONDOEPM_o *__this_13;
  OFFIONDOEPM_o *__this_14;
  OFFIONDOEPM_o *__this_15;
  OFFIONDOEPM_o *__this_16;
  OFFIONDOEPM_o *__this_17;
  OFFIONDOEPM_o *__this_18;
  OFFIONDOEPM_o *__this_19;
  OFFIONDOEPM_o *__this_20;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_x4;
  OFFIONDOEPM_Fields *pOVar5;
  
  if ((DAT_0456670d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_21158/*"sphere3"*/);
    FUN_01bab630(&StringLiteral_18325/*"forge_purple"*/);
    FUN_01bab630(&StringLiteral_21484/*"textures/raids/spheres_reward/sphere2_icon.png"*/);
    FUN_01bab630(&StringLiteral_21156/*"sphere2"*/);
    FUN_01bab630(&StringLiteral_10966/*"RaidSpheresReward.sphere1_icon"*/);
    FUN_01bab630(&StringLiteral_10882/*"RaidItems1.sphere3"*/);
    FUN_01bab630(&StringLiteral_21159/*"sphere3Pack"*/);
    FUN_01bab630(&StringLiteral_21157/*"sphere2Pack"*/);
    FUN_01bab630(&StringLiteral_21476/*"textures/panels/top/dan_top10_1.png"*/);
    FUN_01bab630(&StringLiteral_18945/*"img_sphere1"*/);
    FUN_01bab630(&StringLiteral_19741/*"monk_chest"*/);
    FUN_01bab630(&StringLiteral_20255/*"potion_phoenix"*/);
    FUN_01bab630(&StringLiteral_10868/*"RaidInfoIcons.badge_top10_1"*/);
    FUN_01bab630(&StringLiteral_13886/*"TopPanel.dan_top100_1"*/);
    FUN_01bab630(&StringLiteral_18326/*"forge_red"*/);
    FUN_01bab630(&StringLiteral_20257/*"potion_rock"*/);
    FUN_01bab630(&StringLiteral_18947/*"img_sphere3"*/);
    FUN_01bab630(&StringLiteral_10881/*"RaidItems1.sphere2"*/);
    FUN_01bab630(&StringLiteral_21483/*"textures/raids/spheres_reward/sphere1_icon.png"*/);
    FUN_01bab630(&StringLiteral_10884/*"RaidItems3"*/);
    FUN_01bab630(&StringLiteral_21481/*"textures/raids/raid_info/ico/medal_gold.png"*/);
    FUN_01bab630(&StringLiteral_21506/*"tickets"*/);
    FUN_01bab630(&StringLiteral_10870/*"RaidInfoIcons.medal_silver"*/);
    FUN_01bab630(&StringLiteral_21485/*"textures/raids/spheres_reward/sphere3_icon.png"*/);
    FUN_01bab630(&StringLiteral_20256/*"potion_resistance"*/);
    FUN_01bab630(&StringLiteral_20252/*"potion_blood_bomb"*/);
    FUN_01bab630(&StringLiteral_21470/*"textures/misc/forge_purple.png"*/);
    FUN_01bab630(&StringLiteral_10866/*"RaidInfoIcons.badge_top100"*/);
    FUN_01bab630(&StringLiteral_21479/*"textures/raids/raid_info/ico/badge_top100_1.png"*/);
    FUN_01bab630(&StringLiteral_21505/*"ticket"*/);
    FUN_01bab630(&StringLiteral_10869/*"RaidInfoIcons.medal_gold"*/);
    FUN_01bab630(&StringLiteral_18030/*"enchant_chest"*/);
    FUN_01bab630(&StringLiteral_18946/*"img_sphere2"*/);
    FUN_01bab630(&StringLiteral_21472/*"textures/misc/ruby.png"*/);
    FUN_01bab630(&StringLiteral_10883/*"RaidItems2"*/);
    FUN_01bab630(&StringLiteral_21473/*"textures/panels/top/dan_top100_0.png"*/);
    FUN_01bab630(&StringLiteral_13887/*"TopPanel.dan_top10_0"*/);
    FUN_01bab630(&StringLiteral_21477/*"textures/raids/raid_info/ico/badge_top10.png"*/);
    FUN_01bab630(&StringLiteral_9081/*"MiscSprites.forge_green"*/);
    FUN_01bab630(&StringLiteral_9082/*"MiscSprites.forge_purple"*/);
    FUN_01bab630(&StringLiteral_10968/*"RaidSpheresReward.sphere3_icon"*/);
    FUN_01bab630(&StringLiteral_21482/*"textures/raids/raid_info/ico/medal_silver.png"*/);
    FUN_01bab630(&StringLiteral_20253/*"potion_life"*/);
    FUN_01bab630(&StringLiteral_10867/*"RaidInfoIcons.badge_top100_1"*/);
    FUN_01bab630(&StringLiteral_20254/*"potion_magic"*/);
    FUN_01bab630(&StringLiteral_18324/*"forge_green"*/);
    FUN_01bab630(&StringLiteral_21478/*"textures/raids/raid_info/ico/badge_top100.png"*/);
    FUN_01bab630(&StringLiteral_13885/*"TopPanel.dan_top100_0"*/);
    FUN_01bab630(&StringLiteral_13888/*"TopPanel.dan_top10_1"*/);
    FUN_01bab630(&StringLiteral_20208/*"pile_base_keys"*/);
    FUN_01bab630(&StringLiteral_10879/*"RaidItems1"*/);
    FUN_01bab630(&StringLiteral_9080/*"MiscSprites"*/);
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
    FUN_01bab630(&StringLiteral_10967/*"RaidSpheresReward.sphere2_icon"*/);
    FUN_01bab630(&StringLiteral_10865/*"RaidInfoIcons.badge_top10"*/);
    FUN_01bab630(&StringLiteral_21469/*"textures/misc/forge_green.png"*/);
    FUN_01bab630(&StringLiteral_20258/*"potion_spikes"*/);
    FUN_01bab630(&StringLiteral_21471/*"textures/misc/forge_red.png"*/);
    FUN_01bab630(&StringLiteral_10880/*"RaidItems1.sphere1"*/);
    FUN_01bab630(&StringLiteral_21475/*"textures/panels/top/dan_top10_0.png"*/);
    FUN_01bab630(&StringLiteral_16748/*"boosterpack"*/);
    FUN_01bab630(&StringLiteral_20420/*"raid_starterpack"*/);
    FUN_01bab630(&StringLiteral_21474/*"textures/panels/top/dan_top100_1.png"*/);
    FUN_01bab630(&StringLiteral_9083/*"MiscSprites.forge_red"*/);
    FUN_01bab630(&StringLiteral_21155/*"sphere1"*/);
    FUN_01bab630(&StringLiteral_21480/*"textures/raids/raid_info/ico/badge_top10_1.png"*/);
    DAT_0456670d = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo,method)
  ;
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  pOVar5 = &__this->fields;
  pOVar5->CFGGMKKNBPJ = (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  thunk_FUN_01c20e04(pOVar5,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar2 = &(__this->fields).OOHJACAEOCE;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar2 = &(__this->fields).DAPLPNKJGCJ;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar2 = &(__this->fields).FCKJGGOFGBH;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar2 = &(__this->fields).LFMKNBOPODB;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (__this_00,StringLiteral_21505/*"ticket"*/,StringLiteral_9080/*"MiscSprites"*/,pOVar5->CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__FDCGLDMFKPE
            (__this_01,StringLiteral_18324/*"forge_green"*/,StringLiteral_9080/*"MiscSprites"*/,pOVar5->CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__FDCGLDMFKPE
            (__this_02,StringLiteral_18326/*"forge_red"*/,StringLiteral_9080/*"MiscSprites"*/,pOVar5->CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__FDCGLDMFKPE
            (__this_03,StringLiteral_18325/*"forge_purple"*/,StringLiteral_9080/*"MiscSprites"*/,pOVar5->CFGGMKKNBPJ,in_x4);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10879/*"RaidItems1"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_21155/*"sphere1"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10879/*"RaidItems1"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_21156/*"sphere2"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10879/*"RaidItems1"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_21158/*"sphere3"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10880/*"RaidItems1.sphere1"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__DIKJNJNDEMN
            (pOVar4,StringLiteral_18945/*"img_sphere1"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10881/*"RaidItems1.sphere2"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__DIKJNJNDEMN
            (pOVar4,StringLiteral_18946/*"img_sphere2"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10882/*"RaidItems1.sphere3"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__DIKJNJNDEMN
            (pOVar4,StringLiteral_18947/*"img_sphere3"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10884/*"RaidItems3"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_20254/*"potion_magic"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10884/*"RaidItems3"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_20258/*"potion_spikes"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10884/*"RaidItems3"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_20257/*"potion_rock"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10884/*"RaidItems3"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_20255/*"potion_phoenix"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10884/*"RaidItems3"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_20253/*"potion_life"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10884/*"RaidItems3"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_20252/*"potion_blood_bomb"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10884/*"RaidItems3"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_20256/*"potion_resistance"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_04,StringLiteral_21473/*"textures/panels/top/dan_top100_0.png"*/,StringLiteral_13885/*"TopPanel.dan_top100_0"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_05,StringLiteral_21474/*"textures/panels/top/dan_top100_1.png"*/,StringLiteral_13886/*"TopPanel.dan_top100_1"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_06,StringLiteral_21475/*"textures/panels/top/dan_top10_0.png"*/,StringLiteral_13887/*"TopPanel.dan_top10_0"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_07,StringLiteral_21476/*"textures/panels/top/dan_top10_1.png"*/,StringLiteral_13888/*"TopPanel.dan_top10_1"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_08,StringLiteral_21477/*"textures/raids/raid_info/ico/badge_top10.png"*/,StringLiteral_10865/*"RaidInfoIcons.badge_top10"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_09,StringLiteral_21480/*"textures/raids/raid_info/ico/badge_top10_1.png"*/,StringLiteral_10868/*"RaidInfoIcons.badge_top10_1"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_10,StringLiteral_21478/*"textures/raids/raid_info/ico/badge_top100.png"*/,StringLiteral_10866/*"RaidInfoIcons.badge_top100"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_11,StringLiteral_21479/*"textures/raids/raid_info/ico/badge_top100_1.png"*/,StringLiteral_10867/*"RaidInfoIcons.badge_top100_1"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_12,StringLiteral_21481/*"textures/raids/raid_info/ico/medal_gold.png"*/,StringLiteral_10869/*"RaidInfoIcons.medal_gold"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_13,StringLiteral_21482/*"textures/raids/raid_info/ico/medal_silver.png"*/,StringLiteral_10870/*"RaidInfoIcons.medal_silver"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10883/*"RaidItems2"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_16748/*"boosterpack"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10883/*"RaidItems2"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_18030/*"enchant_chest"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10883/*"RaidItems2"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_19741/*"monk_chest"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10883/*"RaidItems2"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_20208/*"pile_base_keys"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10883/*"RaidItems2"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_20420/*"raid_starterpack"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10883/*"RaidItems2"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_21157/*"sphere2Pack"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10883/*"RaidItems2"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_21159/*"sphere3Pack"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  pOVar4 = (OFFIONDOEPM_o *)System_String__Concat(pSVar3,StringLiteral_10883/*"RaidItems2"*/,(MethodInfo *)0x0);
  OFFIONDOEPM__FDCGLDMFKPE
            (pOVar4,StringLiteral_21506/*"tickets"*/,(System_String_o *)pOVar4,(__this->fields).CFGGMKKNBPJ,in_x4
            );
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_14,StringLiteral_21472/*"textures/misc/ruby.png"*/,StringLiteral_9095/*"MiscSprites.ruby"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_15,StringLiteral_21483/*"textures/raids/spheres_reward/sphere1_icon.png"*/,StringLiteral_10966/*"RaidSpheresReward.sphere1_icon"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_16,StringLiteral_21484/*"textures/raids/spheres_reward/sphere2_icon.png"*/,StringLiteral_10967/*"RaidSpheresReward.sphere2_icon"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_17,StringLiteral_21485/*"textures/raids/spheres_reward/sphere3_icon.png"*/,StringLiteral_10968/*"RaidSpheresReward.sphere3_icon"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_18,StringLiteral_21469/*"textures/misc/forge_green.png"*/,StringLiteral_9081/*"MiscSprites.forge_green"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_19,StringLiteral_21471/*"textures/misc/forge_red.png"*/,StringLiteral_9083/*"MiscSprites.forge_red"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__DIKJNJNDEMN
            (__this_20,StringLiteral_21470/*"textures/misc/forge_purple.png"*/,StringLiteral_9082/*"MiscSprites.forge_purple"*/,(__this->fields).CFGGMKKNBPJ,in_x4);
  OFFIONDOEPM__GINIOCFKBLK(__this,method_00);
  OFFIONDOEPM__HKFFICMNPOA(__this,method_01);
  OFFIONDOEPM__JPCINFBICKE(__this,method_02);
  OFFIONDOEPM__OMHOCLKLPPA(__this,method_03);
  return;
}


// ===== public static string CNLBHLNMCCI(string NEJHIEOHMCF)  [RVA 0x3135CBC]
// OFFIONDOEPM$$CNLBHLNMCCI @ RVA 0x3135CBC

System_String_o * OFFIONDOEPM__CNLBHLNMCCI(System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  OFFIONDOEPM_o *pOVar1;
  System_String_o *pSVar2;
  MethodInfo *in_x2;
  
  pOVar1 = OFFIONDOEPM__AIHNLLGNBLC((MethodInfo *)NEJHIEOHMCF);
  if (pOVar1 != (OFFIONDOEPM_o *)0x0) {
    pSVar2 = OFFIONDOEPM__EOFPPCLIMNO(NEJHIEOHMCF,(pOVar1->fields).CFGGMKKNBPJ,in_x2);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HKFFICMNPOA()  [RVA 0x3138154]
// OFFIONDOEPM$$HKFFICMNPOA @ RVA 0x3138154

void OFFIONDOEPM__HKFFICMNPOA(OFFIONDOEPM_o *__this,MethodInfo *method)

{
  long lVar1;
  OFFIONDOEPM_o *__this_00;
  MethodInfo *in_x4;
  ulong uVar2;
  System_String_o *str1;
  ulong uVar3;
  
  if ((DAT_0456670e & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17875/*"drop_blue_seal"*/);
    FUN_01bab630(&StringLiteral_17879/*"drop_red_seal"*/);
    FUN_01bab630(&StringLiteral_17878/*"drop_purple_seal"*/);
    FUN_01bab630(&StringLiteral_17877/*"drop_orange_seal"*/);
    FUN_01bab630(&StringLiteral_18943/*"img_"*/);
    FUN_01bab630(&StringLiteral_17880/*"drop_titan_seal"*/);
    FUN_01bab630(&StringLiteral_17876/*"drop_jade_seal"*/);
    DAT_0456670e = 1;
  }
  lVar1 = FUN_01bab718(string___TypeInfo,6);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = StringLiteral_17875/*"drop_blue_seal"*/;
    thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x20));
    if (1 < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + 0x28) = StringLiteral_17877/*"drop_orange_seal"*/;
      thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x28));
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = StringLiteral_17878/*"drop_purple_seal"*/;
        thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x30));
        if (3 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x38) = StringLiteral_17879/*"drop_red_seal"*/;
          thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x38));
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) = StringLiteral_17880/*"drop_titan_seal"*/;
            thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x40));
            if (5 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x48) = StringLiteral_17876/*"drop_jade_seal"*/;
              thunk_FUN_01c20e04((undefined8 *)(lVar1 + 0x48));
              if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
                uVar3 = 0;
                uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
                do {
                  if (uVar2 <= uVar3) goto LAB_03238354;
                  str1 = *(System_String_o **)(lVar1 + 0x20 + uVar3 * 8);
                  __this_00 = (OFFIONDOEPM_o *)
                              System_String__Concat(StringLiteral_18943/*"img_"*/,str1,(MethodInfo *)0x0);
                  OFFIONDOEPM__DIKJNJNDEMN
                            (__this_00,str1,(System_String_o *)__this_00,
                             (__this->fields).DAPLPNKJGCJ,in_x4);
                  uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
                  uVar3 = uVar3 + 1;
                } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_03238354:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private static string EOFPPCLIMNO(string NEJHIEOHMCF, Dictionary<string, string> FBEEEALALMJ)  [RVA 0x3136DA0]
// OFFIONDOEPM$$EOFPPCLIMNO @ RVA 0x3136DA0

System_String_o *
OFFIONDOEPM__EOFPPCLIMNO
          (System_String_o *NEJHIEOHMCF,
          System_Collections_Generic_Dictionary_string__string__o *FBEEEALALMJ,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *local_28;
  
  if ((DAT_0456670f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    DAT_0456670f = 1;
  }
  local_28 = (System_String_o *)0x0;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(NEJHIEOHMCF,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
  if (!bVar1) {
    if (FBEEEALALMJ == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)FBEEEALALMJ,
                       (Il2CppObject *)NEJHIEOHMCF,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    pSVar2 = local_28;
    if (!bVar1) {
      pSVar2 = NEJHIEOHMCF;
    }
  }
  return pSVar2;
}


// ===== public static string BNMJCGDECGI(string NEJHIEOHMCF)  [RVA 0x313835C]
// OFFIONDOEPM$$BNMJCGDECGI @ RVA 0x313835C

System_String_o * OFFIONDOEPM__BNMJCGDECGI(System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  bool bVar1;
  OFFIONDOEPM_o *pOVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *pSVar3;
  System_String_o *local_18;
  
  if ((DAT_04566710 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    DAT_04566710 = 1;
  }
  local_18 = (System_String_o *)0x0;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(NEJHIEOHMCF,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)0x0;
  if (!bVar1) {
    pOVar2 = OFFIONDOEPM__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((pOVar2 == (OFFIONDOEPM_o *)0x0) ||
       (__this = (System_Collections_Generic_Dictionary_object__object__o *)
                 (pOVar2->fields).FCKJGGOFGBH,
       __this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this,(Il2CppObject *)NEJHIEOHMCF,(Il2CppObject **)&local_18,
                       Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    pSVar3 = local_18;
    if (!bVar1) {
      pSVar3 = NEJHIEOHMCF;
    }
  }
  return pSVar3;
}

