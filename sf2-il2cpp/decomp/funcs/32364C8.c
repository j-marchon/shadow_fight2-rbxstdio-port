// PHGPILAOJBI$$CKMCAMKONEK @ RVA 0x32364C8

FEFHGAHGKBK_o *
PHGPILAOJBI__CKMCAMKONEK
          (PHGPILAOJBI_o *__this,int32_t LEMCNKOMCMI,System_String_o *ACLPFOHLGMN,
          PHGPILAOJBI_OPNKFPDJLEN_o *param_4,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_IKDJCPOJFNM__PABDDHCGGID__o *__this_00;
  FEFHGAHGKBK_o *pFVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  Il2CppObject *arg0;
  MethodInfo_2310BF0 *pMVar4;
  MJPLIICMMGK_o *pMVar5;
  System_Text_StringBuilder_o *__this_01;
  int32_t local_3c;
  PABDDHCGGID_o *local_38;
  
  if ((DAT_04567024 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3869);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3870);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IKDJCPOJFNM,_PABDDHCGGID>_TryGetValue__
                );
    FUN_01bab630(&IKDJCPOJFNM_TypeInfo);
    DAT_04567024 = 1;
  }
  local_38 = (PABDDHCGGID_o *)0x0;
  bVar1 = COHHIMGALPO__CHALBECAHHB(LEMCNKOMCMI,(MethodInfo *)0x0);
  if (!bVar1) {
    return (FEFHGAHGKBK_o *)0x0;
  }
  pMVar5 = (__this->fields)._HINONJDDINO_k__BackingField;
  if ((pMVar5 != (MJPLIICMMGK_o *)0x0) &&
     (__this_00 = (pMVar5->fields)._FIDKNIBDBHH_k__BackingField,
     __this_00 != (System_Collections_Generic_Dictionary_IKDJCPOJFNM__PABDDHCGGID__o *)0x0)) {
    pMVar4 = Method_System_Collections_Generic_Dictionary<IKDJCPOJFNM,_PABDDHCGGID>_TryGetValue__;
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       LEMCNKOMCMI,(Il2CppObject **)&local_38,
                       Method_System_Collections_Generic_Dictionary<IKDJCPOJFNM,_PABDDHCGGID>_TryGetValue__
                      );
    if (!bVar1) {
      return (FEFHGAHGKBK_o *)0x0;
    }
    if (local_38 == (PABDDHCGGID_o *)0x0) {
      return (FEFHGAHGKBK_o *)0x0;
    }
    pFVar2 = PHGPILAOJBI__BKDHIJHDDJC
                       (__this,local_38,ACLPFOHLGMN,(PHGPILAOJBI_OPNKFPDJLEN_o *)pMVar4,method);
    if (pFVar2 != (FEFHGAHGKBK_o *)0x0) {
      return pFVar2;
    }
    __this_01 = (param_4->fields).sb;
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3869,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3870,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (local_38 != (PABDDHCGGID_o *)0x0) {
      local_3c = (local_38->fields)._KGGMDODBEMF_k__BackingField;
      arg0 = (Il2CppObject *)thunk_FUN_01bda448(IKDJCPOJFNM_TypeInfo,&local_3c);
      pSVar3 = System_String__Format(pSVar3,arg0,(MethodInfo *)0x0);
      if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__AppendLine(__this_01,pSVar3,(MethodInfo *)0x0);
        return (FEFHGAHGKBK_o *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

