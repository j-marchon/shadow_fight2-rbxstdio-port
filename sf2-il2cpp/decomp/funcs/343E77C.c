// OPNMPAJKDMI$$HHDBIGKBMEC @ RVA 0x343E77C

bool OPNMPAJKDMI__HHDBIGKBMEC(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  AJDHCLBLGMI_o *pAVar3;
  
  bVar2 = OPNMPAJKDMI__ICDECCBLPDE(__this,method);
  if (!bVar2) {
                    /* try { // try from 0353e78c to 0363e797 has its CatchHandler @ 0353e7f0 */
    pAVar3 = (__this->fields)._FBNKBJAJBJF_k__BackingField;
    if (pAVar3 == (AJDHCLBLGMI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0353e798 to 0363e7e7 has its CatchHandler @ 0353e66c */
    uVar1 = (pAVar3->fields).ICBBFDJOHHF - 1;
    if (uVar1 < 4) {
      bVar2 = (bool)((byte)(0xb >> (ulong)(uVar1 & 0xf)) & 1);
    }
  }
  return bVar2;
}

