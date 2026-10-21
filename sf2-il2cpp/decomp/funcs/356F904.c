// HAPEALJCNFG$$EFJMBDMGIBF @ RVA 0x356F904

System_String_o *
HAPEALJCNFG__EFJMBDMGIBF(System_String_o *FDLJCNLNCOC,bool JLDFMLOJDCO,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 0366f908 to 0376f90f has its CatchHandler @ 03672cb0 */
                    /* try { // try from 0366f920 to 0376f927 has its CatchHandler @ 03673084 */
  if ((DAT_04568c52 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5363);
                    /* try { // try from 0366f9c8 to 0376f9cf has its CatchHandler @ 03673074 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5364);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0366f9e0 to 0376f9e7 has its CatchHandler @ 03673070 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04568c52 = 1;
  }
  if (!JLDFMLOJDCO) {
                    /* try { // try from 0366f9f4 to 0376f9fb has its CatchHandler @ 0367306c */
    return FDLJCNLNCOC;
  }
                    /* try { // try from 0366f934 to 0376f93b has its CatchHandler @ 03673090 */
                    /* try { // try from 0366f94c to 0376f953 has its CatchHandler @ 0367308c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0366f960 to 0376f967 has its CatchHandler @ 03673088 */
  UnityEngine_Debug__Log((Il2CppObject *)FDLJCNLNCOC,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f978 to 0376f97f has its CatchHandler @ 03673080 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5363,(MethodInfo *)0x0);
                    /* try { // try from 0366f980 to 0376f993 has its CatchHandler @ 0367307c */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5364,(MethodInfo *)0x0);
                    /* try { // try from 0366f9a0 to 0376f9a3 has its CatchHandler @ 03673078 */
                    /* try { // try from 0366f9b4 to 0376f9bb has its CatchHandler @ 03673260 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

