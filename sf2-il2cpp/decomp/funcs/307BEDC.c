// CNDPAJOLKFN$$AHIPAMALCCN @ RVA 0x307BEDC

CNDPAJOLKFN_o *
CNDPAJOLKFN__AHIPAMALCCN(CNDPAJOLKFN_o *PHCOHKNFGLE,float GJAMCENHFKO,MethodInfo *method)

{
  PKHLGDMJPMF_Fields PVar1;
  PKHLGDMJPMF_Fields PVar2;
  
  if (PHCOHKNFGLE != (CNDPAJOLKFN_o *)0x0) {
    PVar1 = (PHCOHKNFGLE->fields).super;
    PVar2.OHHDBINAJCB = (float)(int)(PVar1.OHHDBINAJCB * GJAMCENHFKO + 0.5) / GJAMCENHFKO;
    PVar2.JOLEIODMLFL = (float)(int)(PVar1.JOLEIODMLFL * GJAMCENHFKO + 0.5) / GJAMCENHFKO;
    (PHCOHKNFGLE->fields).super = PVar2;
    (PHCOHKNFGLE->fields).PPOPAMHBMGG =
         (float)(int)((PHCOHKNFGLE->fields).PPOPAMHBMGG * GJAMCENHFKO + 0.5) / GJAMCENHFKO;
    return PHCOHKNFGLE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

