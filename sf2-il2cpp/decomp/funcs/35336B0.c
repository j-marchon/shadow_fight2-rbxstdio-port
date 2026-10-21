// JJPNLEPEAFM$$OJEGBDGIKGH @ RVA 0x35336B0

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__OJEGBDGIKGH
          (int32_t ACCIHBHMFPN,System_String_o *PCPECHHMLEC,System_String_o *EHNFGMGKCHO,
          System_String_o *KCFLBKINDFM,System_String_o *KHPLLCKLJKO,
          System_Action_object__o *IELDNEAAPBE,int32_t ACLFJCOLFMD,int32_t LGJADIDEGHK,
          bool AJJPMOMMIGJ,bool NNKNJCADLGF,System_String_o *IDGIFNHOBPI,bool HEMMOCPADNA,
          bool MDOBBHMPIHP,bool GFLIJBOMEKO,bool PFIAGDGJCJG,MethodInfo *method)

{
  bool bVar1;
  LKEEMMPKJKK_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_00;
  int32_t DNBBBGEENMM;
  
  if ((DAT_04568a79 & 1) == 0) {
    FUN_01bab630(&LKEEMMPKJKK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04568a79 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KCFLBKINDFM,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KHPLLCKLJKO,(MethodInfo *)0x0), bVar1)) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KCFLBKINDFM,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KHPLLCKLJKO,(MethodInfo *)0x0);
      DNBBBGEENMM = 0;
      if (!bVar1) {
        DNBBBGEENMM = 2;
      }
    }
    else {
      DNBBBGEENMM = 1;
    }
  }
  else {
    DNBBBGEENMM = 3;
  }
  __this = (LKEEMMPKJKK_o *)thunk_FUN_01bda818(LKEEMMPKJKK_TypeInfo);
  LKEEMMPKJKK___ctor(__this,PCPECHHMLEC,EHNFGMGKCHO,DNBBBGEENMM,KCFLBKINDFM,KHPLLCKLJKO,ACLFJCOLFMD,
                     LGJADIDEGHK,AJJPMOMMIGJ,NNKNJCADLGF,IDGIFNHOBPI,IELDNEAAPBE,(MethodInfo *)0x0);
  if (__this == (LKEEMMPKJKK_o *)0x0) {
LAB_03633854:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this->fields).DFMACEOAJOC = HEMMOCPADNA;
  (__this->fields).DMGKDKHHFCE = MDOBBHMPIHP;
  (__this->fields).CHKHLNEMKJC = GFLIJBOMEKO;
  (__this->fields).CKMCCGLPKJB = PFIAGDGJCJG;
  __this_00 = GCIFMNHADDF__ACDDKABEBAP(ACCIHBHMFPN,(Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IELDNEAAPBE != (System_Action_object__o *)0x0) {
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03633854;
    Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,
               (System_Action_T__o *)IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
  }
  return __this_00;
}

