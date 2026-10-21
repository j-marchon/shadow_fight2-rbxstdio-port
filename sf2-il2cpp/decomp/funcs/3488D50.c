// OICHGEFJHDF$$OADNADAAIFL @ RVA 0x3488D50

void OICHGEFJHDF__OADNADAAIFL(OICHGEFJHDF_o *__this,NJIEBADJPEJ_o *HPACPFLKHPK,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  System_String_o *CJFAPGEEPLM;
  bool bVar1;
  bool bVar2;
  AAPGCAPGBLG_o *pAVar3;
  CFGLKHFFEKA_o *pCVar4;
  System_String_o *CEHOJOFLMFF;
  LCKCDEKNLOA_o *__this_00;
  CCLKPGBIBOP_o *pCVar5;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o **ppNVar6;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *exists;
  
  if ((DAT_045683c7 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045683c7 = 1;
  }
  if (HPACPFLKHPK == (NJIEBADJPEJ_o *)0x0) goto LAB_03588ee0;
  bVar1 = NJIEBADJPEJ__BOJJBGPIKDP(HPACPFLKHPK,(MethodInfo *)0x0);
  if ((bVar1) &&
     (bVar1 = NEHNBJKKABI__HALDCNGHJCO
                        ((HPACPFLKHPK->fields)._MLEPHDNBABJ_k__BackingField,(MethodInfo *)0x0),
     bVar1)) {
    pAVar3 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    pCVar5 = (__this->fields).KJAPDIOFGHP;
    if (pCVar5 == (CCLKPGBIBOP_o *)0x0) goto LAB_03588ee0;
    KGLJICLJHEL = (pCVar5->fields)._COIPKAKHDFP_k__BackingField;
    CJFAPGEEPLM = (pCVar5->fields)._HOHLBKMCIDD_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    if (pCVar4 == (CFGLKHFFEKA_o *)0x0) goto LAB_03588ee0;
    CEHOJOFLMFF = (System_String_o *)
                  (*(pCVar4->klass->vtable)._3_ToString.methodPtr)
                            (pCVar4,(pCVar4->klass->vtable)._3_ToString.method);
    pCVar5 = (__this->fields).KJAPDIOFGHP;
    if ((pCVar5 == (CCLKPGBIBOP_o *)0x0) || (pAVar3 == (AAPGCAPGBLG_o *)0x0)) goto LAB_03588ee0;
    AAPGCAPGBLG__OPHDBLMDKJD
              (pAVar3,KGLJICLJHEL,CJFAPGEEPLM,CEHOJOFLMFF,-1,
               (pCVar5->fields)._BNIHGHLPOHB_k__BackingField,
               (pCVar5->fields)._JKGLJFGKPNN_k__BackingField,0,(MethodInfo *)0x0);
    pAVar3 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    pCVar5 = (__this->fields).KJAPDIOFGHP;
    if ((pCVar5 == (CCLKPGBIBOP_o *)0x0) || (pAVar3 == (AAPGCAPGBLG_o *)0x0)) goto LAB_03588ee0;
    bVar1 = AAPGCAPGBLG__JPLEKDCHPDL
                      (pAVar3,(pCVar5->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
  }
  else {
    bVar1 = false;
  }
  ppNVar6 = &(__this->fields).AMCHMHHIMPO;
  exists = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (bVar2) {
    Nekki_SF2_GUI_Dialogs_DownloadingScreen__Destroy((MethodInfo *)0x0);
    *ppNVar6 = (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar6,0);
  }
  if (bVar1 == false) {
    __this_00 = (__this->fields).NBOGMHIMLEC;
  }
  else {
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MDFGJKBMECA__DACAKKGACEM((MethodInfo *)0x0);
    __this_00 = (__this->fields).JLAFBNCHHFO;
  }
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
LAB_03588ee0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

