// FKGDENPCMPH$$EPBENPDCBFE @ RVA 0x32CAF78

bool FKGDENPCMPH__EPBENPDCBFE(FKGDENPCMPH_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  OIGAJAKPPEO_o *pOVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO;
  PJKHAJKEHEL_o *pPVar4;
  
  switch((__this->fields).super.LOAFPIOGJAF) {
  case 1:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    GJBLBEALOBO = (AHEFOIOKDOK->fields).OOFILGKHDDI;
    break;
  case 2:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    goto LAB_033cb014;
  case 3:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if ((pOVar2 == (OLKKAIFGGAK_o *)0x0) ||
       (pOVar2 = (pOVar2->fields).NFMBPIPEKGF, pOVar2 == (OLKKAIFGGAK_o *)0x0)) goto LAB_033cb084;
    pPVar4 = (pOVar2->fields).FAPMJJBOFEF;
joined_r0x033cb078:
    if (pPVar4 == (PJKHAJKEHEL_o *)0x0) {
LAB_033cb0d0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    GJBLBEALOBO = (pPVar4->fields).INGEFFGPJPB;
    break;
  case 4:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
      pOVar3 = OLKKAIFGGAK__IHEAMKEDGFH(pOVar2,(MethodInfo *)0x0);
joined_r0x033cb070:
      if (pOVar3 != (OIGAJAKPPEO_o *)0x0) {
        pPVar4 = (pOVar3->fields).super.FAPMJJBOFEF;
        goto joined_r0x033cb078;
      }
    }
    goto LAB_033cb084;
  case 5:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    bVar1 = FKGDENPCMPH__EBGIANGIHFF(__this,(AHEFOIOKDOK->fields).OOFILGKHDDI,method);
    if (!bVar1) goto switchD_033cafac_default;
LAB_033cb014:
    GJBLBEALOBO = (AHEFOIOKDOK->fields).GIIIBDMEPDK;
    break;
  case 6:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
      GJBLBEALOBO = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
    }
    else {
      pOVar2 = (pOVar2->fields).BPJMMBGIMNC;
      if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
        GJBLBEALOBO = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
      }
      else {
        pOVar3 = OLKKAIFGGAK__IHEAMKEDGFH(pOVar2,(MethodInfo *)0x0);
        if (pOVar3 == (OIGAJAKPPEO_o *)0x0) {
          GJBLBEALOBO = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
        }
        else {
          pPVar4 = (pOVar3->fields).super.FAPMJJBOFEF;
          if (pPVar4 == (PJKHAJKEHEL_o *)0x0) goto LAB_033cb0d0;
          GJBLBEALOBO = (pPVar4->fields).INGEFFGPJPB;
        }
      }
      if (__this == (FKGDENPCMPH_o *)0x0) goto LAB_033cb0d0;
    }
    break;
  case 7:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
      pOVar3 = (OIGAJAKPPEO_o *)OLKKAIFGGAK__IPJMKMJAIMK(pOVar2,(MethodInfo *)0x0);
      goto joined_r0x033cb070;
    }
LAB_033cb084:
    GJBLBEALOBO = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
    break;
  default:
switchD_033cafac_default:
    bVar1 = false;
    goto LAB_033cb090;
  }
  bVar1 = FKGDENPCMPH__EBGIANGIHFF(__this,GJBLBEALOBO,method);
LAB_033cb090:
                    /* try { // try from 033cb0a0 to 034cb25f has its CatchHandler @ 033cb0a0
                       catch() { ... } // from try @ 033cb0a0 with catch @ 033cb0a0
                       catch() { ... } // from try @ 033cb34c with catch @ 033cb0a0
                       catch() { ... } // from try @ 033cb38c with catch @ 033cb0a0
                       catch() { ... } // from try @ 033cb3d0 with catch @ 033cb0a0
                       catch() { ... } // from try @ 033cb400 with catch @ 033cb0a0 */
  bVar1 = IENLNOEDCFF__DEBLNLJEJKG((IENLNOEDCFF_o *)__this,bVar1,(MethodInfo *)0x0);
  return bVar1;
}

