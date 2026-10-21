// OICCPAIHLMK$$MAHFCKJGBPP @ RVA 0x332D7B4

void OICCPAIHLMK__MAHFCKJGBPP(OICCPAIHLMK_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool MEGHFHANLPK;
  int32_t EPINGPGECOM;
  int32_t GNDOPGAILNK;
  System_String_array *pSVar1;
  int iVar2;
  System_String_o *pSVar3;
  System_String_o *OOGPLJBADCD;
  
  if ((DAT_045678e9 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_045678e9 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).LAJBAKDJEKM;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0342d844 to 0352d8d7 has its CatchHandler @ 0342d844
                       catch() { ... } // from try @ 0342d844 with catch @ 0342d844
                       catch() { ... } // from try @ 0342d8fc with catch @ 0342d844
                       catch() { ... } // from try @ 0342d93c with catch @ 0342d844
                       catch() { ... } // from try @ 0342d964 with catch @ 0342d844
                       catch() { ... } // from try @ 0342d99c with catch @ 0342d844 */
  if ((pSVar3 == (System_String_o *)0x0) ||
     (pSVar1 = System_String__Split(pSVar3,(__this->fields).GFPMKLDHKKL,1,(MethodInfo *)0x0),
     pSVar1 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0342d8fc to 0352d937 has its CatchHandler @ 0342d844 */
    FUN_01bab8c8();
  }
  if (pSVar1->max_length == 0) {
    pSVar3 = string_TypeInfo->static_fields->Empty;
  }
  else {
    iVar2 = (int)pSVar1->max_length;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar3 = pSVar1->m_Items[0];
    if (1 < iVar2) {
      EPINGPGECOM = PCOEHCPGBBG__JBGCINPPLAC(pSVar1->m_Items[1],0,(MethodInfo *)0x0);
      goto LAB_0342d890;
    }
  }
  EPINGPGECOM = 0;
LAB_0342d890:
  OOGPLJBADCD = (__this->fields).FBCLCJAHCHI;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MEGHFHANLPK = MFBNFJGBPBB__EDBBDECOKAF(AAJBIMFNMBB,OOGPLJBADCD,(MethodInfo *)0x0);
  GNDOPGAILNK = MFBNFJGBPBB__JBAMHPFEPLG(AAJBIMFNMBB,(__this->fields).OPONPIJGOKL,(MethodInfo *)0x0)
  ;
                    /* try { // try from 0342d8d8 to 0352d8df has its CatchHandler @ 0342d948 */
  AMIINPEKKFB__BLKCJOFCPOO
            (pSVar3,EPINGPGECOM,GNDOPGAILNK,MEGHFHANLPK,(__this->fields).DJGLFLMFKOE,
             (MethodInfo *)0x0);
                    /* try { // try from 0342d8f0 to 0352d8fb has its CatchHandler @ 0342d940 */
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

