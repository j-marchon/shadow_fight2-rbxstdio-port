// JJPNLEPEAFM$$GIOKKFDPGNI @ RVA 0x3532E38

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__GIOKKFDPGNI
          (System_String_o *PCPECHHMLEC,System_Collections_Generic_List_NBLEEDEAPHB__o *FCOIPKFOGMM,
          System_String_o *KCFLBKINDFM,System_String_o *KHPLLCKLJKO,
          System_Action_object__o *IELDNEAAPBE,int32_t ACLFJCOLFMD,int32_t LGJADIDEGHK,
          bool EBCJGGKJBMO,bool NHLOHJKADOM,System_String_o *IDGIFNHOBPI,
          System_String_o *DPPMHBHNMGI,bool MAHLDLFKEGB,bool MDOBBHMPIHP,bool GFLIJBOMEKO,
          bool PFIAGDGJCJG,MethodInfo *method)

{
  bool bVar1;
  DOKAKKCAHHO_o *__this;
  System_String_o **ppSVar2;
  System_String_o *message;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_00;
  int32_t iVar3;
  
  if ((DAT_04568a6d & 1) == 0) {
    FUN_01bab630(&DOKAKKCAHHO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_5696);
    FUN_01bab630(&StringLiteral_5697);
    FUN_01bab630(&StringLiteral_5356);
    DAT_04568a6d = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KCFLBKINDFM,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KHPLLCKLJKO,(MethodInfo *)0x0), bVar1)) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KCFLBKINDFM,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KHPLLCKLJKO,(MethodInfo *)0x0);
      iVar3 = 0;
      if (!bVar1) {
        iVar3 = 2;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 3;
  }
  __this = (DOKAKKCAHHO_o *)thunk_FUN_01bda818(DOKAKKCAHHO_TypeInfo);
  DOKAKKCAHHO___ctor(__this,(MethodInfo *)0x0);
  if (__this == (DOKAKKCAHHO_o *)0x0) goto LAB_036330ec;
  ppSVar2 = &(__this->fields).JACHHEFFPGD;
  *ppSVar2 = PCPECHHMLEC;
  thunk_FUN_01c20e04(ppSVar2,PCPECHHMLEC);
  (__this->fields).FCOIPKFOGMM = FCOIPKFOGMM;
  thunk_FUN_01c20e04();
  (__this->fields).LKMIFPMMFCO = iVar3;
  ppSVar2 = &(__this->fields).FFBFCDFHOAJ;
  *ppSVar2 = KCFLBKINDFM;
  thunk_FUN_01c20e04(ppSVar2,KCFLBKINDFM);
  ppSVar2 = &(__this->fields).JBOFCJGLMAL;
  *ppSVar2 = KHPLLCKLJKO;
  thunk_FUN_01c20e04(ppSVar2,KHPLLCKLJKO);
  ppSVar2 = &(__this->fields).CKCIODFPKDI;
  *ppSVar2 = IDGIFNHOBPI;
  (__this->fields).OENNHCIHICN = ACLFJCOLFMD;
  (__this->fields).LGBEBCFPBJK = LGJADIDEGHK;
  (__this->fields).DMGKDKHHFCE = MDOBBHMPIHP;
  (__this->fields).CHKHLNEMKJC = GFLIJBOMEKO;
  (__this->fields).CKMCCGLPKJB = PFIAGDGJCJG;
  thunk_FUN_01c20e04(ppSVar2,IDGIFNHOBPI);
  (__this->fields).OLKPCEAEJOA = ~(uint)NHLOHJKADOM & 1;
  (__this->fields).JCFBHKDDDJG = MAHLDLFKEGB;
  if (EBCJGGKJBMO) {
    bVar1 = System_String__op_Equality(DPPMHBHNMGI,StringLiteral_5696,(MethodInfo *)0x0);
    if (bVar1) {
      iVar3 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(DPPMHBHNMGI,StringLiteral_5697,(MethodInfo *)0x0);
      if (!bVar1) {
        message = System_String__Concat(StringLiteral_5356,DPPMHBHNMGI,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
        goto LAB_03633090;
      }
      iVar3 = 1;
    }
    (__this->fields).HPLBEKNOLEG = iVar3;
  }
  else {
    (__this->fields).HPLBEKNOLEG = 0;
  }
LAB_03633090:
  __this_00 = GCIFMNHADDF__ACDDKABEBAP(0x8c,(Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IELDNEAAPBE != (System_Action_object__o *)0x0) {
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
LAB_036330ec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,
               (System_Action_T__o *)IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
  }
  return __this_00;
}

