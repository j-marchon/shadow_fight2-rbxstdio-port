// LCAOAAFEOAG$$JILECJELDML @ RVA 0x35BCD14

void LCAOAAFEOAG__JILECJELDML(LCAOAAFEOAG_o *__this)

{
  UniRx_CompositeDisposable_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method;
  MethodInfo *method_00;
  
  if ((DAT_04568ee3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6609);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6610);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568ee3 = 1;
  }
  __this_00 = (__this->fields).JBJKBIMMCIJ;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6609,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6610,(MethodInfo *)0x0)
    ;
    JLNPKGGFFDD = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    LCAOAAFEOAG__CAMGFFOCGKM(__this,method);
    LCAOAAFEOAG__PMAJPCDADCA(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

