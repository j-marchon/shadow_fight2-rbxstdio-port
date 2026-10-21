// Nekki.SF2.GUI.Shop.PerkProgressBar$$set_BarScale @ RVA 0x3117E50

void Nekki_SF2_GUI_Shop_PerkProgressBar__set_BarScale
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  int32_t JLAFGLDIFOC;
  ALJBCELIEHC_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  NFEOGKEAFHL_o *pNVar3;
  MethodInfo *method_00;
  System_Collections_Generic_List_NFEOGKEAFHL__o *pSVar4;
  System_String_o **ppSVar5;
  undefined8 uVar6;
  
  if ((DAT_045665c8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NFEOGKEAFHL>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045665c8 = 1;
  }
  ppSVar5 = &(__this->fields).HDOFPOOANDI;
  method_00 = (MethodInfo *)0x0;
  bVar2 = System_String__op_Equality(*ppSVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (__this_00 = Nekki_SF2_GUI_Shop_PerkProgressBar__HNJLNPEEMOK
                            ((Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0,CJNHFNHJHPE,method_00),
     __this_00 != (ALJBCELIEHC_o *)0x0)) {
    *ppSVar5 = CJNHFNHJHPE;
    thunk_FUN_01c20e04(ppSVar5,CJNHFNHJHPE);
                    /* try { // try from 03217ec8 to 03317ecf has its CatchHandler @ 032180e8 */
    pSVar4 = (__this_00->fields).PBGALMEHDBP;
    if (pSVar4 == (System_Collections_Generic_List_NFEOGKEAFHL__o *)0x0) goto LAB_03217fa4;
    if ((pSVar4->fields)._size == 0) {
      (__this->fields).PAIPMANMCFP = 0.0;
      (__this->fields).PLGLBIKNOLG = 0.0;
    }
    else {
                    /* try { // try from 03217ee0 to 03317efb has its CatchHandler @ 032180f0 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03217f1c to 03317f23 has its CatchHandler @ 032180f4 */
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03217f2c to 03317f33 has its CatchHandler @ 032180f8 */
      if (__this_01 == (ACHLOMELAJE_o *)0x0) {
LAB_03217fa4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 03217f40 to 03317f67 has its CatchHandler @ 03218100 */
      pNVar3 = ALJBCELIEHC__FCNIFPFAFAF(__this_00,JLAFGLDIFOC,(MethodInfo *)0x0);
      if ((pNVar3 == (NFEOGKEAFHL_o *)0x0) &&
         (pNVar3 = ALJBCELIEHC__ILDMHAKLLJC(__this_00,(MethodInfo *)0x0),
         pNVar3 == (NFEOGKEAFHL_o *)0x0)) goto LAB_03217fa4;
      uVar6._0_4_ = (pNVar3->fields).OAJHHJBAINM;
      uVar6._4_4_ = (pNVar3->fields).DJNEKDHLEHN;
      uVar6 = NEON_scvtf(uVar6,4);
      (__this->fields).PAIPMANMCFP = (float)(int)uVar6;
      (__this->fields).PLGLBIKNOLG = (float)(int)((ulong)uVar6 >> 0x20);
      (__this->fields).JHMGOHBKNMG = (pNVar3->fields).MJHEJPAHPGF;
      (__this->fields).NMLGPAGEDKH = (float)(pNVar3->fields).GHKNFJJOIDM;
    }
    (__this->fields).JBNGADJBDHB = (__this_00->fields).BGHFADDGPAD;
    fVar1 = (__this_00->fields).AKPNOPAEKEF;
    (__this->fields).CNDEOMLMFDC = (__this_00->fields).LDNOMBGGMHF;
    (__this->fields).MFLPMCOHHGB = fVar1;
  }
                    /* try { // try from 03217fa0 to 03317fa7 has its CatchHandler @ 0321810c */
  return;
}

