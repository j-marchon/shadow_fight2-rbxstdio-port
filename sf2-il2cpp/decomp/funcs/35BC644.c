// LCAOAAFEOAG$$NBGBOMAFCCO @ RVA 0x35BC644

void LCAOAAFEOAG__NBGBOMAFCCO
               (LCAOAAFEOAG_o *__this,MKFAKELPPAC_o *FDIKDMNIKLC,int32_t ACCIHBHMFPN,
               System_String_o *FBOIFHNBMGA,MethodInfo *method)

{
  bool bVar1;
  KHFOHGKPBFN_o *__this_00;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *__this_01;
  System_Action_MPAKDCNMLEG__o **ppSVar4;
  System_Action_MPAKDCNMLEG__o *pSVar5;
  System_Action_MPAKDCNMLEG__c *pSVar6;
  
  if ((DAT_04568ee8 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_Add__);
    FUN_01bab630(&KHFOHGKPBFN_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_JFONIHNIHGG__);
    DAT_04568ee8 = 1;
  }
  bVar1 = OMMDIMHOHLK__GOLOABAFEJA(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (KHFOHGKPBFN_o *)thunk_FUN_01bda818(KHFOHGKPBFN_TypeInfo);
  KHFOHGKPBFN___ctor(__this_00,(OCKCFHKADLN_o *)__this,FBOIFHNBMGA,(MethodInfo *)0x0);
  if (__this_00 != (KHFOHGKPBFN_o *)0x0) {
    ppSVar4 = &(__this_00->fields).super.EDPLNAAICPE;
    pSVar5 = *ppSVar4;
    pSVar2 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    pSVar2 = System_Delegate__Combine((System_Delegate_o *)pSVar5,pSVar2,(MethodInfo *)0x0);
    pSVar6 = System_Action<MPAKDCNMLEG>_TypeInfo;
    if (pSVar2 == (System_Delegate_o *)0x0) {
      lVar3 = 0;
      *ppSVar4 = (System_Action_MPAKDCNMLEG__o *)0x0;
    }
    else {
      pSVar5 = (System_Action_MPAKDCNMLEG__o *)
               thunk_FUN_01bda71c(pSVar2,System_Action<MPAKDCNMLEG>_TypeInfo);
      if (pSVar5 == (System_Action_MPAKDCNMLEG__o *)0x0) {
LAB_036bc774:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2,pSVar6);
      }
      *ppSVar4 = pSVar5;
      pSVar6 = System_Action<MPAKDCNMLEG>_TypeInfo;
      lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<MPAKDCNMLEG>_TypeInfo);
      if (lVar3 == 0) goto LAB_036bc774;
    }
    thunk_FUN_01c20e04(ppSVar4,lVar3);
    if (FDIKDMNIKLC != (MKFAKELPPAC_o *)0x0) {
      MKFAKELPPAC__FOFNKPNEADK(FDIKDMNIKLC,(FCMAKNBEJDA_o *)__this_00,ACCIHBHMFPN,(MethodInfo *)0x0)
      ;
      __this_01 = (__this->fields).POGOKDKJDFO;
      if (__this_01 != (System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *)0x0) {
        System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,ACCIHBHMFPN,
                   (Il2CppObject *)__this_00,
                   Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_Add__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

