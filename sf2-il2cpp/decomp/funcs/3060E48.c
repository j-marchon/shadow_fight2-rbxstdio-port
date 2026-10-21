// ACHLOMELAJE$$OIMBEHKPFIC @ RVA 0x3060E48

void ACHLOMELAJE__OIMBEHKPFIC
               (ACHLOMELAJE_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,bool FCAEECAAGGA,bool MJDICHGKPGE,
               bool BKMIOJJDPPH,bool NLAAELNFKEI,int32_t GEOFJHKICMD,MethodInfo *method)

{
  DNELIPCHKLK_o *__this_00;
  MEJIKMPNBNL_o *pMVar1;
  System_String_o *BANHBMINMMP_00;
  System_String_o *BHHBEIACGPB;
  
  if ((DAT_04565ec6 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565ec6 = 1;
  }
  if ((BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) &&
     (pMVar1 = (BANHBMINMMP->fields).IAJPHAAMKPC, pMVar1 != (MEJIKMPNBNL_o *)0x0)) {
    BHHBEIACGPB = (pMVar1->fields).DEKCPPOJFEH;
    BANHBMINMMP_00 = (BANHBMINMMP->fields).DEKCPPOJFEH;
    __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
    DNELIPCHKLK___ctor(__this_00,BHHBEIACGPB,BANHBMINMMP_00,StringLiteral_1,(MethodInfo *)0x0);
    ACHLOMELAJE__OIMBEHKPFIC
              (__this,__this_00,FCAEECAAGGA,MJDICHGKPGE,BKMIOJJDPPH,NLAAELNFKEI,GEOFJHKICMD,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

