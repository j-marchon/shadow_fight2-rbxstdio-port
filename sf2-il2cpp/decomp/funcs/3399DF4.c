// MMDPNDAECII$$MPLGBEILHIP @ RVA 0x3399DF4

void MMDPNDAECII__MPLGBEILHIP(MMDPNDAECII_o *__this,GEBHIBIEAJE_o *PGHNHNDHEPF,MethodInfo *method)

{
  IEFEBEDLHNN_o *AHDGNOJPPIB;
  IEFEBEDLHNN_o *AHDGNOJPPIB_00;
  
  if ((PGHNHNDHEPF == (GEBHIBIEAJE_o *)0x0) ||
     (AHDGNOJPPIB = (PGHNHNDHEPF->fields)._HDEPMIOPNAJ_k__BackingField,
     AHDGNOJPPIB == (IEFEBEDLHNN_o *)0x0)) {
LAB_03499e6c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  AHDGNOJPPIB_00 = (PGHNHNDHEPF->fields)._GNLFCODFOOM_k__BackingField;
  if ((AHDGNOJPPIB->fields).EKMNMODEKKP == false) {
    if (AHDGNOJPPIB_00 == (IEFEBEDLHNN_o *)0x0) goto LAB_03499e6c;
    if ((AHDGNOJPPIB_00->fields).EKMNMODEKKP == false) {
      return;
    }
  }
  else {
    MMDPNDAECII__IIHMOINCCLH(__this,AHDGNOJPPIB,method);
    if (AHDGNOJPPIB_00 == (IEFEBEDLHNN_o *)0x0) goto LAB_03499e6c;
    if ((AHDGNOJPPIB_00->fields).EKMNMODEKKP == false) goto LAB_03499e4c;
  }
  MMDPNDAECII__IIHMOINCCLH(__this,AHDGNOJPPIB_00,method);
LAB_03499e4c:
  GEBHIBIEAJE__DOCFNLBLJFO(PGHNHNDHEPF,(MethodInfo *)0x0);
  return;
}

