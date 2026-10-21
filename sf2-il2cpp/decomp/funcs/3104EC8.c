// MGENAMAJALB$$GIENGNEGHPJ @ RVA 0x3104EC8

void MGENAMAJALB__GIENGNEGHPJ(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  System_String_o *pSVar4;
  MGENAMAJALB_c *method_01;
  MGENAMAJALB_StaticFields *pMVar5;
  System_String_o **ppSVar6;
  
  if ((DAT_045664f3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_11515);
    FUN_01bab630(&StringLiteral_11516);
    FUN_01bab630(&StringLiteral_1557);
    FUN_01bab630(&StringLiteral_1);
    DAT_045664f3 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar5 = MGENAMAJALB_TypeInfo->static_fields;
  if (pMVar5->ECCPBJGMNPE != false) {
    return;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar5 = MGENAMAJALB_TypeInfo->static_fields;
  }
  pMVar5->ECCPBJGMNPE = true;
  pMVar5->HPEEIOBFMMI = StringLiteral_1;
  thunk_FUN_01c20e04(MGENAMAJALB_TypeInfo->static_fields,StringLiteral_1);
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = UnityEngine_Application__get_persistentDataPath((MethodInfo *)0x0);
  ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF;
  *ppSVar6 = pSVar3;
  thunk_FUN_01c20e04(ppSVar6,pSVar3);
  pSVar3 = UnityEngine_Application__get_persistentDataPath((MethodInfo *)0x0);
  ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF;
  *ppSVar6 = pSVar3;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar6,pSVar3);
  MGENAMAJALB_TypeInfo->static_fields->ACGDPPPMKBM = true;
  pSVar3 = MGENAMAJALB__EDFAAGIOLKF(method_00);
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                    (MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,(MethodInfo *)0x0);
  uVar1 = (MGENAMAJALB_TypeInfo->_2).cctor_finished;
                    /* try { // try from 03205034 to 03305133 has its CatchHandler @ 03205034
                       catch() { ... } // from try @ 03205034 with catch @ 03205034
                       catch() { ... } // from try @ 03205158 with catch @ 03205034
                       catch() { ... } // from try @ 03205184 with catch @ 03205034
                       catch() { ... } // from try @ 032051ac with catch @ 03205034
                       catch() { ... } // from try @ 032051ec with catch @ 03205034 */
  if (bVar2) {
    if (uVar1 == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
    }
    ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF;
    *ppSVar6 = pSVar3;
    thunk_FUN_01c20e04(ppSVar6,pSVar3);
    ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF;
    *ppSVar6 = pSVar3;
    thunk_FUN_01c20e04(ppSVar6,pSVar3);
  }
  else {
    if (uVar1 == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
    }
    pSVar4 = System_String__Concat
                       (MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,StringLiteral_1557,
                        (MethodInfo *)0x0);
    bVar2 = System_IO_Directory__Exists(pSVar4,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar4 = System_String__Concat(pSVar3,StringLiteral_1557,(MethodInfo *)0x0);
      bVar2 = System_IO_Directory__Exists(pSVar4,(MethodInfo *)0x0);
      if (bVar2) {
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF;
        *ppSVar6 = pSVar3;
        thunk_FUN_01c20e04(ppSVar6,pSVar3);
        ppSVar6 = &MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF;
        *ppSVar6 = pSVar3;
        thunk_FUN_01c20e04(ppSVar6,pSVar3);
      }
    }
  }
  method_01 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    method_01 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  MGENAMAJALB__MDGHLLMANGH((MethodInfo *)method_01);
  pSVar3 = System_String__Concat
                     (StringLiteral_11516,MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,
                      (MethodInfo *)0x0);
                    /* try { // try from 03205134 to 0330513b has its CatchHandler @ 03205190 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 03205154 to 03305157 has its CatchHandler @ 0320518c */
                    /* try { // try from 03205158 to 0330517f has its CatchHandler @ 03205034 */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat
                     (StringLiteral_11515,MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,
                      (MethodInfo *)0x0);
                    /* try { // try from 03205180 to 03305183 has its CatchHandler @ 03205188 */
                    /* try { // try from 03205184 to 033051a7 has its CatchHandler @ 03205034 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03205180 with catch @ 03205188
                        */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  return;
}

