// FKDLCJJOGIP$$HJCDCLJFPMJ @ RVA 0x35094B8

void FKDLCJJOGIP__HJCDCLJFPMJ(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *DIHAKADKIKM;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  KKLJIDJBFEI_o *__this_00;
  EGMONPGHHDP_o *__this_01;
  
  if ((DAT_045688ba & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3999);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4000);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045688ba = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3999,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4000,(MethodInfo *)0x0);
  DIHAKADKIKM = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(DIHAKADKIKM,BBBLOLJAMJP,(MethodInfo *)0x0);
    (__this->fields)._NFAAGONINOL_k__BackingField = true;
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__GIENGNEGHPJ(__this_00,(MethodInfo *)0x0);
      FIKENOMMMBH__BFDIPEEOJMA((MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if (__this_01 != (EGMONPGHHDP_o *)0x0) {
        EGMONPGHHDP__GIENGNEGHPJ(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

