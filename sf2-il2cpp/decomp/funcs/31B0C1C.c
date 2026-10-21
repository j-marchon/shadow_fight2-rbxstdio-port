// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B0C1C

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,DOCABGGCCIL_o *COPNBALDNLF,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04566b76 & 1) == 0) {
    FUN_01bab630(&DOCABGGCCIL_CMPODLBABAB_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EFOFNLEFLNH_TypeInfo);
    FUN_01bab630(&HFCOLPLEANG_TypeInfo);
    FUN_01bab630(&HFNLANEMDFI_TypeInfo);
    FUN_01bab630(&MFFKCPDBFPG_TypeInfo);
    FUN_01bab630(&OCOEAJMJEOP_TypeInfo);
    FUN_01bab630(&StringLiteral_14564);
    DAT_04566b76 = 1;
  }
  if (COPNBALDNLF != (DOCABGGCCIL_o *)0x0) {
    local_28 = (COPNBALDNLF->fields).NOBEFHEECKJ;
    switch(local_28) {
    case 1:
      bVar1 = (OCOEAJMJEOP_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)OCOEAJMJEOP_TypeInfo)) {
                    /* try { // try from 032b0d0c to 033b0d33 has its CatchHandler @ 032b0f48 */
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(OCOEAJMJEOP_o *)COPNBALDNLF,method);
        return;
      }
      break;
    case 2:
      bVar1 = (HFCOLPLEANG_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)HFCOLPLEANG_TypeInfo)) {
                    /* try { // try from 032b0dd0 to 033b0dd7 has its CatchHandler @ 032b0f34 */
                    /* try { // try from 032b0de0 to 033b0de7 has its CatchHandler @ 032b0f38 */
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(HFCOLPLEANG_o *)COPNBALDNLF,method);
        return;
      }
      break;
    case 3:
                    /* try { // try from 032b0dec to 033b0df3 has its CatchHandler @ 032b0f3c */
      bVar1 = (HFNLANEMDFI_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032b0dfc to 033b0e03 has its CatchHandler @ 032b0f40 */
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)HFNLANEMDFI_TypeInfo)) {
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(HFNLANEMDFI_o *)COPNBALDNLF,method);
        return;
      }
      break;
    case 4:
                    /* try { // try from 032b0e30 to 033b0e37 has its CatchHandler @ 032b0f18 */
      bVar1 = (EFOFNLEFLNH_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032b0e4c to 033b0e53 has its CatchHandler @ 032b0f20 */
                    /* try { // try from 032b0e54 to 033b0eeb has its CatchHandler @ 032b0c04 */
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)EFOFNLEFLNH_TypeInfo)) {
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(EFOFNLEFLNH_o *)COPNBALDNLF,method);
        return;
      }
      break;
    case 5:
      bVar1 = (MFFKCPDBFPG_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)MFFKCPDBFPG_TypeInfo)) {
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(MFFKCPDBFPG_o *)COPNBALDNLF,method);
        return;
      }
      break;
    default:
      local_38.klass = (System_Enum_c *)DOCABGGCCIL_CMPODLBABAB_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_14564,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 032b0d68 to 033b0d93 has its CatchHandler @ 032b0f44 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(COPNBALDNLF);
  }
  return;
}

