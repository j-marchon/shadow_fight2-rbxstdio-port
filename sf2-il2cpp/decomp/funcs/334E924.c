// PFOMHOLCODE$$MJGLDMPHGBB @ RVA 0x334E924

void PFOMHOLCODE__MJGLDMPHGBB(PFOMHOLCODE_o *__this,int32_t MFDCCBAJNIO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  LCKCDEKNLOA_o *pLVar2;
  MethodInfo *method_00;
  PFOMHOLCODE_JBJOKPCAJEP_o *pPVar3;
  PFOMHOLCODE_AJMCKEHMEOD_o *pPVar4;
  System_Collections_Generic_List_PFOMHOLCODE_JLFFOOCNIIO__o *__this_00;
  
  if ((DAT_04567a17 & 1) == 0) {
    FUN_01bab630(&Method_PFOMHOLCODE_IPGPGJGHPON_GFOJNHKPBOL__);
    FUN_01bab630(&PFOMHOLCODE_IPGPGJGHPON_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>_Find__);
    FUN_01bab630(&System_Predicate<PFOMHOLCODE_JLFFOOCNIIO>_TypeInfo);
    DAT_04567a17 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(PFOMHOLCODE_IPGPGJGHPON_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_0344eb2c;
  *(int32_t *)&pIVar1[1].klass = MFDCCBAJNIO;
  switch(MFDCCBAJNIO) {
  case 0:
    pPVar3 = (__this->fields).DKMMLPDKILK;
    (__this->fields).EFJJMEENDAO = true;
    if (pPVar3 == (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
      if (DAT_04567a76 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
        DAT_04567a76 = '\x01';
      }
      Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->_AFMLJPEEJGB_k__BackingField
           = false;
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
    goto LAB_0344ea50;
  case 1:
    pPVar3 = (__this->fields).AKKPBPEJNNE;
    if (pPVar3 == (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) break;
LAB_0344ea48:
    (__this->fields).EFJJMEENDAO = true;
LAB_0344ea50:
    pLVar2 = (pPVar3->fields).NEIJJHEFLHP;
    goto joined_r0x0344eb00;
  case 2:
    pPVar3 = (__this->fields).JMGEHHNGBMI;
joined_r0x0344ea2c:
    if (pPVar3 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) goto LAB_0344ea48;
    break;
  case 3:
    pPVar4 = (__this->fields).KDCIFIDLLKH;
    if (pPVar4 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
      pLVar2 = (pPVar4->fields).GBLCPIFNBJJ;
joined_r0x0344ea7c:
      if (pLVar2 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__MAHFCKJGBPP(pLVar2,(__this->fields).OLDEEJHLCEC,(MethodInfo *)0x0);
        PFOMHOLCODE__CMBGICLLJAC(__this,method_00);
        return;
      }
      goto LAB_0344eb2c;
    }
    break;
  case 4:
    pPVar4 = (__this->fields).KDCIFIDLLKH;
    if (pPVar4 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
      pLVar2 = (pPVar4->fields).HHMNHKJGJPG;
      goto joined_r0x0344ea7c;
    }
    break;
  default:
    if (MFDCCBAJNIO == 100) {
      pPVar3 = (__this->fields).FMNILCPNHHJ;
      goto joined_r0x0344ea2c;
    }
  }
  if ((__this->fields).NALNGBONGPJ <= MFDCCBAJNIO) {
    return;
  }
  __this_00 = (__this->fields).IDMHBKIMEGE;
  match = (System_Predicate_T__o *)
          thunk_FUN_01bda818(System_Predicate<PFOMHOLCODE_JLFFOOCNIIO>_TypeInfo);
  System_Predicate<object>___ctor();
  if (__this_00 != (System_Collections_Generic_List_PFOMHOLCODE_JLFFOOCNIIO__o *)0x0) {
    pIVar1 = System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this_00,match,
                        Method_System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>_Find__);
    if (pIVar1 == (Il2CppObject *)0x0) {
      return;
    }
    pLVar2 = pIVar1[1].monitor;
joined_r0x0344eb00:
    if (pLVar2 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__MAHFCKJGBPP(pLVar2,(__this->fields).OLDEEJHLCEC,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0344eb2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

