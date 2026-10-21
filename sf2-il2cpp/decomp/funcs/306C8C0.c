// GMGALNFPLPA$$AHCKBJBLBLI @ RVA 0x306C8C0

bool GMGALNFPLPA__AHCKBJBLBLI(GMGALNFPLPA_o *__this,MethodInfo *method)

{
  bool bVar1;
  GMGALNFPLPA_GPAPFODFLNH_o *pGVar2;
  
  pGVar2 = (__this->fields).ENNJLAAEABK;
  if (pGVar2 != (GMGALNFPLPA_GPAPFODFLNH_o *)0x0) {
    if ((pGVar2->fields).BLOGOHKEPHI == false) {
      pGVar2 = (__this->fields).JBPELKEMOCM;
      if (pGVar2 == (GMGALNFPLPA_GPAPFODFLNH_o *)0x0) goto LAB_0316c8f8;
      bVar1 = (pGVar2->fields).BLOGOHKEPHI != false;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
LAB_0316c8f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

