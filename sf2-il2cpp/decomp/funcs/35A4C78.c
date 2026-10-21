// Nekki.Utils.RaidBetaLogger$$LoggedQuit @ RVA 0x35A4C78

void Nekki_Utils_RaidBetaLogger__LoggedQuit
               (System_String_o *NONPLOOOOAG,System_Exception_o *JPLEIGKMFDA,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_RaidBetaLogger_c *method_00;
  Nekki_Utils_RaidBetaLogger_o *__this;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  
  if ((DAT_04568df5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1476);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1477);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 036a4cd0 to 037a4cfb has its CatchHandler @ 036a5294 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568df5 = 1;
  }
  method_00 = Nekki_Utils_RaidBetaLogger_TypeInfo;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (Nekki_Utils_RaidBetaLogger_c *)thunk_FUN_01ba7564();
  }
  __this = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (Nekki_Utils_RaidBetaLogger_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 036a4d40 to 037a4d47 has its CatchHandler @ 036a5288 */
                    /* try { // try from 036a4d54 to 037a4d5b has its CatchHandler @ 036a528c */
    if ((((__this->fields)._NOEPHKDKPNJ_k__BackingField == false) &&
        ((__this->fields)._GCJCDAIIAJF_k__BackingField == false)) &&
       (bVar1 = Nekki_Utils_RaidBetaLogger__EFIKJMNBLOI(__this,method_01), bVar1)) {
                    /* try { // try from 036a4d70 to 037a4ddf has its CatchHandler @ 036a5290 */
      Nekki_Utils_RaidBetaLogger__EGGIDOAOMFM(__this,NONPLOOOOAG,JPLEIGKMFDA,in_x3);
      return;
    }
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1476,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1477,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* try { // try from 036a4dec to 037a4df3 has its CatchHandler @ 036a5278 */
  pSVar2 = System_String__Concat(pSVar2,NONPLOOOOAG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036a4e00 to 037a4e07 has its CatchHandler @ 036a5274 */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  if (JPLEIGKMFDA != (System_Exception_o *)0x0) {
                    /* try { // try from 036a4e18 to 037a4e1f has its CatchHandler @ 036a5270 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036a4e2c to 037a4e2f has its CatchHandler @ 036a526c */
    UnityEngine_Debug__LogException(JPLEIGKMFDA,(MethodInfo *)0x0);
  }
  Nekki_SF2_Core_ApplicationController__Quit((MethodInfo *)0x0);
  return;
}

