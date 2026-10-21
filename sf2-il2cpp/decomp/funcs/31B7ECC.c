// ClanLogoImage$$NeedUpdate @ RVA 0x31B7ECC

bool ClanLogoImage__NeedUpdate
               (ClanLogoImage_o *__this,System_String_o *NEJHIEOHMCF,int32_t OHLDDIANEPE,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((__this->fields).GPCPMFCFAMG == OHLDDIANEPE) {
                    /* try { // try from 032b7ee8 to 033b7eeb has its CatchHandler @ 032b8078 */
    iVar2 = System_String__Compare((__this->fields).BJFFFHJKHIF,NEJHIEOHMCF,5,(MethodInfo *)0x0);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = true;
  }
                    /* try { // try from 032b7efc to 033b7f0b has its CatchHandler @ 032b806c */
  return bVar1;
}

