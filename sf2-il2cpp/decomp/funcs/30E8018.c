// HOOAAGABMBL$$NGBJPIBMBMG @ RVA 0x30E8018

bool HOOAAGABMBL__NGBJPIBMBMG(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  long lVar3;
  GLDKIFOLMAO_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  System_String_o *CJNHFNHJHPE_00;
  float CHOCOAGNFDD;
  float ABJFEGILLJG;
  
  pGVar4 = (__this->fields).FEAKLAKEMBE;
  ppSVar1 = &(__this->fields).AAEIONBBBBF;
  if (pGVar4 != (GLDKIFOLMAO_o *)0x0) {
    ppSVar1 = &(pGVar4->fields)._DGKHEMIDIFL_k__BackingField;
  }
  CJNHFNHJHPE = *ppSVar1;
  lVar3 = (*(__this->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                    (__this,0,(__this->klass->vtable)._6_PDECHBMCBDB.method);
  if (lVar3 == 0) {
    CJNHFNHJHPE_00 = (System_String_o *)0x0;
  }
  else {
    CJNHFNHJHPE_00 = *(System_String_o **)(lVar3 + 0x28);
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((bVar2) || (bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE_00,(MethodInfo *)0x0), bVar2)) {
    bVar2 = true;
  }
  else {
    CHOCOAGNFDD = PCOEHCPGBBG__OFFODGKLGOP(CJNHFNHJHPE,0.0,(MethodInfo *)0x0);
    ABJFEGILLJG = PCOEHCPGBBG__OFFODGKLGOP(CJNHFNHJHPE_00,0.0,(MethodInfo *)0x0);
    bVar2 = Util__JFJCDAJGFKD(CHOCOAGNFDD,ABJFEGILLJG,1e-10,(MethodInfo *)0x0);
    bVar2 = !bVar2;
  }
  return bVar2;
}

