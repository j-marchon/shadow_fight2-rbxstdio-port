// BCKMMEIIKPH$$NIKPJPEEPJL @ RVA 0x34B77F8

bool BCKMMEIIKPH__NIKPJPEEPJL
               (BCKMMEIIKPH_o *__this,int32_t IEEIOLINLFO,MECOLOAEJHJ_o **HPACPFLKHPK,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  MECOLOAEJHJ_o *__this_00;
  VirtualInvokeData *pVVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesData_o *pNVar6;
  Il2CppObject *arg2;
  MethodInfo *method_00;
  Nekki_SF2_Core_Utils_LoaderScreen_Config_LoaderConfig_o *pNVar7;
  FDGBFCHBBLM_c *pFVar8;
  ulong uVar9;
  int32_t *piVar10;
  FDGBFCHBBLM_o *pFVar11;
  System_Enum_o local_50;
  int32_t local_40;
  Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesPreset_o *local_38;
  
                    /* try { // try from 035b77fc to 036b77ff has its CatchHandler @ 035b7824 */
                    /* try { // try from 035b7800 to 036b783f has its CatchHandler @ 035b7760 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b77fc with catch @ 035b7824
                        */
  if ((DAT_0456859f & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b77ec with catch @ 035b7828
                        */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_SpritesPreset>_TryGetValue__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
                    /* try { // try from 035b7840 to 036b7843 has its CatchHandler @ 035b786c */
                    /* try { // try from 035b7844 to 036b787b has its CatchHandler @ 035b7760 */
    FUN_01bab630(&FDGBFCHBBLM_TypeInfo);
    FUN_01bab630(&GLLJKGHFGJH_TypeInfo);
    FUN_01bab630(&MECOLOAEJHJ_TypeInfo);
                    /* catch() { ... } // from try @ 035b7840 with catch @ 035b786c */
    FUN_01bab630(&StringLiteral_22382);
    FUN_01bab630(&StringLiteral_6797);
                    /* try { // try from 035b787c to 036b7883 has its CatchHandler @ 035b7898 */
                    /* try { // try from 035b7884 to 036b788f has its CatchHandler @ 035b7760 */
    FUN_01bab630(&StringLiteral_6798);
                    /* try { // try from 035b7890 to 036b7897 has its CatchHandler @ 035b7898 */
    FUN_01bab630(&StringLiteral_853);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b787c with catch @ 035b7898
                       catch(type#2 @ 00000000) { ... } // from try @ 035b7890 with catch @ 035b7898
                        */
                    /* try { // try from 035b789c to 036b7a13 has its CatchHandler @ 035b789c
                       catch() { ... } // from try @ 035b789c with catch @ 035b789c
                       catch() { ... } // from try @ 035b7ad0 with catch @ 035b789c
                       catch() { ... } // from try @ 035b7b10 with catch @ 035b789c
                       catch() { ... } // from try @ 035b7b48 with catch @ 035b789c
                       catch() { ... } // from try @ 035b7b78 with catch @ 035b789c */
    FUN_01bab630(&StringLiteral_6799);
    DAT_0456859f = 1;
  }
  local_38 = (Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesPreset_o *)0x0;
  __this_00 = (MECOLOAEJHJ_o *)thunk_FUN_01bda818(MECOLOAEJHJ_TypeInfo);
  MECOLOAEJHJ___ctor(__this_00,(MethodInfo *)0x0);
  *HPACPFLKHPK = __this_00;
  thunk_FUN_01c20e04(HPACPFLKHPK,__this_00);
  pNVar7 = (__this->fields).KJBGNOCGGHF;
  pSVar4 = StringLiteral_6799;
  if (pNVar7 != (Nekki_SF2_Core_Utils_LoaderScreen_Config_LoaderConfig_o *)0x0) {
    pFVar11 = (__this->fields).KCLBDMDFGFH;
    if (pFVar11 == (FDGBFCHBBLM_o *)0x0) {
      pSVar4 = (System_String_o *)0x0;
    }
    else {
      pFVar8 = pFVar11->klass;
      uVar1._0_1_ = (pFVar8->_2).rank;
      uVar1._1_1_ = (pFVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pFVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)FDGBFCHBBLM_TypeInfo) {
            pVVar3 = pFVar8->vtable + *piVar10;
            goto LAB_035b794c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pFVar11,FDGBFCHBBLM_TypeInfo,0);
LAB_035b794c:
      pSVar4 = (System_String_o *)(*pVVar3->methodPtr)(pFVar11,pVVar3->method);
      pNVar7 = (__this->fields).KJBGNOCGGHF;
      if (pNVar7 == (Nekki_SF2_Core_Utils_LoaderScreen_Config_LoaderConfig_o *)0x0)
      goto LAB_035b7acc;
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             (pNVar7->fields).SpritesPresets;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_035b7acc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = Method_System_Collections_Generic_Dictionary<string,_SpritesPreset>_TryGetValue__;
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar5,(Il2CppObject *)pSVar4,(Il2CppObject **)&local_38,
                       (MethodInfo_2334730 *)
                       Method_System_Collections_Generic_Dictionary<string,_SpritesPreset>_TryGetValue__
                      );
    if (bVar2) {
      pNVar6 = BCKMMEIIKPH__IPFIKFNNGAJ
                         ((BCKMMEIIKPH_o *)(ulong)bVar2,IEEIOLINLFO,local_38,method_00);
      if (pNVar6 != (Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesData_o *)0x0) {
        pNVar7 = (__this->fields).KJBGNOCGGHF;
        if (pNVar7 != (Nekki_SF2_Core_Utils_LoaderScreen_Config_LoaderConfig_o *)0x0) {
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (pNVar7->fields).TexturePaths;
          local_50.klass = (System_Enum_c *)GLLJKGHFGJH_TypeInfo;
          local_50.monitor = (void *)0xffffffffffffffff;
          local_40 = IEEIOLINLFO;
          pSVar4 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
          if ((*HPACPFLKHPK != (MECOLOAEJHJ_o *)0x0) &&
             (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
            System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar5,(Il2CppObject *)pSVar4,(Il2CppObject **)&(*HPACPFLKHPK)->fields,
                       Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
            if (*HPACPFLKHPK != (MECOLOAEJHJ_o *)0x0) {
              ((*HPACPFLKHPK)->fields).GMMHBANCFPM = (pNVar6->fields).FullSprite;
              thunk_FUN_01c20e04();
              if (*HPACPFLKHPK != (MECOLOAEJHJ_o *)0x0) {
                    /* try { // try from 035b7a14 to 036b7a1b has its CatchHandler @ 035b7b2c */
                ((*HPACPFLKHPK)->fields).IEKGJPMACMA = (pNVar6->fields).LeftSprite;
                thunk_FUN_01c20e04();
                if (*HPACPFLKHPK != (MECOLOAEJHJ_o *)0x0) {
                  ((*HPACPFLKHPK)->fields).PMCABHILFPN = (pNVar6->fields).RightSprite;
                    /* try { // try from 035b7a2c to 036b7a33 has its CatchHandler @ 035b7b28 */
                  thunk_FUN_01c20e04();
                  return true;
                }
              }
            }
          }
        }
        goto LAB_035b7acc;
      }
                    /* try { // try from 035b7a60 to 036b7a67 has its CatchHandler @ 035b7b20 */
      local_50.klass = (System_Enum_c *)CONCAT44(local_50.klass._4_4_,IEEIOLINLFO);
      arg2 = (Il2CppObject *)thunk_FUN_01bda448(GLLJKGHFGJH_TypeInfo,&local_50);
      pSVar4 = System_String__Format
                         (StringLiteral_22382,StringLiteral_6797,(Il2CppObject *)pSVar4,arg2,
                          (MethodInfo *)0x0);
    }
    else {
                    /* try { // try from 035b7a3c to 036b7a4b has its CatchHandler @ 035b7b24 */
      pSVar4 = System_String__Concat(StringLiteral_6798,pSVar4,StringLiteral_853,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 035b7aac to 036b7acf has its CatchHandler @ 035b7b14 */
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
  return false;
}

