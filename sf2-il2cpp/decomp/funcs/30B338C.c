// EDELKOLBNDG$$AMFNAJDCAKF @ RVA 0x30B338C

bool EDELKOLBNDG__AMFNAJDCAKF
               (EDELKOLBNDG_o *__this,JMIFGHKOLCL_o *OKHDOCIIAJG,JMIFGHKOLCL_o *ONEFJHFHALK,
               bool ODGCPKBEFOL,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if ((__this->fields).OOJIBEJEEGF == false) {
    bVar3 = true;
  }
  else {
    if (OKHDOCIIAJG == (JMIFGHKOLCL_o *)0x0) goto LAB_031b3458;
                    /* try { // try from 031b33a0 to 032b33b7 has its CatchHandler @ 031b35d8 */
    bVar3 = (OKHDOCIIAJG->fields).LDNBDFNLCOK ==
            (bool_conflict)*(char *)((long)&(__this->fields).IKEDHPAPFDA + 1);
  }
  if ((__this->fields).NDMADLNDJBH == false) {
    bVar4 = true;
  }
  else {
    if (OKHDOCIIAJG == (JMIFGHKOLCL_o *)0x0) goto LAB_031b3458;
    bVar4 = (OKHDOCIIAJG->fields).DMAAHCDPHDI ==
            (bool_conflict)*(char *)((long)&(__this->fields).IKEDHPAPFDA + 2);
  }
                    /* try { // try from 031b33d8 to 032b33df has its CatchHandler @ 031b35dc */
  if ((__this->fields).FBJJIFINMNN == false) {
    bVar5 = true;
  }
  else {
    if (ONEFJHFHALK == (JMIFGHKOLCL_o *)0x0) goto LAB_031b3458;
    bVar5 = (ONEFJHFHALK->fields).CMIMOABBIJC ==
            (bool_conflict)*(char *)((long)&(__this->fields).IKEDHPAPFDA + 3);
                    /* try { // try from 031b33f0 to 032b3413 has its CatchHandler @ 031b35c4 */
  }
  if (OKHDOCIIAJG != (JMIFGHKOLCL_o *)0x0) {
    if ((OKHDOCIIAJG->fields).ELCBIMMGAFJ == 6) {
      if ((bVar3 & (OKHDOCIIAJG->fields).OOAJMHEECGF) == 0) {
        bVar3 = false;
      }
      else {
                    /* try { // try from 031b3414 to 032b341b has its CatchHandler @ 031b35bc */
        iVar1._0_1_ = (__this->fields).KGFPLKMNLGB;
        iVar1._1_1_ = (__this->fields).FBGFNGLLNMG;
        iVar1._2_1_ = (__this->fields).EPIIDGFAAFB;
        iVar1._3_1_ = (__this->fields).field_0x7b;
        bVar3 = (OKHDOCIIAJG->fields).OKPIHCKHLAD == false;
                    /* try { // try from 031b3420 to 032b349f has its CatchHandler @ 031b35e4 */
        bVar3 = (iVar1 == 2 || !bVar3 && iVar1 == 0) || iVar1 == 1 && bVar3;
      }
      if ((bool)(bVar5 & bVar4 & bVar3)) {
        if (ODGCPKBEFOL) {
          iVar2 = *(int *)&(__this->fields).super.field_0x5c;
          iVar1 = (__this->fields).BADFKNGBLEJ + 1;
          (__this->fields).BADFKNGBLEJ = iVar1;
        }
        else {
          iVar2 = *(int *)&(__this->fields).super.field_0x5c;
          iVar1 = (__this->fields).JHLGFABKBNA + 1;
          (__this->fields).JHLGFABKBNA = iVar1;
        }
        if ((iVar2 == 1) && ((__this->fields).HEMMCIFBAMJ <= iVar1)) {
                    /* try { // try from 031b34c0 to 032b34d7 has its CatchHandler @ 031b35f4 */
          *(undefined1 *)&(__this->fields).IKEDHPAPFDA = 1;
          return true;
        }
        return true;
      }
    }
    return false;
  }
LAB_031b3458:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

