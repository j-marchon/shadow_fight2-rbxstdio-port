// JJPNLEPEAFM$$OOOIOMHJONP @ RVA 0x3531E4C

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__OOOIOMHJONP
          (System_String_o *PCPECHHMLEC,System_String_o *EHNFGMGKCHO,System_String_o *KCFLBKINDFM,
          System_String_o *KHPLLCKLJKO,System_Action_object__o *IELDNEAAPBE,int32_t ACLFJCOLFMD,
          int32_t LGJADIDEGHK,bool HAGFOOEGNPJ,bool CKHKIMELDAI,System_String_o *IDGIFNHOBPI,
          bool HEMMOCPADNA,bool MDOBBHMPIHP,bool GFLIJBOMEKO,MethodInfo *method)

{
  bool bVar1;
  HKHDJBFKNBP_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_00;
  int32_t DNBBBGEENMM;
  
  if ((DAT_04568a64 & 1) == 0) {
    FUN_01bab630(&HKHDJBFKNBP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a64 = 1;
  }
  bVar1 = System_String__op_Equality(KCFLBKINDFM,StringLiteral_1,(MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = System_String__op_Equality(KHPLLCKLJKO,StringLiteral_1,(MethodInfo *)0x0), bVar1)) {
    bVar1 = System_String__op_Inequality(KCFLBKINDFM,StringLiteral_1,(MethodInfo *)0x0);
    if (bVar1) {
      DNBBBGEENMM = 1;
    }
    else {
      bVar1 = System_String__op_Inequality(KHPLLCKLJKO,StringLiteral_1,(MethodInfo *)0x0);
      DNBBBGEENMM = 2;
      if (!bVar1) {
        DNBBBGEENMM = 0;
      }
    }
  }
  else {
    DNBBBGEENMM = 3;
  }
  __this = (HKHDJBFKNBP_o *)thunk_FUN_01bda818(HKHDJBFKNBP_TypeInfo);
  HKHDJBFKNBP___ctor(__this,PCPECHHMLEC,EHNFGMGKCHO,DNBBBGEENMM,KCFLBKINDFM,KHPLLCKLJKO,ACLFJCOLFMD,
                     LGJADIDEGHK,HAGFOOEGNPJ,CKHKIMELDAI,IDGIFNHOBPI,IELDNEAAPBE,(MethodInfo *)0x0);
  if (__this == (HKHDJBFKNBP_o *)0x0) {
LAB_03632008:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this->fields).super.DMGKDKHHFCE = MDOBBHMPIHP;
  (__this->fields).super.CHKHLNEMKJC = GFLIJBOMEKO;
  (__this->fields).super.DFMACEOAJOC = HEMMOCPADNA;
  __this_00 = GCIFMNHADDF__ACDDKABEBAP(0xaa,(Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IELDNEAAPBE != (System_Action_object__o *)0x0) {
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03632008;
    Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,
               (System_Action_T__o *)IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
  }
  return __this_00;
}

