// Original name: Nekki.SF2.GUI.Common.Hints.HintSchemeUtility  (obfuscated GJAEIBMAFGE)
// TypeDefIndex 1437
// Namespace: 
// public static class HintSchemeUtility
// Fields:
//   private static readonly HintSchemeUtility.IOGOIMAHPBA JKBIGHKGGKB; // 0x0
//   private static readonly Dictionary<ODLJFAIHELG, HintSchemeUtility.IOGOIMAHPBA> CFGHLIFIAKK; // 0x8

// ===== public static int LOIDNFBMHNN(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x3187284]
// HintSchemeUtility$$LOIDNFBMHNN @ RVA 0x3187284

int32_t HintSchemeUtility__LOIDNFBMHNN(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_T__o *__this;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03287294 to 0338729b has its CatchHandler @ 032873c8 */
  if ((DAT_045669e6 & 1) == 0) {
                    /* try { // try from 032872ac to 033872b3 has its CatchHandler @ 032873cc */
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
                    /* try { // try from 032872c0 to 033872cb has its CatchHandler @ 032873d0 */
    DAT_045669e6 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032872cc to 033872d7 has its CatchHandler @ 032873d4 */
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ECNCJPCKOLN_TypeInfo,method);
  }
  __this = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                      (__this,OHLKNCPBCBL,
                       Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032872fc to 0338736b has its CatchHandler @ 032875a4 */
  FUN_01bab8c8();
}


// ===== public static ODLJFAIHELG OFIKNKILDCH(string LOAHEPDBFAO)  [RVA 0x3187300]
// HintSchemeUtility$$OFIKNKILDCH @ RVA 0x3187300

int32_t HintSchemeUtility__OFIKNKILDCH(System_String_o *LOAHEPDBFAO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_045669e7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10290/*"PlayStation"*/);
    FUN_01bab630(&StringLiteral_8632/*"Logitech"*/);
    FUN_01bab630(&StringLiteral_8168/*"Joy-Con (L)"*/);
    FUN_01bab630(&StringLiteral_7004/*"Handheld Controller"*/);
    FUN_01bab630(&StringLiteral_15069/*"XBox One"*/);
    FUN_01bab630(&StringLiteral_15063/*"XBox 360"*/);
    FUN_01bab630(&StringLiteral_13985/*"Two Joy-Con Controllers"*/);
    FUN_01bab630(&StringLiteral_8169/*"Joy-Con (R)"*/);
    FUN_01bab630(&StringLiteral_12545/*"Switch Pro Controller"*/);
                    /* try { // try from 03287384 to 03387393 has its CatchHandler @ 03287574 */
    DAT_045669e7 = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(LOAHEPDBFAO,(MethodInfo *)0x0);
                    /* try { // try from 03287398 to 0338739f has its CatchHandler @ 032873dc */
  if (bVar1) {
    iVar2 = 0x67;
  }
  else {
                    /* try { // try from 032873a4 to 033873a7 has its CatchHandler @ 032873c4 */
    if (LOAHEPDBFAO == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 032873ac to 033873af has its CatchHandler @ 032873c0 */
                    /* try { // try from 032873b4 to 033873b7 has its CatchHandler @ 032873bc */
                    /* try { // try from 032873b8 to 033873f7 has its CatchHandler @ 03286ea4 */
                    /* catch() { ... } // from try @ 032873b4 with catch @ 032873bc */
    bVar1 = System_String__Contains(LOAHEPDBFAO,StringLiteral_15063/*"XBox 360"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032873ac with catch @ 032873c0 */
                    /* catch() { ... } // from try @ 032873a4 with catch @ 032873c4 */
                    /* catch() { ... } // from try @ 03287294 with catch @ 032873c8 */
                    /* catch() { ... } // from try @ 032872ac with catch @ 032873cc */
                    /* catch() { ... } // from try @ 032872c0 with catch @ 032873d0 */
                    /* catch() { ... } // from try @ 032872cc with catch @ 032873d4 */
                    /* catch() { ... } // from try @ 03287274 with catch @ 032873d8 */
                    /* catch() { ... } // from try @ 03287398 with catch @ 032873dc */
                    /* catch() { ... } // from try @ 03287210 with catch @ 032873e0 */
                    /* catch() { ... } // from try @ 032871b0 with catch @ 032873e4 */
                    /* try { // try from 032873f8 to 033873fb has its CatchHandler @ 03287564 */
    if (((bVar1) ||
        (bVar1 = System_String__Contains(LOAHEPDBFAO,StringLiteral_15069/*"XBox One"*/,(MethodInfo *)0x0), bVar1))
       || (bVar1 = System_String__Contains(LOAHEPDBFAO,StringLiteral_8632/*"Logitech"*/,(MethodInfo *)0x0), bVar1)
       ) {
                    /* try { // try from 032873fc to 033874b7 has its CatchHandler @ 03286ea4 */
      iVar2 = 0;
    }
    else {
      bVar1 = System_String__Contains(LOAHEPDBFAO,StringLiteral_10290/*"PlayStation"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 1;
      }
      else {
        bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_7004/*"Handheld Controller"*/,(MethodInfo *)0x0);
        if (((bVar1) ||
            (bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_13985/*"Two Joy-Con Controllers"*/,(MethodInfo *)0x0),
            bVar1)) ||
           (bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_12545/*"Switch Pro Controller"*/,(MethodInfo *)0x0),
           bVar1)) {
          iVar2 = 100;
        }
        else {
          bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_8168/*"Joy-Con (L)"*/,(MethodInfo *)0x0);
          if (bVar1) {
            iVar2 = 0x65;
          }
          else {
                    /* try { // try from 032874b8 to 03387503 has its CatchHandler @ 0328766c */
            bVar1 = System_String__op_Equality(LOAHEPDBFAO,StringLiteral_8169/*"Joy-Con (R)"*/,(MethodInfo *)0x0);
            iVar2 = 0x66;
            if (!bVar1) {
              iVar2 = 0x67;
            }
          }
        }
      }
    }
  }
  return iVar2;
}


// ===== public static string LMHEANOFFIP(MIBHAJBEMIK OHLKNCPBCBL, int BMPJIDHGCBN)  [RVA 0x31874DC]
// HintSchemeUtility$$LMHEANOFFIP @ RVA 0x31874DC

System_String_o *
HintSchemeUtility__LMHEANOFFIP(int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int MFMKPNIGADN;
  int32_t iVar1;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar2;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar7;
  System_Enum_o local_48;
  int32_t local_38;
  
  method_00 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
  if ((DAT_045669e8 & 1) == 0) {
                    /* try { // try from 03287508 to 0338750f has its CatchHandler @ 032875b0 */
                    /* try { // try from 03287510 to 03387513 has its CatchHandler @ 03287598 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
                    /* try { // try from 03287524 to 03387543 has its CatchHandler @ 0328766c */
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15490/*"[HintSchemeUtility].GetHintNameByDeviceID: - unknown hint '{0}' scheme for device: '{1}'"*/);
                    /* try { // try from 03287544 to 03387547 has its CatchHandler @ 03287588 */
                    /* try { // try from 03287548 to 0338754b has its CatchHandler @ 03287584 */
                    /* try { // try from 0328754c to 03387553 has its CatchHandler @ 0328757c */
    FUN_01bab630(&StringLiteral_7114/*"HintSchemeUtility].GetHintNameByDeviceID: - removed hint '{0}' by scheme for device: '{1}'"*/);
                    /* try { // try from 03287554 to 03387557 has its CatchHandler @ 03286ea4 */
                    /* try { // try from 03287558 to 0338755b has its CatchHandler @ 03287570 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0328755c to 033875cb has its CatchHandler @ 03286ea4 */
    DAT_045669e8 = 1;
    method_00 = extraout_x1;
  }
                    /* catch() { ... } // from try @ 032873f8 with catch @ 03287564 */
  if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03287558 with catch @ 03287570 */
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
                    /* catch() { ... } // from try @ 03287384 with catch @ 03287574 */
                    /* catch() { ... } // from try @ 0328715c with catch @ 03287578 */
  pMVar2 = HintSchemeUtility__ABOLJGNNGMC(BMPJIDHGCBN,method_00);
                    /* catch() { ... } // from try @ 0328754c with catch @ 0328757c */
  if (pMVar2 == (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) goto LAB_032877d0;
                    /* catch() { ... } // from try @ 03287144 with catch @ 03287580 */
  MFMKPNIGADN = (pMVar2->fields).DOKHHBGJICA;
                    /* catch() { ... } // from try @ 03287548 with catch @ 03287584 */
                    /* catch() { ... } // from try @ 03287544 with catch @ 03287588 */
                    /* catch() { ... } // from try @ 03287130 with catch @ 0328758c */
  if (MFMKPNIGADN == 0x67) {
                    /* catch() { ... } // from try @ 03287174 with catch @ 03287590 */
    local_38 = OHLKNCPBCBL;
    if (-1 < BMPJIDHGCBN) {
                    /* catch() { ... } // from try @ 03287118 with catch @ 03287594 */
                    /* catch() { ... } // from try @ 03287510 with catch @ 03287598 */
      __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03287100 with catch @ 0328759c */
      if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* catch() { ... } // from try @ 032870f0 with catch @ 032875a0 */
                    /* catch() { ... } // from try @ 032872fc with catch @ 032875a4 */
        iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                          (__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03287088 with catch @ 032875a8 */
                    /* catch() { ... } // from try @ 0328702c with catch @ 032875ac */
        if (iVar1 <= BMPJIDHGCBN) goto LAB_032876c8;
                    /* catch() { ... } // from try @ 03287508 with catch @ 032875b0 */
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
                    /* try { // try from 032875cc to 033875cf has its CatchHandler @ 032875e0 */
        local_48.klass = (System_Enum_c *)CONCAT44(local_48.klass._4_4_,OHLKNCPBCBL);
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_48);
                    /* catch() { ... } // from try @ 032875cc with catch @ 032875e0 */
        if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 032875f0 to 03387657 has its CatchHandler @ 0328766c */
          if ((pIVar4 == (Il2CppObject *)0x0) ||
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 != 0)) {
            if ((int)pSVar3->max_length != 0) {
              pSVar3->m_Items[0] = pIVar4;
              thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
              pSVar7 = (pMVar2->fields).PHPELPFMOII;
              if ((pSVar7 != (System_String_o *)0x0) &&
                 (lVar5 = thunk_FUN_01bda71c(pSVar7,(((pSVar3->obj).klass)->_1).element_class),
                 lVar5 == 0)) goto LAB_032877d8;
              if (1 < (uint)pSVar3->max_length) {
                pSVar3->m_Items[1] = (Il2CppObject *)pSVar7;
                thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar7);
                    /* try { // try from 03287658 to 03387663 has its CatchHandler @ 03286ea4 */
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03287664 to 0338766b has its CatchHandler @ 0328766c */
                  thunk_FUN_01ba7564();
                }
                    /* catch() { ... } // from try @ 032874b8 with catch @ 0328766c
                       catch() { ... } // from try @ 03287524 with catch @ 0328766c
                       catch() { ... } // from try @ 032875f0 with catch @ 0328766c
                       catch() { ... } // from try @ 03287664 with catch @ 0328766c */
                    /* try { // try from 03287670 to 0338784f has its CatchHandler @ 03287670
                       catch() { ... } // from try @ 03287670 with catch @ 03287670
                       catch() { ... } // from try @ 03287ab8 with catch @ 03287670
                       catch() { ... } // from try @ 03287ad4 with catch @ 03287670
                       catch() { ... } // from try @ 03287bd4 with catch @ 03287670
                       catch() { ... } // from try @ 03287be0 with catch @ 03287670
                       catch() { ... } // from try @ 03287d04 with catch @ 03287670 */
                UnityEngine_Debug__LogFormat(StringLiteral_15490/*"[HintSchemeUtility].GetHintNameByDeviceID: - unknown hint '{0}' scheme for device: '{1}'"*/,pSVar3,(MethodInfo *)0x0);
                goto LAB_032876c8;
              }
            }
            goto LAB_032877d4;
          }
          goto LAB_032877d8;
        }
      }
LAB_032877d0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_38 = HintSchemeUtility__NICPFLNLBFL(MFMKPNIGADN,OHLKNCPBCBL,method);
    if (local_38 == -1) {
      pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      local_48.klass = (System_Enum_c *)CONCAT44(local_48.klass._4_4_,OHLKNCPBCBL);
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_48);
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_032877d0;
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0))
      {
LAB_032877d8:
        uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar6,0);
      }
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
        pSVar7 = (pMVar2->fields).PHPELPFMOII;
        if ((pSVar7 != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pSVar7,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0
           )) goto LAB_032877d8;
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = (Il2CppObject *)pSVar7;
          thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar7);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_7114/*"HintSchemeUtility].GetHintNameByDeviceID: - removed hint '{0}' by scheme for device: '{1}'"*/,pSVar3,(MethodInfo *)0x0);
          return StringLiteral_1/*""*/;
        }
      }
LAB_032877d4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_032876c8:
  local_48.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  pSVar7 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  return pSVar7;
}


// ===== public static string NINDIJCAEHO(int BMPJIDHGCBN)  [RVA 0x3187994]
// HintSchemeUtility$$NINDIJCAEHO @ RVA 0x3187994

System_String_o * HintSchemeUtility__NINDIJCAEHO(int32_t BMPJIDHGCBN,MethodInfo *method)

{
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_String_o *pSVar1;
  
                    /* try { // try from 03287994 to 033879ab has its CatchHandler @ 03287c40 */
  __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    pSVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetDeviceName
                       (__this,BMPJIDHGCBN,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int CKEMOGMODFK(MIBHAJBEMIK OHLKNCPBCBL, int BMPJIDHGCBN)  [RVA 0x31879BC]
// HintSchemeUtility$$CKEMOGMODFK @ RVA 0x31879BC

int32_t HintSchemeUtility__CKEMOGMODFK(int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int MFMKPNIGADN;
  int32_t iVar1;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar2;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Collections_Generic_List_T__o *pSVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar8;
  int32_t local_38;
  int32_t local_34;
  
                    /* try { // try from 032879bc to 033879c7 has its CatchHandler @ 03287c18 */
  method_00 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
                    /* try { // try from 032879d0 to 033879d7 has its CatchHandler @ 03287c1c */
                    /* try { // try from 032879e0 to 033879f3 has its CatchHandler @ 03287c0c */
  if ((DAT_045669e9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
                    /* try { // try from 03287a0c to 03387a17 has its CatchHandler @ 03287c04 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
                    /* try { // try from 03287a30 to 03387a37 has its CatchHandler @ 03287ac0 */
    FUN_01bab630(&StringLiteral_7113/*"HintSchemeUtility].GetHintIndexByDeviceID: - removed hint '{0}' by scheme for device: '{1}'"*/);
                    /* try { // try from 03287a44 to 03387a53 has its CatchHandler @ 03287abc */
    FUN_01bab630(&StringLiteral_15489/*"[HintSchemeUtility].GetHintIndexByDeviceID: - unknown hint '{0}' scheme for device: '{1}'"*/);
    DAT_045669e9 = 1;
    method_00 = extraout_x1;
  }
  if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pMVar2 = HintSchemeUtility__ABOLJGNNGMC(BMPJIDHGCBN,method_00);
                    /* try { // try from 03287a68 to 03387a6f has its CatchHandler @ 03287c08 */
  if (pMVar2 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
    MFMKPNIGADN = (pMVar2->fields).DOKHHBGJICA;
                    /* try { // try from 03287a78 to 03387a83 has its CatchHandler @ 03287c14 */
    if (MFMKPNIGADN == 0x67) {
      if (-1 < BMPJIDHGCBN) {
        __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
        if (__this == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) goto LAB_03287d00;
        iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                          (__this,(MethodInfo *)0x0);
                    /* try { // try from 03287a94 to 03387a9f has its CatchHandler @ 03287bfc */
        if (BMPJIDHGCBN < iVar1) {
                    /* try { // try from 03287aac to 03387ab7 has its CatchHandler @ 03287c00 */
          pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
                    /* try { // try from 03287ab8 to 03387acf has its CatchHandler @ 03287670 */
                    /* catch() { ... } // from try @ 03287a44 with catch @ 03287abc */
          local_34 = OHLKNCPBCBL;
                    /* catch() { ... } // from try @ 03287a30 with catch @ 03287ac0 */
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_34);
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03287d00;
                    /* try { // try from 03287ad0 to 03387ad3 has its CatchHandler @ 03287be8 */
                    /* try { // try from 03287ad4 to 03387b73 has its CatchHandler @ 03287670 */
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03287d08;
          if ((int)pSVar3->max_length == 0) goto LAB_03287d04;
          pSVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
          pSVar8 = (pMVar2->fields).PHPELPFMOII;
          if ((pSVar8 != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pSVar8,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03287d08;
          if ((uint)pSVar3->max_length < 2) goto LAB_03287d04;
          pSVar3->m_Items[1] = (Il2CppObject *)pSVar8;
          thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar8);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(StringLiteral_15489/*"[HintSchemeUtility].GetHintIndexByDeviceID: - unknown hint '{0}' scheme for device: '{1}'"*/,pSVar3,(MethodInfo *)0x0);
        }
      }
                    /* try { // try from 03287b74 to 03387b7b has its CatchHandler @ 03287c58 */
                    /* try { // try from 03287b7c to 03387b7f has its CatchHandler @ 03287c4c */
      if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03287b80 to 03387b83 has its CatchHandler @ 03287c34 */
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0);
      if (pSVar6 != (System_Collections_Generic_List_T__o *)0x0) {
                    /* try { // try from 03287b9c to 03387bbf has its CatchHandler @ 03287d18 */
        iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                          (pSVar6,OHLKNCPBCBL,
                           Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
        return iVar1;
      }
    }
    else {
      if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03287bc0 to 03387bc3 has its CatchHandler @ 03287c30 */
      iVar1 = HintSchemeUtility__NICPFLNLBFL(MFMKPNIGADN,OHLKNCPBCBL,method);
                    /* try { // try from 03287bc4 to 03387bc7 has its CatchHandler @ 03287c2c */
                    /* try { // try from 03287bc8 to 03387bcb has its CatchHandler @ 03287c20 */
      if (iVar1 == -1) {
                    /* catch() { ... } // from try @ 032879bc with catch @ 03287c18 */
                    /* catch() { ... } // from try @ 032879d0 with catch @ 03287c1c */
                    /* catch() { ... } // from try @ 03287bc8 with catch @ 03287c20 */
                    /* catch() { ... } // from try @ 03287964 with catch @ 03287c24 */
                    /* catch() { ... } // from try @ 03287974 with catch @ 03287c28 */
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
                    /* catch() { ... } // from try @ 03287bc4 with catch @ 03287c2c */
                    /* catch() { ... } // from try @ 03287bc0 with catch @ 03287c30 */
                    /* catch() { ... } // from try @ 03287b80 with catch @ 03287c34 */
                    /* catch() { ... } // from try @ 03287950 with catch @ 03287c38 */
        local_38 = OHLKNCPBCBL;
                    /* catch() { ... } // from try @ 03287938 with catch @ 03287c3c */
                    /* catch() { ... } // from try @ 03287994 with catch @ 03287c40 */
                    /* catch() { ... } // from try @ 03287914 with catch @ 03287c44 */
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_38);
                    /* catch() { ... } // from try @ 03287920 with catch @ 03287c48 */
        if (pSVar3 != (System_Object_array *)0x0) {
                    /* catch() { ... } // from try @ 03287b7c with catch @ 03287c4c */
                    /* catch() { ... } // from try @ 032878ac with catch @ 03287c50 */
                    /* catch() { ... } // from try @ 03287850 with catch @ 03287c54 */
                    /* catch() { ... } // from try @ 03287b74 with catch @ 03287c58 */
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) {
LAB_03287d08:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03287d10 to 03387d17 has its CatchHandler @ 03287d18 */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pSVar3->max_length != 0) {
                    /* try { // try from 03287c70 to 03387c73 has its CatchHandler @ 03287c84 */
            pSVar3->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
            pSVar8 = (pMVar2->fields).PHPELPFMOII;
                    /* catch() { ... } // from try @ 03287c70 with catch @ 03287c84 */
                    /* try { // try from 03287c94 to 03387d03 has its CatchHandler @ 03287d18 */
            if ((pSVar8 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar8,(((pSVar3->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03287d08;
            if (1 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[1] = (Il2CppObject *)pSVar8;
              thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar8);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_7113/*"HintSchemeUtility].GetHintIndexByDeviceID: - removed hint '{0}' by scheme for device: '{1}'"*/,pSVar3,(MethodInfo *)0x0);
              return 0;
            }
          }
LAB_03287d04:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03287d04 to 03387d0f has its CatchHandler @ 03287670 */
          FUN_01bab8d0();
        }
      }
      else {
                    /* try { // try from 03287bcc to 03387bd3 has its CatchHandler @ 03287c10 */
                    /* try { // try from 03287bd4 to 03387bd7 has its CatchHandler @ 03287670 */
                    /* try { // try from 03287bd8 to 03387bdb has its CatchHandler @ 03287bf8 */
                    /* try { // try from 03287bdc to 03387bdf has its CatchHandler @ 03287bf4 */
                    /* try { // try from 03287be0 to 03387c6f has its CatchHandler @ 03287670 */
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 03287ad0 with catch @ 03287be8 */
        pSVar6 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0)
        ;
        if (pSVar6 != (System_Collections_Generic_List_T__o *)0x0) {
                    /* catch() { ... } // from try @ 03287bdc with catch @ 03287bf4 */
                    /* catch() { ... } // from try @ 03287bd8 with catch @ 03287bf8 */
                    /* catch() { ... } // from try @ 03287a94 with catch @ 03287bfc */
                    /* catch() { ... } // from try @ 03287aac with catch @ 03287c00 */
                    /* catch() { ... } // from try @ 03287a0c with catch @ 03287c04 */
                    /* catch() { ... } // from try @ 03287a68 with catch @ 03287c08 */
                    /* catch() { ... } // from try @ 032879e0 with catch @ 03287c0c */
                    /* catch() { ... } // from try @ 03287bcc with catch @ 03287c10 */
                    /* catch() { ... } // from try @ 03287a78 with catch @ 03287c14 */
          iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                            (pSVar6,iVar1,
                             Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
          return iVar1;
        }
      }
    }
  }
LAB_03287d00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int MICKHLIJECC(MIBHAJBEMIK OHLKNCPBCBL, int BMPJIDHGCBN)  [RVA 0x3187D14]
// HintSchemeUtility$$MICKHLIJECC @ RVA 0x3187D14

int32_t HintSchemeUtility__MICKHLIJECC(int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int MFMKPNIGADN;
  int32_t iVar1;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar2;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Collections_Generic_List_T__o *pSVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar8;
  int32_t local_38;
  int32_t local_34;
  
  method_00 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
                    /* catch() { ... } // from try @ 03287b9c with catch @ 03287d18
                       catch() { ... } // from try @ 03287c94 with catch @ 03287d18
                       catch() { ... } // from try @ 03287d10 with catch @ 03287d18 */
  if ((DAT_045669ea & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_7113/*"HintSchemeUtility].GetHintIndexByDeviceID: - removed hint '{0}' by scheme for device: '{1}'"*/);
    FUN_01bab630(&StringLiteral_15489/*"[HintSchemeUtility].GetHintIndexByDeviceID: - unknown hint '{0}' scheme for device: '{1}'"*/);
    DAT_045669ea = 1;
    method_00 = extraout_x1;
  }
  if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pMVar2 = HintSchemeUtility__ABOLJGNNGMC(BMPJIDHGCBN,method_00);
  if (pMVar2 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
    MFMKPNIGADN = (pMVar2->fields).DOKHHBGJICA;
    if (MFMKPNIGADN == 0x67) {
      if (-1 < BMPJIDHGCBN) {
        __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
        if (__this == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) goto LAB_03288058;
        iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                          (__this,(MethodInfo *)0x0);
        if (BMPJIDHGCBN < iVar1) {
          pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
          local_34 = OHLKNCPBCBL;
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_34);
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03288058;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03288060;
          if ((int)pSVar3->max_length == 0) goto LAB_0328805c;
          pSVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
          pSVar8 = (pMVar2->fields).PHPELPFMOII;
          if ((pSVar8 != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pSVar8,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03288060;
          if ((uint)pSVar3->max_length < 2) goto LAB_0328805c;
          pSVar3->m_Items[1] = (Il2CppObject *)pSVar8;
          thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar8);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(StringLiteral_15489/*"[HintSchemeUtility].GetHintIndexByDeviceID: - unknown hint '{0}' scheme for device: '{1}'"*/,pSVar3,(MethodInfo *)0x0);
        }
      }
      if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0);
      if (pSVar6 != (System_Collections_Generic_List_T__o *)0x0) {
        iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                          (pSVar6,OHLKNCPBCBL,
                           Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
        return iVar1;
      }
    }
    else {
      if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = HintSchemeUtility__NICPFLNLBFL(MFMKPNIGADN,OHLKNCPBCBL,method);
      if (iVar1 == -1) {
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        local_38 = OHLKNCPBCBL;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_38);
        if (pSVar3 != (System_Object_array *)0x0) {
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) {
LAB_03288060:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pSVar3->max_length != 0) {
            pSVar3->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
            pSVar8 = (pMVar2->fields).PHPELPFMOII;
            if ((pSVar8 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar8,(((pSVar3->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03288060;
            if (1 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[1] = (Il2CppObject *)pSVar8;
              thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar8);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_7113/*"HintSchemeUtility].GetHintIndexByDeviceID: - removed hint '{0}' by scheme for device: '{1}'"*/,pSVar3,(MethodInfo *)0x0);
              return 0;
            }
          }
LAB_0328805c:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
      else {
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0)
        ;
        if (pSVar6 != (System_Collections_Generic_List_T__o *)0x0) {
          iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                            (pSVar6,iVar1,
                             Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
          return iVar1;
        }
      }
    }
  }
LAB_03288058:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string DKFPOGDFDMP(MIBHAJBEMIK OHLKNCPBCBL, int BMPJIDHGCBN)  [RVA 0x318806C]
// HintSchemeUtility$$DKFPOGDFDMP @ RVA 0x318806C

System_String_o *
HintSchemeUtility__DKFPOGDFDMP(int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int MFMKPNIGADN;
  int32_t iVar1;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar2;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar7;
  System_Enum_o local_48;
  int32_t local_38;
  
  method_00 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
  if ((DAT_045669eb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15490/*"[HintSchemeUtility].GetHintNameByDeviceID: - unknown hint '{0}' scheme for device: '{1}'"*/);
    FUN_01bab630(&StringLiteral_7114/*"HintSchemeUtility].GetHintNameByDeviceID: - removed hint '{0}' by scheme for device: '{1}'"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045669eb = 1;
    method_00 = extraout_x1;
  }
  if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pMVar2 = HintSchemeUtility__ABOLJGNNGMC(BMPJIDHGCBN,method_00);
  if (pMVar2 == (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) goto LAB_03288360;
  MFMKPNIGADN = (pMVar2->fields).DOKHHBGJICA;
  if (MFMKPNIGADN == 0x67) {
    local_38 = OHLKNCPBCBL;
    if (-1 < BMPJIDHGCBN) {
      __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
      if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
        iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                          (__this,(MethodInfo *)0x0);
        if (iVar1 <= BMPJIDHGCBN) goto LAB_03288258;
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        local_48.klass = (System_Enum_c *)CONCAT44(local_48.klass._4_4_,OHLKNCPBCBL);
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_48);
        if (pSVar3 != (System_Object_array *)0x0) {
          if ((pIVar4 == (Il2CppObject *)0x0) ||
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 != 0)) {
            if ((int)pSVar3->max_length != 0) {
              pSVar3->m_Items[0] = pIVar4;
              thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
              pSVar7 = (pMVar2->fields).PHPELPFMOII;
              if ((pSVar7 != (System_String_o *)0x0) &&
                 (lVar5 = thunk_FUN_01bda71c(pSVar7,(((pSVar3->obj).klass)->_1).element_class),
                 lVar5 == 0)) goto LAB_03288368;
              if (1 < (uint)pSVar3->max_length) {
                pSVar3->m_Items[1] = (Il2CppObject *)pSVar7;
                thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar7);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogFormat(StringLiteral_15490/*"[HintSchemeUtility].GetHintNameByDeviceID: - unknown hint '{0}' scheme for device: '{1}'"*/,pSVar3,(MethodInfo *)0x0);
                goto LAB_03288258;
              }
            }
            goto LAB_03288364;
          }
          goto LAB_03288368;
        }
      }
LAB_03288360:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_38 = HintSchemeUtility__NICPFLNLBFL(MFMKPNIGADN,OHLKNCPBCBL,method);
    if (local_38 == -1) {
      pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      local_48.klass = (System_Enum_c *)CONCAT44(local_48.klass._4_4_,OHLKNCPBCBL);
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_48);
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_03288360;
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0))
      {
LAB_03288368:
        uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar6,0);
      }
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
        pSVar7 = (pMVar2->fields).PHPELPFMOII;
        if ((pSVar7 != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pSVar7,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0
           )) goto LAB_03288368;
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = (Il2CppObject *)pSVar7;
          thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar7);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_7114/*"HintSchemeUtility].GetHintNameByDeviceID: - removed hint '{0}' by scheme for device: '{1}'"*/,pSVar3,(MethodInfo *)0x0);
          return StringLiteral_1/*""*/;
        }
      }
LAB_03288364:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_03288258:
  local_48.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  pSVar7 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  return pSVar7;
}


// ===== public static MIBHAJBEMIK BCIBPHDMCHP(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x3188374]
// HintSchemeUtility$$BCIBPHDMCHP @ RVA 0x3188374

int32_t HintSchemeUtility__BCIBPHDMCHP(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  bool bVar1;
  HintSchemeUtility_IOGOIMAHPBA_o *__this;
  MethodInfo *extraout_x1;
  int32_t local_24;
  
                    /* try { // try from 0328838c to 0338844b has its CatchHandler @ 0328838c
                       catch() { ... } // from try @ 0328838c with catch @ 0328838c
                       catch() { ... } // from try @ 032884c8 with catch @ 0328838c
                       catch() { ... } // from try @ 032884f0 with catch @ 0328838c
                       catch() { ... } // from try @ 03288518 with catch @ 0328838c
                       catch() { ... } // from try @ 03288548 with catch @ 0328838c */
  if ((DAT_045669ec & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    DAT_045669ec = 1;
    method = extraout_x1;
  }
  local_24 = OHLKNCPBCBL;
  if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HintSchemeUtility_TypeInfo,method);
  }
  __this = HintSchemeUtility_TypeInfo->static_fields->JKBIGHKGGKB;
  if (__this != (HintSchemeUtility_IOGOIMAHPBA_o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,OHLKNCPBCBL,
                       &local_24,
                       Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                      );
    if (!bVar1) {
      local_24 = OHLKNCPBCBL;
    }
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void BADHFKAJGAD(List<MIBHAJBEMIK> LKFALEIFDIO)  [RVA 0x3188414]
// HintSchemeUtility$$BADHFKAJGAD @ RVA 0x3188414

void HintSchemeUtility__BADHFKAJGAD
               (System_Collections_Generic_List_MIBHAJBEMIK__o *LKFALEIFDIO,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t key;
  uint uVar3;
  System_Collections_Generic_List_T__o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_02;
  MIBHAJBEMIK_array *pMVar4;
  long lVar5;
  uint index;
  HintSchemeUtility_IOGOIMAHPBA_o *__this_00;
  uint local_54;
  
  if ((DAT_045669ed & 1) == 0) {
                    /* try { // try from 0328844c to 03388453 has its CatchHandler @ 032884fc */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
                    /* try { // try from 0328849c to 033884c7 has its CatchHandler @ 032884f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
    DAT_045669ed = 1;
    method = extraout_x1;
  }
  local_54 = 0;
  __this = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo,method);
                    /* try { // try from 032884c8 to 033884eb has its CatchHandler @ 0328838c */
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this,(System_Collections_Generic_IEnumerable_T__o *)LKFALEIFDIO,
             Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  if (LKFALEIFDIO != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
    (LKFALEIFDIO->fields)._size = 0;
    (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
    if (__this != (System_Collections_Generic_List_T__o *)0x0) {
                    /* try { // try from 032884ec to 033884ef has its CatchHandler @ 032884f4 */
      uVar1 = (__this->fields)._size;
                    /* try { // try from 032884f0 to 03388513 has its CatchHandler @ 0328838c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032884ec with catch @ 032884f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328849c with catch @ 032884f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328844c with catch @ 032884fc
                        */
      index = 0;
      method_00 = extraout_x1_00;
      do {
                    /* try { // try from 03288514 to 03388517 has its CatchHandler @ 03288538 */
                    /* try { // try from 03288518 to 0338853f has its CatchHandler @ 0328838c */
        if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_01;
        }
        if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == index) {
          HintSchemeUtility__CEBKDKHDGFA(LKFALEIFDIO,method_00);
          return;
        }
                    /* catch() { ... } // from try @ 03288514 with catch @ 03288538 */
        __this_00 = HintSchemeUtility_TypeInfo->static_fields->JKBIGHKGGKB;
                    /* try { // try from 03288540 to 03388547 has its CatchHandler @ 0328855c */
        key = System_Collections_Generic_List<Int32Enum>__get_Item
                        (__this,index,Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__
                        );
        if (__this_00 == (HintSchemeUtility_IOGOIMAHPBA_o *)0x0) break;
                    /* try { // try from 03288548 to 03388553 has its CatchHandler @ 0328838c */
                    /* try { // try from 03288554 to 0338855b has its CatchHandler @ 0328855c */
        bVar2 = System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
                           (int32_t *)&local_54,
                           Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                          );
        lVar5 = Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03288540 with catch @ 0328855c
                       catch(type#2 @ 00000000) { ... } // from try @ 03288554 with catch @ 0328855c
                        */
        if (bVar2) {
                    /* try { // try from 03288560 to 03388627 has its CatchHandler @ 03288560
                       catch() { ... } // from try @ 03288560 with catch @ 03288560
                       catch() { ... } // from try @ 032886a8 with catch @ 03288560
                       catch() { ... } // from try @ 032886d4 with catch @ 03288560
                       catch() { ... } // from try @ 032886fc with catch @ 03288560
                       catch() { ... } // from try @ 0328872c with catch @ 03288560 */
          method_00 = (MethodInfo *)(ulong)local_54;
          if (local_54 != 0xffffffff) {
            pMVar4 = (LKFALEIFDIO->fields)._items;
            (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
            if (pMVar4 != (MIBHAJBEMIK_array *)0x0) goto LAB_032885b4;
            break;
          }
        }
        else {
          uVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                            (__this,index,
                             Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
          lVar5 = Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__;
          pMVar4 = (LKFALEIFDIO->fields)._items;
          (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
          if (pMVar4 == (MIBHAJBEMIK_array *)0x0) break;
          method_00 = (MethodInfo *)(ulong)uVar3;
LAB_032885b4:
          uVar3 = (LKFALEIFDIO->fields)._size;
          if (uVar3 < (uint)pMVar4->max_length) {
            (LKFALEIFDIO->fields)._size = uVar3 + 1;
            pMVar4->m_Items[(int)uVar3] = (int32_t)method_00;
          }
          else {
            System_Collections_Generic_List<Int32Enum>__AddWithResize
                      ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,(int32_t)method_00,
                       *(MethodInfo_26C9F28 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            method_00 = extraout_x1_02;
          }
        }
        index = index + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NFLBPOKLKBK(ODLJFAIHELG MFMKPNIGADN, List<MIBHAJBEMIK> ILDIDIMINOJ, List<MIBHAJBEMIK> LKFALEIFDIO)  [RVA 0x3188730]
// HintSchemeUtility$$NFLBPOKLKBK @ RVA 0x3188730

void HintSchemeUtility__NFLBPOKLKBK
               (int32_t MFMKPNIGADN,System_Collections_Generic_List_MIBHAJBEMIK__o *ILDIDIMINOJ,
               System_Collections_Generic_List_MIBHAJBEMIK__o *LKFALEIFDIO,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  bool bVar2;
  int32_t key;
  uint uVar3;
  System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MIBHAJBEMIK_array *pMVar4;
  long lVar5;
  int index;
  uint local_5c;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  
                    /* try { // try from 03288738 to 0338873f has its CatchHandler @ 03288740 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03288724 with catch @ 03288740
                       catch(type#2 @ 00000000) { ... } // from try @ 03288738 with catch @ 03288740
                        */
  if ((DAT_045669ee & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TryGetValue__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
    DAT_045669ee = 1;
  }
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_5c = 0;
  if (LKFALEIFDIO != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
    (LKFALEIFDIO->fields)._size = 0;
    (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
    if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HintSchemeUtility_TypeInfo->static_fields->CFGHLIFIAKK;
    if (__this_00 !=
        (System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         MFMKPNIGADN,(Il2CppObject **)&local_58,
                         Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TryGetValue__
                        );
      if (bVar2) {
        if (ILDIDIMINOJ == (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) goto LAB_03288968;
        iVar1 = (ILDIDIMINOJ->fields)._size;
        method_00 = extraout_x1;
        if (0 < iVar1) {
          index = 0;
          do {
            __this = local_58;
            key = System_Collections_Generic_List<Int32Enum>__get_Item
                            ((System_Collections_Generic_List_T__o *)ILDIDIMINOJ,index,
                             Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
            if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
            goto LAB_03288968;
            bVar2 = System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__TryGetValue
                              (__this,key,(int32_t *)&local_5c,
                               Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                              );
            lVar5 = Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__;
            if (bVar2) {
              method_00 = (MethodInfo *)(ulong)local_5c;
              if (local_5c != 0xffffffff) {
                pMVar4 = (LKFALEIFDIO->fields)._items;
                (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
                if (pMVar4 != (MIBHAJBEMIK_array *)0x0) goto LAB_032888d4;
                goto LAB_03288968;
              }
            }
            else {
              uVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                                ((System_Collections_Generic_List_T__o *)ILDIDIMINOJ,index,
                                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
              lVar5 = Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__;
              method_00 = (MethodInfo *)(ulong)uVar3;
              pMVar4 = (LKFALEIFDIO->fields)._items;
              (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
              if (pMVar4 == (MIBHAJBEMIK_array *)0x0) goto LAB_03288968;
LAB_032888d4:
              uVar3 = (LKFALEIFDIO->fields)._size;
              if (uVar3 < (uint)pMVar4->max_length) {
                (LKFALEIFDIO->fields)._size = uVar3 + 1;
                pMVar4->m_Items[(int)uVar3] = (int32_t)method_00;
              }
              else {
                System_Collections_Generic_List<Int32Enum>__AddWithResize
                          ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,(int32_t)method_00,
                           *(MethodInfo_26C9F28 **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                method_00 = extraout_x1_00;
              }
            }
            index = index + 1;
          } while (iVar1 != index);
        }
        if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_01;
        }
        HintSchemeUtility__CEBKDKHDGFA(LKFALEIFDIO,method_00);
      }
      else {
        System_Collections_Generic_List<Int32Enum>__AddRange
                  ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,
                   (System_Collections_Generic_IEnumerable_T__o *)ILDIDIMINOJ,
                   Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
      }
      return;
    }
  }
LAB_03288968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x318896C]
// HintSchemeUtility$$.cctor @ RVA 0x318896C

void HintSchemeUtility___cctor(MethodInfo *method)

{
  HintSchemeUtility_IOGOIMAHPBA_o *pGVar1;
  System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *__this;
  System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o **ppSVar2;
  undefined1 auVar3 [16];
  
                    /* try { // try from 03288988 to 03388a4f has its CatchHandler @ 03288988
                       catch() { ... } // from try @ 03288988 with catch @ 03288988
                       catch() { ... } // from try @ 03288ad0 with catch @ 03288988
                       catch() { ... } // from try @ 03288afc with catch @ 03288988
                       catch() { ... } // from try @ 03288b24 with catch @ 03288988
                       catch() { ... } // from try @ 03288b54 with catch @ 03288988 */
  if ((DAT_045669ef & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_Add__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TypeInfo
                );
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_IOGOIMAHPBA_TypeInfo);
    DAT_045669ef = 1;
  }
  auVar3 = thunk_FUN_01bda818(HintSchemeUtility_IOGOIMAHPBA_TypeInfo);
  pGVar1 = auVar3._0_8_;
  HintSchemeUtility_IOGOIMAHPBA___ctor(pGVar1,auVar3._8_8_);
  if (pGVar1 != (HintSchemeUtility_IOGOIMAHPBA_o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0,1,
               Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
    System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,1,0,
               Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
    System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,2,3,
               Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288a50 to 03388a57 has its CatchHandler @ 03288b08 */
    System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,3,2,
               Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
    HintSchemeUtility_TypeInfo->static_fields->JKBIGHKGGKB = pGVar1;
    thunk_FUN_01c20e04(HintSchemeUtility_TypeInfo->static_fields,pGVar1);
    __this = (System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *)
             thunk_FUN_01bda818(
                               System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TypeInfo
                               );
    System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>__ctor__
              );
    auVar3 = thunk_FUN_01bda818(HintSchemeUtility_IOGOIMAHPBA_TypeInfo);
    pGVar1 = auVar3._0_8_;
                    /* try { // try from 03288aa0 to 03388acf has its CatchHandler @ 03288b04 */
    HintSchemeUtility_IOGOIMAHPBA___ctor(pGVar1,auVar3._8_8_);
    if (pGVar1 != (HintSchemeUtility_IOGOIMAHPBA_o *)0x0) {
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0,0x69,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,1,0x67,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288ad0 to 03388af7 has its CatchHandler @ 03288988 */
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,2,0x66,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,3,0x68,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288af8 to 03388afb has its CatchHandler @ 03288b00 */
                    /* try { // try from 03288afc to 03388b1f has its CatchHandler @ 03288988 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288af8 with catch @ 03288b00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288aa0 with catch @ 03288b04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288a50 with catch @ 03288b08
                        */
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0xc,100,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0xe,0x65,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288b20 to 03388b23 has its CatchHandler @ 03288b44 */
                    /* try { // try from 03288b24 to 03388b4b has its CatchHandler @ 03288988 */
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,4,-1,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* catch() { ... } // from try @ 03288b20 with catch @ 03288b44 */
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,5,-1,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288b4c to 03388b53 has its CatchHandler @ 03288b68 */
                    /* try { // try from 03288b54 to 03388b5f has its CatchHandler @ 03288988 */
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,6,-1,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288b60 to 03388b67 has its CatchHandler @ 03288b68 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03288b4c with catch @ 03288b68
                       catch(type#2 @ 00000000) { ... } // from try @ 03288b60 with catch @ 03288b68
                        */
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,7,-1,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,8,-1,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,10,-1,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0xb,-1,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288bb4 to 03388c7b has its CatchHandler @ 03288bb4
                       catch() { ... } // from try @ 03288bb4 with catch @ 03288bb4
                       catch() { ... } // from try @ 03288cfc with catch @ 03288bb4
                       catch() { ... } // from try @ 03288d28 with catch @ 03288bb4
                       catch() { ... } // from try @ 03288d50 with catch @ 03288bb4
                       catch() { ... } // from try @ 03288d80 with catch @ 03288bb4 */
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0xd,-1,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
      if (__this != (System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *
                    )0x0) {
        System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,0x65,
                   (Il2CppObject *)pGVar1,
                   Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_Add__
                  );
        auVar3 = thunk_FUN_01bda818(HintSchemeUtility_IOGOIMAHPBA_TypeInfo);
        pGVar1 = auVar3._0_8_;
        HintSchemeUtility_IOGOIMAHPBA___ctor(pGVar1,auVar3._8_8_);
        if (pGVar1 != (HintSchemeUtility_IOGOIMAHPBA_o *)0x0) {
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0,2,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,1,0,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,2,3,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,3,1,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0xc,100,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0xe,0x65,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288c7c to 03388c83 has its CatchHandler @ 03288d34 */
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,4,-1,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,5,-1,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,6,-1,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,7,-1,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288ccc to 03388cfb has its CatchHandler @ 03288d30 */
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,8,-1,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,9,-1,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0xb,-1,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
                    /* try { // try from 03288cfc to 03388d23 has its CatchHandler @ 03288bb4 */
          System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar1,0xd,-1,
                     Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_Add__);
          System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,0x66,
                     (Il2CppObject *)pGVar1,
                     Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_Add__
                    );
                    /* try { // try from 03288d24 to 03388d27 has its CatchHandler @ 03288d2c */
                    /* try { // try from 03288d28 to 03388d4b has its CatchHandler @ 03288bb4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288d24 with catch @ 03288d2c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288ccc with catch @ 03288d30
                        */
          ppSVar2 = &HintSchemeUtility_TypeInfo->static_fields->CFGHLIFIAKK;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288c7c with catch @ 03288d34
                        */
          *ppSVar2 = __this;
          thunk_FUN_01c20e04(ppSVar2,__this);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MGNDHCBAPEN<string, ODLJFAIHELG> ABOLJGNNGMC(int BMPJIDHGCBN)  [RVA 0x31877E4]
// HintSchemeUtility$$ABOLJGNNGMC @ RVA 0x31877E4

MGNDHCBAPEN_string__ODLJFAIHELG__o *
HintSchemeUtility__ABOLJGNNGMC(int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int32_t JGGJNLLANAE;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_String_o *LOAHEPDBFAO;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_045669f0 & 1) == 0) {
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_ODLJFAIHELG>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_ODLJFAIHELG>_TypeInfo);
    DAT_045669f0 = 1;
  }
  __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* try { // try from 03287850 to 03387877 has its CatchHandler @ 03287c54 */
    LOAHEPDBFAO = Nekki_SF2_Core_InputControllers_GamePadController__GetDeviceName
                            (__this,BMPJIDHGCBN,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HintSchemeUtility_TypeInfo);
      method_00 = extraout_x1_00;
    }
    JGGJNLLANAE = HintSchemeUtility__OFIKNKILDCH(LOAHEPDBFAO,method_00);
    __this_00 = (MGNDHCBAPEN_string__ODLJFAIHELG__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<string,_ODLJFAIHELG>_TypeInfo);
    MGNDHCBAPEN<object,_Int32Enum>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this_00,(Il2CppObject *)LOAHEPDBFAO,JGGJNLLANAE,
               Method_MGNDHCBAPEN<string,_ODLJFAIHELG>__ctor__);
                    /* try { // try from 032878ac to 033878d7 has its CatchHandler @ 03287c50 */
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MIBHAJBEMIK NICPFLNLBFL(ODLJFAIHELG MFMKPNIGADN, MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x31878B8]
// HintSchemeUtility$$NICPFLNLBFL @ RVA 0x31878B8

int32_t HintSchemeUtility__NICPFLNLBFL(int32_t MFMKPNIGADN,int32_t OHLKNCPBCBL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *__this;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_38;
  int32_t local_24;
  
  local_24 = OHLKNCPBCBL;
  if ((DAT_045669f1 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TryGetValue__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    DAT_045669f1 = 1;
  }
                    /* try { // try from 03287914 to 0338791b has its CatchHandler @ 03287c44 */
  local_38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                    /* try { // try from 03287920 to 03387927 has its CatchHandler @ 03287c48 */
  if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HintSchemeUtility_TypeInfo->static_fields->CFGHLIFIAKK;
  if (__this != (System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *)0x0
     ) {
                    /* try { // try from 03287938 to 0338793f has its CatchHandler @ 03287c3c */
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,MFMKPNIGADN,
                       (Il2CppObject **)&local_38,
                       Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TryGetValue__
                      );
                    /* try { // try from 03287950 to 03387957 has its CatchHandler @ 03287c38 */
    if (bVar1) {
      if (local_38 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
      goto LAB_03287990;
                    /* try { // try from 03287964 to 0338796f has its CatchHandler @ 03287c24 */
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__TryGetValue
                (local_38,OHLKNCPBCBL,&local_24,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
                    /* try { // try from 03287974 to 03387983 has its CatchHandler @ 03287c28 */
      OHLKNCPBCBL = local_24;
    }
    return OHLKNCPBCBL;
  }
LAB_03287990:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void CEBKDKHDGFA(List<MIBHAJBEMIK> LKFALEIFDIO)  [RVA 0x318861C]
// HintSchemeUtility$$CEBKDKHDGFA @ RVA 0x318861C

void HintSchemeUtility__CEBKDKHDGFA
               (System_Collections_Generic_List_MIBHAJBEMIK__o *LKFALEIFDIO,MethodInfo *method)

{
  System_Predicate_T__o *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03288628 to 0338862f has its CatchHandler @ 032886e0 */
  if ((DAT_045669f2 & 1) == 0) {
    FUN_01bab630(&Method_ECNCJPCKOLN_MJGNIHLBKJJ__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
                    /* try { // try from 03288678 to 033886a7 has its CatchHandler @ 032886dc */
    FUN_01bab630(&System_Predicate<MIBHAJBEMIK>_TypeInfo);
    DAT_045669f2 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Predicate_T__o *)
           thunk_FUN_01bda818(System_Predicate<MIBHAJBEMIK>_TypeInfo,method);
  System_Predicate<Int32Enum>___ctor();
                    /* try { // try from 032886a8 to 033886cf has its CatchHandler @ 03288560 */
  if ((LKFALEIFDIO != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) &&
     (pSVar2 = System_Collections_Generic_List<Int32Enum>__FindAll
                         ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,pSVar1,
                          Method_System_Collections_Generic_List<MIBHAJBEMIK>_FindAll__),
     pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
                    /* try { // try from 032886d0 to 033886d3 has its CatchHandler @ 032886d8 */
                    /* try { // try from 032886d4 to 033886f7 has its CatchHandler @ 03288560 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032886d0 with catch @ 032886d8
                        */
    if ((pSVar2->fields)._size < (LKFALEIFDIO->fields)._size + -1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288678 with catch @ 032886dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288628 with catch @ 032886e0
                        */
      return;
    }
    pSVar1 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<MIBHAJBEMIK>_TypeInfo);
                    /* try { // try from 032886f8 to 033886fb has its CatchHandler @ 0328871c */
                    /* try { // try from 032886fc to 03388723 has its CatchHandler @ 03288560 */
    System_Predicate<Int32Enum>___ctor();
                    /* catch() { ... } // from try @ 032886f8 with catch @ 0328871c */
                    /* try { // try from 03288724 to 0338872b has its CatchHandler @ 03288740 */
    System_Collections_Generic_List<Int32Enum>__RemoveAll
              ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,pSVar1,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_RemoveAll__);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0328872c to 03388737 has its CatchHandler @ 03288560 */
  FUN_01bab8c8();
}


// ===== public static ODLJFAIHELG KOBMFEANBAF(int BMPJIDHGCBN)  [RVA 0x3188D90]
// HintSchemeUtility$$KOBMFEANBAF @ RVA 0x3188D90

int32_t HintSchemeUtility__KOBMFEANBAF(int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_String_o *LOAHEPDBFAO;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03288d78 with catch @ 03288d94
                       catch(type#2 @ 00000000) { ... } // from try @ 03288d8c with catch @ 03288d94
                        */
  if ((DAT_045669f3 & 1) == 0) {
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    DAT_045669f3 = 1;
  }
  __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    LOAHEPDBFAO = Nekki_SF2_Core_InputControllers_GamePadController__GetDeviceName
                            (__this,BMPJIDHGCBN,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HintSchemeUtility_TypeInfo);
      method_00 = extraout_x1_00;
    }
    iVar1 = HintSchemeUtility__OFIKNKILDCH(LOAHEPDBFAO,method_00);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int MPGLNGGPOIK(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x3188E08]
// HintSchemeUtility$$MPGLNGGPOIK @ RVA 0x3188E08

int32_t HintSchemeUtility__MPGLNGGPOIK(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_T__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_045669f4 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
    DAT_045669f4 = 1;
    method = extraout_x1;
  }
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ECNCJPCKOLN_TypeInfo,method);
  }
  __this = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                      (__this,OHLKNCPBCBL,
                       Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string NIBAIANOPPG(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x3188E84]
// HintSchemeUtility$$NIBAIANOPPG @ RVA 0x3188E84

System_String_o * HintSchemeUtility__NIBAIANOPPG(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_045669f5 & 1) == 0) {
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    DAT_045669f5 = 1;
  }
  local_38.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = OHLKNCPBCBL;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string EBKEGMKPJJE(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x3188EE8]
// HintSchemeUtility$$EBKEGMKPJJE @ RVA 0x3188EE8

System_String_o * HintSchemeUtility__EBKEGMKPJJE(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_045669f6 & 1) == 0) {
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    DAT_045669f6 = 1;
  }
  local_38.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = OHLKNCPBCBL;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  return pSVar1;
}

