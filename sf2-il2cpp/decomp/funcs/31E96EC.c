// MNLIBPAOCLG$$JOJNIMMFKDN @ RVA 0x31E96EC

void MNLIBPAOCLG__JOJNIMMFKDN
               (MNLIBPAOCLG_o *__this,float KAHCMCDBOJJ,float LFKKILIJCFI,float DDOJAIELDCP,
               System_String_o *POOAFIMEKMF,MethodInfo *method)

{
  GMGALNFPLPA_o *pGVar1;
  MEHKKHFBNLM_o *pMVar2;
  NHBBOEHHEKG_o *pNVar3;
  GMGALNFPLPA_o **ppGVar4;
  float fVar5;
  undefined4 in_register_00005044;
  
  if ((DAT_04566d82 & 1) == 0) {
    FUN_01bab630(&GMGALNFPLPA_TypeInfo);
    FUN_01bab630(&StringLiteral_12938);
    DAT_04566d82 = 1;
  }
  ppGVar4 = &(__this->fields).EILFIPKJKKI;
  if (*ppGVar4 == (GMGALNFPLPA_o *)0x0) {
    pGVar1 = (GMGALNFPLPA_o *)thunk_FUN_01bda818(GMGALNFPLPA_TypeInfo);
    GMGALNFPLPA___ctor(pGVar1,1,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).CNHHLPPHNCO;
    if ((pNVar3 == (NHBBOEHHEKG_o *)0x0) || (pGVar1 == (GMGALNFPLPA_o *)0x0)) goto LAB_032e9940;
    fVar5 = (pNVar3->fields).IDBMGJFGIJH;
    (*(pGVar1->klass->vtable)._4_KLGJMPDHMKE.methodPtr)
              (CONCAT44(in_register_00005044,DDOJAIELDCP),
               (pNVar3->fields).NMFKJBOAOLK * 0.5 + KAHCMCDBOJJ,fVar5 + fVar5 + 7.0,0,pGVar1,
               POOAFIMEKMF,StringLiteral_12938,0,0xffffffff,
               (pGVar1->klass->vtable)._4_KLGJMPDHMKE.method);
    pNVar3 = (__this->fields).CNHHLPPHNCO;
    if (pNVar3 == (NHBBOEHHEKG_o *)0x0) goto LAB_032e9940;
    GMGALNFPLPA__GFECOLFOILC
              (pGVar1,KAHCMCDBOJJ * 0.5 + (pNVar3->fields).NMFKJBOAOLK * -0.25,
               ((pNVar3->fields).IDBMGJFGIJH + 7.0) - (pNVar3->fields).DAPHCPICAAC * 0.5,
               (MethodInfo *)0x0);
    pMVar2 = (__this->fields).DDDKDGIEBFP;
    if (pMVar2 == (MEHKKHFBNLM_o *)0x0) goto LAB_032e9940;
    MEHKKHFBNLM__OADFBMDLMOD(pMVar2,pGVar1,(MethodInfo *)0x0);
    *ppGVar4 = pGVar1;
    thunk_FUN_01c20e04(ppGVar4,pGVar1);
  }
  ppGVar4 = &(__this->fields).ACOIDPEGKIP;
  if (*ppGVar4 != (GMGALNFPLPA_o *)0x0) {
    return;
  }
  pGVar1 = (GMGALNFPLPA_o *)thunk_FUN_01bda818(GMGALNFPLPA_TypeInfo);
  GMGALNFPLPA___ctor(pGVar1,1,(MethodInfo *)0x0);
  pNVar3 = (__this->fields).CNHHLPPHNCO;
  if ((pNVar3 != (NHBBOEHHEKG_o *)0x0) && (pGVar1 != (GMGALNFPLPA_o *)0x0)) {
    fVar5 = (pNVar3->fields).IDBMGJFGIJH;
    (*(pGVar1->klass->vtable)._4_KLGJMPDHMKE.methodPtr)
              (CONCAT44(in_register_00005044,DDOJAIELDCP),
               (pNVar3->fields).NMFKJBOAOLK * 0.5 - LFKKILIJCFI,fVar5 + fVar5 + 7.0,0,pGVar1,
               POOAFIMEKMF,StringLiteral_12938,0,0xffffffff,
               (pGVar1->klass->vtable)._4_KLGJMPDHMKE.method);
    pNVar3 = (__this->fields).CNHHLPPHNCO;
    if (pNVar3 != (NHBBOEHHEKG_o *)0x0) {
      GMGALNFPLPA__GFECOLFOILC
                (pGVar1,LFKKILIJCFI * 0.5 + (pNVar3->fields).NMFKJBOAOLK * 0.25,
                 ((pNVar3->fields).IDBMGJFGIJH + 7.0) - (pNVar3->fields).DAPHCPICAAC * 0.5,
                 (MethodInfo *)0x0);
      pMVar2 = (__this->fields).DDDKDGIEBFP;
      if (pMVar2 != (MEHKKHFBNLM_o *)0x0) {
        MEHKKHFBNLM__OADFBMDLMOD(pMVar2,pGVar1,(MethodInfo *)0x0);
        *ppGVar4 = pGVar1;
        thunk_FUN_01c20e04(ppGVar4,pGVar1);
        return;
      }
    }
  }
LAB_032e9940:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

