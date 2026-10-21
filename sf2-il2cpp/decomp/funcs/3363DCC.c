// MMDDDDFHOLG.DOCBHLNBECF$$.ctor @ RVA 0x3363DCC

void MMDDDDFHOLG_DOCBHLNBECF___ctor
               (MMDDDDFHOLG_DOCBHLNBECF_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,
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
  if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
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

