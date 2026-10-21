// IGFGDDANEPE$$GIIJHCLHFDK @ RVA 0x30A4134

void IGFGDDANEPE__GIIJHCLHFDK(IGFGDDANEPE_o *__this,int32_t PIDMGHLCFAJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t EPINGPGECOM;
  System_Collections_Generic_List_PONNKDFAMFM__o *pSVar3;
  HOOAAGABMBL_o **DOGHDPHAEON;
  HOOAAGABMBL_o **PBNOJCMNDDN;
  HOOAAGABMBL_o *pHVar4;
  
  if ((DAT_04566161 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Count__);
    DAT_04566161 = 1;
  }
  PBNOJCMNDDN = &(__this->fields).EGAAAFHLNOE;
  *PBNOJCMNDDN = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(PBNOJCMNDDN,0);
  DOGHDPHAEON = &(__this->fields).LFPOIAJDMBK;
  *DOGHDPHAEON = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(DOGHDPHAEON,0);
  pHVar4 = (__this->fields).PCBECBEFJOI;
  (__this->fields).GOJELHDHCDP = false;
  (__this->fields).DKNFBKANNGN = false;
  (__this->fields).IIPJCIFKCIH = false;
  (__this->fields).KGBJHBCIOGH = false;
  if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  EPINGPGECOM = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).DCFOJDEFIHG.fields,(MethodInfo *)0x0);
  HOOAAGABMBL__MJGMEEKMAOE(pHVar4,PIDMGHLCFAJ,EPINGPGECOM,PBNOJCMNDDN,DOGHDPHAEON,(MethodInfo *)0x0)
  ;
  pHVar4 = (__this->fields).PCBECBEFJOI;
  if ((pHVar4 == (HOOAAGABMBL_o *)0x0) ||
     (pSVar3 = HOOAAGABMBL__DBONHFEAOEG(pHVar4,false,0x7fffffff,(MethodInfo *)0x0),
     pSVar3 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pSVar3->fields)._size;
  (__this->fields).GOJELHDHCDP = 0 < iVar1;
  if (iVar1 < 1) {
    (__this->fields).DKNFBKANNGN = false;
    (__this->fields).IIPJCIFKCIH = false;
  }
  else {
    pHVar4 = (__this->fields).LFPOIAJDMBK;
    (__this->fields).DKNFBKANNGN = (__this->fields).EGAAAFHLNOE != (HOOAAGABMBL_o *)0x0;
    (__this->fields).IIPJCIFKCIH = pHVar4 == (HOOAAGABMBL_o *)0x0;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
      bVar2 = false;
      goto LAB_031a422c;
    }
  }
  bVar2 = *DOGHDPHAEON != (HOOAAGABMBL_o *)0x0;
LAB_031a422c:
  (__this->fields).KGBJHBCIOGH = bVar2;
  return;
}

