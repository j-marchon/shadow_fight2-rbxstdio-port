// TypeDefIndex 2444
// Namespace: 
// public class MovesInFightVariables.DOCBHLNBECF
// Fields:
//   public bool KBODCOAHGFG; // 0x10
//   public Model EMCFCMFGPME; // 0x18
//   public Model HEMGHNOOJPI; // 0x20
//   public HJNEOLCKEMD EDOEMIDBEGO; // 0x28
//   public int AEPIFFHAKJG; // 0x30
//   public int CMPJANOIJAF; // 0x34
//   public string KPDPJONADPJ; // 0x38
//   public string GPFDBPGPKFM; // 0x40
//   public bool FOFFKEAJPAF; // 0x48
//   public int HLPPJNKNCFM; // 0x4C

// ===== public string JAKNFKABEKA()  [RVA 0x3363D8C]
// MovesInFightVariables.DOCBHLNBECF$$JAKNFKABEKA @ RVA 0x3363D8C

System_String_o *
MovesInFightVariables_DOCBHLNBECF__JAKNFKABEKA(MovesInFightVariables_DOCBHLNBECF_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD_o *pHVar1;
  
  pHVar1 = (__this->fields).EDOEMIDBEGO;
  if (pHVar1 != (HJNEOLCKEMD_o *)0x0) {
    return (pHVar1->fields)._COIPKAKHDFP_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3361318]
// MovesInFightVariables.DOCBHLNBECF$$.ctor @ RVA 0x3361318

void MovesInFightVariables_DOCBHLNBECF___ctor(MovesInFightVariables_DOCBHLNBECF_o *__this,MethodInfo *method)

{
  if ((DAT_04567aa0 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04567aa0 = 1;
  }
  (__this->fields).KPDPJONADPJ = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).GPFDBPGPKFM = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string HBHNOPJBFIH()  [RVA 0x3363DA8]
// MovesInFightVariables.DOCBHLNBECF$$HBHNOPJBFIH @ RVA 0x3363DA8

System_String_o *
MovesInFightVariables_DOCBHLNBECF__HBHNOPJBFIH(MovesInFightVariables_DOCBHLNBECF_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD_o *pHVar1;
  PerkInfoItem_o *pHVar2;
  
  pHVar1 = (__this->fields).EDOEMIDBEGO;
  if ((pHVar1 != (HJNEOLCKEMD_o *)0x0) &&
     (pHVar2 = (pHVar1->fields).super._MEFGNAIILBJ_k__BackingField, pHVar2 != (PerkInfoItem_o *)0x0))
  {
    return (pHVar2->fields).JIJLBFGKNJK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x3363DCC]
// MovesInFightVariables.DOCBHLNBECF$$.ctor @ RVA 0x3363DCC

void MovesInFightVariables_DOCBHLNBECF___ctor
               (MovesInFightVariables_DOCBHLNBECF_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,
               MethodInfo *method)

{
  int32_t iVar1;
  HJNEOLCKEMD_o **ppHVar2;
  System_String_o **ppSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567aa1 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04567aa1 = 1;
  }
  ppSVar3 = &(__this->fields).KPDPJONADPJ;
  *ppSVar3 = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(ppSVar3);
  ppSVar4 = &(__this->fields).GPFDBPGPKFM;
  *ppSVar4 = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(ppSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
    (__this->fields).KBODCOAHGFG = (CPECAEHDDDB->fields).KBODCOAHGFG;
    (__this->fields).EMCFCMFGPME = (CPECAEHDDDB->fields).EMCFCMFGPME;
    thunk_FUN_01c20e04();
    (__this->fields).HEMGHNOOJPI = (CPECAEHDDDB->fields).HEMGHNOOJPI;
    thunk_FUN_01c20e04();
    ppHVar2 = &(__this->fields).EDOEMIDBEGO;
    *ppHVar2 = (CPECAEHDDDB->fields).EDOEMIDBEGO;
    thunk_FUN_01c20e04(ppHVar2);
    iVar1 = (CPECAEHDDDB->fields).CMPJANOIJAF;
    (__this->fields).AEPIFFHAKJG = (CPECAEHDDDB->fields).AEPIFFHAKJG;
    (__this->fields).CMPJANOIJAF = iVar1;
    (__this->fields).KPDPJONADPJ = (CPECAEHDDDB->fields).KPDPJONADPJ;
    thunk_FUN_01c20e04(ppSVar3);
    (__this->fields).GPFDBPGPKFM = (CPECAEHDDDB->fields).GPFDBPGPKFM;
    thunk_FUN_01c20e04(ppSVar4);
    (__this->fields).FOFFKEAJPAF = (CPECAEHDDDB->fields).FOFFKEAJPAF;
    (__this->fields).HLPPJNKNCFM = (CPECAEHDDDB->fields).HLPPJNKNCFM;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

