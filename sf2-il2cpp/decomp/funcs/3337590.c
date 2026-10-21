// OHDDKGHEEPA$$.ctor @ RVA 0x3337590

void OHDDKGHEEPA___ctor(OHDDKGHEEPA_o *__this,System_String_o *ACCIHBHMFPN,
                       UnityEngine_Vector2_o BLEOKMIDGIK,System_String_o *KGLJICLJHEL,
                       System_String_o *NEJHIEOHMCF,System_String_o *FNLBOLFNLPP,
                       System_String_o *ONLOEDAIEOJ,uint16_t JDIHKNKFJMK,uint16_t EHEFEIEKHJO,
                       System_String_o *JCLPIKHEKBB,System_String_o *JEHFOBHMGJM,
                       System_String_o *LBKOHHHPNIP,System_String_o *FNLFDPAJACB,
                       System_String_o *OAJJFDIDFKC,System_String_o *JOPFAAGCIOI,bool MENLMNJNMMO,
                       MethodInfo *method)

{
  OHDDKGHEEPA_PKBJJBGAIGC_o *__this_00;
  FPLOLKHJIAF_o **ppFVar1;
  OHDDKGHEEPA_PKBJJBGAIGC_o **ppOVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04567950 & 1) == 0) {
    FUN_01bab630(&OHDDKGHEEPA_PKBJJBGAIGC_TypeInfo);
    DAT_04567950 = 1;
  }
  OOMHDDBCBJP___ctor((OOMHDDBCBJP_o *)__this,ACCIHBHMFPN,BLEOKMIDGIK,KGLJICLJHEL,NEJHIEOHMCF,
                     FNLBOLFNLPP,ONLOEDAIEOJ,JDIHKNKFJMK,EHEFEIEKHJO,JCLPIKHEKBB,JEHFOBHMGJM,
                     LBKOHHHPNIP,FNLFDPAJACB,OAJJFDIDFKC,JOPFAAGCIOI,MENLMNJNMMO,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
  auVar3 = thunk_FUN_01bda818(OHDDKGHEEPA_PKBJJBGAIGC_TypeInfo);
  __this_00 = auVar3._0_8_;
  OHDDKGHEEPA_PKBJJBGAIGC___ctor(__this_00,auVar3._8_8_);
  ppOVar2 = &(__this->fields).OJPLGFNIGBC;
  *ppOVar2 = __this_00;
  thunk_FUN_01c20e04(ppOVar2,__this_00);
  if (*ppOVar2 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    ppFVar1 = &((*ppOVar2)->fields).KMANGLPAOJM;
    *ppFVar1 = (FPLOLKHJIAF_o *)0x0;
    thunk_FUN_01c20e04(ppFVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

