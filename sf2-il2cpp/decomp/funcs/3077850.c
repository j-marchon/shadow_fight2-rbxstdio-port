// KKCBGIBKOCP$$LCEINBEOKFL @ RVA 0x3077850

System_String_o * KKCBGIBKOCP__LCEINBEOKFL(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  Core_Configs_Models_BuildSettingsConfig_o *config;
  MethodInfo *extraout_x1;
  ulong uVar4;
  System_String_o *HMEKPGHJBDJ;
  System_String_array *pSVar5;
  ulong uVar6;
  
  if ((DAT_04565fb4 & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_11935);
    FUN_01bab630(&StringLiteral_19349);
    DAT_04565fb4 = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  config = (Core_Configs_Models_BuildSettingsConfig_o *)
           IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  bVar2 = Core_Configs_Models_BuildSettingsExtension__GetHideLanguageFlags
                    (config,false,(MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 03177900 to 03277903 has its CatchHandler @ 03177d48 */
                    /* try { // try from 03177904 to 03277913 has its CatchHandler @ 03177d78 */
    iVar3 = 0;
    do {
      if (DIHAKADKIKM == (System_String_o *)0x0) {
LAB_03177a08:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = System_String__IndexOf(DIHAKADKIKM,StringLiteral_11935,iVar3,(MethodInfo *)0x0);
      if (iVar3 < 0) {
        return DIHAKADKIKM;
      }
                    /* try { // try from 03177924 to 03277927 has its CatchHandler @ 03177d5c */
                    /* try { // try from 03177928 to 03277933 has its CatchHandler @ 03177d98 */
      if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = KKCBGIBKOCP_TypeInfo->static_fields->CMGCKPCHDHP;
      if (pSVar5 == (System_String_array *)0x0) goto LAB_03177a08;
                    /* try { // try from 03177950 to 03277953 has its CatchHandler @ 03177d50 */
      if (0 < (int)pSVar5->max_length) {
                    /* try { // try from 03177954 to 03277963 has its CatchHandler @ 03177d90 */
        uVar6 = 0;
        uVar4 = pSVar5->max_length & 0xffffffff;
        do {
          if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03177a0c to 03277bc3 has its CatchHandler @ 031771b8 */
            FUN_01bab8d0();
          }
                    /* try { // try from 0317796c to 0327796f has its CatchHandler @ 03177d40 */
          if (StringLiteral_11935 == (System_String_o *)0x0) goto LAB_03177a08;
                    /* try { // try from 03177970 to 0327797f has its CatchHandler @ 03177d70 */
          HMEKPGHJBDJ = pSVar5->m_Items[uVar6];
          bVar2 = PCOEHCPGBBG__IGPGADIOPPH
                            (DIHAKADKIKM,(StringLiteral_11935->fields)._stringLength + iVar3,
                             HMEKPGHJBDJ,(MethodInfo *)0x0);
          if (bVar2) {
            DIHAKADKIKM = System_String__Replace
                                    (DIHAKADKIKM,HMEKPGHJBDJ,StringLiteral_19349,(MethodInfo *)0x0);
                    /* try { // try from 031779bc to 032779c7 has its CatchHandler @ 03177d8c */
            if (StringLiteral_19349 == (System_String_o *)0x0) goto LAB_03177a08;
            iVar3 = (StringLiteral_19349->fields)._stringLength + iVar3;
            break;
          }
                    /* try { // try from 03177990 to 03277993 has its CatchHandler @ 03177d58 */
          uVar1 = (uint)pSVar5->max_length;
          uVar4 = (ulong)uVar1;
                    /* try { // try from 03177994 to 032779bb has its CatchHandler @ 03177f0c */
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)uVar1);
      }
                    /* try { // try from 031779d0 to 032779d3 has its CatchHandler @ 03177d38 */
                    /* try { // try from 031779d4 to 032779e3 has its CatchHandler @ 03177d68 */
      if ((StringLiteral_11935 == (System_String_o *)0x0) || (DIHAKADKIKM == (System_String_o *)0x0)
         ) goto LAB_03177a08;
      iVar3 = (StringLiteral_11935->fields)._stringLength + iVar3;
    } while (iVar3 < (DIHAKADKIKM->fields)._stringLength);
  }
                    /* try { // try from 031779fc to 032779ff has its CatchHandler @ 03177d54 */
                    /* try { // try from 03177a00 to 03277a0b has its CatchHandler @ 03177d94 */
  return DIHAKADKIKM;
}

