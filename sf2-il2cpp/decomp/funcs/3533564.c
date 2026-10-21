// JJPNLEPEAFM$$AFLGOFPHICD @ RVA 0x3533564

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__AFLGOFPHICD
          (System_String_o *PCPECHHMLEC,System_String_o *EHNFGMGKCHO,System_String_o *KCFLBKINDFM,
          System_String_o *KHPLLCKLJKO,System_Action_object__o *IELDNEAAPBE,int32_t ACLFJCOLFMD,
          int32_t LGJADIDEGHK,bool AJJPMOMMIGJ,bool NNKNJCADLGF,System_String_o *IDGIFNHOBPI,
          bool HEMMOCPADNA,bool MDOBBHMPIHP,bool GFLIJBOMEKO,bool PFIAGDGJCJG,bool KNDPCBNAHPN,
          MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  MethodInfo *in_stack_ffffffffffffff78;
  
  if ((DAT_04568a72 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_TypeInfo);
    DAT_04568a72 = 1;
  }
  pNVar2 = JJPNLEPEAFM__OJEGBDGIKGH
                     (0x10e,PCPECHHMLEC,EHNFGMGKCHO,KCFLBKINDFM,KHPLLCKLJKO,IELDNEAAPBE,ACLFJCOLFMD,
                      LGJADIDEGHK,AJJPMOMMIGJ,NNKNJCADLGF,IDGIFNHOBPI,HEMMOCPADNA,MDOBBHMPIHP,
                      GFLIJBOMEKO,PFIAGDGJCJG,in_stack_ffffffffffffff78);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pNVar2->klass->_2).naturalAligment) &&
       ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_TypeInfo)) {
      *(bool *)&pNVar2[1].fields.DMNJBHNNEKI = KNDPCBNAHPN;
      return pNVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

