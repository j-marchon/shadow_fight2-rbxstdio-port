// TypeDefIndex 564
// Namespace: 
// public class GEBHIBIEAJE
// Fields:
//   private IEFEBEDLHNN <HDEPMIOPNAJ>k__BackingField; // 0x10
//   private IEFEBEDLHNN <GNLFCODFOOM>k__BackingField; // 0x18
//   private CNDPAJOLKFN <HMIPFMPCHII>k__BackingField; // 0x20
//   private CNDPAJOLKFN <MHGCPMPILGC>k__BackingField; // 0x28
//   private CNDPAJOLKFN <NAHBLDEPFGM>k__BackingField; // 0x30
//   private CNDPAJOLKFN <AAEKIIKJBDK>k__BackingField; // 0x38
//   public string JLLJJPLJDMD; // 0x40
//   public bool HFFAIKOAFIK; // 0x48
//   public string DBJKFCGNMIE; // 0x50
//   public FDHJDNACICH CJCPGCGLDLK; // 0x58
//   public bool FBDHLHIIGKN; // 0x60
//   public bool GGCKJHKNEAM; // 0x61
//   public ObscuredFloat DMFJKKCCEFD; // 0x64
//   public ObscuredFloat LKOFDNEFPPK; // 0x78
//   public ObscuredFloat LFCBECAJDAH; // 0x8C
//   public string JIJLBFGKNJK; // 0xA0
//   public ObscuredFloat MPJJBPFKHIB; // 0xA8

// ===== public void DJHFPFGCIMH()  [RVA 0x35ACBD0]
// GEBHIBIEAJE$$DJHFPFGCIMH @ RVA 0x35ACBD0

void GEBHIBIEAJE__DJHFPFGCIMH(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  IEFEBEDLHNN_o *pIVar2;
  
  GEBHIBIEAJE__HKNNNPGADIJ(__this,method);
  pIVar1 = (__this->fields)._HDEPMIOPNAJ_k__BackingField;
  if ((pIVar1 != (IEFEBEDLHNN_o *)0x0) &&
     (pIVar2 = (__this->fields)._GNLFCODFOOM_k__BackingField, pIVar2 != (IEFEBEDLHNN_o *)0x0)) {
    PKHLGDMJPMF__PHJLLEGNFPK
              ((pIVar1->fields).CNMHHKAMGPI,(pIVar2->fields).CNMHHKAMGPI,
               (__this->fields).CJCPGCGLDLK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CNDPAJOLKFN BKDCNNOOIJH()  [RVA 0x35ACCAC]
// GEBHIBIEAJE$$BKDCNNOOIJH @ RVA 0x35ACCAC

CNDPAJOLKFN_o * GEBHIBIEAJE__BKDCNNOOIJH(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  
  pIVar1 = (__this->fields)._HDEPMIOPNAJ_k__BackingField;
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    return (pIVar1->fields).CNMHHKAMGPI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IEFEBEDLHNN CILGDEGDHMN()  [RVA 0x35ACCE4]
// GEBHIBIEAJE$$CILGDEGDHMN @ RVA 0x35ACCE4

IEFEBEDLHNN_o * GEBHIBIEAJE__CILGDEGDHMN(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  return (__this->fields)._HDEPMIOPNAJ_k__BackingField;
}


// ===== public EdgeRender PMLCIOCDHDM(Transform NCKFIGCBCPO)  [RVA 0x35ACCEC]
// GEBHIBIEAJE$$PMLCIOCDHDM @ RVA 0x35ACCEC

Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *
GEBHIBIEAJE__PMLCIOCDHDM
          (GEBHIBIEAJE_o *__this,UnityEngine_Transform_o *NCKFIGCBCPO,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  System_String_o *name;
  
  if ((DAT_04568e5d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<EdgeRender>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    DAT_04568e5d = 1;
  }
  name = (__this->fields).JIJLBFGKNJK;
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,name,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (__this_00,Method_UnityEngine_GameObject_AddComponent<EdgeRender>__),
     __this_01 != (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *)0x0)) {
    Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__set_Edge(__this_01,__this,(MethodInfo *)0x0);
    __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_02,NCKFIGCBCPO,false,(MethodInfo *)0x0);
      return __this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MBFOJMIHHME(CNDPAJOLKFN CJNHFNHJHPE)  [RVA 0x35ACDB4]
// GEBHIBIEAJE$$MBFOJMIHHME @ RVA 0x35ACDB4

void GEBHIBIEAJE__MBFOJMIHHME(GEBHIBIEAJE_o *__this,CNDPAJOLKFN_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MHGCPMPILGC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public CNDPAJOLKFN JEFGDONNPOB()  [RVA 0x35ACCC8]
// GEBHIBIEAJE$$JEFGDONNPOB @ RVA 0x35ACCC8

CNDPAJOLKFN_o * GEBHIBIEAJE__JEFGDONNPOB(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  
  pIVar1 = (__this->fields)._GNLFCODFOOM_k__BackingField;
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    return (pIVar1->fields).CNMHHKAMGPI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(IEFEBEDLHNN CKCOLJLFJDB, IEFEBEDLHNN BKAKFOPEOID)  [RVA 0x35ACDBC]
// GEBHIBIEAJE$$.ctor @ RVA 0x35ACDBC

void GEBHIBIEAJE___ctor(GEBHIBIEAJE_o *__this,IEFEBEDLHNN_o *CKCOLJLFJDB,IEFEBEDLHNN_o *BKAKFOPEOID,
                       MethodInfo *method)

{
  FDHJDNACICH_o *__this_00;
  FDHJDNACICH_o **ppFVar1;
  CNDPAJOLKFN_o *pCVar2;
  CNDPAJOLKFN_o **ppCVar3;
  IEFEBEDLHNN_o **ppIVar4;
  
  if ((DAT_04568e5e & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&FDHJDNACICH_TypeInfo);
    DAT_04568e5e = 1;
  }
  __this_00 = (FDHJDNACICH_o *)thunk_FUN_01bda818(FDHJDNACICH_TypeInfo);
  FDHJDNACICH___ctor(__this_00,(MethodInfo *)0x0);
  ppFVar1 = &(__this->fields).CJCPGCGLDLK;
  *ppFVar1 = __this_00;
  thunk_FUN_01c20e04(ppFVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields)._AAEKIIKJBDK_k__BackingField;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields)._NAHBLDEPFGM_k__BackingField;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  (__this->fields)._HDEPMIOPNAJ_k__BackingField = CKCOLJLFJDB;
  thunk_FUN_01c20e04(&__this->fields,CKCOLJLFJDB);
  if (CKCOLJLFJDB != (IEFEBEDLHNN_o *)0x0) {
    (__this->fields)._HMIPFMPCHII_k__BackingField = (CKCOLJLFJDB->fields).CNMHHKAMGPI;
    thunk_FUN_01c20e04();
    ppIVar4 = &(__this->fields)._GNLFCODFOOM_k__BackingField;
    *ppIVar4 = BKAKFOPEOID;
    thunk_FUN_01c20e04(ppIVar4,BKAKFOPEOID);
    if (BKAKFOPEOID != (IEFEBEDLHNN_o *)0x0) {
      ppCVar3 = &(__this->fields)._MHGCPMPILGC_k__BackingField;
      *ppCVar3 = (BKAKFOPEOID->fields).CNMHHKAMGPI;
      thunk_FUN_01c20e04(ppCVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KGKFEJDKHEL(CNDPAJOLKFN CJNHFNHJHPE)  [RVA 0x35ACEE8]
// GEBHIBIEAJE$$KGKFEJDKHEL @ RVA 0x35ACEE8

void GEBHIBIEAJE__KGKFEJDKHEL(GEBHIBIEAJE_o *__this,CNDPAJOLKFN_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AAEKIIKJBDK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public CNDPAJOLKFN NMHCCKCGJIH()  [RVA 0x35ACEF0]
// GEBHIBIEAJE$$NMHCCKCGJIH @ RVA 0x35ACEF0

CNDPAJOLKFN_o * GEBHIBIEAJE__NMHCCKCGJIH(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  return (__this->fields)._HMIPFMPCHII_k__BackingField;
}


// ===== public CNDPAJOLKFN OHCPEBGBPGI()  [RVA 0x35ACEF8]
// GEBHIBIEAJE$$OHCPEBGBPGI @ RVA 0x35ACEF8

CNDPAJOLKFN_o * GEBHIBIEAJE__OHCPEBGBPGI(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  return (__this->fields)._AAEKIIKJBDK_k__BackingField;
}


// ===== public void HKNNNPGADIJ()  [RVA 0x35ACC08]
// GEBHIBIEAJE$$HKNNNPGADIJ @ RVA 0x35ACC08

void GEBHIBIEAJE__HKNNNPGADIJ(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  IEFEBEDLHNN_o *pIVar2;
  CNDPAJOLKFN_o *FMPJLBLNHMC;
  CNDPAJOLKFN_o *IHEPHBIPLPM;
  float fVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  pIVar2 = (__this->fields)._HDEPMIOPNAJ_k__BackingField;
  if ((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
     (pIVar1 = (__this->fields)._GNLFCODFOOM_k__BackingField, pIVar1 != (IEFEBEDLHNN_o *)0x0)) {
    FMPJLBLNHMC = (pIVar2->fields).CNMHHKAMGPI;
    local_40.fakeValueActive = (__this->fields).LKOFDNEFPPK.fields.fakeValueActive;
    local_40.inited = (__this->fields).LKOFDNEFPPK.fields.inited;
    local_40._18_2_ = *(undefined2 *)&(__this->fields).LKOFDNEFPPK.fields.field_0x12;
    local_40.hiddenValueOldByte4.fields =
         (__this->fields).LKOFDNEFPPK.fields.hiddenValueOldByte4.fields;
    local_40.fakeValue = (__this->fields).LKOFDNEFPPK.fields.fakeValue;
    local_40.currentCryptoKey = (__this->fields).LKOFDNEFPPK.fields.currentCryptoKey;
    local_40.hiddenValue = (__this->fields).LKOFDNEFPPK.fields.hiddenValue;
    IHEPHBIPLPM = (pIVar1->fields).CNMHHKAMGPI;
    fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                       (MethodInfo *)0x0);
    CNDPAJOLKFN__DPLKDGIBBEL
              (FMPJLBLNHMC,IHEPHBIPLPM,fVar3,(__this->fields)._NAHBLDEPFGM_k__BackingField,
               (MethodInfo *)0x0);
    local_60.fakeValueActive = (__this->fields).LFCBECAJDAH.fields.fakeValueActive;
    local_60.inited = (__this->fields).LFCBECAJDAH.fields.inited;
    local_60._18_2_ = *(undefined2 *)&(__this->fields).LFCBECAJDAH.fields.field_0x12;
    local_60.hiddenValueOldByte4.fields =
         (__this->fields).LFCBECAJDAH.fields.hiddenValueOldByte4.fields;
    local_60.fakeValue = (__this->fields).LFCBECAJDAH.fields.fakeValue;
    local_60.currentCryptoKey = (__this->fields).LFCBECAJDAH.fields.currentCryptoKey;
    local_60.hiddenValue = (__this->fields).LFCBECAJDAH.fields.hiddenValue;
    fVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                       (MethodInfo *)0x0);
    CNDPAJOLKFN__DPLKDGIBBEL
              (FMPJLBLNHMC,IHEPHBIPLPM,1.0 - fVar3,(__this->fields)._AAEKIIKJBDK_k__BackingField,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OACNLBMIKPO(IEFEBEDLHNN CJNHFNHJHPE)  [RVA 0x35ACF00]
// GEBHIBIEAJE$$OACNLBMIKPO @ RVA 0x35ACF00

void GEBHIBIEAJE__OACNLBMIKPO(GEBHIBIEAJE_o *__this,IEFEBEDLHNN_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HDEPMIOPNAJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void PDNEEKAMACA(CNDPAJOLKFN CJNHFNHJHPE)  [RVA 0x35ACF08]
// GEBHIBIEAJE$$PDNEEKAMACA @ RVA 0x35ACF08

void GEBHIBIEAJE__PDNEEKAMACA(GEBHIBIEAJE_o *__this,CNDPAJOLKFN_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._NAHBLDEPFGM_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void JKHACBAEKEA(IEFEBEDLHNN CJNHFNHJHPE)  [RVA 0x35ACF10]
// GEBHIBIEAJE$$JKHACBAEKEA @ RVA 0x35ACF10

void GEBHIBIEAJE__JKHACBAEKEA(GEBHIBIEAJE_o *__this,IEFEBEDLHNN_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GNLFCODFOOM_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public CNDPAJOLKFN BBJOGLBKFDG()  [RVA 0x35ACF18]
// GEBHIBIEAJE$$BBJOGLBKFDG @ RVA 0x35ACF18

CNDPAJOLKFN_o * GEBHIBIEAJE__BBJOGLBKFDG(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  return (__this->fields)._MHGCPMPILGC_k__BackingField;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x35ACF20]
// GEBHIBIEAJE$$RandomizeObscuredVars @ RVA 0x35ACF20

void GEBHIBIEAJE__RandomizeObscuredVars(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).DMFJKKCCEFD,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).LKOFDNEFPPK,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).LFCBECAJDAH,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).MPJJBPFKHIB,(MethodInfo *)0x0);
  return;
}


// ===== public void DOCFNLBLJFO()  [RVA 0x35ACF5C]
// GEBHIBIEAJE$$DOCFNLBLJFO @ RVA 0x35ACF5C

void GEBHIBIEAJE__DOCFNLBLJFO(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  IEFEBEDLHNN_o *pIVar2;
  CNDPAJOLKFN_o *JDFOLIMEDCJ;
  CNDPAJOLKFN_o *BJCLOGCDNEG;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float IKADKIPIIMD;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  
  pIVar1 = (__this->fields)._HDEPMIOPNAJ_k__BackingField;
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    if ((pIVar1->fields).EKMNMODEKKP == false) {
      pIVar2 = (__this->fields)._GNLFCODFOOM_k__BackingField;
      if (pIVar2 == (IEFEBEDLHNN_o *)0x0) goto LAB_036ad0dc;
      if ((pIVar2->fields).EKMNMODEKKP == false) {
        return;
      }
    }
    fVar3 = IEFEBEDLHNN__NODBECJPBDC(pIVar1,(MethodInfo *)0x0);
    pIVar1 = (__this->fields)._GNLFCODFOOM_k__BackingField;
    if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
      fVar4 = IEFEBEDLHNN__NODBECJPBDC(pIVar1,(MethodInfo *)0x0);
      pIVar1 = (__this->fields)._HDEPMIOPNAJ_k__BackingField;
      if ((pIVar1 != (IEFEBEDLHNN_o *)0x0) &&
         (pIVar2 = (__this->fields)._GNLFCODFOOM_k__BackingField, pIVar2 != (IEFEBEDLHNN_o *)0x0)) {
        BJCLOGCDNEG = (pIVar1->fields).CNMHHKAMGPI;
        local_60.fakeValueActive = (__this->fields).DMFJKKCCEFD.fields.fakeValueActive;
        local_60.inited = (__this->fields).DMFJKKCCEFD.fields.inited;
        local_60._18_2_ = *(undefined2 *)&(__this->fields).DMFJKKCCEFD.fields.field_0x12;
        local_60.hiddenValueOldByte4.fields =
             (__this->fields).DMFJKKCCEFD.fields.hiddenValueOldByte4.fields;
        local_60.fakeValue = (__this->fields).DMFJKKCCEFD.fields.fakeValue;
        local_60.currentCryptoKey = (__this->fields).DMFJKKCCEFD.fields.currentCryptoKey;
        local_60.hiddenValue = (__this->fields).DMFJKKCCEFD.fields.hiddenValue;
        JDFOLIMEDCJ = (pIVar2->fields).CNMHHKAMGPI;
        fVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                           (MethodInfo *)0x0);
        fVar6 = CNDPAJOLKFN__FCEAFPLBNGE(BJCLOGCDNEG,JDFOLIMEDCJ,(MethodInfo *)0x0);
        if ((BJCLOGCDNEG != (CNDPAJOLKFN_o *)0x0) &&
           ((JDFOLIMEDCJ != (CNDPAJOLKFN_o *)0x0 &&
            (pIVar1 = (__this->fields)._HDEPMIOPNAJ_k__BackingField, pIVar1 != (IEFEBEDLHNN_o *)0x0)
            ))) {
          fVar5 = fVar5 / fVar6;
          fVar6 = (1.0 - fVar5) / (fVar3 + fVar4);
          fVar3 = fVar3 * fVar6;
          fVar4 = fVar4 * fVar6;
          IKADKIPIIMD = fVar3 * (BJCLOGCDNEG->fields).super.OHHDBINAJCB +
                        fVar4 * (JDFOLIMEDCJ->fields).super.OHHDBINAJCB;
          fVar6 = fVar3 * (BJCLOGCDNEG->fields).super.JOLEIODMLFL +
                  fVar4 * (JDFOLIMEDCJ->fields).super.JOLEIODMLFL;
          fVar3 = fVar3 * (BJCLOGCDNEG->fields).PPOPAMHBMGG +
                  fVar4 * (JDFOLIMEDCJ->fields).PPOPAMHBMGG;
          if ((pIVar1->fields).EKMNMODEKKP != false) {
            CNDPAJOLKFN__PGLILPKGILI(BJCLOGCDNEG,fVar5,(MethodInfo *)0x0);
            CNDPAJOLKFN__LFENGGKOJDO(BJCLOGCDNEG,IKADKIPIIMD,fVar6,fVar3,(MethodInfo *)0x0);
          }
          pIVar1 = (__this->fields)._GNLFCODFOOM_k__BackingField;
          if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
            if ((pIVar1->fields).EKMNMODEKKP != false) {
              CNDPAJOLKFN__PGLILPKGILI(JDFOLIMEDCJ,fVar5,(MethodInfo *)0x0);
              CNDPAJOLKFN__LFENGGKOJDO(JDFOLIMEDCJ,IKADKIPIIMD,fVar6,fVar3,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
LAB_036ad0dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IEFEBEDLHNN HEBELGEADHK()  [RVA 0x35AD0E0]
// GEBHIBIEAJE$$HEBELGEADHK @ RVA 0x35AD0E0

IEFEBEDLHNN_o * GEBHIBIEAJE__HEBELGEADHK(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  return (__this->fields)._GNLFCODFOOM_k__BackingField;
}


// ===== private void FCJMKIBBPBL(CNDPAJOLKFN CJNHFNHJHPE)  [RVA 0x35AD0E8]
// GEBHIBIEAJE$$FCJMKIBBPBL @ RVA 0x35AD0E8

void GEBHIBIEAJE__FCJMKIBBPBL(GEBHIBIEAJE_o *__this,CNDPAJOLKFN_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HMIPFMPCHII_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public CNDPAJOLKFN KBIOAMEMNKE()  [RVA 0x35AD0F0]
// GEBHIBIEAJE$$KBIOAMEMNKE @ RVA 0x35AD0F0

CNDPAJOLKFN_o * GEBHIBIEAJE__KBIOAMEMNKE(GEBHIBIEAJE_o *__this,MethodInfo *method)

{
  return (__this->fields)._NAHBLDEPFGM_k__BackingField;
}

