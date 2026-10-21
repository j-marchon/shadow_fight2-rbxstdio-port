// TypeDefIndex 1980
// Namespace: 
// public class BKKENCMPLLF
// Fields:
//   private string HONOOAELMFJ; // 0x10
//   public const int FBKGGCNBFKP = 3;
//   private EEHFEPPDBHL <OGOHLLOEANF>k__BackingField; // 0x18

// ===== public CPAPMBPHEAB BOENJKAFOEC(string KGLJICLJHEL)  [RVA 0x328F638]
// BKKENCMPLLF$$BOENJKAFOEC @ RVA 0x328F638

int32_t BKKENCMPLLF__BOENJKAFOEC
                  (BKKENCMPLLF_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  
  (__this->fields).HONOOAELMFJ = KGLJICLJHEL;
  thunk_FUN_01c20e04();
  iVar1 = BKKENCMPLLF__ODCJNJBFOLB(__this,method_00);
  return iVar1;
}


// ===== public void KGIPHDHPGDL(Action<KEFHDOHHHML> CPECAEHDDDB)  [RVA 0x328F6B0]
// BKKENCMPLLF$$KGIPHDHPGDL @ RVA 0x328F6B0

void BKKENCMPLLF__KGIPHDHPGDL
               (BKKENCMPLLF_o *__this,System_Action_KEFHDOHHHML__o *CPECAEHDDDB,MethodInfo *method)

{
  int32_t iVar1;
  DMOPGPMINJD_o *__this_00;
  RaidClansManager_o *__this_01;
  System_Action_KEFHDOHHHML__o *extraout_x1;
  System_Action_KEFHDOHHHML__o *method_00;
  
  method_00 = CPECAEHDDDB;
  if ((DAT_04567308 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567308 = 1;
    method_00 = extraout_x1;
  }
  iVar1 = BKKENCMPLLF__ODCJNJBFOLB(__this,(MethodInfo *)method_00);
  if (iVar1 != 0) {
    return;
  }
  __this_00 = (DMOPGPMINJD_o *)thunk_FUN_01bda818(DMOPGPMINJD_TypeInfo);
  DMOPGPMINJD___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (DMOPGPMINJD_o *)0x0) {
    DMOPGPMINJD__HCOCAAIGNNL(__this_00,(__this->fields).HONOOAELMFJ,(MethodInfo *)0x0);
    (__this_00->fields).MMIHELOLFPP = (__this->fields)._OGOHLLOEANF_k__BackingField;
    thunk_FUN_01c20e04();
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if (__this_01 != (RaidClansManager_o *)0x0) {
      RaidClansManager__DJCJMBPPIHK(__this_01,__this_00,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AMGKOBMPBJA(string CJNHFNHJHPE)  [RVA 0x328F794]
// BKKENCMPLLF$$AMGKOBMPBJA @ RVA 0x328F794

void BKKENCMPLLF__AMGKOBMPBJA(BKKENCMPLLF_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  EEHFEPPDBHL_o *__this_00;
  
  __this_00 = (__this->fields)._OGOHLLOEANF_k__BackingField;
  if (__this_00 != (EEHFEPPDBHL_o *)0x0) {
    EEHFEPPDBHL__FFHJDGPNCKJ(__this_00,CJNHFNHJHPE,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AEBIEHGBGCL(Action<KEFHDOHHHML> CPECAEHDDDB)  [RVA 0x328F828]
// BKKENCMPLLF$$AEBIEHGBGCL @ RVA 0x328F828

void BKKENCMPLLF__AEBIEHGBGCL
               (BKKENCMPLLF_o *__this,System_Action_KEFHDOHHHML__o *CPECAEHDDDB,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  
  if ((DAT_04567309 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567309 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (__this_00 != (RaidClansManager_o *)0x0) {
    RaidClansManager__FBKGMIENPFK
              (__this_00,(__this->fields)._OGOHLLOEANF_k__BackingField,CPECAEHDDDB,(MethodInfo *)0x0
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CPAPMBPHEAB ODCJNJBFOLB()  [RVA 0x328F654]
// BKKENCMPLLF$$ODCJNJBFOLB @ RVA 0x328F654

int32_t BKKENCMPLLF__ODCJNJBFOLB(BKKENCMPLLF_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  System_String_o *pSVar3;
  
  bVar1 = PCOEHCPGBBG__KCDAEMMGHNM((__this->fields).HONOOAELMFJ,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).HONOOAELMFJ,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 3;
    }
    else {
      pSVar3 = (__this->fields).HONOOAELMFJ;
      if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = (uint)((pSVar3->fields)._stringLength < 3) << 1;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


// ===== public void PEILNGJMJEC(BANEEHPJOIB CJNHFNHJHPE)  [RVA 0x328F8A0]
// BKKENCMPLLF$$PEILNGJMJEC @ RVA 0x328F8A0

void BKKENCMPLLF__PEILNGJMJEC(BKKENCMPLLF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  
  pEVar1 = (__this->fields)._OGOHLLOEANF_k__BackingField;
  if (pEVar1 != (EEHFEPPDBHL_o *)0x0) {
    (pEVar1->fields).JODJOLBBJNI = CJNHFNHJHPE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string MJBHKOJAFOH()  [RVA 0x328F8BC]
// BKKENCMPLLF$$MJBHKOJAFOH @ RVA 0x328F8BC

System_String_o * BKKENCMPLLF__MJBHKOJAFOH(BKKENCMPLLF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  BKKENCMPLLF_Fields *pBVar2;
  
  pBVar2 = &__this->fields;
  if (pBVar2->HONOOAELMFJ != (System_String_o *)0x0) {
    pSVar1 = System_String__TrimEnd(pBVar2->HONOOAELMFJ,(MethodInfo *)0x0);
    pBVar2->HONOOAELMFJ = pSVar1;
    thunk_FUN_01c20e04(pBVar2,pSVar1);
    return pBVar2->HONOOAELMFJ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EEHFEPPDBHL LELBMGAKKCE()  [RVA 0x328F8F4]
// BKKENCMPLLF$$LELBMGAKKCE @ RVA 0x328F8F4

EEHFEPPDBHL_o * BKKENCMPLLF__LELBMGAKKCE(BKKENCMPLLF_o *__this,MethodInfo *method)

{
  return (__this->fields)._OGOHLLOEANF_k__BackingField;
}


// ===== public CPAPMBPHEAB HOFBHBCLOEO()  [RVA 0x328F784]
// BKKENCMPLLF$$HOFBHBCLOEO @ RVA 0x328F784

int32_t BKKENCMPLLF__HOFBHBCLOEO(BKKENCMPLLF_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public CPAPMBPHEAB IHIACHJKIBA(string CJNHFNHJHPE)  [RVA 0x328F8FC]
// BKKENCMPLLF$$IHIACHJKIBA @ RVA 0x328F8FC

int32_t BKKENCMPLLF__IHIACHJKIBA
                  (BKKENCMPLLF_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  EEHFEPPDBHL_o *__this_00;
  
  __this_00 = (__this->fields)._OGOHLLOEANF_k__BackingField;
  if (__this_00 != (EEHFEPPDBHL_o *)0x0) {
    EEHFEPPDBHL__HLPHKOBKPML(__this_00,CJNHFNHJHPE,method);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GGBIEOLAGNO(EEHFEPPDBHL CJNHFNHJHPE)  [RVA 0x328F998]
// BKKENCMPLLF$$GGBIEOLAGNO @ RVA 0x328F998

void BKKENCMPLLF__GGBIEOLAGNO(BKKENCMPLLF_o *__this,EEHFEPPDBHL_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OGOHLLOEANF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void CGJFEEGNFOM()  [RVA 0x328F9A0]
// BKKENCMPLLF$$CGJFEEGNFOM @ RVA 0x328F9A0

void BKKENCMPLLF__CGJFEEGNFOM(BKKENCMPLLF_o *__this,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  EEHFEPPDBHL_o **ppEVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_0456730a & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456730a = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo,method);
  pEVar1 = auVar3._0_8_;
  EEHFEPPDBHL___ctor(pEVar1,auVar3._8_8_);
  ppEVar2 = &(__this->fields)._OGOHLLOEANF_k__BackingField;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  if (*ppEVar2 != (EEHFEPPDBHL_o *)0x0) {
    EEHFEPPDBHL__HLPHKOBKPML(*ppEVar2,StringLiteral_1/*""*/,in_x2);
    if (*ppEVar2 != (EEHFEPPDBHL_o *)0x0) {
      EEHFEPPDBHL__FFHJDGPNCKJ(*ppEVar2,StringLiteral_1/*""*/,in_x2);
      pEVar1 = *ppEVar2;
      if (pEVar1 != (EEHFEPPDBHL_o *)0x0) {
        (pEVar1->fields).JODJOLBBJNI = 1;
        (pEVar1->fields).IFICKDAKCHN = 0;
        EEHFEPPDBHL__HLPHKOBKPML(pEVar1,(pEVar1->fields).KKMDFLKPNNJ,in_x2);
        pEVar1 = *ppEVar2;
        if ((pEVar1 != (EEHFEPPDBHL_o *)0x0) &&
           (EEHFEPPDBHL__FFHJDGPNCKJ(pEVar1,(pEVar1->fields).JAAACMPGMKJ,in_x2),
           *ppEVar2 != (EEHFEPPDBHL_o *)0x0)) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CPAPMBPHEAB PLDIDKENFJP(int CJNHFNHJHPE)  [RVA 0x328FAD4]
// BKKENCMPLLF$$PLDIDKENFJP @ RVA 0x328FAD4

int32_t BKKENCMPLLF__PLDIDKENFJP(BKKENCMPLLF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  
  pEVar1 = (__this->fields)._OGOHLLOEANF_k__BackingField;
  if (pEVar1 != (EEHFEPPDBHL_o *)0x0) {
    (pEVar1->fields).IFICKDAKCHN = CJNHFNHJHPE;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(EEHFEPPDBHL GMDFNEFPFJH)  [RVA 0x328FAF4]
// BKKENCMPLLF$$.ctor @ RVA 0x328FAF4

void BKKENCMPLLF___ctor(BKKENCMPLLF_o *__this,EEHFEPPDBHL_o *GMDFNEFPFJH,MethodInfo *method)

{
  MethodInfo *method_00;
  EEHFEPPDBHL_o **ppEVar1;
  
  if ((DAT_0456730b & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456730b = 1;
  }
  (__this->fields).HONOOAELMFJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppEVar1 = &(__this->fields)._OGOHLLOEANF_k__BackingField;
  *ppEVar1 = GMDFNEFPFJH;
  thunk_FUN_01c20e04(ppEVar1,GMDFNEFPFJH);
  if (*ppEVar1 != (EEHFEPPDBHL_o *)0x0) {
    return;
  }
  BKKENCMPLLF__CGJFEEGNFOM(__this,method_00);
  return;
}


// ===== public CPAPMBPHEAB AFAFFPBDCHJ()  [RVA 0x328F78C]
// BKKENCMPLLF$$AFAFFPBDCHJ @ RVA 0x328F78C

int32_t BKKENCMPLLF__AFAFFPBDCHJ(BKKENCMPLLF_o *__this,MethodInfo *method)

{
  return 0;
}

