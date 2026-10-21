// TypeDefIndex 814
// Namespace: 
// public static class KKCBGIBKOCP
// Fields:
//   public const string BIIJMJDFOAA = "UI/Atlases/";
//   public const string CFEAKGLNBMF = "Resources/";
//   private static readonly string[] CMGCKPCHDHP; // 0x0

// ===== public static Sprite GMNKLNDACOO(string OOKEKJMFKPE, string HCAAAAMDCNO)  [RVA 0x307673C]
// KKCBGIBKOCP$$GMNKLNDACOO @ RVA 0x307673C

UnityEngine_Sprite_o *
KKCBGIBKOCP__GMNKLNDACOO
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Sprite_o *pUVar2;
  MethodInfo *in_x5;
  
  if ((DAT_04565fa9 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04565fa9 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = EOAOCPLIKOI_TypeInfo->static_fields->ABJLMAOEEEE;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
  }
  pUVar2 = KKCBGIBKOCP__EAJNBBHMMLB(OOKEKJMFKPE,HCAAAAMDCNO,false,bVar1 == false,false,in_x5);
  return pUVar2;
}


// ===== private static string GCOFAABGDIM(string AFKICLAFDKC, bool GMDKAHCJGBD)  [RVA 0x3076944]
// KKCBGIBKOCP$$GCOFAABGDIM @ RVA 0x3076944

System_String_o *
KKCBGIBKOCP__GCOFAABGDIM(System_String_o *AFKICLAFDKC,bool GMDKAHCJGBD,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04565faa & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04565faa = 1;
  }
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (GMDKAHCJGBD) {
    if (DAT_04565fef == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565fef = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (FGKGKDEJCOG_TypeInfo->static_fields->BDFFMDCAHGJ,(MethodInfo *)0x0);
    if (bVar1) {
      return AFKICLAFDKC;
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565fef == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565fef = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = FGKGKDEJCOG_TypeInfo->static_fields->BDFFMDCAHGJ;
  }
  else {
    if (DAT_04565ff0 == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565ff0 = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (FGKGKDEJCOG_TypeInfo->static_fields->HABNBDAMLMP,(MethodInfo *)0x0);
    if (bVar1) {
      return AFKICLAFDKC;
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565ff0 == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565ff0 = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = FGKGKDEJCOG_TypeInfo->static_fields->HABNBDAMLMP;
  }
  pSVar2 = System_String__Concat(AFKICLAFDKC,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== public static Sprite NECCNHODCAE(string OOKEKJMFKPE, string HCAAAAMDCNO, bool NHOBJGPBONB = False)  [RVA 0x3076AE8]
// KKCBGIBKOCP$$NECCNHODCAE @ RVA 0x3076AE8

UnityEngine_Sprite_o *
KKCBGIBKOCP__NECCNHODCAE
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,bool NHOBJGPBONB,
          MethodInfo *method)

{
  UnityEngine_Sprite_o *pUVar1;
  MethodInfo *in_x5;
  
  if ((DAT_04565fab & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04565fab = 1;
  }
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = KKCBGIBKOCP__EAJNBBHMMLB(OOKEKJMFKPE,HCAAAAMDCNO,false,false,NHOBJGPBONB,in_x5);
  return pUVar1;
}


// ===== public static Sprite AABNIJJLJLP(string OOKEKJMFKPE, string HCAAAAMDCNO)  [RVA 0x3076B5C]
// KKCBGIBKOCP$$AABNIJJLJLP @ RVA 0x3076B5C

UnityEngine_Sprite_o *
KKCBGIBKOCP__AABNIJJLJLP
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  UnityEngine_Sprite_o *pUVar1;
  MethodInfo *in_x5;
  
  if ((DAT_04565fac & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04565fac = 1;
  }
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = KKCBGIBKOCP__EAJNBBHMMLB(OOKEKJMFKPE,HCAAAAMDCNO,true,false,false,in_x5);
  return pUVar1;
}


// ===== public static string LFEHBAMJCMH(HEFOANCOHDC EIKFGOCCOIE)  [RVA 0x3076BCC]
// KKCBGIBKOCP$$LFEHBAMJCMH @ RVA 0x3076BCC

System_String_o * KKCBGIBKOCP__LFEHBAMJCMH(HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  System_String_o *str0;
  bool bVar1;
  int32_t length;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar2;
  
  if ((DAT_04565fad & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_5704/*"Enchantments."*/);
    DAT_04565fad = 1;
    method = extraout_x1;
  }
  if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
    pSVar2 = (EIKFGOCCOIE->fields).KPDPJONADPJ;
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    pSVar2 = KKCBGIBKOCP__FPDKPJMNJII(pSVar2,method);
    if ((pSVar2 != (System_String_o *)0x0) &&
       ((length = System_String__IndexOf(pSVar2,0x5f,(MethodInfo *)0x0), length < 0 ||
        (pSVar2 = System_String__Substring(pSVar2,0,length,(MethodInfo *)0x0),
        pSVar2 != (System_String_o *)0x0)))) {
      str0 = StringLiteral_5704/*"Enchantments."*/;
      bVar1 = System_String__StartsWith(pSVar2,StringLiteral_5704/*"Enchantments."*/,(MethodInfo *)0x0);
      if (bVar1) {
        return pSVar2;
      }
      pSVar2 = System_String__Concat(str0,pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3076D3C]
// KKCBGIBKOCP$$.cctor @ RVA 0x3076D3C

void KKCBGIBKOCP___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if ((DAT_04565fae & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_20323/*"ptbr"*/);
    FUN_01bab630(&StringLiteral_20635/*"rus"*/);
    FUN_01bab630(&StringLiteral_18405/*"ger"*/);
    FUN_01bab630(&StringLiteral_19271/*"jpn"*/);
    FUN_01bab630(&StringLiteral_16803/*"brus"*/);
    FUN_01bab630(&StringLiteral_18341/*"fra"*/);
    FUN_01bab630(&StringLiteral_21614/*"tur"*/);
    FUN_01bab630(&StringLiteral_19207/*"ita"*/);
    FUN_01bab630(&StringLiteral_21868/*"usbr"*/);
    FUN_01bab630(&StringLiteral_21145/*"spa"*/);
    FUN_01bab630(&StringLiteral_16995/*"chn"*/);
    FUN_01bab630(&StringLiteral_19324/*"kor"*/);
    DAT_04565fae = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,0xc);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_21868/*"usbr"*/;
      thunk_FUN_01c20e04(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = StringLiteral_16803/*"brus"*/;
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = StringLiteral_16995/*"chn"*/;
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = StringLiteral_18341/*"fra"*/;
            thunk_FUN_01c20e04(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = StringLiteral_18405/*"ger"*/;
              thunk_FUN_01c20e04(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = StringLiteral_20635/*"rus"*/;
                thunk_FUN_01c20e04(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = StringLiteral_19207/*"ita"*/;
                  thunk_FUN_01c20e04(pSVar1->m_Items + 6);
                  if (7 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[7] = StringLiteral_19271/*"jpn"*/;
                    thunk_FUN_01c20e04(pSVar1->m_Items + 7);
                    if (8 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[8] = StringLiteral_19324/*"kor"*/;
                      thunk_FUN_01c20e04(pSVar1->m_Items + 8);
                      if (9 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[9] = StringLiteral_21614/*"tur"*/;
                        thunk_FUN_01c20e04(pSVar1->m_Items + 9);
                        if (10 < (uint)pSVar1->max_length) {
                          pSVar1->m_Items[10] = StringLiteral_21145/*"spa"*/;
                          thunk_FUN_01c20e04(pSVar1->m_Items + 10);
                          if (0xb < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[0xb] = StringLiteral_20323/*"ptbr"*/;
                            thunk_FUN_01c20e04();
                            KKCBGIBKOCP_TypeInfo->static_fields->CMGCKPCHDHP = pSVar1;
                            thunk_FUN_01c20e04(KKCBGIBKOCP_TypeInfo->static_fields,pSVar1);
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static Sprite EAJNBBHMMLB(string OOKEKJMFKPE, string HCAAAAMDCNO, bool CKNMMCNCCCL, bool GMDKAHCJGBD, bool NHOBJGPBONB = False)  [RVA 0x30767E4]
// KKCBGIBKOCP$$EAJNBBHMMLB @ RVA 0x30767E4

UnityEngine_Sprite_o *
KKCBGIBKOCP__EAJNBBHMMLB
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,bool CKNMMCNCCCL,
          bool GMDKAHCJGBD,bool NHOBJGPBONB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *__this;
  UnityEngine_Sprite_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)NHOBJGPBONB;
  if ((DAT_04565faf & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04565faf = 1;
  }
  if (HCAAAAMDCNO == (System_String_o *)0x0) {
    return (UnityEngine_Sprite_o *)0x0;
  }
  bVar1 = System_String__Contains(HCAAAAMDCNO,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    iVar2 = System_String__LastIndexOf(HCAAAAMDCNO,0x2f,(MethodInfo *)0x0);
    OOKEKJMFKPE = System_String__Substring(HCAAAAMDCNO,0,iVar2 + 1,(MethodInfo *)0x0);
    HCAAAAMDCNO = System_String__Substring(HCAAAAMDCNO,iVar2 + 1,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_01;
  }
  __this = KKCBGIBKOCP__KMCFMENCOAH(HCAAAAMDCNO,method_00);
  if (__this != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(__this,0x2e,(MethodInfo *)0x0);
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
    }
    if (bVar1) {
      pUVar3 = KKCBGIBKOCP__EGKJEEBJAGH(OOKEKJMFKPE,__this,CKNMMCNCCCL,GMDKAHCJGBD,method_01);
      return pUVar3;
    }
    pUVar3 = KKCBGIBKOCP__CMMAOAPNOMN(OOKEKJMFKPE,__this,CKNMMCNCCCL,GMDKAHCJGBD,NHOBJGPBONB,method)
    ;
    return pUVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string FPDKPJMNJII(string HEEJOJAGIKC)  [RVA 0x3076CAC]
// KKCBGIBKOCP$$FPDKPJMNJII @ RVA 0x3076CAC

System_String_o * KKCBGIBKOCP__FPDKPJMNJII(System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04565fb0 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04565fb0 = 1;
    method = extraout_x1;
  }
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  pSVar2 = KKCBGIBKOCP__KMCFMENCOAH(HEEJOJAGIKC,method);
  if (pSVar2 != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(pSVar2,0x2e,(MethodInfo *)0x0);
    if (-1 < iVar1) {
      pSVar2 = System_String__Substring(pSVar2,iVar1 + 1,(MethodInfo *)0x0);
      return pSVar2;
    }
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool INHBAMFOLNC(string HCAAAAMDCNO)  [RVA 0x30775DC]
// KKCBGIBKOCP$$INHBAMFOLNC @ RVA 0x30775DC

bool KKCBGIBKOCP__INHBAMFOLNC(System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
                    /* try { // try from 031775e4 to 0327760b has its CatchHandler @ 031771b8 */
  if ((DAT_04565fb1 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_16205/*"_low"*/);
                    /* try { // try from 0317760c to 0327761b has its CatchHandler @ 03177da8 */
    DAT_04565fb1 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(HCAAAAMDCNO,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
                    /* try { // try from 03177638 to 0327763b has its CatchHandler @ 03177d44 */
                    /* try { // try from 0317763c to 0327764b has its CatchHandler @ 03177d74 */
  method_00 = extraout_x1;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
                    /* try { // try from 0317764c to 03277673 has its CatchHandler @ 031771b8 */
  __this = KKCBGIBKOCP__KMCFMENCOAH(HCAAAAMDCNO,method_00);
  if (__this != (System_String_o *)0x0) {
                    /* try { // try from 03177674 to 03277683 has its CatchHandler @ 03177da4 */
    bVar1 = System_String__EndsWith(__this,StringLiteral_16205/*"_low"*/,5,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static Sprite EGKJEEBJAGH(string OOKEKJMFKPE, string HCAAAAMDCNO, bool CKNMMCNCCCL, bool GMDKAHCJGBD)  [RVA 0x307735C]
// KKCBGIBKOCP$$EGKJEEBJAGH @ RVA 0x307735C

UnityEngine_Sprite_o *
KKCBGIBKOCP__EGKJEEBJAGH
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,bool CKNMMCNCCCL,
          bool GMDKAHCJGBD,MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Sprite_o *pUVar5;
  MethodInfo *method_00;
  System_String_o *AFKICLAFDKC;
  
  if ((DAT_04565fb2 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04565fb2 = 1;
  }
  if (HCAAAAMDCNO != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pSVar2 = System_String__Split(HCAAAAMDCNO,0x2e,0,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_array *)0x0) {
      if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      AFKICLAFDKC = pSVar2->m_Items[0];
      pSVar3 = AFKICLAFDKC;
      if (!CKNMMCNCCCL) {
        if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = KKCBGIBKOCP__GCOFAABGDIM(AFKICLAFDKC,GMDKAHCJGBD,method_00);
      }
      pSVar4 = System_String__Concat(OOKEKJMFKPE,pSVar3,(MethodInfo *)0x0);
      if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo);
      }
      x = (UnityEngine_Object_o *)AMHFFFODDOC__EOLACNMEFKC(pSVar4,HCAAAAMDCNO,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = System_String__Concat(StringLiteral_14092/*"UI/Atlases/"*/,pSVar3,(MethodInfo *)0x0);
        if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo);
        }
        x = (UnityEngine_Object_o *)AMHFFFODDOC__EOLACNMEFKC(pSVar4,HCAAAAMDCNO,(MethodInfo *)0x0);
      }
                    /* try { // try from 031774d4 to 032774e3 has its CatchHandler @ 0317807c */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03177500 to 03277503 has its CatchHandler @ 03177d84 */
                    /* try { // try from 03177504 to 03277513 has its CatchHandler @ 03177f08 */
      if ((bVar1) &&
         (bVar1 = System_String__op_Inequality(AFKICLAFDKC,pSVar3,(MethodInfo *)0x0), bVar1)) {
                    /* try { // try from 03177514 to 0327753b has its CatchHandler @ 031771b8 */
        pSVar3 = System_String__Concat(OOKEKJMFKPE,AFKICLAFDKC,(MethodInfo *)0x0);
        if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo);
        }
                    /* try { // try from 0317753c to 0327754b has its CatchHandler @ 03177fb8 */
        x = (UnityEngine_Object_o *)AMHFFFODDOC__EOLACNMEFKC(pSVar3,HCAAAAMDCNO,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03177568 to 0327756b has its CatchHandler @ 03177d64 */
        if (bVar1) {
                    /* try { // try from 0317756c to 0327757b has its CatchHandler @ 03177da0 */
                    /* try { // try from 0317757c to 032775a3 has its CatchHandler @ 031771b8 */
          pSVar3 = System_String__Concat(StringLiteral_14092/*"UI/Atlases/"*/,AFKICLAFDKC,(MethodInfo *)0x0);
          if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo);
          }
                    /* try { // try from 031775a4 to 032775b3 has its CatchHandler @ 03177dac */
          pUVar5 = AMHFFFODDOC__EOLACNMEFKC(pSVar3,HCAAAAMDCNO,(MethodInfo *)0x0);
          return pUVar5;
        }
      }
                    /* try { // try from 031775d0 to 032775d3 has its CatchHandler @ 03177d4c */
      return (UnityEngine_Sprite_o *)x;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031775d4 to 032775e3 has its CatchHandler @ 03177d7c */
  FUN_01bab8c8();
}


// ===== public static bool KMNFAKKBIHD(string LFGKEPCBPKF)  [RVA 0x307767C]
// KKCBGIBKOCP$$KMNFAKKBIHD @ RVA 0x307767C

bool KKCBGIBKOCP__KMNFAKKBIHD(System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int32_t iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = LFGKEPCBPKF;
  if ((DAT_04565fb3 & 1) == 0) {
                    /* try { // try from 031776a0 to 032776a3 has its CatchHandler @ 03177d3c */
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 031776a4 to 032776b3 has its CatchHandler @ 03177d6c */
    FUN_01bab630(&StringLiteral_1485/*".tga"*/);
                    /* try { // try from 031776b4 to 0327772f has its CatchHandler @ 031771b8 */
    FUN_01bab630(&StringLiteral_1475/*".jpg"*/);
    FUN_01bab630(&StringLiteral_1474/*".jpeg"*/);
    FUN_01bab630(&StringLiteral_1459/*".bmp"*/);
    auVar7 = FUN_01bab630(&StringLiteral_1480/*".png"*/);
    DAT_04565fb3 = 1;
  }
  if (LFGKEPCBPKF != (System_String_o *)0x0) {
    iVar3 = System_String__LastIndexOf(LFGKEPCBPKF,0x2e,(MethodInfo *)0x0);
    if (iVar3 < 1) {
      return false;
    }
    auVar7 = FUN_01bab718(string___TypeInfo,5);
    lVar4 = auVar7._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar7._8_8_;
    auVar7 = auVar1 << 0x40;
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
                    /* try { // try from 03177730 to 03277733 has its CatchHandler @ 03177d80 */
                    /* try { // try from 03177734 to 03277743 has its CatchHandler @ 03177f04 */
        *(undefined8 *)(lVar4 + 0x20) = StringLiteral_1480/*".png"*/;
        thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x20));
                    /* try { // try from 03177744 to 032777bb has its CatchHandler @ 031771b8 */
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = StringLiteral_1475/*".jpg"*/;
          thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x28));
          if (2 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x30) = StringLiteral_1474/*".jpeg"*/;
            thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x30));
            if (3 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x38) = StringLiteral_1485/*".tga"*/;
              thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x38));
                    /* try { // try from 031777bc to 032777bf has its CatchHandler @ 03177d60 */
                    /* try { // try from 031777c0 to 032777cf has its CatchHandler @ 03177d9c */
              if (4 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x40) = StringLiteral_1459/*".bmp"*/;
                thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x40));
                    /* try { // try from 031777e8 to 032777eb has its CatchHandler @ 03177d88 */
                    /* try { // try from 031777ec to 032777f7 has its CatchHandler @ 03177fb4 */
                if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
                  return false;
                }
                uVar6 = 0;
                uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
                    /* try { // try from 031777f8 to 032778ff has its CatchHandler @ 031771b8 */
                while (uVar6 < uVar5) {
                  bVar2 = System_String__EndsWith
                                    (LFGKEPCBPKF,*(System_String_o **)(lVar4 + 0x20 + uVar6 * 8),5,
                                     (MethodInfo *)0x0);
                  if (bVar2) {
                    return true;
                  }
                  uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
                  uVar6 = uVar6 + 1;
                  if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar6) {
                    return false;
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}


// ===== public static string LCEINBEOKFL(string DIHAKADKIKM)  [RVA 0x3077850]
// KKCBGIBKOCP$$LCEINBEOKFL @ RVA 0x3077850

System_String_o * KKCBGIBKOCP__LCEINBEOKFL(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  Core_Configs_Models_BuildSettingsConfig_o *config;
  MethodInfo *extraout_x1;
  ulong uVar4;
  System_String_o *HMEKPGHJBDJ;
  System_String_array *pSVar5;
  ulong uVar6;
  
  if ((DAT_04565fb4 & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_11935/*"SettingsButtons."*/);
    FUN_01bab630(&StringLiteral_19349/*"language"*/);
    DAT_04565fb4 = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  config = (Core_Configs_Models_BuildSettingsConfig_o *)
           IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  bVar2 = Core_Configs_Models_BuildSettingsExtension__GetHideLanguageFlags
                    (config,false,(MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 03177900 to 03277903 has its CatchHandler @ 03177d48 */
                    /* try { // try from 03177904 to 03277913 has its CatchHandler @ 03177d78 */
    iVar3 = 0;
    do {
      if (DIHAKADKIKM == (System_String_o *)0x0) {
LAB_03177a08:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = System_String__IndexOf(DIHAKADKIKM,StringLiteral_11935/*"SettingsButtons."*/,iVar3,(MethodInfo *)0x0);
      if (iVar3 < 0) {
        return DIHAKADKIKM;
      }
                    /* try { // try from 03177924 to 03277927 has its CatchHandler @ 03177d5c */
                    /* try { // try from 03177928 to 03277933 has its CatchHandler @ 03177d98 */
      if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = KKCBGIBKOCP_TypeInfo->static_fields->CMGCKPCHDHP;
      if (pSVar5 == (System_String_array *)0x0) goto LAB_03177a08;
                    /* try { // try from 03177950 to 03277953 has its CatchHandler @ 03177d50 */
      if (0 < (int)pSVar5->max_length) {
                    /* try { // try from 03177954 to 03277963 has its CatchHandler @ 03177d90 */
        uVar6 = 0;
        uVar4 = pSVar5->max_length & 0xffffffff;
        do {
          if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03177a0c to 03277bc3 has its CatchHandler @ 031771b8 */
            FUN_01bab8d0();
          }
                    /* try { // try from 0317796c to 0327796f has its CatchHandler @ 03177d40 */
          if (StringLiteral_11935/*"SettingsButtons."*/ == (System_String_o *)0x0) goto LAB_03177a08;
                    /* try { // try from 03177970 to 0327797f has its CatchHandler @ 03177d70 */
          HMEKPGHJBDJ = pSVar5->m_Items[uVar6];
          bVar2 = PCOEHCPGBBG__IGPGADIOPPH
                            (DIHAKADKIKM,(StringLiteral_11935/*"SettingsButtons."*/->fields)._stringLength + iVar3,
                             HMEKPGHJBDJ,(MethodInfo *)0x0);
          if (bVar2) {
            DIHAKADKIKM = System_String__Replace
                                    (DIHAKADKIKM,HMEKPGHJBDJ,StringLiteral_19349/*"language"*/,(MethodInfo *)0x0);
                    /* try { // try from 031779bc to 032779c7 has its CatchHandler @ 03177d8c */
            if (StringLiteral_19349/*"language"*/ == (System_String_o *)0x0) goto LAB_03177a08;
            iVar3 = (StringLiteral_19349/*"language"*/->fields)._stringLength + iVar3;
            break;
          }
                    /* try { // try from 03177990 to 03277993 has its CatchHandler @ 03177d58 */
          uVar1 = (uint)pSVar5->max_length;
          uVar4 = (ulong)uVar1;
                    /* try { // try from 03177994 to 032779bb has its CatchHandler @ 03177f0c */
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)uVar1);
      }
                    /* try { // try from 031779d0 to 032779d3 has its CatchHandler @ 03177d38 */
                    /* try { // try from 031779d4 to 032779e3 has its CatchHandler @ 03177d68 */
      if ((StringLiteral_11935/*"SettingsButtons."*/ == (System_String_o *)0x0) || (DIHAKADKIKM == (System_String_o *)0x0)
         ) goto LAB_03177a08;
      iVar3 = (StringLiteral_11935/*"SettingsButtons."*/->fields)._stringLength + iVar3;
    } while (iVar3 < (DIHAKADKIKM->fields)._stringLength);
  }
                    /* try { // try from 031779fc to 032779ff has its CatchHandler @ 03177d54 */
                    /* try { // try from 03177a00 to 03277a0b has its CatchHandler @ 03177d94 */
  return DIHAKADKIKM;
}


// ===== private static string NDDGJFHOCJO(string HCAAAAMDCNO, bool GMDKAHCJGBD)  [RVA 0x3077A10]
// KKCBGIBKOCP$$NDDGJFHOCJO @ RVA 0x3077A10

System_String_o *
KKCBGIBKOCP__NDDGJFHOCJO(System_String_o *HCAAAAMDCNO,bool GMDKAHCJGBD,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04565fb5 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04565fb5 = 1;
  }
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (GMDKAHCJGBD) {
    if (DAT_04565fef == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565fef = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (FGKGKDEJCOG_TypeInfo->static_fields->BDFFMDCAHGJ,(MethodInfo *)0x0);
    if (bVar1) {
      return HCAAAAMDCNO;
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565fef == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565fef = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = FGKGKDEJCOG_TypeInfo->static_fields->BDFFMDCAHGJ;
  }
  else {
    if (DAT_04565ff0 == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565ff0 = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (FGKGKDEJCOG_TypeInfo->static_fields->HABNBDAMLMP,(MethodInfo *)0x0);
    if (bVar1) {
      return HCAAAAMDCNO;
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565ff0 == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565ff0 = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = FGKGKDEJCOG_TypeInfo->static_fields->HABNBDAMLMP;
  }
  pSVar2 = System_String__Concat(HCAAAAMDCNO,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== private static Sprite CMMAOAPNOMN(string OOKEKJMFKPE, string HCAAAAMDCNO, bool CKNMMCNCCCL, bool GMDKAHCJGBD, bool NHOBJGPBONB)  [RVA 0x307717C]
// KKCBGIBKOCP$$CMMAOAPNOMN @ RVA 0x307717C

UnityEngine_Sprite_o *
KKCBGIBKOCP__CMMAOAPNOMN
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,bool CKNMMCNCCCL,
          bool GMDKAHCJGBD,bool NHOBJGPBONB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *p_path;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)CKNMMCNCCCL;
  if ((DAT_04565fb6 & 1) == 0) {
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
                    /* try { // try from 031771b8 to 032774d3 has its CatchHandler @ 031771b8
                       catch() { ... } // from try @ 031771b8 with catch @ 031771b8
                       catch() { ... } // from try @ 03177514 with catch @ 031771b8
                       catch() { ... } // from try @ 0317757c with catch @ 031771b8
                       catch() { ... } // from try @ 031775e4 with catch @ 031771b8
                       catch() { ... } // from try @ 0317764c with catch @ 031771b8
                       catch() { ... } // from try @ 031776b4 with catch @ 031771b8
                       catch() { ... } // from try @ 03177744 with catch @ 031771b8
                       catch() { ... } // from try @ 031777f8 with catch @ 031771b8
                       catch() { ... } // from try @ 03177a0c with catch @ 031771b8
                       catch() { ... } // from try @ 03177bcc with catch @ 031771b8
                       catch() { ... } // from try @ 03177c18 with catch @ 031771b8
                       catch() { ... } // from try @ 03177de0 with catch @ 031771b8
                       catch() { ... } // from try @ 03177e54 with catch @ 031771b8
                       catch() { ... } // from try @ 03177e8c with catch @ 031771b8
                       catch() { ... } // from try @ 03177f00 with catch @ 031771b8
                       catch() { ... } // from try @ 03177f3c with catch @ 031771b8
                       catch() { ... } // from try @ 03177fb0 with catch @ 031771b8
                       catch() { ... } // from try @ 03177fec with catch @ 031771b8
                       catch() { ... } // from try @ 03178078 with catch @ 031771b8
                       catch() { ... } // from try @ 031780b0 with catch @ 031771b8
                       catch() { ... } // from try @ 03178184 with catch @ 031771b8 */
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
    DAT_04565fb6 = 1;
  }
  pSVar2 = HCAAAAMDCNO;
  if (!CKNMMCNCCCL) {
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = KKCBGIBKOCP__NDDGJFHOCJO(HCAAAAMDCNO,GMDKAHCJGBD,method_00);
  }
  if (NHOBJGPBONB) {
    if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_Object_o *)
             EEMAEBIOIKM__GKMHEGHFEDN(OOKEKJMFKPE,HCAAAAMDCNO,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (UnityEngine_Sprite_o *)pUVar3;
    }
  }
  p_path = System_String__Concat(OOKEKJMFKPE,pSVar2,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Object_o *)
           UnityEngine_ResourcesAndBundles__Load<object>
                     (p_path,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__op_Inequality(pSVar2,HCAAAAMDCNO,(MethodInfo *)0x0), bVar1)
     ) {
    pSVar2 = System_String__Concat(OOKEKJMFKPE,HCAAAAMDCNO,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Object_o *)
             UnityEngine_ResourcesAndBundles__Load<object>
                       (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
  }
  if (NHOBJGPBONB) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EEMAEBIOIKM__GADEAHMJDCN
                (OOKEKJMFKPE,HCAAAAMDCNO,(UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0);
    }
  }
  return (UnityEngine_Sprite_o *)pUVar3;
}


// ===== public static void PFJIHMIKHNL(ResolutionImage IEPECMCLKJB, string JPPLEGNJFMJ, string GKNNFJNBCNB)  [RVA 0x3077BB4]
// KKCBGIBKOCP$$PFJIHMIKHNL @ RVA 0x3077BB4

void KKCBGIBKOCP__PFJIHMIKHNL
               (Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,System_String_o *JPPLEGNJFMJ,
               System_String_o *GKNNFJNBCNB,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *CJNHFNHJHPE;
  
                    /* try { // try from 03177bc4 to 03277bc7 has its CatchHandler @ 03178080 */
                    /* try { // try from 03177bc8 to 03277bcb has its CatchHandler @ 03177fbc */
                    /* try { // try from 03177bcc to 03277c0b has its CatchHandler @ 031771b8 */
  if ((DAT_04565fb7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_04565fb7 = 1;
  }
  if (GKNNFJNBCNB != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(GKNNFJNBCNB,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
    if (-1 < iVar1) {
                    /* try { // try from 03177c0c to 03277c0f has its CatchHandler @ 03177e5c */
                    /* try { // try from 03177c10 to 03277c13 has its CatchHandler @ 03177e58 */
                    /* try { // try from 03177c14 to 03277c17 has its CatchHandler @ 03177db0 */
                    /* try { // try from 03177c18 to 03277dc7 has its CatchHandler @ 031771b8 */
      GKNNFJNBCNB = System_String__Substring(GKNNFJNBCNB,iVar1 + 1,(MethodInfo *)0x0);
    }
    CJNHFNHJHPE = System_String__Concat(JPPLEGNJFMJ,GKNNFJNBCNB,(MethodInfo *)0x0);
    if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string KMCFMENCOAH(string LFGKEPCBPKF)  [RVA 0x3077028]
// KKCBGIBKOCP$$KMCFMENCOAH @ RVA 0x3077028

System_String_o * KKCBGIBKOCP__KMCFMENCOAH(System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  bool bVar1;
  int32_t length;
  System_String_o *pSVar2;
  
  if ((DAT_04565fb8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_16730/*"bmp"*/);
    FUN_01bab630(&StringLiteral_20237/*"png"*/);
    FUN_01bab630(&StringLiteral_19269/*"jpeg"*/);
    FUN_01bab630(&StringLiteral_19270/*"jpg"*/);
    FUN_01bab630(&StringLiteral_21489/*"tga"*/);
    DAT_04565fb8 = 1;
  }
  if (LFGKEPCBPKF != (System_String_o *)0x0) {
    length = System_String__LastIndexOf(LFGKEPCBPKF,0x2e,(MethodInfo *)0x0);
    if (0 < length) {
      pSVar2 = System_String__Substring(LFGKEPCBPKF,length + 1,(MethodInfo *)0x0);
      if (pSVar2 == (System_String_o *)0x0) goto LAB_03177178;
      pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_20237/*"png"*/,(MethodInfo *)0x0);
      if ((((bVar1) ||
           (bVar1 = System_String__op_Equality(pSVar2,StringLiteral_19270/*"jpg"*/,(MethodInfo *)0x0), bVar1)
           ) || (bVar1 = System_String__op_Equality(pSVar2,StringLiteral_19269/*"jpeg"*/,(MethodInfo *)0x0),
                bVar1)) ||
         ((bVar1 = System_String__op_Equality(pSVar2,StringLiteral_21489/*"tga"*/,(MethodInfo *)0x0), bVar1
          || (bVar1 = System_String__op_Equality(pSVar2,StringLiteral_16730/*"bmp"*/,(MethodInfo *)0x0),
             bVar1)))) {
        pSVar2 = System_String__Substring(LFGKEPCBPKF,0,length,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    return LFGKEPCBPKF;
  }
LAB_03177178:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

