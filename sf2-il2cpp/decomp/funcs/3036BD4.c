// MFBNFJGBPBB$$INBNIPOEFGO @ RVA 0x3036BD4

EILGGBOIMGE_FMFDKGKCBBG_o *
MFBNFJGBPBB__INBNIPOEFGO(PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  LEGDPJHPEOB_o *pLVar1;
  PKHMIGFEJCL_o **ppPVar2;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this;
  
  if ((DAT_04565d4a & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d4a = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar1 = MFBNFJGBPBB_TypeInfo->static_fields->MMAJDCGGELF;
  if (pLVar1 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar2 = &(pLVar1->fields).AAJBIMFNMBB;
    *ppPVar2 = HLAGOHADLKH;
    thunk_FUN_01c20e04(ppPVar2,HLAGOHADLKH);
    __this = MFBNFJGBPBB_TypeInfo->static_fields->JELECAMAOBG;
    if (__this != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this,(MethodInfo *)0x0);
      pLVar1 = MFBNFJGBPBB_TypeInfo->static_fields->MMAJDCGGELF;
      if (pLVar1 != (LEGDPJHPEOB_o *)0x0) {
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)pLVar1,OOGPLJBADCD,
                   MFBNFJGBPBB_TypeInfo->static_fields->JELECAMAOBG,false,(System_String_o *)0x0,
                   (MethodInfo *)0x0);
        pLVar1 = MFBNFJGBPBB_TypeInfo->static_fields->MMAJDCGGELF;
        if (pLVar1 != (LEGDPJHPEOB_o *)0x0) {
          ppPVar2 = &(pLVar1->fields).AAJBIMFNMBB;
          *ppPVar2 = (PKHMIGFEJCL_o *)0x0;
          thunk_FUN_01c20e04(ppPVar2,0);
          return MFBNFJGBPBB_TypeInfo->static_fields->JELECAMAOBG;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

