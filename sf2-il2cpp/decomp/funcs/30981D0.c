// KIOBDEIAMOO$$PICELOJMHIK @ RVA 0x30981D0

void KIOBDEIAMOO__PICELOJMHIK
               (KIOBDEIAMOO_o *__this,Unity_Services_LevelPlay_LevelPlayConfiguration_o *PCMFDDODKED
               ,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  KJLBJAOALEO_o *__this_00;
  KKHJHHIPPOO_o *__this_01;
  undefined1 local_34 [4];
  
  if ((DAT_045660f2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6679);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6680);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KJLBJAOALEO_TypeInfo);
    FUN_01bab630(&KKHJHHIPPOO_TypeInfo);
    DAT_045660f2 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6679,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6680,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if (PCMFDDODKED != (Unity_Services_LevelPlay_LevelPlayConfiguration_o *)0x0) {
    local_34[0] = (PCMFDDODKED->fields)._IsAdQualityEnabled_k__BackingField;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_34);
    pSVar1 = System_String__Format(pSVar1,arg0,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
    pSVar1 = KIOBDEIAMOO_AOGMBGAJKOD__EEABABBJDDE((MethodInfo *)0x0);
    __this_00 = (KJLBJAOALEO_o *)thunk_FUN_01bda818(KJLBJAOALEO_TypeInfo);
    KJLBJAOALEO___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    MKFAKELPPAC__CLBFBOEOALF((MKFAKELPPAC_o *)__this,(FCMAKNBEJDA_o *)__this_00,(MethodInfo *)0x0);
    pSVar1 = KIOBDEIAMOO_AOGMBGAJKOD__DPFDAPCGJGA((MethodInfo *)0x0);
    __this_01 = (KKHJHHIPPOO_o *)thunk_FUN_01bda818(KKHJHHIPPOO_TypeInfo);
    KKHJHHIPPOO___ctor(__this_01,pSVar1,(MethodInfo *)0x0);
    MKFAKELPPAC__INDMMCFHNCF((MKFAKELPPAC_o *)__this,(FCMAKNBEJDA_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).super.KLMOMCBAFIB = true;
    MKFAKELPPAC__PMAJPCDADCA((MKFAKELPPAC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

