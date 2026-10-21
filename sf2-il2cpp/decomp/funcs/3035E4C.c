// EAAHMDAMHNI$$OKACBKHDEIO @ RVA 0x3035E4C

bool EAAHMDAMHNI__OKACBKHDEIO
               (int32_t OINGNJDJJKN,float KCAFIBBFNAO,float KHCEOFBMAPN,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Enum_o local_48;
  int32_t local_38;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03135e28 with catch @ 03135e60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03135e18 with catch @ 03135e64
                        */
  if ((DAT_04565d40 & 1) == 0) {
                    /* try { // try from 03135e7c to 03235e7f has its CatchHandler @ 03135e8c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EAAHMDAMHNI_IAAALIOLGOC_TypeInfo);
                    /* catch() { ... } // from try @ 03135e7c with catch @ 03135e8c */
    FUN_01bab630(&StringLiteral_15596);
                    /* try { // try from 03135e98 to 03235e9f has its CatchHandler @ 03135eb4 */
    DAT_04565d40 = 1;
  }
                    /* try { // try from 03135ea0 to 03235eab has its CatchHandler @ 03135da8 */
                    /* try { // try from 03135eac to 03235eb3 has its CatchHandler @ 03135eb4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03135e98 with catch @ 03135eb4
                       catch(type#2 @ 00000000) { ... } // from try @ 03135eac with catch @ 03135eb4
                        */
  switch(OINGNJDJJKN) {
  case 0:
    bVar1 = KCAFIBBFNAO < KHCEOFBMAPN;
    break;
  case 1:
    bVar1 = KHCEOFBMAPN < KCAFIBBFNAO;
    break;
  case 2:
    bVar1 = KCAFIBBFNAO == KHCEOFBMAPN;
    break;
  case 3:
    bVar1 = KCAFIBBFNAO <= KHCEOFBMAPN;
    break;
  case 4:
    bVar1 = KHCEOFBMAPN <= KCAFIBBFNAO;
    break;
  default:
    local_48.klass = (System_Enum_c *)EAAHMDAMHNI_IAAALIOLGOC_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = OINGNJDJJKN;
    pSVar2 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(StringLiteral_15596,pSVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    bVar1 = false;
  }
  return bVar1;
}

