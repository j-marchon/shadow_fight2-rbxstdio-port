// Original name: Nekki.SF2.Core.MultiplayerSF.SFRequestSender  (obfuscated KKLJIDJBFEI)
// TypeDefIndex 1259
// Namespace: 
// public class SFRequestSender : KDPDBGNOFEN
// Fields:
//   private Action EPEKIKOFDNH; // 0x80
//   private Action DHLLCGMLBLE; // 0x88
//   private Action PBFGHKBLCKN; // 0x90
//   private const int ONACNMMBLFH = 1;
//   private static SFRequestSender CBDMFFMCJBK; // 0x0
//   private bool <CPLKKCAJOJJ>k__BackingField; // 0x98
//   private bool MLBNMPBAIIB; // 0x99
//   private int DKOIHGOHPFN; // 0x9C
//   private int ENPFGKLBPOH; // 0xA0
//   private bool EODMKFMHMIK; // 0xA4
//   private InputDialog KAGJIPIDJCE; // 0xA8
//   private bool MIPDMFDHHAP; // 0xB0
//   private SFSConfigManager IDFAHJPJGBM; // 0xB8
//   private LHOMEBJDFLD GBLLKHKEJOA; // 0xC0
//   private PPJGIFEJMHP NAECBEDPPBN; // 0xC8
//   private IEnumerator FDLECCPIBFI; // 0xD0
//   private IEnumerator KHJEAFKNAKF; // 0xD8
//   private NCJBDBGIPNF DNLDAJENPFE; // 0xE0

// ===== private int BFOENPKALDN()  [RVA 0x3143614]
// SFRequestSender$$BFOENPKALDN @ RVA 0x3143614

int32_t SFRequestSender__BFOENPKALDN(SFRequestSender_o *__this,MethodInfo *method)

{
  RaidConfig_o *__this_00;
  HJEODECHNDG_o *pHVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566769 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566769 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((__this_00 != (RaidConfig_o *)0x0) &&
     (pHVar1 = RaidConfig__KAPJBGIIHAA(__this_00,(MethodInfo *)0x0), pHVar1 != (HJEODECHNDG_o *)0x0
     )) {
    return (pHVar1->fields)._LEHEKLPIADH_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float NBHHAFBDEOA(string CELOLGNMKCG, Nullable<float> HEDFGDPDHAL)  [RVA 0x3143680]
// SFRequestSender$$NBHHAFBDEOA @ RVA 0x3143680

float SFRequestSender__NBHHAFBDEOA
                (System_String_o *CELOLGNMKCG,System_Nullable_float__o HEDFGDPDHAL,
                MethodInfo *method)

{
  MethodInfo *method_00;
  SFRequestSender_o *pKVar1;
  long lVar2;
  System_Func_string__float__o *pSVar3;
  long lVar4;
  float fVar5;
  System_Nullable_float__Fields local_28;
  
  method_00 = (MethodInfo *)CELOLGNMKCG;
  local_28 = HEDFGDPDHAL.fields;
  if ((DAT_0456676a & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_11526/*"SFRequestSender::GetTimeout: has no Timeout function!"*/);
    DAT_0456676a = 1;
  }
  if (((ulong)HEDFGDPDHAL.fields & 0xff) == 0) {
    pKVar1 = SFRequestSender__MBHIKFMIDAO(method_00);
    lVar2 = Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__;
    if ((pKVar1 != (SFRequestSender_o *)0x0) &&
       ((pKVar1->fields).super.MOACHOFFNCO != (System_Func_string__float__o *)0x0)) {
      pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)pKVar1);
      if ((pKVar1 != (SFRequestSender_o *)0x0) &&
         (pSVar3 = (pKVar1->fields).super.MOACHOFFNCO, pSVar3 != (System_Func_string__float__o *)0x0
         )) {
                    /* WARNING: Could not recover jumptable at 0x03243738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar5 = (float)(*(code *)(pSVar3->fields).super.super.invoke_impl)
                                 ((pSVar3->fields).super.super.method_code,CELOLGNMKCG,
                                  (pSVar3->fields).super.super.method);
        return fVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar4 = *(long *)(Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__ + 0x38);
    if (lVar4 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__);
      lVar4 = *(long *)(lVar2 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    Nekki_Utils_DetailedLog__Error
              (StringLiteral_11526/*"SFRequestSender::GetTimeout: has no Timeout function!"*/,
               (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)**(undefined8 **)(lVar2 + 0xb8),
               (MethodInfo *)0x0);
    fVar5 = 10000.0;
  }
  else {
    fVar5 = System_Nullable<float>__get_Value
                      ((System_Nullable_float__o)&local_28,Method_System_Nullable<float>_get_Value__
                      );
  }
  return fVar5;
}


// ===== private void ODIHHGKNPDI()  [RVA 0x314383C]
// SFRequestSender$$ODIHHGKNPDI @ RVA 0x314383C

void SFRequestSender__ODIHHGKNPDI(SFRequestSender_o *__this,MethodInfo *method)

{
  System_Action_c *pSVar1;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *pNVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o **ppNVar5;
  System_Action_o **ppSVar6;
  System_Action_string__o **ppSVar7;
  System_Action_o *pSVar8;
  System_Action_string__o *pSVar9;
  System_Action_string__c *pSVar10;
  
  if ((DAT_0456676b & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_EHCOOPEEHMC__);
    FUN_01bab630(&Method_KKLJIDJBFEI_PKNNILDNIAD__);
    FUN_01bab630(&StringLiteral_11524/*"SFRequestSender::CreatePlayer"*/);
    DAT_0456676b = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__Log(StringLiteral_11524/*"SFRequestSender::CreatePlayer"*/,(MethodInfo *)0x0);
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
    (__this->fields).EODMKFMHMIK = false;
    pNVar2 = DialogsOpener__DHEOJOJFOAJ((MethodInfo *)0x0);
    ppNVar5 = &(__this->fields).KAGJIPIDJCE;
    *ppNVar5 = pNVar2;
    thunk_FUN_01c20e04(ppNVar5,pNVar2);
    if (*ppNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0) {
      ppSVar7 = &((*ppNVar5)->fields).OnClosedOkAction;
      pSVar9 = *ppSVar7;
      pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
      System_Action<object>___ctor();
      pSVar3 = System_Delegate__Combine((System_Delegate_o *)pSVar9,pSVar3,(MethodInfo *)0x0);
      pSVar10 = System_Action<string>_TypeInfo;
      if (pSVar3 == (System_Delegate_o *)0x0) {
        lVar4 = 0;
        *ppSVar7 = (System_Action_string__o *)0x0;
      }
      else {
        pSVar9 = (System_Action_string__o *)
                 thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
        if (pSVar9 == (System_Action_string__o *)0x0) {
LAB_03243990:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar3,pSVar10);
        }
        *ppSVar7 = pSVar9;
        pSVar10 = System_Action<string>_TypeInfo;
        lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
        if (lVar4 == 0) goto LAB_03243990;
      }
      thunk_FUN_01c20e04(ppSVar7,lVar4);
      if (*ppNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0) {
        ppSVar6 = &((*ppNVar5)->fields).OnClosedCancelAction;
        pSVar8 = *ppSVar6;
        pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        pSVar8 = (System_Action_o *)
                 System_Delegate__Combine((System_Delegate_o *)pSVar8,pSVar3,(MethodInfo *)0x0);
        pSVar1 = System_Action_TypeInfo;
        if (pSVar8 == (System_Action_o *)0x0) {
          *ppSVar6 = (System_Action_o *)0x0;
        }
        else if ((pSVar8->klass != System_Action_TypeInfo) ||
                (*ppSVar6 = pSVar8, pSVar8->klass != pSVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar8);
        }
        thunk_FUN_01c20e04(ppSVar6,pSVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIENGNEGHPJ()  [RVA 0x3143A48]
// SFRequestSender$$GIENGNEGHPJ @ RVA 0x3143A48

void SFRequestSender__GIENGNEGHPJ(SFRequestSender_o *__this,MethodInfo *method)

{
  System_Action_CFEFALDOEMD__o *pSVar1;
  LHOMEBJDFLD_o *__this_00;
  System_Action_o *pSVar2;
  MethodInfo *extraout_x1;
  DGGBFKNKEAH_o *pDVar3;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o **ppNVar4;
  SFSConfigManager_o *pAVar5;
  
  if ((DAT_0456676c & 1) == 0) {
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_CGGADLPPEIM__);
    FUN_01bab630(&Method_KKLJIDJBFEI_JCLPLBEJHGM__);
    FUN_01bab630(&Method_KKLJIDJBFEI_PKLIMHECLPF__);
    DAT_0456676c = 1;
    method = extraout_x1;
  }
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo,method);
    DAT_045655e8 = '\x01';
  }
  pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  pSVar1 = (System_Action_CFEFALDOEMD__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
  System_Action<object>___ctor();
  if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
    DGGBFKNKEAH__MJJEHFDLAHD(pDVar3,pSVar1,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    pSVar1 = (System_Action_CFEFALDOEMD__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
      DGGBFKNKEAH__OMNHIKEFCCG(pDVar3,pSVar1,(MethodInfo *)0x0);
      ppNVar4 = &(__this->fields).KAGJIPIDJCE;
      *ppNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
      (__this->fields).DKOIHGOHPFN = 0;
      (__this->fields).ENPFGKLBPOH = 0;
      (__this->fields).EODMKFMHMIK = false;
      thunk_FUN_01c20e04(ppNVar4,0);
      __this_00 = (__this->fields).GBLLKHKEJOA;
      if (__this_00 != (LHOMEBJDFLD_o *)0x0) {
        LHOMEBJDFLD__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
        pAVar5 = (__this->fields).IDFAHJPJGBM;
        pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pAVar5 != (SFSConfigManager_o *)0x0) {
          SFSConfigManager__KMCEEDPMHMJ(pAVar5,pSVar2,(MethodInfo *)0x0);
          pAVar5 = (__this->fields).IDFAHJPJGBM;
          pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pAVar5 != (SFSConfigManager_o *)0x0) {
            SFSConfigManager__INLAIHLANEL(pAVar5,pSVar2,(MethodInfo *)0x0);
            pAVar5 = (__this->fields).IDFAHJPJGBM;
            pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pAVar5 != (SFSConfigManager_o *)0x0) {
              SFSConfigManager__CBOBBKLPMFH(pAVar5,pSVar2,(MethodInfo *)0x0);
              pAVar5 = (__this->fields).IDFAHJPJGBM;
              pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              if (pAVar5 != (SFSConfigManager_o *)0x0) {
                SFSConfigManager__CDAJJLNKAIK(pAVar5,pSVar2,(MethodInfo *)0x0);
                pAVar5 = (__this->fields).IDFAHJPJGBM;
                if (pAVar5 != (SFSConfigManager_o *)0x0) {
                  SFSConfigManager__GIENGNEGHPJ(pAVar5,(MethodInfo *)0x0);
                  JLAHCMDABIM__GIENGNEGHPJ((MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool LOFHLFCJBCJ()  [RVA 0x3143CB8]
// SFRequestSender$$LOFHLFCJBCJ @ RVA 0x3143CB8

bool SFRequestSender__LOFHLFCJBCJ(SFRequestSender_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene((MethodInfo *)0x0);
  return (bool)(~bVar1 & 1);
}


// ===== private void GLGPFKMJKDJ(MDOKGPFICNK<PEDENGEGDNI> ICLHKEAILDM)  [RVA 0x3143CD4]
// SFRequestSender$$GLGPFKMJKDJ @ RVA 0x3143CD4

void SFRequestSender__GLGPFKMJKDJ
               (SFRequestSender_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  LHOMEBJDFLD_o *__this_00;
  SFRequestSender_o *__this_01;
  SimpleJSON_JSONObject_o *NKLHCIIJBLL;
  MethodInfo *method_00;
  
  if ((DAT_0456676d & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11530/*"SFRequestSender::OnConnectSuccess"*/);
    DAT_0456676d = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Log(StringLiteral_11530/*"SFRequestSender::OnConnectSuccess"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    __this_00 = (__this->fields).GBLLKHKEJOA;
    if (__this_00 != (LHOMEBJDFLD_o *)0x0) {
      __this_01 = (SFRequestSender_o *)LHOMEBJDFLD__CFGBGFEIMEK(__this_00,(MethodInfo *)0x0);
      NKLHCIIJBLL = SFRequestSender__MANGEOLLGCL(__this_01,method_00);
      KDPDBGNOFEN__NPODDNIHKBO
                ((KDPDBGNOFEN_o *)__this,(PGICCMFLDPI_o *)__this_01,NKLHCIIJBLL,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CJNNAJGBODP(bool CJNHFNHJHPE)  [RVA 0x3143F64]
// SFRequestSender$$CJNNAJGBODP @ RVA 0x3143F64

void SFRequestSender__CJNNAJGBODP(SFRequestSender_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CPLKKCAJOJJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void HKAALOKPBPG(Action CJNHFNHJHPE)  [RVA 0x3143F70]
// SFRequestSender$$HKAALOKPBPG @ RVA 0x3143F70

void SFRequestSender__HKAALOKPBPG(SFRequestSender_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_0456676e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456676e = 1;
  }
  ppSVar4 = &(__this->fields).PBFGHKBLCKN;
  a = *ppSVar4;
                    /* try { // try from 03243fb4 to 03343fb7 has its CatchHandler @ 03243fbc */
                    /* try { // try from 03243fb8 to 03343fdb has its CatchHandler @ 03243e40 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03243fb4 with catch @ 03243fbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03243f30 with catch @ 03243fc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03243f14 with catch @ 03243fc4
                        */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 03243fdc to 03343fdf has its CatchHandler @ 03244000 */
                    /* try { // try from 03243fe0 to 03344007 has its CatchHandler @ 03243e40 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* catch() { ... } // from try @ 03243fdc with catch @ 03244000 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03244008 to 0334400f has its CatchHandler @ 03244024 */
  FUN_01babc64(pSVar2);
}


// ===== public void PJOBAFCNJAM(Action CJNHFNHJHPE)  [RVA 0x314400C]
// SFRequestSender$$PJOBAFCNJAM @ RVA 0x314400C

void SFRequestSender__PJOBAFCNJAM(SFRequestSender_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 03244010 to 0334401b has its CatchHandler @ 03243e40 */
                    /* try { // try from 0324401c to 03344023 has its CatchHandler @ 03244024 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03244008 with catch @ 03244024
                       catch(type#2 @ 00000000) { ... } // from try @ 0324401c with catch @ 03244024
                        */
  if ((DAT_0456676f & 1) == 0) {
                    /* try { // try from 03244030 to 033441bf has its CatchHandler @ 03244030
                       catch() { ... } // from try @ 03244030 with catch @ 03244030
                       catch() { ... } // from try @ 032448a4 with catch @ 03244030
                       catch() { ... } // from try @ 03244914 with catch @ 03244030
                       catch() { ... } // from try @ 03244964 with catch @ 03244030
                       catch() { ... } // from try @ 03244ab8 with catch @ 03244030
                       catch() { ... } // from try @ 03244af8 with catch @ 03244030 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456676f = 1;
  }
  ppSVar4 = &(__this->fields).DHLLCGMLBLE;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void JFLHEAKDGGL()  [RVA 0x31440A8]
// SFRequestSender$$JFLHEAKDGGL @ RVA 0x31440A8

void SFRequestSender__JFLHEAKDGGL(SFRequestSender_o *__this,MethodInfo *method)

{
  System_Action_TArgs__o *pSVar1;
  System_Action_KEFHDOHHHML__o *pSVar2;
  MethodInfo *extraout_x1;
  MOEEMFAHGPL_PEDENGEGDNI__o *pMVar3;
  DCHAJIMIFHP_o *pDVar4;
  
  if ((DAT_04566770 & 1) == 0) {
    FUN_01bab630(&System_Action<MDOKGPFICNK<PEDENGEGDNI>>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_AMHFCNOFBIO__);
    FUN_01bab630(&Method_KKLJIDJBFEI_AKEKGJAFBOC__);
    FUN_01bab630(&Method_KKLJIDJBFEI_BGKMCFLPPIG__);
    FUN_01bab630(&Method_KKLJIDJBFEI_BLPKMFJEHPB__);
    FUN_01bab630(&Method_KKLJIDJBFEI_COAKAMCJAAL__);
    FUN_01bab630(&Method_KKLJIDJBFEI_EOHJKKPDAHO__);
    FUN_01bab630(&Method_KKLJIDJBFEI_GCLNNDGBNND__);
    FUN_01bab630(&Method_KKLJIDJBFEI_GLGPFKMJKDJ__);
    FUN_01bab630(&Method_KKLJIDJBFEI_JFCAFEOAKBH__);
    FUN_01bab630(&Method_KKLJIDJBFEI_NBIKPJAEMPH__);
    FUN_01bab630(&Method_KKLJIDJBFEI_NLKPBBPPKCJ__);
    FUN_01bab630(&Method_KKLJIDJBFEI_NPFAFFLHIFO__);
    FUN_01bab630(&Method_KKLJIDJBFEI_PCDKKJGBBAB__);
    FUN_01bab630(&StringLiteral_19388/*"ledger_update_event"*/);
    FUN_01bab630(&StringLiteral_19267/*"join_zone"*/);
    FUN_01bab630(&StringLiteral_19304/*"kick"*/);
    FUN_01bab630(&StringLiteral_20460/*"reboot_event"*/);
                    /* try { // try from 032441c0 to 033441c7 has its CatchHandler @ 03244a9c */
    DAT_04566770 = 1;
    method = extraout_x1;
  }
  pMVar3 = (__this->fields).super.DDBFMMHDCBK;
  pSVar1 = (System_Action_TArgs__o *)
           thunk_FUN_01bda818(System_Action<MDOKGPFICNK<PEDENGEGDNI>>_TypeInfo,method);
                    /* try { // try from 032441dc to 033441eb has its CatchHandler @ 03244a98 */
  System_Action<object>___ctor();
  if (pMVar3 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 03244204 to 0334420f has its CatchHandler @ 03244a90 */
    JGGEJJLPMNL<object,_Int32Enum>__AMHFCNOFBIO
              ((JGGEJJLPMNL_TArgs__TEventType__o *)pMVar3,0,pSVar1,
               Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_AMHFCNOFBIO__);
    pMVar3 = (__this->fields).super.DDBFMMHDCBK;
    pSVar1 = (System_Action_TArgs__o *)
             thunk_FUN_01bda818(System_Action<MDOKGPFICNK<PEDENGEGDNI>>_TypeInfo);
                    /* try { // try from 03244220 to 0334422b has its CatchHandler @ 03244a84 */
    System_Action<object>___ctor();
    if (pMVar3 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 03244248 to 0334426b has its CatchHandler @ 03244a8c */
      JGGEJJLPMNL<object,_Int32Enum>__AMHFCNOFBIO
                ((JGGEJJLPMNL_TArgs__TEventType__o *)pMVar3,1,pSVar1,
                 Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_AMHFCNOFBIO__);
      pMVar3 = (__this->fields).super.DDBFMMHDCBK;
      pSVar1 = (System_Action_TArgs__o *)
               thunk_FUN_01bda818(System_Action<MDOKGPFICNK<PEDENGEGDNI>>_TypeInfo);
      System_Action<object>___ctor();
      if (pMVar3 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 03244278 to 0334429b has its CatchHandler @ 03244a54 */
        JGGEJJLPMNL<object,_Int32Enum>__AMHFCNOFBIO
                  ((JGGEJJLPMNL_TArgs__TEventType__o *)pMVar3,2,pSVar1,
                   Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_AMHFCNOFBIO__);
        pMVar3 = (__this->fields).super.DDBFMMHDCBK;
        pSVar1 = (System_Action_TArgs__o *)
                 thunk_FUN_01bda818(System_Action<MDOKGPFICNK<PEDENGEGDNI>>_TypeInfo);
        System_Action<object>___ctor();
                    /* try { // try from 032442ac to 033442b7 has its CatchHandler @ 03244a68 */
        if (pMVar3 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 032442c8 to 033442d3 has its CatchHandler @ 03244a70 */
          JGGEJJLPMNL<object,_Int32Enum>__AMHFCNOFBIO
                    ((JGGEJJLPMNL_TArgs__TEventType__o *)pMVar3,5,pSVar1,
                     Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_AMHFCNOFBIO__);
          pMVar3 = (__this->fields).super.DDBFMMHDCBK;
          pSVar1 = (System_Action_TArgs__o *)
                   thunk_FUN_01bda818(System_Action<MDOKGPFICNK<PEDENGEGDNI>>_TypeInfo);
          System_Action<object>___ctor();
          if (pMVar3 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 032442fc to 03344303 has its CatchHandler @ 03244a78 */
            JGGEJJLPMNL<object,_Int32Enum>__AMHFCNOFBIO
                      ((JGGEJJLPMNL_TArgs__TEventType__o *)pMVar3,6,pSVar1,
                       Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_AMHFCNOFBIO__);
            pMVar3 = (__this->fields).super.DDBFMMHDCBK;
            pSVar1 = (System_Action_TArgs__o *)
                     thunk_FUN_01bda818(System_Action<MDOKGPFICNK<PEDENGEGDNI>>_TypeInfo);
                    /* try { // try from 03244318 to 0334431f has its CatchHandler @ 03244a58 */
            System_Action<object>___ctor();
            if (pMVar3 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 03244340 to 03344347 has its CatchHandler @ 03244a4c */
              JGGEJJLPMNL<object,_Int32Enum>__AMHFCNOFBIO
                        ((JGGEJJLPMNL_TArgs__TEventType__o *)pMVar3,7,pSVar1,
                         Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_AMHFCNOFBIO__);
              pMVar3 = (__this->fields).super.DDBFMMHDCBK;
              pSVar1 = (System_Action_TArgs__o *)
                       thunk_FUN_01bda818(System_Action<MDOKGPFICNK<PEDENGEGDNI>>_TypeInfo);
                    /* try { // try from 0324435c to 0334435f has its CatchHandler @ 032449fc */
              System_Action<object>___ctor();
                    /* try { // try from 0324436c to 0334438f has its CatchHandler @ 03244a18 */
              if (pMVar3 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                JGGEJJLPMNL<object,_Int32Enum>__AMHFCNOFBIO
                          ((JGGEJJLPMNL_TArgs__TEventType__o *)pMVar3,8,pSVar1,
                           Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_AMHFCNOFBIO__);
                pMVar3 = (__this->fields).super.DDBFMMHDCBK;
                pSVar1 = (System_Action_TArgs__o *)
                         thunk_FUN_01bda818(System_Action<MDOKGPFICNK<PEDENGEGDNI>>_TypeInfo);
                    /* try { // try from 032443a0 to 033443a7 has its CatchHandler @ 03244a38 */
                System_Action<object>___ctor();
                if (pMVar3 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 032443b4 to 033443d7 has its CatchHandler @ 03244a5c */
                  JGGEJJLPMNL<object,_Int32Enum>__AMHFCNOFBIO
                            ((JGGEJJLPMNL_TArgs__TEventType__o *)pMVar3,9,pSVar1,
                             Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_AMHFCNOFBIO__
                            );
                  pDVar4 = (__this->fields).super.FNHOHLGNHGN;
                  pSVar2 = (System_Action_KEFHDOHHHML__o *)
                           thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 032443e8 to 033443ef has its CatchHandler @ 03244a00 */
                  System_Action<object>___ctor();
                  if (pDVar4 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03244410 to 03344417 has its CatchHandler @ 03244a24 */
                    DCHAJIMIFHP__MPFFOIIBAKO(pDVar4,StringLiteral_19267/*"join_zone"*/,pSVar2,(MethodInfo *)0x0);
                    pDVar4 = (__this->fields).super.FNHOHLGNHGN;
                    pSVar2 = (System_Action_KEFHDOHHHML__o *)
                             thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 03244428 to 0334442f has its CatchHandler @ 03244a1c */
                    System_Action<object>___ctor();
                    if (pDVar4 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03244444 to 0334448f has its CatchHandler @ 03244a6c */
                      DCHAJIMIFHP__MPFFOIIBAKO(pDVar4,StringLiteral_19304/*"kick"*/,pSVar2,(MethodInfo *)0x0);
                      pDVar4 = (__this->fields).super.FNHOHLGNHGN;
                      pSVar2 = (System_Action_KEFHDOHHHML__o *)
                               thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pDVar4 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 0324449c to 033444a3 has its CatchHandler @ 03244a14 */
                        DCHAJIMIFHP__MPFFOIIBAKO
                                  (pDVar4,StringLiteral_20460/*"reboot_event"*/,pSVar2,(MethodInfo *)0x0);
                        pDVar4 = (__this->fields).super.FNHOHLGNHGN;
                        pSVar2 = (System_Action_KEFHDOHHHML__o *)
                                 thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 032444c0 to 033444c7 has its CatchHandler @ 03244a10 */
                        System_Action<object>___ctor();
                        if (pDVar4 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 032444f0 to 033444fb has its CatchHandler @ 03244a30 */
                          DCHAJIMIFHP__MPFFOIIBAKO
                                    (pDVar4,StringLiteral_19388/*"ledger_update_event"*/,pSVar2,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EOHJKKPDAHO(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3144500]
// SFRequestSender$$EOHJKKPDAHO @ RVA 0x3144500

void SFRequestSender__EOHJKKPDAHO(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  SFRequestSender_JDDDAHBOKFG_o *__this_00;
  CADIGFIBFEN_o *pCVar2;
  System_String_o *pSVar3;
  FKDLCJJOGIP_o *__this_01;
  Il2CppObject *__this_02;
  NDPMLPGANCI_o *pNVar4;
  System_Action_bool__o *BLMFLPJJMPF;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  CADIGFIBFEN_o **ppCVar5;
  
                    /* try { // try from 03244520 to 03344523 has its CatchHandler @ 03244a2c */
  if ((DAT_04566771 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* try { // try from 03244540 to 03344543 has its CatchHandler @ 032449c4 */
    FUN_01bab630(&bool_TypeInfo);
                    /* try { // try from 03244544 to 0334454b has its CatchHandler @ 032449f0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_HENEPGKDDMB_NHPBJGCFLJH__);
                    /* try { // try from 0324455c to 03344567 has its CatchHandler @ 032449f4 */
    FUN_01bab630(&SFRequestSender_HENEPGKDDMB_TypeInfo);
                    /* try { // try from 0324456c to 03344577 has its CatchHandler @ 032449e0 */
    FUN_01bab630(&SFRequestSender_JDDDAHBOKFG_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<CADIGFIBFEN>__);
                    /* try { // try from 03244584 to 0334458b has its CatchHandler @ 032449ec */
    FUN_01bab630(&StringLiteral_11539/*"SFRequestSender::OnJoinedZone, evt.player_exists: "*/);
    FUN_01bab630(&StringLiteral_11540/*"SFRequestSender::OnJoinedZone: Raid-Server responded that player doesn't exist, delete LocalSettings.bin manually"*/);
                    /* try { // try from 032445a0 to 033445a3 has its CatchHandler @ 032449b4 */
    FUN_01bab630(&StringLiteral_6659/*"GOOGLE_PLAY_V2"*/);
    FUN_01bab630(&StringLiteral_11541/*"SFRequestSender::OnJoinedZone: empty response!"*/);
                    /* try { // try from 032445b0 to 033445d3 has its CatchHandler @ 032449c8 */
    DAT_04566771 = 1;
  }
  __this_00 = (SFRequestSender_JDDDAHBOKFG_o *)thunk_FUN_01bda818(SFRequestSender_JDDDAHBOKFG_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (SFRequestSender_JDDDAHBOKFG_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
                    /* try { // try from 032445e4 to 033445eb has its CatchHandler @ 032449dc */
    SFRequestSender__JIIOPKNDBBJ(__this,method_00);
                    /* try { // try from 032445f8 to 0334461b has its CatchHandler @ 03244a08 */
    if ((IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) ||
       (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), !bVar1)) {
                    /* try { // try from 03244704 to 03344727 has its CatchHandler @ 03244988 */
      SFRequestSender__FNFGGGJGPBB(__this,StringLiteral_11541/*"SFRequestSender::OnJoinedZone: empty response!"*/,-1,in_x3);
      return;
    }
    pCVar2 = (CADIGFIBFEN_o *)
             KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<CADIGFIBFEN>__);
    ppCVar5 = &(__this_00->fields).evt;
    *ppCVar5 = pCVar2;
                    /* try { // try from 03244620 to 0334462f has its CatchHandler @ 032449d0 */
    thunk_FUN_01c20e04(ppCVar5,pCVar2);
    if (*ppCVar5 != (CADIGFIBFEN_o *)0x0) {
                    /* try { // try from 03244640 to 03344647 has its CatchHandler @ 032449bc */
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = System_Boolean__ToString(true,(MethodInfo *)0x0);
                    /* try { // try from 0324465c to 0334465f has its CatchHandler @ 03244980 */
                    /* try { // try from 0324466c to 0334468f has its CatchHandler @ 032449a0 */
      pSVar3 = System_String__Concat(StringLiteral_11539/*"SFRequestSender::OnJoinedZone, evt.player_exists: "*/,pSVar3,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 032446a0 to 033446a7 has its CatchHandler @ 032449b0 */
      __this_01 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (FKDLCJJOGIP_o *)0x0) {
                    /* try { // try from 032446b0 to 033446d7 has its CatchHandler @ 032449cc */
        bVar1 = FKDLCJJOGIP__JIHDIJJPABP(__this_01,(MethodInfo *)0x0);
        pCVar2 = *ppCVar5;
        if (bVar1) {
          if (pCVar2 == (CADIGFIBFEN_o *)0x0) goto LAB_03244818;
          if ((pCVar2->fields).PCKJAOOKJKK == false) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 032446dc to 033446eb has its CatchHandler @ 032449b8 */
            UnityEngine_Debug__LogError(StringLiteral_11540/*"SFRequestSender::OnJoinedZone: Raid-Server responded that player doesn't exist, delete LocalSettings.bin manually"*/,(MethodInfo *)0x0);
                    /* try { // try from 032446f4 to 033446f7 has its CatchHandler @ 0324496c */
            (__this->fields).EODMKFMHMIK = true;
            SFRequestSender__FHIODBIPGBG(__this,method_01);
            return;
          }
        }
        else if (pCVar2 == (CADIGFIBFEN_o *)0x0) goto LAB_03244818;
        method_02 = extraout_x1;
        if ((pCVar2->fields).PCKJAOOKJKK == false) {
          pSVar3 = IMAPABEJECG__PLPICDIFHHG((MethodInfo *)0x0);
                    /* try { // try from 03244738 to 0334473f has its CatchHandler @ 03244998 */
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_6659/*"GOOGLE_PLAY_V2"*/,(MethodInfo *)0x0);
          method_02 = extraout_x1_00;
                    /* try { // try from 03244750 to 03344773 has its CatchHandler @ 03244984 */
          if (((bVar1) &&
              (bVar1 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), method_02 = extraout_x1_01,
              bVar1)) &&
             (bVar1 = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0), method_02 = extraout_x1_02,
             !bVar1)) {
                    /* try { // try from 03244784 to 033447a7 has its CatchHandler @ 032449a4 */
            __this_02 = (Il2CppObject *)thunk_FUN_01bda818(SFRequestSender_HENEPGKDDMB_TypeInfo);
            System_Object___ctor(__this_02,(MethodInfo *)0x0);
            if (__this_02 != (Il2CppObject *)0x0) {
              __this_02[1].monitor = __this_00;
                    /* try { // try from 032447a8 to 033447af has its CatchHandler @ 0324498c */
              thunk_FUN_01c20e04(&__this_02[1].monitor,__this_00);
              pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
              if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
                *(bool_conflict *)&__this_02[1].klass = (pNVar4->fields).JCPABCJKJMC;
                pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 032447c8 to 033447cb has its CatchHandler @ 03244a8c */
                if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 032447d8 to 033447fb has its CatchHandler @ 03244968 */
                  NDPMLPGANCI__PHFCKPKDMBK(pNVar4,false,true,(MethodInfo *)0x0);
                  BLMFLPJJMPF = (System_Action_bool__o *)
                                thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                  System_Action<bool>___ctor();
                    /* try { // try from 0324480c to 03344813 has its CatchHandler @ 03244978 */
                  IMAPABEJECG__JGDKNDBAIHM(BLMFLPJJMPF,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            goto LAB_03244818;
          }
        }
        SFRequestSender_JDDDAHBOKFG__FAMMLJNJPNF(__this_00,method_02);
        return;
      }
    }
  }
LAB_03244818:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HOIIJGMCDEM()  [RVA 0x3144AAC]
// SFRequestSender$$HOIIJGMCDEM @ RVA 0x3144AAC

void SFRequestSender__HOIIJGMCDEM(SFRequestSender_o *__this,MethodInfo *method)

{
  if ((__this->fields).MLBNMPBAIIB != false) {
                    /* try { // try from 03244ab4 to 03344ab7 has its CatchHandler @ 03244ae0 */
    (__this->fields).MLBNMPBAIIB = false;
                    /* try { // try from 03244ab8 to 03344aef has its CatchHandler @ 03244030 */
    SFRequestSender__CDKAPIKLDJI(__this,method);
    return;
  }
  return;
}


// ===== public void PILMCAFCLMN(Action CJNHFNHJHPE)  [RVA 0x3144B58]
// SFRequestSender$$PILMCAFCLMN @ RVA 0x3144B58

void SFRequestSender__PILMCAFCLMN(SFRequestSender_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566772 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566772 = 1;
  }
  ppSVar4 = &(__this->fields).EPEKIKOFDNH;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void JCLPLBEJHGM(CFEFALDOEMD PODMLLJBEKK)  [RVA 0x3144BF4]
// SFRequestSender$$JCLPLBEJHGM @ RVA 0x3144BF4

void SFRequestSender__JCLPLBEJHGM(SFRequestSender_o *__this,CFEFALDOEMD_o *PODMLLJBEKK,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  
                    /* try { // try from 03244c10 to 03344e8b has its CatchHandler @ 03244c10
                       catch() { ... } // from try @ 03244c10 with catch @ 03244c10
                       catch() { ... } // from try @ 032450c0 with catch @ 03244c10
                       catch() { ... } // from try @ 03245178 with catch @ 03244c10
                       catch() { ... } // from try @ 03245180 with catch @ 03244c10
                       catch() { ... } // from try @ 03245274 with catch @ 03244c10 */
  if ((DAT_04566773 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11546/*"SFRequestSender::OnPurchaseSuccess"*/);
    DAT_04566773 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11546/*"SFRequestSender::OnPurchaseSuccess"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
      SFRequestSender__FJOMLDLFJPI(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NAFJEEKCIPL(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3144D58]
// SFRequestSender$$NAFJEEKCIPL @ RVA 0x3144D58

void SFRequestSender__NAFJEEKCIPL(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Roster_o *__this_00;
  
  if ((DAT_04566774 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EAJJPPPJENA>__);
    __this = (SFRequestSender_o *)FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566774 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EAJJPPPJENA>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this = (SFRequestSender_o *)HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (__this != (SFRequestSender_o *)0x0)) {
      PlayerData__PJDFGEMEJAC
                ((PlayerData_o *)__this,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      __this = (SFRequestSender_o *)0x0;
      if (__this_00 != (Roster_o *)0x0) {
        KIHIPAJGNBF__FPEHFKPMIHK((KIHIPAJGNBF_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void EGMHFFODCKH(object IMMNELPBGIF)  [RVA 0x3144E78]
// SFRequestSender$$EGMHFFODCKH @ RVA 0x3144E78

void SFRequestSender__EGMHFFODCKH(SFRequestSender_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).PBFGHKBLCKN;
  (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 03244e8c to 03344eb3 has its CatchHandler @ 032451c8 */
                    /* WARNING: Could not recover jumptable at 0x03244e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long HEDLNKCNMCI()  [RVA 0x3144EA0]
// SFRequestSender$$HEDLNKCNMCI @ RVA 0x3144EA0

int64_t SFRequestSender__HEDLNKCNMCI(SFRequestSender_o *__this,MethodInfo *method)

{
  LHOMEBJDFLD_o *__this_00;
  PGICCMFLDPI_o *pPVar1;
  
  __this_00 = (__this->fields).GBLLKHKEJOA;
  if ((__this_00 != (LHOMEBJDFLD_o *)0x0) &&
     (pPVar1 = LHOMEBJDFLD__CFGBGFEIMEK(__this_00,(MethodInfo *)0x0), pPVar1 != (PGICCMFLDPI_o *)0x0
     )) {
    return (pPVar1->fields).GDKPGIBMFPA / 1000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NCNLJIIPOBJ(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3144F00]
// SFRequestSender$$NCNLJIIPOBJ @ RVA 0x3144F00

void SFRequestSender__NCNLJIIPOBJ(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t iVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  ELBBEAGGAOH_o *PKOGACBGAJJ;
  NDPMLPGANCI_o *pNVar6;
  NCJBDBGIPNF_o *__this_00;
  ELBBEAGGAOH_o **ppEVar7;
  System_Action_InputDialog_HJDIKOKAGJF__o *pSVar8;
  System_Action_InputDialog_HJDIKOKAGJF__o **ppSVar9;
  Il2CppObject *pIVar10;
  long lVar11;
  System_String_o *pSVar12;
  Il2CppObject *pIVar13;
  long lVar14;
  VirtualInvokeData *pVVar15;
  NCJBDBGIPNF_o **ppNVar16;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *in_x5;
  EOLFEKNCPLM_o *pEVar17;
  GKLPDMLELJF_o *pGVar18;
  KAMBBJFPLGM_o *pKVar19;
  long lVar20;
  Il2CppClass *pIVar21;
  GKLPDMLELJF_o *pGVar22;
  ulong uVar23;
  int32_t *piVar24;
  GLPEFEEGCPM_o *BFFBKNCLLML;
  undefined8 uVar25;
  int32_t local_54;
  
  if ((DAT_04566775 & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&System_Action<InputDialog_HJDIKOKAGJF>_TypeInfo);
                    /* try { // try from 03244f4c to 03344f6b has its CatchHandler @ 032451dc */
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
    FUN_01bab630(&Method_KKLJIDJBFEI_LCMKFDELMBB__);
    FUN_01bab630(&Method_KKLJIDJBFEI_NKKEKIKFFCJ__);
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* try { // try from 03244fb4 to 03344fd7 has its CatchHandler @ 032451bc */
    FUN_01bab630(&NCJBDBGIPNF_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_11533/*"SFRequestSender::OnGetPlayerResponse"*/);
    FUN_01bab630(&StringLiteral_5965/*"Error: onGetPlayerResponse empty response"*/);
                    /* try { // try from 03244fe4 to 03344fff has its CatchHandler @ 032451d0 */
    FUN_01bab630(&StringLiteral_8468/*"LinkAccountTitle"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_8466/*"LinkAccountAgreement"*/);
    FUN_01bab630(&StringLiteral_8469/*"LinkAccountbtn"*/);
                    /* try { // try from 0324500c to 03345013 has its CatchHandler @ 032451ac */
    FUN_01bab630(&StringLiteral_8467/*"LinkAccountMessage"*/);
                    /* try { // try from 0324501c to 03345023 has its CatchHandler @ 032451a8 */
    DAT_04566775 = 1;
  }
                    /* try { // try from 03245024 to 0334503f has its CatchHandler @ 032451d4 */
  local_54 = 0;
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_032455c4;
  if ((int)BBBLOLJAMJP->max_length == 0) goto LAB_032455c8;
                    /* try { // try from 03245044 to 0334504f has its CatchHandler @ 0324518c */
  BBBLOLJAMJP->m_Items[0] = 6;
                    /* try { // try from 03245050 to 0334505f has its CatchHandler @ 03245190 */
  method_00 = (MethodInfo *)0x0;
                    /* try { // try from 03245060 to 0334506f has its CatchHandler @ 032451a4 */
  Nekki_Utils_DetailedLog__Log(StringLiteral_11533/*"SFRequestSender::OnGetPlayerResponse"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = GameUtils__PKNDHONBNIF((MethodInfo *)0x0);
                    /* try { // try from 0324507c to 03345083 has its CatchHandler @ 032451a0 */
  if (bVar4) {
                    /* try { // try from 0324508c to 03345093 has its CatchHandler @ 03245198 */
    if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
       (bVar4 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), bVar4)) {
                    /* try { // try from 03245094 to 033450af has its CatchHandler @ 032451cc */
      PKOGACBGAJJ = (ELBBEAGGAOH_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
      if (PKOGACBGAJJ != (ELBBEAGGAOH_o *)0x0) {
        pKVar19 = (PKOGACBGAJJ->fields).CBHDCHDBFGB;
        pKVar1 = (PKOGACBGAJJ->fields).IFDHENIKFKC;
                    /* try { // try from 032450b4 to 033450bf has its CatchHandler @ 0324519c */
        bVar4 = false;
                    /* try { // try from 032450c0 to 03345157 has its CatchHandler @ 03244c10 */
        if ((pKVar19 != (KAMBBJFPLGM_o *)0x0) && (pKVar1 != (KAMBBJFPLGM_o *)0x0)) {
          pEVar17 = (pKVar19->fields).FLAFELDNABC;
          if ((pEVar17 == (EOLFEKNCPLM_o *)0x0) ||
             (((pGVar18 = (pEVar17->fields).MCOPPCNPAHF, pGVar18 == (GKLPDMLELJF_o *)0x0 ||
               (pEVar17 = (pKVar1->fields).FLAFELDNABC, pEVar17 == (EOLFEKNCPLM_o *)0x0)) ||
              (pGVar22 = (pEVar17->fields).MCOPPCNPAHF, pGVar22 == (GKLPDMLELJF_o *)0x0))))
          goto LAB_032455c4;
          bVar4 = (pGVar18->fields).ANAJGHJEEOC != (pGVar22->fields).ANAJGHJEEOC;
        }
        SFRequestSender__INBCMIJNADF(__this,PKOGACBGAJJ,method_00);
        if ((bVar4 & pKVar1 != (KAMBBJFPLGM_o *)0x0 & (__this->fields).MIPDMFDHHAP) == 0) {
          if (pKVar19 == (KAMBBJFPLGM_o *)0x0) {
            if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
              return;
            }
            pKVar19 = (PKOGACBGAJJ->fields).IFDHENIKFKC;
          }
          else {
            pKVar19 = (PKOGACBGAJJ->fields).CBHDCHDBFGB;
          }
          BFFBKNCLLML = (PKOGACBGAJJ->fields).KEIBPDJHHBB;
          bVar4 = ELBBEAGGAOH__OMODJLCIIGD(PKOGACBGAJJ,(MethodInfo *)0x0);
          if (bVar4) {
            iVar5 = (PKOGACBGAJJ->fields).EMNNAEAIMNH;
          }
          else {
            iVar5 = -1;
          }
          SFRequestSender__BCOMIMBOGIM
                    (__this,pKVar19,(EKCGNICFDEO_o *)method_00,BFFBKNCLLML,iVar5,in_x5);
          return;
        }
        pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__MBHCCJNGJEK(pNVar6,(MethodInfo *)0x0);
          __this_00 = (NCJBDBGIPNF_o *)thunk_FUN_01bda818(NCJBDBGIPNF_TypeInfo);
          NCJBDBGIPNF___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 != (NCJBDBGIPNF_o *)0x0) {
            ppEVar7 = &(__this_00->fields).KOANCCDDBDA;
            *ppEVar7 = PKOGACBGAJJ;
            thunk_FUN_01c20e04(ppEVar7,PKOGACBGAJJ);
                    /* try { // try from 03245158 to 0334515f has its CatchHandler @ 032451c0 */
                    /* try { // try from 03245160 to 03345163 has its CatchHandler @ 032451b8 */
                    /* try { // try from 03245164 to 03345167 has its CatchHandler @ 032451b4 */
            pSVar8 = (System_Action_InputDialog_HJDIKOKAGJF__o *)
                     thunk_FUN_01bda818(System_Action<InputDialog_HJDIKOKAGJF>_TypeInfo);
                    /* try { // try from 03245168 to 0334516b has its CatchHandler @ 032451b0 */
                    /* try { // try from 0324516c to 03345173 has its CatchHandler @ 032451d8 */
                    /* try { // try from 03245174 to 03345177 has its CatchHandler @ 03245194 */
                    /* try { // try from 03245178 to 0334517b has its CatchHandler @ 03244c10 */
                    /* try { // try from 0324517c to 0334517f has its CatchHandler @ 03245188 */
                    /* try { // try from 03245180 to 033451f3 has its CatchHandler @ 03244c10 */
            System_Action<object>___ctor();
            ppSVar9 = &(__this_00->fields).MIMKJIKCPGP;
                    /* catch() { ... } // from try @ 0324517c with catch @ 03245188 */
            *ppSVar9 = pSVar8;
                    /* catch() { ... } // from try @ 03245044 with catch @ 0324518c */
                    /* catch() { ... } // from try @ 03245050 with catch @ 03245190 */
            thunk_FUN_01c20e04(ppSVar9,pSVar8);
                    /* catch() { ... } // from try @ 03245174 with catch @ 03245194 */
                    /* catch() { ... } // from try @ 0324508c with catch @ 03245198 */
                    /* catch() { ... } // from try @ 032450b4 with catch @ 0324519c */
                    /* catch() { ... } // from try @ 0324507c with catch @ 032451a0 */
                    /* catch() { ... } // from try @ 03245060 with catch @ 032451a4 */
            (__this_00->fields).DONLEDMPGCF = StringLiteral_8468/*"LinkAccountTitle"*/;
                    /* catch() { ... } // from try @ 0324501c with catch @ 032451a8 */
            thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0324500c with catch @ 032451ac */
                    /* catch() { ... } // from try @ 03245168 with catch @ 032451b0 */
                    /* catch() { ... } // from try @ 03245164 with catch @ 032451b4 */
                    /* catch() { ... } // from try @ 03245160 with catch @ 032451b8 */
            pIVar10 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* catch() { ... } // from try @ 03244fb4 with catch @ 032451bc */
                    /* catch() { ... } // from try @ 03245158 with catch @ 032451c0 */
                    /* catch() { ... } // from try @ 03244ee8 with catch @ 032451c4 */
                    /* catch() { ... } // from try @ 03244e8c with catch @ 032451c8 */
                    /* catch() { ... } // from try @ 03245094 with catch @ 032451cc */
                    /* catch() { ... } // from try @ 03244fe4 with catch @ 032451d0 */
                    /* catch() { ... } // from try @ 03245024 with catch @ 032451d4 */
            lVar11 = FUN_01bab718(string___TypeInfo,5);
                    /* catch() { ... } // from try @ 0324516c with catch @ 032451d8 */
            pKVar19 = (PKOGACBGAJJ->fields).CBHDCHDBFGB;
                    /* catch() { ... } // from try @ 03244f4c with catch @ 032451dc */
                    /* try { // try from 032451f4 to 033451f7 has its CatchHandler @ 03245204 */
            if (((pKVar19 != (KAMBBJFPLGM_o *)0x0) &&
                (pEVar17 = (pKVar19->fields).FLAFELDNABC, pEVar17 != (EOLFEKNCPLM_o *)0x0)) &&
               ((pGVar18 = (pEVar17->fields).MCOPPCNPAHF, pGVar18 != (GKLPDMLELJF_o *)0x0 &&
                (lVar11 != 0)))) {
              if (*(int *)(lVar11 + 0x18) == 0) {
LAB_032455c8:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
                    /* catch() { ... } // from try @ 032451f4 with catch @ 03245204 */
              *(System_String_o **)(lVar11 + 0x20) = (pGVar18->fields).LLBEKLPKDHK;
                    /* try { // try from 0324520c to 03345273 has its CatchHandler @ 03245288 */
              thunk_FUN_01c20e04();
              pKVar19 = (PKOGACBGAJJ->fields).CBHDCHDBFGB;
              if (((pKVar19 != (KAMBBJFPLGM_o *)0x0) &&
                  (pEVar17 = (pKVar19->fields).FLAFELDNABC, pEVar17 != (EOLFEKNCPLM_o *)0x0)) &&
                 (pGVar18 = (pEVar17->fields).MCOPPCNPAHF, pGVar18 != (GKLPDMLELJF_o *)0x0)) {
                local_54 = (pGVar18->fields).PEBHLKLGDBM;
                pSVar12 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
                if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_032455c8;
                *(System_String_o **)(lVar11 + 0x28) = pSVar12;
                thunk_FUN_01c20e04();
                pKVar19 = (PKOGACBGAJJ->fields).IFDHENIKFKC;
                if (((pKVar19 != (KAMBBJFPLGM_o *)0x0) &&
                    (pEVar17 = (pKVar19->fields).FLAFELDNABC, pEVar17 != (EOLFEKNCPLM_o *)0x0)) &&
                   (pGVar18 = (pEVar17->fields).MCOPPCNPAHF, pGVar18 != (GKLPDMLELJF_o *)0x0)) {
                    /* try { // try from 03245274 to 0334527f has its CatchHandler @ 03244c10 */
                  if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_032455c8;
                    /* try { // try from 03245280 to 03345287 has its CatchHandler @ 03245288 */
                  *(System_String_o **)(lVar11 + 0x30) = (pGVar18->fields).LLBEKLPKDHK;
                    /* catch() { ... } // from try @ 0324520c with catch @ 03245288
                       catch() { ... } // from try @ 03245280 with catch @ 03245288 */
                  thunk_FUN_01c20e04();
                  pKVar19 = (PKOGACBGAJJ->fields).IFDHENIKFKC;
                  if (((pKVar19 != (KAMBBJFPLGM_o *)0x0) &&
                      (pEVar17 = (pKVar19->fields).FLAFELDNABC, pEVar17 != (EOLFEKNCPLM_o *)0x0)) &&
                     (pGVar18 = (pEVar17->fields).MCOPPCNPAHF, pGVar18 != (GKLPDMLELJF_o *)0x0)) {
                    local_54 = (pGVar18->fields).PEBHLKLGDBM;
                    pSVar12 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
                    if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_032455c8;
                    *(System_String_o **)(lVar11 + 0x38) = pSVar12;
                    thunk_FUN_01c20e04();
                    pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__)
                    ;
                    lVar14 = Method_System_Array_Empty<string>__;
                    lVar20 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                    if (lVar20 == 0) {
                      FUN_01b8167c(Method_System_Array_Empty<string>__);
                      lVar20 = *(long *)(lVar14 + 0x38);
                    }
                    lVar20 = *(long *)(lVar20 + 0x10);
                    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                      lVar20 = FUN_01b81620();
                    }
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01ba7564();
                    }
                    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                      lVar14 = FUN_01b81620();
                    }
                    pSVar12 = StringLiteral_8466/*"LinkAccountAgreement"*/;
                    if (pIVar13 != (Il2CppObject *)0x0) {
                      pIVar21 = pIVar13->klass;
                      uVar25 = **(undefined8 **)(lVar14 + 0xb8);
                      uVar2._0_1_ = (pIVar21->_2).rank;
                      uVar2._1_1_ = (pIVar21->_2).minimumAlignment;
                      uVar23 = (ulong)uVar2;
                      if (uVar23 != 0) {
                        piVar24 = &((pIVar21->_1).interfaceOffsets)->offset;
                        do {
                          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar24 + -2))->interfaceType ==
                              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                            pVVar15 = pIVar21->vtable + (*piVar24 + 0xc);
                            goto LAB_032453e0;
                          }
                          uVar23 = uVar23 - 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar23 != 0);
                      }
                      pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_032453e0:
                      uVar25 = (*pVVar15->methodPtr)(pIVar13,pSVar12,uVar25,pVVar15->method);
                      if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_032455c8;
                      *(undefined8 *)(lVar11 + 0x40) = uVar25;
                      thunk_FUN_01c20e04();
                      uVar25 = StringLiteral_8467/*"LinkAccountMessage"*/;
                      if (pIVar10 != (Il2CppObject *)0x0) {
                        pIVar21 = pIVar10->klass;
                        uVar3._0_1_ = (pIVar21->_2).rank;
                        uVar3._1_1_ = (pIVar21->_2).minimumAlignment;
                        uVar23 = (ulong)uVar3;
                        if (uVar23 != 0) {
                          piVar24 = &((pIVar21->_1).interfaceOffsets)->offset;
                          do {
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar24 + -2))->interfaceType
                                == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                              pVVar15 = pIVar21->vtable + (*piVar24 + 0xc);
                              goto LAB_03245470;
                            }
                            uVar23 = uVar23 - 1;
                            piVar24 = piVar24 + 4;
                          } while (uVar23 != 0);
                        }
                        pVVar15 = (VirtualInvokeData *)
                                  FUN_01b81914(pIVar10,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03245470:
                        pSVar12 = (System_String_o *)
                                  (*pVVar15->methodPtr)(pIVar10,uVar25,lVar11,pVVar15->method);
                        (__this_00->fields).FDLJAOACNIP = pSVar12;
                        thunk_FUN_01c20e04();
                        (__this_00->fields).EEABODJFJMN = StringLiteral_8469/*"LinkAccountbtn"*/;
                        thunk_FUN_01c20e04();
                        (__this_00->fields).PJKGDJHIDFA = StringLiteral_3640/*"CANCEL"*/;
                        thunk_FUN_01c20e04();
                        (__this_00->fields).JBHBKEOFPPA = StringLiteral_8466/*"LinkAccountAgreement"*/;
                        thunk_FUN_01c20e04();
                        pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                        if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
                          iVar5 = NDPMLPGANCI__FFIOCEOHPEM(pNVar6,(MethodInfo *)0x0);
                          if (iVar5 != 0xb) {
                            pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                            if (pNVar6 == (NDPMLPGANCI_o *)0x0) goto LAB_032455c4;
                            iVar5 = NDPMLPGANCI__FFIOCEOHPEM(pNVar6,(MethodInfo *)0x0);
                            if (iVar5 != 2) {
                              DialogsOpener__FIEOHKDCIHM(__this_00,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          ppNVar16 = &(__this->fields).DNLDAJENPFE;
                          if (*ppNVar16 != (NCJBDBGIPNF_o *)0x0) {
                            return;
                          }
                          (__this->fields).DNLDAJENPFE = __this_00;
                          thunk_FUN_01c20e04(ppNVar16,__this_00);
                          pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                          CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                                        thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
                          System_Action<object>___ctor();
                          if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
                            NDPMLPGANCI__IIOPONEHEGP(pNVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_032455c4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    SFRequestSender__FNFGGGJGPBB(__this,StringLiteral_5965/*"Error: onGetPlayerResponse empty response"*/,-1,in_x3);
  }
  return;
}


// ===== public void CDKAPIKLDJI()  [RVA 0x3144AC0]
// SFRequestSender$$CDKAPIKLDJI @ RVA 0x3144AC0

void SFRequestSender__CDKAPIKLDJI(SFRequestSender_o *__this,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04566776 & 1) == 0) {
                    /* catch() { ... } // from try @ 03244ab4 with catch @ 03244ae0 */
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
                    /* try { // try from 03244af0 to 03344af7 has its CatchHandler @ 03244b0c */
    FUN_01bab630(&StringLiteral_11548/*"SFRequestSender::TryReconnect"*/);
                    /* try { // try from 03244af8 to 03344b03 has its CatchHandler @ 03244030 */
    DAT_04566776 = 1;
  }
                    /* try { // try from 03244b04 to 03344b0b has its CatchHandler @ 03244b0c */
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                    /* catch() { ... } // from try @ 03244af0 with catch @ 03244b0c
                       catch() { ... } // from try @ 03244b04 with catch @ 03244b0c */
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__Warning(StringLiteral_11548/*"SFRequestSender::TryReconnect"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
      SFRequestSender__NDBIGCCHMPL(__this,method_00);
      SFRequestSender__GHKJILFKNDN(__this,method_01);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OFMEAAJALFO()  [RVA 0x3145B38]
// SFRequestSender$$OFMEAAJALFO @ RVA 0x3145B38

void SFRequestSender__OFMEAAJALFO(SFRequestSender_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  SFRequestSender_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566777 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_NCNLJIIPOBJ__);
    FUN_01bab630(&StringLiteral_18643/*"get_player"*/);
    FUN_01bab630(&StringLiteral_11525/*"SFRequestSender::GetPlayer"*/);
    DAT_04566777 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__Log(StringLiteral_11525/*"SFRequestSender::GetPlayer"*/,(MethodInfo *)0x0);
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  iVar1 = SFRequestSender__BFOENPKALDN(__this_01,method_00);
  KDPDBGNOFEN__KLNMLOOCAAO
            ((KDPDBGNOFEN_o *)__this,StringLiteral_18643/*"get_player"*/,(Google_Protobuf_IMessage_o *)__this_00,
             BLMFLPJJMPF,(float)iVar1,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== private void JFCAFEOAKBH(MDOKGPFICNK<PEDENGEGDNI> ICLHKEAILDM)  [RVA 0x3145C58]
// SFRequestSender$$JFCAFEOAKBH @ RVA 0x3145C58

void SFRequestSender__JFCAFEOAKBH
               (SFRequestSender_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_04566778 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11529/*"SFRequestSender::OnConnectFail: custom|smartfox_connect_fail"*/);
    FUN_01bab630(&StringLiteral_9857/*"OnConnectFail"*/);
    DAT_04566778 = 1;
    ICLHKEAILDM = (MDOKGPFICNK_PEDENGEGDNI__o *)extraout_x1;
  }
  SFRequestSender__JIIOPKNDBBJ(__this,(MethodInfo *)ICLHKEAILDM);
  NFNBHPOJFNJ__KCBJCLNBGAO(2,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__Error(StringLiteral_11529/*"SFRequestSender::OnConnectFail: custom|smartfox_connect_fail"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
      SFRequestSender__FNFGGGJGPBB(__this,StringLiteral_9857/*"OnConnectFail"*/,-1,in_x3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void INBCMIJNADF(ELBBEAGGAOH PKOGACBGAJJ)  [RVA 0x31455CC]
// SFRequestSender$$INBCMIJNADF @ RVA 0x31455CC

void SFRequestSender__INBCMIJNADF(SFRequestSender_o *__this,ELBBEAGGAOH_o *PKOGACBGAJJ,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  Il2CppObject *arg0;
  System_String_o *value;
  MethodInfo *in_x4;
  SFRequestSender_EKJEAINHKPL_o local_40;
  undefined1 local_24 [4];
  
  if ((DAT_04566779 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_20285/*"primary"*/);
    FUN_01bab630(&StringLiteral_16218/*"_remindLinkAccount: {0}"*/);
    FUN_01bab630(&StringLiteral_8612/*"LogExtendedPlayer:"*/);
    FUN_01bab630(&StringLiteral_20721/*"secondary"*/);
    DAT_04566779 = 1;
  }
  local_40.fields.sb = (System_Text_StringBuilder_o *)0x0;
  local_40.fields.p = PKOGACBGAJJ;
  thunk_FUN_01c20e04(&local_40.fields.p,PKOGACBGAJJ);
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  local_40.fields.sb = pSVar1;
  thunk_FUN_01c20e04(&local_40,pSVar1);
  if (local_40.fields.sb != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendLine(local_40.fields.sb,StringLiteral_8612/*"LogExtendedPlayer:"*/,(MethodInfo *)0x0);
    pSVar1 = local_40.fields.sb;
    local_24[0] = (__this->fields).MIPDMFDHHAP;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
    value = System_String__Format(StringLiteral_16218/*"_remindLinkAccount: {0}"*/,arg0,(MethodInfo *)0x0);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(pSVar1,value,(MethodInfo *)0x0);
      if (local_40.fields.p != (ELBBEAGGAOH_o *)0x0) {
        SFRequestSender__PFBKEJLANIE
                  (StringLiteral_20285/*"primary"*/,((local_40.fields.p)->fields).CBHDCHDBFGB,
                   ((local_40.fields.p)->fields).DNKENJFJOMD,&local_40,in_x4);
        if (local_40.fields.p != (ELBBEAGGAOH_o *)0x0) {
          SFRequestSender__PFBKEJLANIE
                    (StringLiteral_20721/*"secondary"*/,((local_40.fields.p)->fields).IFDHENIKFKC,
                     ((local_40.fields.p)->fields).FFDNNGLMPJJ,&local_40,in_x4);
          pSVar1 = local_40.fields.sb;
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static LHOMEBJDFLD HCJABMIHNNA()  [RVA 0x3145FAC]
// SFRequestSender$$HCJABMIHNNA @ RVA 0x3145FAC

LHOMEBJDFLD_o * SFRequestSender__HCJABMIHNNA(MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  
  pKVar1 = SFRequestSender__MBHIKFMIDAO(method);
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    return (pKVar1->fields).GBLLKHKEJOA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static PPJGIFEJMHP DANEKAAFBFI()  [RVA 0x3145FC8]
// SFRequestSender$$DANEKAAFBFI @ RVA 0x3145FC8

PPJGIFEJMHP_o * SFRequestSender__DANEKAAFBFI(MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  
  pKVar1 = SFRequestSender__MBHIKFMIDAO(method);
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    return (pKVar1->fields).NAECBEDPPBN;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AOAAHAGIDBP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3145FE4]
// SFRequestSender$$AOAAHAGIDBP @ RVA 0x3145FE4

void SFRequestSender__AOAAHAGIDBP(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  PlayerData_o *__this_00;
  SFRequestSender_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *KJADEEFANAL;
  MethodInfo *in_x4;
  
  if ((DAT_0456677a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EAJJPPPJENA>__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456677a = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EAJJPPPJENA>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if ((pIVar2 != (Il2CppObject *)0x0) && (__this_00 != (PlayerData_o *)0x0)) {
      PlayerData__PJDFGEMEJAC(__this_00,*(int32_t *)&pIVar2[1].monitor,(MethodInfo *)0x0);
      if (pIVar2[2].klass == (Il2CppClass *)0x0) {
        KJADEEFANAL = (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0;
      }
      else {
        KJADEEFANAL = (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)
                      ((pIVar2[2].klass)->_1).namespaze;
      }
      if (__this != (SFRequestSender_o *)0x0) {
        SFRequestSender__NPFEHJDKDHD(__this_01,StringLiteral_1/*""*/,KJADEEFANAL,true,in_x4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NLKPBBPPKCJ(MDOKGPFICNK<PEDENGEGDNI> ICLHKEAILDM)  [RVA 0x3146528]
// SFRequestSender$$NLKPBBPPKCJ @ RVA 0x3146528

void SFRequestSender__NLKPBBPPKCJ
               (SFRequestSender_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  ushort uVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  
  if ((DAT_0456677b & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_11545/*"SFRequestSender::OnLoginSuccess"*/);
    DAT_0456677b = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Log(StringLiteral_11545/*"SFRequestSender::OnLoginSuccess"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    (__this->fields).DKOIHGOHPFN = 0;
    SFRequestSender__JIIOPKNDBBJ(__this,method_00);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = SFRequestSender__FPJFGEHGKIM(__this,method_01);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_03246628;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_03246628:
      pSVar3 = (System_Collections_IEnumerator_o *)
               (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      ppSVar8 = &(__this->fields).FDLECCPIBFI;
      *ppSVar8 = pSVar3;
      thunk_FUN_01c20e04(ppSVar8,pSVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void JHOMBFLNHPP(string CELOLGNMKCG, IMessage BLIENGJOOHH, Action<KEFHDOHHHML> BLMFLPJJMPF, object IMMNELPBGIF, Nullable<float> HEDFGDPDHAL)  [RVA 0x31466C8]
// SFRequestSender$$JHOMBFLNHPP @ RVA 0x31466C8

void SFRequestSender__JHOMBFLNHPP
               (System_String_o *CELOLGNMKCG,Google_Protobuf_IMessage_o *BLIENGJOOHH,
               System_Action_KEFHDOHHHML__o *BLMFLPJJMPF,Il2CppObject *IMMNELPBGIF,
               System_Nullable_float__o HEDFGDPDHAL,MethodInfo *method)

{
  SFRequestSender_o *__this;
  System_Action_KEFHDOHHHML__o *method_00;
  float HEDFGDPDHAL_00;
  
  method_00 = BLMFLPJJMPF;
  __this = SFRequestSender__MBHIKFMIDAO((MethodInfo *)CELOLGNMKCG);
  HEDFGDPDHAL_00 = SFRequestSender__NBHHAFBDEOA(CELOLGNMKCG,HEDFGDPDHAL,(MethodInfo *)method_00);
  if (__this != (SFRequestSender_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this,CELOLGNMKCG,BLIENGJOOHH,BLMFLPJJMPF,HEDFGDPDHAL_00,
               IMMNELPBGIF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int MPGGPNICIMO()  [RVA 0x3146734]
// SFRequestSender$$MPGGPNICIMO @ RVA 0x3146734

int32_t SFRequestSender__MPGGPNICIMO(SFRequestSender_o *__this,MethodInfo *method)

{
  RaidConfig_o *__this_00;
  HJEODECHNDG_o *pHVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456677c & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456677c = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((__this_00 != (RaidConfig_o *)0x0) &&
     (pHVar1 = RaidConfig__KAPJBGIIHAA(__this_00,(MethodInfo *)0x0), pHVar1 != (HJEODECHNDG_o *)0x0
     )) {
    return (pHVar1->fields)._ANFLJKKNJKP_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FNFGGGJGPBB(string IILEPKAGDGC, int CEOLOKFCKIG = -1)  [RVA 0x31448FC]
// SFRequestSender$$FNFGGGJGPBB @ RVA 0x31448FC

void SFRequestSender__FNFGGGJGPBB
               (SFRequestSender_o *__this,System_String_o *IILEPKAGDGC,int32_t CEOLOKFCKIG,
               MethodInfo *method)

{
  int32_t iVar1;
  SFRequestSender_o *__this_00;
  System_String_o *message;
  MethodInfo *method_00;
  MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM;
  MethodInfo *method_01;
  SFRequestSender_c *pKVar2;
  
                    /* try { // try from 032448fc to 033448ff has its CatchHandler @ 03244a44 */
                    /* try { // try from 03244900 to 03344903 has its CatchHandler @ 03244a40 */
                    /* try { // try from 03244904 to 03344907 has its CatchHandler @ 03244a3c */
                    /* try { // try from 03244908 to 0334490b has its CatchHandler @ 03244a34 */
                    /* try { // try from 0324490c to 0334490f has its CatchHandler @ 03244a28 */
                    /* try { // try from 03244910 to 03344913 has its CatchHandler @ 03244a20 */
                    /* try { // try from 03244914 to 03344917 has its CatchHandler @ 03244030 */
                    /* try { // try from 03244918 to 0334491f has its CatchHandler @ 03244a60 */
  if ((DAT_0456677d & 1) == 0) {
                    /* try { // try from 03244920 to 03344923 has its CatchHandler @ 03244a0c */
                    /* try { // try from 03244924 to 0334492f has its CatchHandler @ 03244a60 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03244930 to 03344933 has its CatchHandler @ 03244a04 */
                    /* try { // try from 03244934 to 03344937 has its CatchHandler @ 032449f8 */
    FUN_01bab630(&StringLiteral_11543/*"SFRequestSender::OnLoginChainError: Login Chain Error: "*/);
                    /* try { // try from 03244938 to 0334493b has its CatchHandler @ 032449e8 */
                    /* try { // try from 0324493c to 0334493f has its CatchHandler @ 032449e4 */
    DAT_0456677d = 1;
  }
                    /* try { // try from 03244940 to 03344943 has its CatchHandler @ 032449d8 */
                    /* try { // try from 03244944 to 03344947 has its CatchHandler @ 032449d4 */
                    /* try { // try from 03244948 to 0334494b has its CatchHandler @ 032449c0 */
                    /* try { // try from 0324494c to 0334494f has its CatchHandler @ 032449ac */
                    /* try { // try from 03244950 to 03344953 has its CatchHandler @ 032449a8 */
                    /* try { // try from 03244954 to 03344957 has its CatchHandler @ 0324499c */
  if (CEOLOKFCKIG == 0xca) {
                    /* try { // try from 03244958 to 0334495b has its CatchHandler @ 03244994 */
                    /* try { // try from 0324495c to 0334495f has its CatchHandler @ 03244974 */
    KDPDBGNOFEN__LMFIKNOJNPJ((MethodInfo *)0x0);
                    /* try { // try from 03244960 to 03344963 has its CatchHandler @ 03244970 */
    iVar1 = SFRequestSender__MPGGPNICIMO(__this_00,method_00);
                    /* catch() { ... } // from try @ 03244830 with catch @ 03244964
                       try { // try from 03244964 to 03344ab3 has its CatchHandler @ 03244030 */
    (__this->fields).DKOIHGOHPFN = iVar1;
  }
                    /* catch() { ... } // from try @ 032447d8 with catch @ 03244968 */
  pKVar2 = __this->klass;
                    /* catch() { ... } // from try @ 032446f4 with catch @ 0324496c */
  (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
                    /* catch() { ... } // from try @ 03244960 with catch @ 03244970 */
                    /* catch() { ... } // from try @ 0324495c with catch @ 03244974 */
                    /* catch() { ... } // from try @ 0324480c with catch @ 03244978 */
  (*(pKVar2->vtable)._4_AIJHJNAPOFC.methodPtr)(__this,(pKVar2->vtable)._4_AIJHJNAPOFC.method);
                    /* catch() { ... } // from try @ 03244864 with catch @ 0324497c */
                    /* catch() { ... } // from try @ 0324465c with catch @ 03244980 */
                    /* catch() { ... } // from try @ 03244750 with catch @ 03244984 */
  method_01 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 03244704 with catch @ 03244988 */
  message = System_String__Concat(StringLiteral_11543/*"SFRequestSender::OnLoginChainError: Login Chain Error: "*/,IILEPKAGDGC,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032447a8 with catch @ 0324498c */
                    /* catch() { ... } // from try @ 03244894 with catch @ 03244990 */
                    /* catch() { ... } // from try @ 03244958 with catch @ 03244994 */
                    /* catch() { ... } // from try @ 03244738 with catch @ 03244998 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03244954 with catch @ 0324499c */
                    /* catch() { ... } // from try @ 0324466c with catch @ 032449a0 */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* catch() { ... } // from try @ 03244784 with catch @ 032449a4 */
                    /* catch() { ... } // from try @ 03244950 with catch @ 032449a8 */
                    /* catch() { ... } // from try @ 0324494c with catch @ 032449ac */
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032446a0 with catch @ 032449b0 */
                    /* catch() { ... } // from try @ 032445a0 with catch @ 032449b4 */
  if ((__this->fields).super._MGGBEPKMPCF_k__BackingField != false) {
                    /* catch() { ... } // from try @ 032446dc with catch @ 032449b8 */
                    /* catch() { ... } // from try @ 03244640 with catch @ 032449bc */
                    /* catch() { ... } // from try @ 03244948 with catch @ 032449c0 */
                    /* catch() { ... } // from try @ 03244540 with catch @ 032449c4 */
    return;
  }
                    /* catch() { ... } // from try @ 032445b0 with catch @ 032449c8 */
                    /* catch() { ... } // from try @ 032446b0 with catch @ 032449cc */
                    /* catch() { ... } // from try @ 03244620 with catch @ 032449d0 */
                    /* catch() { ... } // from try @ 03244944 with catch @ 032449d4 */
                    /* catch() { ... } // from try @ 03244940 with catch @ 032449d8 */
  SFRequestSender__AKEKGJAFBOC(__this,ICLHKEAILDM,method_01);
  return;
}


// ===== public void CADOGBHCINN(string NONPLOOOOAG, CKLIGNAPKFO ACCIHBHMFPN, Action<KEFHDOHHHML> IELDNEAAPBE)  [RVA 0x3146A58]
// SFRequestSender$$CADOGBHCINN @ RVA 0x3146A58

void SFRequestSender__CADOGBHCINN
               (SFRequestSender_o *__this,System_String_o *NONPLOOOOAG,int32_t ACCIHBHMFPN,
               System_Action_KEFHDOHHHML__o *IELDNEAAPBE,MethodInfo *method)

{
  AJINOJNMEEK_o *__this_00;
  KMBNFNCDDBP_o *__this_01;
  System_String_o *pSVar1;
  
  if ((DAT_0456677e & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&StringLiteral_16981/*"chat"*/);
    DAT_0456677e = 1;
  }
  __this_00 = (AJINOJNMEEK_o *)thunk_FUN_01bda818(AJINOJNMEEK_TypeInfo);
  AJINOJNMEEK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (AJINOJNMEEK_o *)0x0) {
    (__this_00->fields).EMDNDLOODLG = ACCIHBHMFPN;
    AJINOJNMEEK__IPNMMELEIJE(__this_00,NONPLOOOOAG,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if (__this_01 != (KMBNFNCDDBP_o *)0x0) {
      pSVar1 = KMBNFNCDDBP__MLHLAKMLJNI(__this_01,(MethodInfo *)0x0);
      (__this_00->fields).ABFBDJFPIMM = pSVar1;
      thunk_FUN_01c20e04();
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this,StringLiteral_16981/*"chat"*/,(Google_Protobuf_IMessage_o *)__this_00
                 ,IELDNEAAPBE,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PGICCMFLDPI MPBLBEGCAKP()  [RVA 0x3144EE4]
// SFRequestSender$$MPBLBEGCAKP @ RVA 0x3144EE4

PGICCMFLDPI_o * SFRequestSender__MPBLBEGCAKP(SFRequestSender_o *__this,MethodInfo *method)

{
  LHOMEBJDFLD_o *__this_00;
  PGICCMFLDPI_o *pPVar1;
  
                    /* try { // try from 03244ee8 to 03344f13 has its CatchHandler @ 032451c4 */
  __this_00 = (__this->fields).GBLLKHKEJOA;
  if (__this_00 != (LHOMEBJDFLD_o *)0x0) {
    pPVar1 = LHOMEBJDFLD__CFGBGFEIMEK(__this_00,(MethodInfo *)0x0);
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDBIGCCHMPL()  [RVA 0x31459F0]
// SFRequestSender$$NDBIGCCHMPL @ RVA 0x31459F0

void SFRequestSender__NDBIGCCHMPL(SFRequestSender_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456677f & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456677f = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).KHJEAFKNAKF;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03245a88;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03245a88:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void PKLIMHECLPF()  [RVA 0x3146B90]
// SFRequestSender$$PKLIMHECLPF @ RVA 0x3146B90

void SFRequestSender__PKLIMHECLPF(SFRequestSender_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar2;
  SFSConfigManager_o *__this_00;
  System_Action_o *pSVar3;
  
  if ((DAT_04566780 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_9855/*"OnConfigInitFail. Total Fail"*/);
    FUN_01bab630(&StringLiteral_11527/*"SFRequestSender::OnConfigInitFail"*/);
    FUN_01bab630(&StringLiteral_9856/*"OnConfigInitFail. Trying again..."*/);
    DAT_04566780 = 1;
  }
  pNVar2 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
           FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (pNVar2 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)pNVar2->max_length == 0) {
LAB_03246ce0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pNVar2->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11527/*"SFRequestSender::OnConfigInitFail"*/,pNVar2,(MethodInfo *)0x0);
    iVar1 = (__this->fields).ENPFGKLBPOH;
    if (iVar1 < 1) {
      (__this->fields).ENPFGKLBPOH = iVar1 + 1;
      pNVar2 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar2 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar2->max_length == 0) goto LAB_03246ce0;
        pNVar2->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Error(StringLiteral_9856/*"OnConfigInitFail. Trying again..."*/,pNVar2,(MethodInfo *)0x0);
        __this_00 = (__this->fields).IDFAHJPJGBM;
        if (__this_00 != (SFSConfigManager_o *)0x0) {
          SFSConfigManager__GIENGNEGHPJ(__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pNVar2 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar2 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar2->max_length == 0) goto LAB_03246ce0;
        pNVar2->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Error(StringLiteral_9855/*"OnConfigInitFail. Total Fail"*/,pNVar2,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).DHLLCGMLBLE;
        if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03246c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OFCDLLNMGDP(string CELOLGNMKCG, string JKHBMCBCNJC, int CEOLOKFCKIG)  [RVA 0x3146CE4]
// SFRequestSender$$OFCDLLNMGDP @ RVA 0x3146CE4

void SFRequestSender__OFCDLLNMGDP
               (SFRequestSender_o *__this,System_String_o *CELOLGNMKCG,System_String_o *JKHBMCBCNJC,
               int32_t CEOLOKFCKIG,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_Object_array *args;
  long lVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t local_34;
  
  if ((DAT_04566781 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5851/*"Error Response for '{0}' with code {1}:\n{2}"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566781 = 1;
  }
  if (CEOLOKFCKIG == 0) {
    return;
  }
  pSVar1 = StringLiteral_1/*""*/;
  if (CELOLGNMKCG != (System_String_o *)0x0) {
    pSVar1 = CELOLGNMKCG;
  }
  pSVar2 = StringLiteral_1/*""*/;
  if (JKHBMCBCNJC != (System_String_o *)0x0) {
    pSVar2 = JKHBMCBCNJC;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar1 != (System_String_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pSVar1,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_03246e88:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar1;
    thunk_FUN_01c20e04(args->m_Items,pSVar1);
    local_34 = CEOLOKFCKIG;
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_03246e88;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar4;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
      if ((pSVar2 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_03246e88;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)pSVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pSVar2);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_5851/*"Error Response for '{0}' with code {1}:\n{2}"*/,args,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private void PKNNILDNIAD()  [RVA 0x3146E98]
// SFRequestSender$$PKNNILDNIAD @ RVA 0x3146E98

void SFRequestSender__PKNNILDNIAD(SFRequestSender_o *__this,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  NDPMLPGANCI_o *__this_00;
  FKDLCJJOGIP_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04566782 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11534/*"SFRequestSender::OnInputDialogCanceled: Nick input cancelled!"*/);
    DAT_04566782 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Warning(StringLiteral_11534/*"SFRequestSender::OnInputDialogCanceled: Nick input cancelled!"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    (__this->fields).EODMKFMHMIK = true;
    SFRequestSender__FHIODBIPGBG(__this,method_00);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
      __this_01 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (FKDLCJJOGIP_o *)0x0) {
        FKDLCJJOGIP__LLBIEPFEJPG(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NPFAFFLHIFO(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3146F60]
// SFRequestSender$$NPFAFFLHIFO @ RVA 0x3146F60

void SFRequestSender__NPFAFFLHIFO(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  PlayerData_o *pEVar2;
  int64_t iVar3;
  MethodInfo *method_00;
  undefined8 *puVar4;
  System_String_o *PCPECHHMLEC;
  System_String_o *pSVar5;
  
  if ((DAT_04566783 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<LMEMJBOBHBE>__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_17842/*"dlgTempBan{"*/);
    FUN_01bab630(&StringLiteral_20660/*"sameAccountKick"*/);
    FUN_01bab630(&StringLiteral_21521/*"titleBan"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_21453/*"textKick"*/);
    FUN_01bab630(&StringLiteral_17813/*"dlgPermanentBan"*/);
    DAT_04566783 = 1;
  }
  if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
     (pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<LMEMJBOBHBE>__),
     PCPECHHMLEC = StringLiteral_21521/*"titleBan"*/, pSVar5 = StringLiteral_17813/*"dlgPermanentBan"*/, pIVar1 != (Il2CppObject *)0x0)
     ) {
    if (*(int *)&pIVar1[1].monitor != 1) {
      if (*(int *)&pIVar1[1].monitor == 0) {
        puVar4 = &StringLiteral_20660/*"sameAccountKick"*/;
      }
      else {
        puVar4 = &StringLiteral_21453/*"textKick"*/;
      }
      pSVar5 = (System_String_o *)*puVar4;
      PCPECHHMLEC = StringLiteral_5840/*"Error"*/;
LAB_0324714c:
      DialogsOpener__JNDPLPKDPCP
                (PCPECHHMLEC,pSVar5,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                 (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
                 (MethodInfo *)0x0);
      SFRequestSender__FHIODBIPGBG(__this,method_00);
      return;
    }
    if (pIVar1[2].monitor == (void *)0xffffffffffffffff) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar2 != (PlayerData_o *)0x0) {
        (pEVar2->fields).NCMLGNEFKBF = -1;
        goto LAB_0324714c;
      }
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GameUtils_TypeInfo);
      }
      iVar3 = GameUtils__EAHFGGKENCK((MethodInfo *)0x0);
      if (pEVar2 != (PlayerData_o *)0x0) {
        (pEVar2->fields).NCMLGNEFKBF = (long)pIVar1[2].monitor / 1000 + iVar3;
        pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar2 != (PlayerData_o *)0x0) {
          pSVar5 = GameUtils__HIIEINMMNGG((pEVar2->fields).NCMLGNEFKBF,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat
                             (StringLiteral_17842/*"dlgTempBan{"*/,pSVar5,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
          goto LAB_0324714c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static SFRequestSender MBHIKFMIDAO()  [RVA 0x31437C4]
// SFRequestSender$$MBHIKFMIDAO @ RVA 0x31437C4

SFRequestSender_o * SFRequestSender__MBHIKFMIDAO(MethodInfo *method)

{
  SFRequestSender_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04566784 & 1) == 0) {
    FUN_01bab630(&SFRequestSender_TypeInfo);
    DAT_04566784 = 1;
  }
  __this = SFRequestSender_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (SFRequestSender_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    SFRequestSender___ctor(__this,auVar1._8_8_);
    SFRequestSender_TypeInfo->static_fields->CBDMFFMCJBK = __this;
    thunk_FUN_01c20e04(SFRequestSender_TypeInfo->static_fields,__this);
  }
  return __this;
}


// ===== private void .ctor()  [RVA 0x31471F8]
// SFRequestSender$$.ctor @ RVA 0x31471F8

void SFRequestSender___ctor(SFRequestSender_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  SFSConfigManager_o *__this_00;
  SFSConfigManager_o **ppAVar2;
  LHOMEBJDFLD_o *pLVar3;
  PPJGIFEJMHP_o *__this_01;
  PPJGIFEJMHP_o **ppPVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Action_o *pSVar5;
  LHOMEBJDFLD_o **ppLVar6;
  
  if ((DAT_04566785 & 1) == 0) {
    FUN_01bab630(&SFSConfigManager_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&LHOMEBJDFLD_TypeInfo);
    FUN_01bab630(&PPJGIFEJMHP_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_<>c_BMDJMGHDEPM__);
    FUN_01bab630(&Method_KKLJIDJBFEI_<>c_GAHIKDHMMBA__);
    FUN_01bab630(&Method_KKLJIDJBFEI_<>c_HDMHEGAHCCK__);
    FUN_01bab630(&SFRequestSender_<>c_TypeInfo);
    DAT_04566785 = 1;
    method = extraout_x1;
  }
  if ((SFRequestSender_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SFRequestSender_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = SFRequestSender_<>c_TypeInfo->static_fields->__9__41_0;
  if (pSVar5 == (System_Action_o *)0x0) {
    if ((SFRequestSender_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SFRequestSender_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &SFRequestSender_<>c_TypeInfo->static_fields->__9__41_0;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
  }
  if (__this != (SFRequestSender_o *)0x0) {
    ppSVar1 = &(__this->fields).EPEKIKOFDNH;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
    if ((SFRequestSender_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = SFRequestSender_<>c_TypeInfo->static_fields->__9__41_1;
    if (pSVar5 == (System_Action_o *)0x0) {
      if ((SFRequestSender_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &SFRequestSender_<>c_TypeInfo->static_fields->__9__41_1;
      *ppSVar1 = pSVar5;
      thunk_FUN_01c20e04(ppSVar1,pSVar5);
    }
    ppSVar1 = &(__this->fields).DHLLCGMLBLE;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
    if ((SFRequestSender_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = SFRequestSender_<>c_TypeInfo->static_fields->__9__41_2;
    if (pSVar5 == (System_Action_o *)0x0) {
      if ((SFRequestSender_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &SFRequestSender_<>c_TypeInfo->static_fields->__9__41_2;
      *ppSVar1 = pSVar5;
      thunk_FUN_01c20e04(ppSVar1,pSVar5);
    }
    ppSVar1 = &(__this->fields).PBFGHKBLCKN;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
    KDPDBGNOFEN___ctor((KDPDBGNOFEN_o *)__this,(MethodInfo *)0x0);
    __this_00 = (SFSConfigManager_o *)thunk_FUN_01bda818(SFSConfigManager_TypeInfo);
    SFSConfigManager___ctor(__this_00,(MethodInfo *)0x0);
    ppAVar2 = &(__this->fields).IDFAHJPJGBM;
    *ppAVar2 = __this_00;
    thunk_FUN_01c20e04(ppAVar2,__this_00);
    pLVar3 = (LHOMEBJDFLD_o *)thunk_FUN_01bda818(LHOMEBJDFLD_TypeInfo);
    LHOMEBJDFLD___ctor(pLVar3,(MethodInfo *)0x0);
    ppLVar6 = &(__this->fields).GBLLKHKEJOA;
    *ppLVar6 = pLVar3;
    thunk_FUN_01c20e04(ppLVar6,pLVar3);
    pLVar3 = *ppLVar6;
    __this_01 = (PPJGIFEJMHP_o *)thunk_FUN_01bda818(PPJGIFEJMHP_TypeInfo);
    PPJGIFEJMHP___ctor(__this_01,pLVar3,(MethodInfo *)0x0);
    ppPVar4 = &(__this->fields).NAECBEDPPBN;
    *ppPVar4 = __this_01;
    thunk_FUN_01c20e04(ppPVar4,__this_01);
    (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
    (__this->fields).MLBNMPBAIIB = false;
    (__this->fields).MIPDMFDHHAP = true;
    SFRequestSender__JFLHEAKDGGL(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NPFEHJDKDHD(string GINPHGBMEGC, RepeatedField<BECIPDJBAOG> KJADEEFANAL, bool PBLICINIHPA = False)  [RVA 0x31460D4]
// SFRequestSender$$NPFEHJDKDHD @ RVA 0x31460D4

/* WARNING: Removing unreachable block (ram,0x032463d4) */
/* WARNING: Removing unreachable block (ram,0x03246440) */

void SFRequestSender__NPFEHJDKDHD
               (SFRequestSender_o *__this,System_String_o *GINPHGBMEGC,
               Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *KJADEEFANAL,
               bool PBLICINIHPA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  System_Collections_Generic_IEnumerator_T__o *pSVar7;
  VirtualInvokeData *pVVar8;
  BECIPDJBAOG_o *KJADEEFANAL_00;
  RaidPaymentService_o *__this_00;
  MAEAAOFOANA_o *__this_01;
  BECIPDJBAOG_o **ppBVar9;
  System_Collections_Generic_List_MAEAAOFOANA__o *__this_02;
  System_Collections_Generic_IEnumerator_T__c *pSVar10;
  MAEAAOFOANA_array *pMVar11;
  ulong uVar12;
  int32_t *piVar13;
  PKHMIGFEJCL_o *pPVar14;
  
  if ((DAT_04566786 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 0324611c to 0334622f has its CatchHandler @ 0324611c
                       catch() { ... } // from try @ 0324611c with catch @ 0324611c
                       catch() { ... } // from try @ 03246254 with catch @ 0324611c
                       catch() { ... } // from try @ 0324629c with catch @ 0324611c
                       catch() { ... } // from try @ 032462c0 with catch @ 0324611c
                       catch() { ... } // from try @ 03246308 with catch @ 0324611c */
    FUN_01bab630(&System_Collections_Generic_IEnumerator<BECIPDJBAOG>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MAEAAOFOANA>_Add__);
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_GetEnumerator__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_get_Count__);
    DAT_04566786 = 1;
  }
  if ((KJADEEFANAL == (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) ||
     ((KJADEEFANAL->fields).count < 1)) {
    return;
  }
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    pPVar14 = (pNVar6->fields).QuestParameters;
    pSVar7 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)KJADEEFANAL,
                        Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_GetEnumerator__
                       );
    if (pSVar7 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar10 = pSVar7->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar8 = pSVar10->vtable + *piVar13;
            goto LAB_03246220;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03246220:
      uVar12 = (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if ((uVar12 & 1) == 0) {
        if (pSVar7 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_032463c8;
        pSVar10 = pSVar7->klass;
        uVar3._0_1_ = (pSVar10->_2).rank;
        uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
        uVar12 = (ulong)uVar3;
        if (uVar12 == 0) goto LAB_032463a0;
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        goto LAB_03246388;
      }
                    /* try { // try from 03246230 to 03346237 has its CatchHandler @ 032462a4 */
      pSVar10 = pSVar7->klass;
      uVar2._0_1_ = (pSVar10->_2).rank;
      uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 0324624c to 03346253 has its CatchHandler @ 0324629c */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<BECIPDJBAOG>_TypeInfo) {
            pVVar8 = pSVar10->vtable + *piVar13;
            goto LAB_0324627c;
          }
                    /* try { // try from 03246254 to 03346297 has its CatchHandler @ 0324611c */
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar8 = (VirtualInvokeData *)
               FUN_01b81914(pSVar7,System_Collections_Generic_IEnumerator<BECIPDJBAOG>_TypeInfo,0);
LAB_0324627c:
      KJADEEFANAL_00 = (BECIPDJBAOG_o *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03246298 to 0334629b has its CatchHandler @ 032462a0 */
        thunk_FUN_01ba7564();
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324624c with catch @ 0324629c
                       try { // try from 0324629c to 033462bb has its CatchHandler @ 0324611c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03246298 with catch @ 032462a0
                        */
      __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03246230 with catch @ 032462a4
                        */
      if (__this_00 == (RaidPaymentService_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      RaidPaymentService__AEADCLCKCEL(__this_00,KJADEEFANAL_00,PBLICINIHPA,(MethodInfo *)0x0);
                    /* try { // try from 032462bc to 033462bf has its CatchHandler @ 032462f0 */
      __this_01 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
                    /* try { // try from 032462c0 to 033462ff has its CatchHandler @ 0324611c */
      MAEAAOFOANA___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (MAEAAOFOANA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppBVar9 = &(__this_01->fields).EBBNAOLNKGD;
      *ppBVar9 = KJADEEFANAL_00;
      thunk_FUN_01c20e04(ppBVar9,KJADEEFANAL_00);
      (__this_01->fields).IKIINEOIIAK = GINPHGBMEGC;
      thunk_FUN_01c20e04(&__this_01->fields,GINPHGBMEGC);
      lVar5 = Method_System_Collections_Generic_List<MAEAAOFOANA>_Add__;
                    /* catch() { ... } // from try @ 032462bc with catch @ 032462f0 */
      if (pPVar14 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (pPVar14->fields)._MIAPCPCCIBM_k__BackingField;
      if (__this_02 == (System_Collections_Generic_List_MAEAAOFOANA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03246300 to 03346307 has its CatchHandler @ 0324631c */
      pMVar11 = (__this_02->fields)._items;
                    /* try { // try from 03246308 to 03346313 has its CatchHandler @ 0324611c */
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pMVar11 == (MAEAAOFOANA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03246314 to 0334631b has its CatchHandler @ 0324631c */
      uVar4 = (__this_02->fields)._size;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03246300 with catch @ 0324631c
                       catch(type#2 @ 00000000) { ... } // from try @ 03246314 with catch @ 0324631c
                        */
      if (uVar4 < (uint)pMVar11->max_length) {
        (__this_02->fields)._size = uVar4 + 1;
        pMVar11->m_Items[(int)uVar4] = __this_01;
        thunk_FUN_01c20e04(pMVar11->m_Items + (int)uVar4,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_03246438;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03246388:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar8 = pSVar10->vtable + *piVar13;
      goto LAB_032463bc;
    }
  }
LAB_032463a0:
  pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7,System_IDisposable_TypeInfo,0);
LAB_032463bc:
  (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
LAB_032463c8:
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar6,0x4f,(MethodInfo *)0x0);
    return;
  }
LAB_03246438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator DOGIINKIMKC()  [RVA 0x31474E8]
// SFRequestSender$$DOGIINKIMKC @ RVA 0x31474E8

System_Collections_IEnumerator_o *
SFRequestSender__DOGIINKIMKC(SFRequestSender_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566787 & 1) == 0) {
    FUN_01bab630(&SFRequestSender_MMELLPBLNPE_TypeInfo);
    DAT_04566787 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFRequestSender_MMELLPBLNPE_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== internal static string HFDKNFKJIIP(KAMBBJFPLGM HEHMPFLAEGE, ref SFRequestSender.EKJEAINHKPL )  [RVA 0x314757C]
// SFRequestSender$$HFDKNFKJIIP @ RVA 0x314757C

System_String_o *
SFRequestSender__HFDKNFKJIIP
          (KAMBBJFPLGM_o *HEHMPFLAEGE,SFRequestSender_EKJEAINHKPL_o *param_2,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  System_Func_TSource__bool__o *predicate;
  System_String_o *pSVar3;
  ELBBEAGGAOH_o *pEVar4;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *source;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if ((DAT_04566788 & 1) == 0) {
    FUN_01bab630(&Method_KKLJIDJBFEI_BHKBBKCACGJ_KODDNBBFLPJ__);
    FUN_01bab630(&SFRequestSender_BHKBBKCACGJ_TypeInfo);
    FUN_01bab630(&DLIONECMCGE_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<KMAOIKKMFJF>__);
    FUN_01bab630(&System_Func<KMAOIKKMFJF,_bool>_TypeInfo);
    FUN_01bab630(&StringLiteral_14461/*"Unknown AuthType"*/);
    DAT_04566788 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(SFRequestSender_BHKBBKCACGJ_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)HEHMPFLAEGE;
    thunk_FUN_01c20e04(pIVar2 + 1,HEHMPFLAEGE);
    pEVar4 = (param_2->fields).p;
    if (pEVar4 != (ELBBEAGGAOH_o *)0x0) {
      source = (pEVar4->fields).OOPOHLJPBHE;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<KMAOIKKMFJF,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      pIVar2 = System_Linq_Enumerable__FirstOrDefault<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                          Method_System_Linq_Enumerable_FirstOrDefault<KMAOIKKMFJF>__);
      pSVar3 = (System_String_o *)0x0;
      if (pIVar2 != (Il2CppObject *)0x0) {
        local_38 = *(undefined4 *)&pIVar2[1].monitor;
        local_48.klass = (System_Enum_c *)DLIONECMCGE_TypeInfo;
        local_48.monitor = (void *)0xffffffffffffffff;
        pSVar3 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      }
      pSVar1 = StringLiteral_14461/*"Unknown AuthType"*/;
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar1 = pSVar3;
      }
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IPHHKDOLHPN(Action<KEFHDOHHHML> IELDNEAAPBE)  [RVA 0x31476D0]
// SFRequestSender$$IPHHKDOLHPN @ RVA 0x31476D0

void SFRequestSender__IPHHKDOLHPN
               (SFRequestSender_o *__this,System_Action_KEFHDOHHHML__o *IELDNEAAPBE,MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  
  if ((DAT_04566789 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&StringLiteral_19386/*"leave_raid_matcher"*/);
    DAT_04566789 = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  KDPDBGNOFEN__KLNMLOOCAAO
            ((KDPDBGNOFEN_o *)__this,StringLiteral_19386/*"leave_raid_matcher"*/,(Google_Protobuf_IMessage_o *)__this_00,
             IELDNEAAPBE,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== public void GHKJILFKNDN()  [RVA 0x3145AB4]
// SFRequestSender$$GHKJILFKNDN @ RVA 0x3145AB4

void SFRequestSender__GHKJILFKNDN(SFRequestSender_o *__this,MethodInfo *method)

{
  SFSConfigManager_o *__this_00;
  Sfs2X_Util_ConfigData_o *PCMFDDODKED;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_0456678a & 1) == 0) {
    FUN_01bab630(&StringLiteral_12062/*"Should never happend - Empty Smartfox Config"*/);
    DAT_0456678a = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).IDFAHJPJGBM;
  (__this->fields)._CPLKKCAJOJJ_k__BackingField = true;
  if (__this_00 != (SFSConfigManager_o *)0x0) {
    PCMFDDODKED = SFSConfigManager__AOCNAAHCPHP(__this_00,(MethodInfo *)0x0);
    if (PCMFDDODKED != (Sfs2X_Util_ConfigData_o *)0x0) {
      KDPDBGNOFEN__GHKJILFKNDN((KDPDBGNOFEN_o *)__this,PCMFDDODKED,(MethodInfo *)0x0);
      return;
    }
    SFRequestSender__FNFGGGJGPBB(__this,StringLiteral_12062/*"Should never happend - Empty Smartfox Config"*/,-1,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void NFKPAHCANCC()  [RVA 0x3147760]
// SFRequestSender$$NFKPAHCANCC @ RVA 0x3147760

void SFRequestSender__NFKPAHCANCC(SFRequestSender_o *__this,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  System_Action_o *pSVar1;
  
  if ((DAT_0456678b & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11523/*"SFRequestSender::CallInitSuccess: SUCCESS! LOGIN FINISHED"*/);
    DAT_0456678b = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Log(StringLiteral_11523/*"SFRequestSender::CallInitSuccess: SUCCESS! LOGIN FINISHED"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).EPEKIKOFDNH;
    if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032477f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal static void PFBKEJLANIE(string GJCPJIFKLAI, KAMBBJFPLGM HEHMPFLAEGE, EKCGNICFDEO JLICGPAEBHN, ref SFRequestSender.EKJEAINHKPL )  [RVA 0x3145D18]
// SFRequestSender$$PFBKEJLANIE @ RVA 0x3145D18

void SFRequestSender__PFBKEJLANIE
               (System_String_o *GJCPJIFKLAI,KAMBBJFPLGM_o *HEHMPFLAEGE,EKCGNICFDEO_o *JLICGPAEBHN,
               SFRequestSender_EKJEAINHKPL_o *param_4,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Text_StringBuilder_o *pSVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  EOLFEKNCPLM_o *pEVar5;
  GKLPDMLELJF_o *pGVar6;
  int32_t local_54;
  int64_t local_48;
  
  if ((DAT_0456678c & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&StringLiteral_16549/*"authType: "*/);
    FUN_01bab630(&StringLiteral_19925/*"null"*/);
    FUN_01bab630(&StringLiteral_16214/*"_player: "*/);
    FUN_01bab630(&StringLiteral_18915/*"id: {0}"*/);
    FUN_01bab630(&StringLiteral_18394/*"gems: {0}"*/);
    FUN_01bab630(&StringLiteral_16184/*"_account.login: "*/);
    FUN_01bab630(&StringLiteral_18127/*"exists"*/);
    FUN_01bab630(&StringLiteral_19789/*"name: "*/);
    DAT_0456678c = 1;
  }
  pSVar2 = (param_4->fields).sb;
  if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendLine(pSVar2,(MethodInfo *)0x0);
    ppSVar1 = (System_String_o **)&StringLiteral_19925/*"null"*/;
    if (HEHMPFLAEGE != (KAMBBJFPLGM_o *)0x0) {
      ppSVar1 = (System_String_o **)&StringLiteral_18127/*"exists"*/;
    }
    pSVar2 = (param_4->fields).sb;
    pSVar3 = System_String__Concat(GJCPJIFKLAI,StringLiteral_16214/*"_player: "*/,*ppSVar1,(MethodInfo *)0x0);
    if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
      if (HEHMPFLAEGE == (KAMBBJFPLGM_o *)0x0) {
        return;
      }
      pEVar5 = (HEHMPFLAEGE->fields).FLAFELDNABC;
      if ((pEVar5 != (EOLFEKNCPLM_o *)0x0) &&
         (pGVar6 = (pEVar5->fields).MCOPPCNPAHF, pGVar6 != (GKLPDMLELJF_o *)0x0)) {
        local_48 = (pGVar6->fields).ANAJGHJEEOC;
        pSVar2 = (param_4->fields).sb;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_48);
        pSVar3 = System_String__Format(StringLiteral_18915/*"id: {0}"*/,pIVar4,(MethodInfo *)0x0);
        if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
          pSVar2 = (param_4->fields).sb;
          pSVar3 = SFRequestSender__HFDKNFKJIIP(HEHMPFLAEGE,param_4,method_00);
          pSVar3 = System_String__Concat(StringLiteral_16549/*"authType: "*/,pSVar3,(MethodInfo *)0x0);
          if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
            pSVar2 = (param_4->fields).sb;
            pSVar3 = System_String__Concat
                               (StringLiteral_19789/*"name: "*/,(pGVar6->fields).LLBEKLPKDHK,(MethodInfo *)0x0);
            if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
              local_54 = (HEHMPFLAEGE->fields).EMOLIBOCKJK;
              pSVar2 = (param_4->fields).sb;
              pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_54);
              pSVar3 = System_String__Format(StringLiteral_18394/*"gems: {0}"*/,pIVar4,(MethodInfo *)0x0);
              if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
                ppSVar1 = (System_String_o **)&StringLiteral_19925/*"null"*/;
                if (JLICGPAEBHN != (EKCGNICFDEO_o *)0x0) {
                  ppSVar1 = &(JLICGPAEBHN->fields).BJGJOHGJCKC;
                }
                pSVar2 = (param_4->fields).sb;
                pSVar3 = System_String__Concat
                                   (GJCPJIFKLAI,StringLiteral_16184/*"_account.login: "*/,*ppSVar1,(MethodInfo *)0x0);
                if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HAGMEEKBHFF(int MAOLKFCJGLD, int HPPAGNLEOEJ, PIADCKMDDAK GFPLANGLAKN, int HPACPFLKHPK, List<IHMIMECHIAN> OBLIJEFDJGN, List<BJEFHIBMHEJ> GJBLBEALOBO, bool EOLGPJMKFNA, int FNLILHMAONM)  [RVA 0x3147800]
// SFRequestSender$$HAGMEEKBHFF @ RVA 0x3147800

void SFRequestSender__HAGMEEKBHFF
               (SFRequestSender_o *__this,int32_t MAOLKFCJGLD,int32_t HPPAGNLEOEJ,
               PIADCKMDDAK_o *GFPLANGLAKN,int32_t HPACPFLKHPK,
               System_Collections_Generic_List_IHMIMECHIAN__o *OBLIJEFDJGN,
               System_Collections_Generic_List_BJEFHIBMHEJ__o *GJBLBEALOBO,bool EOLGPJMKFNA,
               int32_t FNLILHMAONM,MethodInfo *method)

{
  KJNCNBJIJPC_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_03;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_0456678d & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_IHDGMKMILJM__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_AddRange__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_AddRange__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    FUN_01bab630(&StringLiteral_20398/*"raid_battle_finish_round"*/);
    DAT_0456678d = 1;
  }
  __this_00 = (KJNCNBJIJPC_o *)thunk_FUN_01bda818(KJNCNBJIJPC_TypeInfo);
  KJNCNBJIJPC___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (KJNCNBJIJPC_o *)0x0) {
    (__this_00->fields).OLGJBKMCGIC = MAOLKFCJGLD;
    (__this_00->fields).OJBIFDEEBNO = HPPAGNLEOEJ;
    if (GFPLANGLAKN != (PIADCKMDDAK_o *)0x0) {
      if (0 < (GFPLANGLAKN->fields).GDKPGIBMFPA) {
        __this_01 = (__this_00->fields).DDEAFMPDPBJ;
        if (__this_01 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
        goto LAB_032479a4;
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                   (Il2CppObject *)GFPLANGLAKN,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
      }
      __this_02 = (__this_00->fields).EACBGCPPLBO;
      if (__this_02 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__AddRange
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                   (System_Collections_Generic_IEnumerable_T__o *)OBLIJEFDJGN,
                   Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_AddRange__);
        __this_03 = (__this_00->fields).KELNJLBBHEC;
        if (__this_03 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__AddRange
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,
                     (System_Collections_Generic_IEnumerable_T__o *)GJBLBEALOBO,
                     Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_AddRange__);
          (__this_00->fields).HFNMLHEEAJM = EOLGPJMKFNA;
          (__this_00->fields).GAGJCDGEGBL = FNLILHMAONM;
          BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                        thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this,StringLiteral_20398/*"raid_battle_finish_round"*/,
                     (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_032479a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LCMKFDELMBB(InputDialog.HJDIKOKAGJF DHJJPNMOKKP)  [RVA 0x31479A8]
// SFRequestSender$$LCMKFDELMBB @ RVA 0x31479A8

void SFRequestSender__LCMKFDELMBB
               (SFRequestSender_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HJDIKOKAGJF_o *DHJJPNMOKKP,MethodInfo *method
               )

{
  int32_t CBFBKNECBMP;
  NDPMLPGANCI_o *__this_00;
  BFLFFPLIIFM_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  EKCGNICFDEO_o *JLICGPAEBHN;
  MethodInfo *in_x5;
  ELBBEAGGAOH_o *pEVar1;
  KAMBBJFPLGM_o *pKVar2;
  EOLFEKNCPLM_o *pEVar3;
  GKLPDMLELJF_o *pGVar4;
  
  if ((DAT_0456678e & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_ICFDKPCNHEM__);
    FUN_01bab630(&StringLiteral_19448/*"link_account"*/);
    DAT_0456678e = 1;
  }
  (__this->fields).MIPDMFDHHAP = false;
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    JLICGPAEBHN = (EKCGNICFDEO_o *)0x0;
    NDPMLPGANCI__MMMJCENBINB(__this_00,true,(MethodInfo *)0x0);
    if (DHJJPNMOKKP != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HJDIKOKAGJF_o *)0x0) {
      if ((DHJJPNMOKKP->fields).NFGJABFNGHJ == false) {
        __this_01 = (BFLFFPLIIFM_o *)thunk_FUN_01bda818(BFLFFPLIIFM_TypeInfo);
        BFLFFPLIIFM___ctor(__this_01,(MethodInfo *)0x0);
        pEVar1 = (DHJJPNMOKKP->fields).OGFMJIABHHI;
        if ((((pEVar1 != (ELBBEAGGAOH_o *)0x0) &&
             (pKVar2 = (pEVar1->fields).IFDHENIKFKC, pKVar2 != (KAMBBJFPLGM_o *)0x0)) &&
            (pEVar3 = (pKVar2->fields).FLAFELDNABC, pEVar3 != (EOLFEKNCPLM_o *)0x0)) &&
           ((pGVar4 = (pEVar3->fields).MCOPPCNPAHF, pGVar4 != (GKLPDMLELJF_o *)0x0 &&
            (__this_01 != (BFLFFPLIIFM_o *)0x0)))) {
          (__this_01->fields).POLEIDMHDNP = (pGVar4->fields).ANAJGHJEEOC;
          BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                        thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this,StringLiteral_19448/*"link_account"*/,
                     (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        pEVar1 = (DHJJPNMOKKP->fields).OGFMJIABHHI;
        if (pEVar1 != (ELBBEAGGAOH_o *)0x0) {
          CBFBKNECBMP = (pEVar1->fields).EMNNAEAIMNH;
          if (CBFBKNECBMP == 0) {
            CBFBKNECBMP = -1;
          }
          SFRequestSender__BCOMIMBOGIM
                    (__this,(pEVar1->fields).CBHDCHDBFGB,JLICGPAEBHN,(pEVar1->fields).KEIBPDJHHBB,
                     CBFBKNECBMP,in_x5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BPBFNOKDBLB()  [RVA 0x3147AF8]
// SFRequestSender$$BPBFNOKDBLB @ RVA 0x3147AF8

void SFRequestSender__BPBFNOKDBLB(SFRequestSender_o *__this,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *in_x3;
  
  if ((DAT_0456678f & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_5966/*"Error: onJoinedZone timeout"*/);
    FUN_01bab630(&StringLiteral_11538/*"SFRequestSender::OnJoinZoneTimeout: custom|join_zone"*/);
    DAT_0456678f = 1;
  }
  NFNBHPOJFNJ__KCBJCLNBGAO(4,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__Error(StringLiteral_11538/*"SFRequestSender::OnJoinZoneTimeout: custom|join_zone"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
      SFRequestSender__FNFGGGJGPBB(__this,StringLiteral_5966/*"Error: onJoinedZone timeout"*/,-1,in_x3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GJHLAGIIMKK()  [RVA 0x3147BB0]
// SFRequestSender$$GJHLAGIIMKK @ RVA 0x3147BB0

void SFRequestSender__GJHLAGIIMKK(SFRequestSender_o *__this,MethodInfo *method)

{
  SFRequestSender_c *pKVar1;
  
  pKVar1 = __this->klass;
  (__this->fields).MLBNMPBAIIB = true;
                    /* WARNING: Could not recover jumptable at 0x03247bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pKVar1->vtable)._4_AIJHJNAPOFC.methodPtr)(__this,(pKVar1->vtable)._4_AIJHJNAPOFC.method);
  return;
}


// ===== private void BCOMIMBOGIM(KAMBBJFPLGM HEHMPFLAEGE, EKCGNICFDEO JLICGPAEBHN, GLPEFEEGCPM BFFBKNCLLML, int CBFBKNECBMP)  [RVA 0x3145780]
// SFRequestSender$$BCOMIMBOGIM @ RVA 0x3145780

void SFRequestSender__BCOMIMBOGIM
               (SFRequestSender_o *__this,KAMBBJFPLGM_o *HEHMPFLAEGE,EKCGNICFDEO_o *JLICGPAEBHN,
               GLPEFEEGCPM_o *BFFBKNCLLML,int32_t CBFBKNECBMP,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  PlayerData_o *pEVar2;
  System_String_o *pSVar3;
  SFRequestSender_o *__this_01;
  NFFDIPBFJHP_o *__this_02;
  RaidLeaderboardsManager_o *__this_03;
  RaidPlayerInfoHelper_o *__this_04;
  RaidClansManager_o *pEVar4;
  int64_t iVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  GameUtils_StaticFields *pMVar6;
  
  if ((DAT_04566790 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04566790 = 1;
  }
  (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
  (__this->fields).DKOIHGOHPFN = 0;
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__MBHCCJNGJEK(__this_00,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar2 != (PlayerData_o *)0x0) {
      method_02 = (MethodInfo *)0x0;
      PlayerData__BCOMIMBOGIM(pEVar2,HEHMPFLAEGE,(MethodInfo *)0x0);
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar2 != (PlayerData_o *)0x0) {
        (pEVar2->fields)._DHPJJLCDAJD_k__BackingField = CBFBKNECBMP;
        pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar2 != (PlayerData_o *)0x0) {
          pSVar3 = PlayerData__GKMAFGODLLG(pEVar2,(MethodInfo *)0x0);
                    /* try { // try from 03245844 to 033458d3 has its CatchHandler @ 03245844
                       catch() { ... } // from try @ 03245844 with catch @ 03245844
                       catch() { ... } // from try @ 03245914 with catch @ 03245844
                       catch() { ... } // from try @ 03245948 with catch @ 03245844
                       catch() { ... } // from try @ 03245978 with catch @ 03245844
                       catch() { ... } // from try @ 032459a8 with catch @ 03245844 */
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(GameUtils_TypeInfo);
          }
          pMVar6 = GameUtils_TypeInfo->static_fields;
          pMVar6->KIINGPDGEDJ = pSVar3;
          __this_01 = (SFRequestSender_o *)thunk_FUN_01c20e04(&pMVar6->KIINGPDGEDJ,pSVar3);
          SFRequestSender__ONNLOBHKCID(__this_01,HEHMPFLAEGE,method_02);
          __this_02 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
          if (__this_02 != (NFFDIPBFJHP_o *)0x0) {
            NFFDIPBFJHP__KCPKPGNKGPD(__this_02,BFFBKNCLLML,(MethodInfo *)0x0);
            GameUtils__IIMDBJJKJIF(BFFBKNCLLML,(MethodInfo *)0x0);
            GameUtils__PCEHIGOFNHH(BFFBKNCLLML,(MethodInfo *)0x0);
            __this_03 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
            if (__this_03 != (RaidLeaderboardsManager_o *)0x0) {
              RaidLeaderboardsManager__MJFIDBMOKCM(__this_03,(MethodInfo *)0x0);
              SFRequestSender__NPGHNODEKLI(__this,method_00);
              __this_04 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
              if (__this_04 != (RaidPlayerInfoHelper_o *)0x0) {
                    /* try { // try from 032458d4 to 033458db has its CatchHandler @ 03245958 */
                RaidPlayerInfoHelper__GMOEEEHEFKG(__this_04,true,(MethodInfo *)0x0);
                pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (pEVar2 != (PlayerData_o *)0x0) {
                  bVar1 = PlayerData__CLJIMCDAEKO(pEVar2,(MethodInfo *)0x0);
                  if (!bVar1) {
                    /* try { // try from 032458f8 to 03345903 has its CatchHandler @ 03245954 */
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    /* try { // try from 03245908 to 03345913 has its CatchHandler @ 0324594c */
                    pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (pEVar2 == (PlayerData_o *)0x0) goto LAB_032459ec;
                    /* try { // try from 03245914 to 0334593f has its CatchHandler @ 03245844 */
                    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pEVar2->fields).HONOOAELMFJ,(MethodInfo *)0x0)
                    ;
                    if (!bVar1) {
                      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pEVar4 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 03245940 to 03345947 has its CatchHandler @ 03245950 */
                      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    /* try { // try from 03245948 to 03345973 has its CatchHandler @ 03245844 */
                      if (pEVar2 == (PlayerData_o *)0x0) goto LAB_032459ec;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03245908 with catch @ 0324594c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03245940 with catch @ 03245950
                        */
                      iVar5 = PlayerData__APCMGOCHMGC(pEVar2,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032458f8 with catch @ 03245954
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032458d4 with catch @ 03245958
                        */
                      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                      if ((pEVar2 == (PlayerData_o *)0x0) || (pEVar4 == (RaidClansManager_o *)0x0))
                      goto LAB_032459ec;
                    /* try { // try from 03245974 to 03345977 has its CatchHandler @ 03245998 */
                    /* try { // try from 03245978 to 0334599f has its CatchHandler @ 03245844 */
                      RaidClansManager__MONHMPCJOFE
                                (pEVar4,iVar5,(pEVar2->fields).HONOOAELMFJ,(MethodInfo *)0x0);
                      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                      if (pEVar2 == (PlayerData_o *)0x0) goto LAB_032459ec;
                      PlayerData__FACPGEOBOAJ(pEVar2,(MethodInfo *)0x0);
                    }
                  }
                    /* catch() { ... } // from try @ 03245974 with catch @ 03245998 */
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                    /* try { // try from 032459a0 to 033459a7 has its CatchHandler @ 032459bc */
                  pEVar4 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 032459a8 to 033459b3 has its CatchHandler @ 03245844 */
                  pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    /* try { // try from 032459b4 to 033459bb has its CatchHandler @ 032459bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032459a0 with catch @ 032459bc
                       catch(type#2 @ 00000000) { ... } // from try @ 032459b4 with catch @ 032459bc
                        */
                  if ((pEVar2 != (PlayerData_o *)0x0) &&
                     (iVar5 = PlayerData__PALANAIJAFE(pEVar2,(MethodInfo *)0x0),
                     pEVar4 != (RaidClansManager_o *)0x0)) {
                    RaidClansManager__MCCFMEACAPI(pEVar4,iVar5,(MethodInfo *)0x0);
                    SFRequestSender__NFKPAHCANCC(__this,method_01);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032459ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BJNFKIGGKIH(Action<KEFHDOHHHML> IELDNEAAPBE, int MMIOPIPLDJL)  [RVA 0x3148778]
// SFRequestSender$$BJNFKIGGKIH @ RVA 0x3148778

void SFRequestSender__BJNFKIGGKIH
               (SFRequestSender_o *__this,System_Action_KEFHDOHHHML__o *IELDNEAAPBE,int32_t MMIOPIPLDJL,
               MethodInfo *method)

{
  DBOOKMFPFNI_o *__this_00;
  
  if ((DAT_04566791 & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    FUN_01bab630(&StringLiteral_19266/*"join_raid_matcher"*/);
    DAT_04566791 = 1;
  }
  __this_00 = (DBOOKMFPFNI_o *)thunk_FUN_01bda818(DBOOKMFPFNI_TypeInfo);
  DBOOKMFPFNI___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (DBOOKMFPFNI_o *)0x0) {
    (__this_00->fields).LPFKPMGBOGB = MMIOPIPLDJL;
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this,StringLiteral_19266/*"join_raid_matcher"*/,(Google_Protobuf_IMessage_o *)__this_00,
               IELDNEAAPBE,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AOGEKFNDJEA(Action<KEFHDOHHHML> IELDNEAAPBE)  [RVA 0x3148818]
// SFRequestSender$$AOGEKFNDJEA @ RVA 0x3148818

void SFRequestSender__AOGEKFNDJEA
               (SFRequestSender_o *__this,System_Action_KEFHDOHHHML__o *IELDNEAAPBE,MethodInfo *method)

{
  PGICCMFLDPI_o *__this_00;
  System_DateTime_o OLFIPBLKDAH;
  int64_t iVar1;
  
  if ((DAT_04566792 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&StringLiteral_20209/*"ping"*/);
    DAT_04566792 = 1;
  }
  __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
  PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OLFIPBLKDAH = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  iVar1 = DPNBGNOIKEJ__FAJDJBBKNIG(OLFIPBLKDAH,(MethodInfo *)0x0);
  if (__this_00 != (PGICCMFLDPI_o *)0x0) {
    (__this_00->fields).GDKPGIBMFPA = iVar1;
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this,StringLiteral_20209/*"ping"*/,(Google_Protobuf_IMessage_o *)__this_00,
               IELDNEAAPBE,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GAIIINBHFDP()  [RVA 0x31488E8]
// SFRequestSender$$GAIIINBHFDP @ RVA 0x31488E8

bool SFRequestSender__GAIIINBHFDP(SFRequestSender_o *__this,MethodInfo *method)

{
  if ((__this->fields)._CPLKKCAJOJJ_k__BackingField != false) {
    return 0 < (__this->fields).DKOIHGOHPFN;
  }
  return false;
}


// ===== private void EHCOOPEEHMC(string ADGGJLPMLPD)  [RVA 0x3148908]
// SFRequestSender$$EHCOOPEEHMC @ RVA 0x3148908

void SFRequestSender__EHCOOPEEHMC(SFRequestSender_o *__this,System_String_o *ADGGJLPMLPD,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o **ppNVar3;
  NDPMLPGANCI_o *__this_00;
  FDHCLNDLIDG_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  SFRequestSender_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  GameUtils_StaticFields *pMVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_04566793 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_OBJHJLFDIAM__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_17447/*"create_player"*/);
    FUN_01bab630(&StringLiteral_11535/*"SFRequestSender::OnInputDialogCanceled: Nick input confirmed!"*/);
    DAT_04566793 = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(ADGGJLPMLPD,(MethodInfo *)0x0);
  if (bVar1) {
    SFRequestSender__PKNNILDNIAD(__this,method_00);
    return;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11535/*"SFRequestSender::OnInputDialogCanceled: Nick input confirmed!"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    ppNVar3 = &(__this->fields).KAGJIPIDJCE;
    *ppNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      method_02 = (MethodInfo *)0x1;
      NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
      if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = KDDOKHLOKMI__ACEAKFIFGJC((MethodInfo *)0x0);
      if (bVar1) {
        if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                          (KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          ADGGJLPMLPD = KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB;
        }
      }
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar4 = GameUtils_TypeInfo->static_fields;
      pMVar4->KIINGPDGEDJ = ADGGJLPMLPD;
      thunk_FUN_01c20e04(&pMVar4->KIINGPDGEDJ,ADGGJLPMLPD);
      auVar5 = thunk_FUN_01bda818(FDHCLNDLIDG_TypeInfo);
      __this_01 = auVar5._0_8_;
      FDHCLNDLIDG___ctor(__this_01,auVar5._8_8_);
      if (__this_01 != (FDHCLNDLIDG_o *)0x0) {
        FDHCLNDLIDG__GCAEKDKFFKK(__this_01,ADGGJLPMLPD,method_02);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        iVar2 = SFRequestSender__BFOENPKALDN(__this_02,method_01);
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this,StringLiteral_17447/*"create_player"*/,
                   (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,(float)iVar2,
                   (Il2CppObject *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IHDGMKMILJM(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3148C14]
// SFRequestSender$$IHDGMKMILJM @ RVA 0x3148C14

void SFRequestSender__IHDGMKMILJM(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  RaidManager_o *pCVar3;
  PlayerData_o *__this_00;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  
  if ((DAT_04566794 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<FIMAAAOEIGM>__);
    FUN_01bab630(&StringLiteral_17778/*"dlgDamageRejectTitle"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17777/*"dlgDamageRejectText"*/);
    FUN_01bab630(&StringLiteral_19999/*"onBattleFinishRound (FAIL)"*/);
    __this = (SFRequestSender_o *)FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566794 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_19999/*"onBattleFinishRound (FAIL)"*/,(MethodInfo *)0x0);
      return;
    }
    pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<FIMAAAOEIGM>__);
    __this = (SFRequestSender_o *)0x0;
    if (pIVar2 != (Il2CppObject *)0x0) {
      IIPPMAOIKHB = pIVar2[1].monitor;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      __this = (SFRequestSender_o *)0x0;
      if (pCVar3 != (RaidManager_o *)0x0) {
        RaidManager__BNPLDAHKIED(pCVar3,IIPPMAOIKHB,pIVar2[2].monitor,(MethodInfo *)0x0);
        pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        __this = (SFRequestSender_o *)0x0;
        if (pCVar3 != (RaidManager_o *)0x0) {
          (pCVar3->fields).GBGHPLFONHD = true;
          if (*(char *)&pIVar2[2].klass == '\0') {
            DialogsOpener__JNDPLPKDPCP
                      (StringLiteral_17778/*"dlgDamageRejectTitle"*/,StringLiteral_17777/*"dlgDamageRejectText"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                       (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true
                       ,true,(MethodInfo *)0x0);
          }
          if (pIVar2[3].klass == (Il2CppClass *)0x0) {
            return;
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          __this = (SFRequestSender_o *)0x0;
          if (__this_00 != (PlayerData_o *)0x0) {
            PlayerData__JOMFHMDCMNG(__this_00,(KAMBBJFPLGM_o *)pIVar2[3].klass,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void CGGADLPPEIM()  [RVA 0x3148E04]
// SFRequestSender$$CGGADLPPEIM @ RVA 0x3148E04

void SFRequestSender__CGGADLPPEIM(SFRequestSender_o *__this,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  
  if ((DAT_04566795 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11528/*"SFRequestSender::OnConfigInitSuccess"*/);
    DAT_04566795 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11528/*"SFRequestSender::OnConfigInitSuccess"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
      SFRequestSender__GHKJILFKNDN(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ONNLOBHKCID(KAMBBJFPLGM HEHMPFLAEGE)  [RVA 0x3147BC4]
// SFRequestSender$$ONNLOBHKCID @ RVA 0x3147BC4

/* WARNING: Removing unreachable block (ram,0x032483d4) */
/* WARNING: Removing unreachable block (ram,0x032484b0) */

void SFRequestSender__ONNLOBHKCID(SFRequestSender_o *__this,KAMBBJFPLGM_o *HEHMPFLAEGE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  int32_t PIDMGHLCFAJ;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  Item_o *__this_01;
  HOOAAGABMBL_o *pHVar9;
  System_Byte_array *pSVar10;
  System_Byte_array *pSVar11;
  System_String_o *pSVar12;
  GGHCLMEFIGO_o *__this_02;
  IGFGDDANEPE_o *pIVar13;
  HOOAAGABMBL_o *HFJDDNBBENI;
  RaidConfig_o *__this_03;
  RaidConfig_HJLEKMDIDPO_o *PCACCFOOGMK;
  RaidPaymentService_o *__this_04;
  System_Collections_Generic_IEnumerator_T__c *pSVar14;
  Roster_o *pAVar15;
  ulong uVar16;
  int32_t *piVar17;
  System_String_o *pSVar18;
  
  if ((DAT_04566796 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3973);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3974);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3975);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3976);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3977);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3978);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3979);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3980);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3981);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3982);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3983);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3984);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3985);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3986);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__);
    DAT_04566796 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GameUtils_TypeInfo->static_fields->KAFIAMOFNCM = true;
  if ((HEHMPFLAEGE != (KAMBBJFPLGM_o *)0x0) &&
     (__this_00 = (HEHMPFLAEGE->fields).AKFPFIHIHOC,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    pSVar6 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                        Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__
                       );
    if (pSVar6 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = false;
LAB_03247d68:
    do {
      pSVar14 = pSVar6->klass;
      uVar1._0_1_ = (pSVar14->_2).rank;
      uVar1._1_1_ = (pSVar14->_2).minimumAlignment;
      uVar16 = (ulong)uVar1;
      if (uVar16 != 0) {
        piVar17 = &((pSVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar7 = pSVar14->vtable + *piVar17;
            goto LAB_03247dbc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03247dbc:
      uVar16 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if ((uVar16 & 1) == 0) {
        if (pSVar6 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_032483c8;
        pSVar14 = pSVar6->klass;
        uVar3._0_1_ = (pSVar14->_2).rank;
        uVar3._1_1_ = (pSVar14->_2).minimumAlignment;
        uVar16 = (ulong)uVar3;
        if (uVar16 == 0) goto LAB_032483a0;
        piVar17 = &((pSVar14->_1).interfaceOffsets)->offset;
        goto LAB_03248388;
      }
      pSVar14 = pSVar6->klass;
      uVar2._0_1_ = (pSVar14->_2).rank;
      uVar2._1_1_ = (pSVar14->_2).minimumAlignment;
      uVar16 = (ulong)uVar2;
      if (uVar16 != 0) {
        piVar17 = &((pSVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
            pVVar7 = pSVar14->vtable + *piVar17;
            goto LAB_03247e20;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pVVar7 = (VirtualInvokeData *)
               FUN_01b81914(pSVar6,System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo,0);
LAB_03247e20:
      lVar8 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (__this_01 == (Item_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar9 = Item__CKKIPBAIEMN
                         (__this_01,*(System_String_o **)(lVar8 + 0x18),(MethodInfo *)0x0);
    } while (pHVar9 == (HOOAAGABMBL_o *)0x0);
    pSVar18 = (pHVar9->fields)._GMPAEDFIIHF_k__BackingField;
    pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar10,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3973,(MethodInfo *)0x0)
    ;
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3974,(MethodInfo *)0x0)
    ;
    pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
    bVar5 = System_String__op_Equality(pSVar18,pSVar12,(MethodInfo *)0x0);
    if (!bVar5) {
      pSVar18 = (pHVar9->fields)._GMPAEDFIIHF_k__BackingField;
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3975,
                 (MethodInfo *)0x0);
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3976,
                 (MethodInfo *)0x0);
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
      bVar5 = System_String__op_Equality(pSVar18,pSVar12,(MethodInfo *)0x0);
      if (!bVar5) {
        pSVar18 = (pHVar9->fields)._GMPAEDFIIHF_k__BackingField;
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3977,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3978,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        bVar5 = System_String__op_Equality(pSVar18,pSVar12,(MethodInfo *)0x0);
        if (!bVar5) {
          pSVar18 = (pHVar9->fields)._GMPAEDFIIHF_k__BackingField;
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3979,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar11,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3980,
                     (MethodInfo *)0x0);
          pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
          bVar5 = System_String__op_Equality(pSVar18,pSVar12,(MethodInfo *)0x0);
          if (!bVar5) {
            pSVar18 = (pHVar9->fields)._GMPAEDFIIHF_k__BackingField;
            pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar10,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3981,
                       (MethodInfo *)0x0);
            pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar11,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3982,
                       (MethodInfo *)0x0);
            pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
            bVar5 = System_String__op_Equality(pSVar18,pSVar12,(MethodInfo *)0x0);
            if (!bVar5) goto LAB_03247d68;
          }
        }
      }
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar15 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (pAVar15->fields).OIDPLCLELEN;
    if (__this_02 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar13 = GGHCLMEFIGO__JNFIBDBHNOA(__this_02,pHVar9,(MethodInfo *)0x0);
    if (pIVar13 == (IGFGDDANEPE_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar15 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      PIDMGHLCFAJ = Roster__EOEAKGGDBFH(pAVar15,(MethodInfo *)0x0);
      HFJDDNBBENI = HOOAAGABMBL__HCMOFJHAKJH(pHVar9,PIDMGHLCFAJ * 100,(MethodInfo *)0x0);
      pIVar13 = NLPJLHOEAOE__FIFBDNADAAL
                          (pHVar9,*(int32_t *)(lVar8 + 0x20),0,false,true,(MethodInfo *)0x0);
      bVar4 = true;
      if (HFJDDNBBENI != (HOOAAGABMBL_o *)0x0) {
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3983,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3984,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        if (pIVar13 == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        IGFGDDANEPE__CCOEOCPGJBG(pIVar13,pSVar12,(MethodInfo *)0x0);
        IGFGDDANEPE__DJJHOOKLHHL
                  (pIVar13,(HFJDDNBBENI->fields)._HCHGENFJLHA_k__BackingField,(MethodInfo *)0x0);
        IGFGDDANEPE__GIIJHCLHFDK(pIVar13,PIDMGHLCFAJ,(MethodInfo *)0x0);
        pHVar9 = (pIVar13->fields).PCBECBEFJOI;
        if (pHVar9 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        HOOAAGABMBL__GEBIJFANLGH(pHVar9,true,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_03 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (__this_03 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        PCACCFOOGMK = RaidConfig__FPPDGOEOJCH
                                (__this_03,*(System_String_o **)(lVar8 + 0x18),(MethodInfo *)0x0);
        bVar4 = true;
        if (PCACCFOOGMK != (RaidConfig_HJLEKMDIDPO_o *)0x0) {
          pSVar18 = (PCACCFOOGMK->fields).BGHFADDGPAD;
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3985,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar11,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3986,
                     (MethodInfo *)0x0);
          pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
          bVar5 = System_String__op_Equality(pSVar18,pSVar12,(MethodInfo *)0x0);
          bVar4 = true;
          if (bVar5) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_04 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
            if (__this_04 == (RaidPaymentService_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar4 = true;
            RaidPaymentService__OLCPANFJOAA
                      (__this_04,pIVar13,PCACCFOOGMK,HFJDDNBBENI,
                       (HFJDDNBBENI->fields)._HCHGENFJLHA_k__BackingField,PIDMGHLCFAJ,
                       (MethodInfo *)0x0);
          }
        }
      }
    }
    goto LAB_03247d68;
  }
  goto LAB_032484a8;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_03248388:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar7 = pSVar14->vtable + *piVar17;
      goto LAB_032483bc;
    }
  }
LAB_032483a0:
  pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_IDisposable_TypeInfo,0);
LAB_032483bc:
  (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
LAB_032483c8:
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GameUtils_TypeInfo->static_fields->KAFIAMOFNCM = false;
  if (!bVar4) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar15 != (Roster_o *)0x0) {
    Roster__POEMPPEIGOM(pAVar15,(MethodInfo *)0x0);
    return;
  }
LAB_032484a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OBJHJLFDIAM(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3148E94]
// SFRequestSender$$OBJHJLFDIAM @ RVA 0x3148E94

void SFRequestSender__OBJHJLFDIAM(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int32_t CBFBKNECBMP;
  bool bVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  Il2CppObject *pIVar2;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *method_00;
  EKCGNICFDEO_o *JLICGPAEBHN;
  MethodInfo *in_x3;
  MethodInfo *in_x5;
  undefined8 *puVar3;
  
  if ((DAT_04566797 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
    FUN_01bab630(&StringLiteral_5963/*"Error: onCreatePlayerResponse - unknown error"*/);
    FUN_01bab630(&StringLiteral_11532/*"SFRequestSender::OnCreatePlayerResponse"*/);
    FUN_01bab630(&StringLiteral_5964/*"Error: onCreatePlayerResponse empty response"*/);
    DAT_04566797 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    JLICGPAEBHN = (EKCGNICFDEO_o *)0x0;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11532/*"SFRequestSender::OnCreatePlayerResponse"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
      puVar3 = &StringLiteral_5964/*"Error: onCreatePlayerResponse empty response"*/;
LAB_03248fdc:
      SFRequestSender__FNFGGGJGPBB(__this,(System_String_o *)*puVar3,-1,in_x3);
      return;
    }
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        CBFBKNECBMP = *(int32_t *)&pIVar2[5].klass;
        if (CBFBKNECBMP == 0) {
          CBFBKNECBMP = -1;
        }
        SFRequestSender__BCOMIMBOGIM
                  (__this,pIVar2[1].monitor,JLICGPAEBHN,pIVar2[3].monitor,CBFBKNECBMP,in_x5);
        return;
      }
    }
    else {
      if ((IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField != 0x2715) {
        puVar3 = &StringLiteral_5963/*"Error: onCreatePlayerResponse - unknown error"*/;
        goto LAB_03248fdc;
      }
      SFRequestSender__ODIHHGKNPDI(__this,method_00);
      __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
        CPNHNIKFGFB__DIGPCFKCCBK
                  (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BGKMCFLPPIG(MDOKGPFICNK<PEDENGEGDNI> ICLHKEAILDM)  [RVA 0x3149000]
// SFRequestSender$$BGKMCFLPPIG @ RVA 0x3149000

void SFRequestSender__BGKMCFLPPIG
               (SFRequestSender_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  FUN_03f935f0(DAT_04566798);
  return;
}


// ===== private void ICFDKPCNHEM(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x31490AC]
// SFRequestSender$$ICFDKPCNHEM @ RVA 0x31490AC

void SFRequestSender__ICFDKPCNHEM(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  PlayerData_o *__this_00;
  ELBBEAGGAOH_o *__this_01;
  EKCGNICFDEO_o *JLICGPAEBHN;
  MethodInfo *in_x3;
  int32_t CBFBKNECBMP;
  MethodInfo *in_x5;
  KAMBBJFPLGM_o *HEHMPFLAEGE;
  GLPEFEEGCPM_o *BFFBKNCLLML;
  
  if ((DAT_04566799 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
    FUN_01bab630(&StringLiteral_11572/*"SFrequestSender::OnLinkAccountResponse: onGetPlayerResponse empty response"*/);
    FUN_01bab630(&StringLiteral_11542/*"SFRequestSender::OnLinkAccountResponse"*/);
    DAT_04566799 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    JLICGPAEBHN = (EKCGNICFDEO_o *)0x0;
    Nekki_Utils_DetailedLog__Log(StringLiteral_11542/*"SFRequestSender::OnLinkAccountResponse"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    if ((IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) ||
       (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), !bVar1)) {
      SFRequestSender__FNFGGGJGPBB(__this,StringLiteral_11572/*"SFrequestSender::OnLinkAccountResponse: onGetPlayerResponse empty response"*/,-1,in_x3);
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (PlayerData_o *)0x0) {
      PlayerData__FACPGEOBOAJ(__this_00,(MethodInfo *)0x0);
      __this_01 = (ELBBEAGGAOH_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
      if (__this_01 != (ELBBEAGGAOH_o *)0x0) {
        HEHMPFLAEGE = (__this_01->fields).CBHDCHDBFGB;
        BFFBKNCLLML = (__this_01->fields).KEIBPDJHHBB;
        bVar1 = ELBBEAGGAOH__OMODJLCIIGD(__this_01,(MethodInfo *)0x0);
        if (bVar1) {
          CBFBKNECBMP = (__this_01->fields).EMNNAEAIMNH;
        }
        else {
          CBFBKNECBMP = -1;
        }
        if (__this != (SFRequestSender_o *)0x0) {
          SFRequestSender__BCOMIMBOGIM(__this,HEHMPFLAEGE,JLICGPAEBHN,BFFBKNCLLML,CBFBKNECBMP,in_x5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AKEKGJAFBOC(MDOKGPFICNK<PEDENGEGDNI> ICLHKEAILDM)  [RVA 0x31467A0]
// SFRequestSender$$AKEKGJAFBOC @ RVA 0x31467A0

void SFRequestSender__AKEKGJAFBOC
               (SFRequestSender_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  LHOMEBJDFLD_o *pLVar4;
  CPNHNIKFGFB_o *pCVar5;
  NDPMLPGANCI_o *pNVar6;
  System_Action_object__o *CPECAEHDDDB;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_02;
  System_Action_o *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o **ppNVar8;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *pNVar9;
  
  if ((DAT_0456679a & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_EGMHFFODCKH__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_11531/*"SFRequestSender::OnConnectionLost"*/);
    DAT_0456679a = 1;
    ICLHKEAILDM = (MDOKGPFICNK_PEDENGEGDNI__o *)extraout_x1;
  }
  SFRequestSender__NDBIGCCHMPL(__this,(MethodInfo *)ICLHKEAILDM);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Error(StringLiteral_11531/*"SFRequestSender::OnConnectionLost"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = GameUtils__PKNDHONBNIF((MethodInfo *)0x0);
    if (bVar2) {
      if ((__this->fields).MLBNMPBAIIB != false) {
        (__this->fields).MLBNMPBAIIB = false;
        SFRequestSender__GHKJILFKNDN(__this,method_00);
        return;
      }
      pLVar4 = (__this->fields).GBLLKHKEJOA;
      (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
      if (pLVar4 != (LHOMEBJDFLD_o *)0x0) {
        LHOMEBJDFLD__COJANGIEAKE(pLVar4,(MethodInfo *)0x0);
        ppNVar8 = &(__this->fields).KAGJIPIDJCE;
        pNVar9 = *ppNVar8;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          pNVar9 = *ppNVar8;
          if (pNVar9 != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0) {
            (*(pNVar9->klass->vtable)._20_Close.methodPtr)
                      (pNVar9,(pNVar9->klass->vtable)._20_Close.method);
            *ppNVar8 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
            thunk_FUN_01c20e04(ppNVar8,0);
            pCVar5 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pCVar5 != (CPNHNIKFGFB_o *)0x0) {
              CPNHNIKFGFB__DIGPCFKCCBK(pCVar5,0x29ca,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          if ((__this->fields).EODMKFMHMIK != false) {
            return;
          }
          iVar1 = (__this->fields).DKOIHGOHPFN;
          iVar3 = SFRequestSender__MPGGPNICIMO((SFRequestSender_o *)(ulong)bVar2,method_01);
          if (iVar1 < iVar3) {
            bVar2 = Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene((MethodInfo *)0x0);
            pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
              if (bVar2) {
                NDPMLPGANCI__MBHCCJNGJEK(pNVar6,(MethodInfo *)0x0);
                method_02 = extraout_x1_00;
              }
              else {
                NDPMLPGANCI__MMMJCENBINB(pNVar6,true,(MethodInfo *)0x0);
                method_02 = extraout_x1_01;
              }
              (__this->fields).DKOIHGOHPFN = (__this->fields).DKOIHGOHPFN + 1;
              SFRequestSender__CDKAPIKLDJI(__this,method_02);
              return;
            }
          }
          else {
            pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
              NDPMLPGANCI__MBHCCJNGJEK(pNVar6,(MethodInfo *)0x0);
              bVar2 = Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene((MethodInfo *)0x0);
              if (bVar2) {
                pSVar7 = (__this->fields).PBFGHKBLCKN;
                (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
                if (pSVar7 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032469c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(pSVar7->fields).super.super.invoke_impl)
                            ((pSVar7->fields).super.super.method_code,
                             (pSVar7->fields).super.super.method);
                  return;
                }
              }
              else {
                pCVar5 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
                CPECAEHDDDB = (System_Action_object__o *)
                              thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                System_Action<object>___ctor();
                if (pCVar5 != (CPNHNIKFGFB_o *)0x0) {
                  CPNHNIKFGFB__DIGPCFKCCBK(pCVar5,0x29ca,CPECAEHDDDB,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pLVar4 = (__this->fields).GBLLKHKEJOA;
      (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
      if (pLVar4 != (LHOMEBJDFLD_o *)0x0) {
        LHOMEBJDFLD__COJANGIEAKE(pLVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GCLNNDGBNND(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3149218]
// SFRequestSender$$GCLNNDGBNND @ RVA 0x3149218

void SFRequestSender__GCLNNDGBNND(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  KAMBBJFPLGM_o *LLJHKLPGMGC;
  PlayerData_o *__this_00;
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  int *piVar5;
  SFSConfigManager_c *pAVar6;
  
  if ((DAT_0456679b & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
    __this = (SFRequestSender_o *)FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_0456679b = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    LLJHKLPGMGC = (KAMBBJFPLGM_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<KAMBBJFPLGM>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    __this = (SFRequestSender_o *)0x0;
    if (__this_00 != (PlayerData_o *)0x0) {
      PlayerData__JOMFHMDCMNG(__this_00,LLJHKLPGMGC,(MethodInfo *)0x0);
      lVar1 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      __this = *(SFRequestSender_o **)(*(long *)(lVar1 + 0xc0) + 0x10);
      if (((ulong)__this[1].fields.super.KPDFPANJBJB & 0x10000000000) == 0) {
        __this = (SFRequestSender_o *)FUN_01b81620();
      }
      pAVar6 = ((__this->fields).IDFAHJPJGBM)->klass;
      if (pAVar6 != (SFSConfigManager_c *)0x0) {
        pvVar3 = (pAVar6->_1).image;
        uVar4 = (ulong)*(ushort *)((long)pvVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)((long)pvVar3 + 0xb0) + 8);
          do {
            if (*(ODEIOKOJGDM_c **)(piVar5 + -2) == ODEIOKOJGDM_TypeInfo) {
              puVar2 = (undefined8 *)((long)pvVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_03249348;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_01b81914(pAVar6,ODEIOKOJGDM_TypeInfo,0);
LAB_03249348:
                    /* WARNING: Could not recover jumptable at 0x0324935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar2)(pAVar6,0,puVar2[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void FHIODBIPGBG()  [RVA 0x31449DC]
// SFRequestSender$$FHIODBIPGBG @ RVA 0x31449DC

void SFRequestSender__FHIODBIPGBG(SFRequestSender_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  LHOMEBJDFLD_o *__this_00;
  SFRequestSender_o *__this_01;
  NDPMLPGANCI_o *__this_02;
  MethodInfo *method_00;
  System_Action_o *pSVar2;
  
                    /* catch() { ... } // from try @ 032445e4 with catch @ 032449dc */
                    /* catch() { ... } // from try @ 0324456c with catch @ 032449e0 */
                    /* catch() { ... } // from try @ 0324493c with catch @ 032449e4 */
  __this_00 = (__this->fields).GBLLKHKEJOA;
                    /* catch() { ... } // from try @ 03244938 with catch @ 032449e8 */
  if (__this_00 != (LHOMEBJDFLD_o *)0x0) {
                    /* catch() { ... } // from try @ 03244584 with catch @ 032449ec */
                    /* catch() { ... } // from try @ 03244544 with catch @ 032449f0 */
    LHOMEBJDFLD__COJANGIEAKE(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0324455c with catch @ 032449f4 */
                    /* catch() { ... } // from try @ 03244934 with catch @ 032449f8 */
    __this_01 = (SFRequestSender_o *)FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0324435c with catch @ 032449fc */
    if (__this_01 != (SFRequestSender_o *)0x0) {
                    /* catch() { ... } // from try @ 032443e8 with catch @ 03244a00 */
                    /* catch() { ... } // from try @ 03244930 with catch @ 03244a04 */
      if ((char)(__this_01->fields).super.PGADIBFBJCJ != '\0') {
                    /* catch() { ... } // from try @ 032445f8 with catch @ 03244a08 */
        iVar1 = SFRequestSender__MPGGPNICIMO(__this_01,method_00);
                    /* catch() { ... } // from try @ 03244920 with catch @ 03244a0c */
        (__this->fields).DKOIHGOHPFN = iVar1;
      }
                    /* catch() { ... } // from try @ 032444c0 with catch @ 03244a10 */
                    /* catch() { ... } // from try @ 0324449c with catch @ 03244a14 */
                    /* catch() { ... } // from try @ 0324436c with catch @ 03244a18 */
                    /* catch() { ... } // from try @ 03244428 with catch @ 03244a1c */
      (*(__this->klass->vtable)._4_AIJHJNAPOFC.methodPtr)
                (__this,(__this->klass->vtable)._4_AIJHJNAPOFC.method);
                    /* catch() { ... } // from try @ 03244910 with catch @ 03244a20 */
                    /* catch() { ... } // from try @ 03244410 with catch @ 03244a24 */
      __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0324490c with catch @ 03244a28 */
      if (__this_02 != (NDPMLPGANCI_o *)0x0) {
                    /* catch() { ... } // from try @ 03244520 with catch @ 03244a2c */
                    /* catch() { ... } // from try @ 032444f0 with catch @ 03244a30 */
        NDPMLPGANCI__MBHCCJNGJEK(__this_02,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03244908 with catch @ 03244a34 */
        pSVar2 = (__this->fields).PBFGHKBLCKN;
                    /* catch() { ... } // from try @ 032443a0 with catch @ 03244a38 */
        (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
                    /* catch() { ... } // from try @ 03244904 with catch @ 03244a3c */
        if (pSVar2 != (System_Action_o *)0x0) {
                    /* catch() { ... } // from try @ 03244900 with catch @ 03244a40 */
                    /* catch() { ... } // from try @ 032448fc with catch @ 03244a44 */
                    /* catch() { ... } // from try @ 032448f8 with catch @ 03244a48 */
                    /* catch() { ... } // from try @ 03244340 with catch @ 03244a4c */
                    /* WARNING: Could not recover jumptable at 0x03244a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 032448f4 with catch @ 03244a50 */
          (*(code *)(pSVar2->fields).super.super.invoke_impl)
                    ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03244278 with catch @ 03244a54 */
  FUN_01bab8c8();
}


// ===== public void NPGHNODEKLI()  [RVA 0x3148698]
// SFRequestSender$$NPGHNODEKLI @ RVA 0x3148698

void SFRequestSender__NPGHNODEKLI(SFRequestSender_o *__this,MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_0456679c & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_AOAAHAGIDBP__);
    FUN_01bab630(&StringLiteral_20478/*"refresh_gems"*/);
    DAT_0456679c = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo,method);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  KDPDBGNOFEN__KLNMLOOCAAO
            ((KDPDBGNOFEN_o *)__this,StringLiteral_20478/*"refresh_gems"*/,(Google_Protobuf_IMessage_o *)__this_00,
             BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  SFRequestSender__LIKCPEBFCEC(__this,method_00);
  return;
}


// ===== public void KGJHOLAEPAI(Action CJNHFNHJHPE)  [RVA 0x3149A74]
// SFRequestSender$$KGJHOLAEPAI @ RVA 0x3149A74

void SFRequestSender__KGJHOLAEPAI(SFRequestSender_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_0456679d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456679d = 1;
  }
  ppSVar4 = &(__this->fields).EPEKIKOFDNH;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void JIIOPKNDBBJ()  [RVA 0x3144824]
// SFRequestSender$$JIIOPKNDBBJ @ RVA 0x3144824

void SFRequestSender__JIIOPKNDBBJ(SFRequestSender_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 03244830 to 03344853 has its CatchHandler @ 03244964 */
  if ((DAT_0456679e & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456679e = 1;
  }
  ppSVar7 = &(__this->fields).FDLECCPIBFI;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032448f8 to 033448fb has its CatchHandler @ 03244a48 */
    FUN_01bab8c8();
  }
                    /* try { // try from 03244864 to 0334486b has its CatchHandler @ 0324497c */
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
                    /* try { // try from 03244878 to 0334488f has its CatchHandler @ 03244a8c */
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 03244894 to 033448a3 has its CatchHandler @ 03244990 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_032448d0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 032448a4 to 033448db has its CatchHandler @ 03244030 */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_032448d0:
                    /* try { // try from 032448dc to 033448df has its CatchHandler @ 03244a94 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
                    /* try { // try from 032448e0 to 033448e3 has its CatchHandler @ 03244a88 */
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 032448e4 to 033448e7 has its CatchHandler @ 03244a80 */
                    /* try { // try from 032448e8 to 033448eb has its CatchHandler @ 03244a7c */
                    /* try { // try from 032448ec to 033448ef has its CatchHandler @ 03244a74 */
                    /* try { // try from 032448f0 to 033448f3 has its CatchHandler @ 03244a64 */
                    /* try { // try from 032448f4 to 033448f7 has its CatchHandler @ 03244a50 */
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void COAKAMCJAAL(MDOKGPFICNK<PEDENGEGDNI> ICLHKEAILDM)  [RVA 0x3149B10]
// SFRequestSender$$COAKAMCJAAL @ RVA 0x3149B10

void SFRequestSender__COAKAMCJAAL
               (SFRequestSender_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  
  if ((DAT_0456679f & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11537/*"SFRequestSender::OnJoinRoomSuccess"*/);
    DAT_0456679f = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__Log(StringLiteral_11537/*"SFRequestSender::OnJoinRoomSuccess"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
      SFRequestSender__JIIOPKNDBBJ(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BLPKMFJEHPB(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3149BA0]
// SFRequestSender$$BLPKMFJEHPB @ RVA 0x3149BA0

void SFRequestSender__BLPKMFJEHPB(SFRequestSender_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  PGICCMFLDPI_o *CMBDFLEHOEH;
  CFMDGLMCNIL_o *__this_00;
  NHMNDJDBIIB_o *__this_01;
  
  if ((DAT_045667a0 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<PGICCMFLDPI>__);
    FUN_01bab630(&NHMNDJDBIIB_TypeInfo);
    DAT_045667a0 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    CMBDFLEHOEH = (PGICCMFLDPI_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<PGICCMFLDPI>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
    __this_01 = (NHMNDJDBIIB_o *)thunk_FUN_01bda818(NHMNDJDBIIB_TypeInfo);
    NHMNDJDBIIB___ctor(__this_01,CMBDFLEHOEH,(MethodInfo *)0x0);
    if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
      CFMDGLMCNIL__MPFFOIIBAKO(__this_00,(OHPOFOPJIMB_o *)__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator FPJFGEHGKIM()  [RVA 0x314665C]
// SFRequestSender$$FPJFGEHGKIM @ RVA 0x314665C

System_Collections_IEnumerator_o *
SFRequestSender__FPJFGEHGKIM(SFRequestSender_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667a1 & 1) == 0) {
    FUN_01bab630(&SFRequestSender_FGDIJPFMAJE_TypeInfo);
    DAT_045667a1 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFRequestSender_FGDIJPFMAJE_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void PCDKKJGBBAB(MDOKGPFICNK<PEDENGEGDNI> ICLHKEAILDM)  [RVA 0x3149C98]
// SFRequestSender$$PCDKKJGBBAB @ RVA 0x3149C98

void SFRequestSender__PCDKKJGBBAB
               (SFRequestSender_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  
  if ((DAT_045667a2 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11547/*"SFRequestSender::OnTimeoutError, skipping"*/);
    DAT_045667a2 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__Error(StringLiteral_11547/*"SFRequestSender::OnTimeoutError, skipping"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HGMNJNFOMDO(Action CJNHFNHJHPE)  [RVA 0x3149D1C]
// SFRequestSender$$HGMNJNFOMDO @ RVA 0x3149D1C

void SFRequestSender__HGMNJNFOMDO(SFRequestSender_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045667a3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045667a3 = 1;
  }
  ppSVar4 = &(__this->fields).DHLLCGMLBLE;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void NBIKPJAEMPH(MDOKGPFICNK<PEDENGEGDNI> ICLHKEAILDM)  [RVA 0x3149DB8]
// SFRequestSender$$NBIKPJAEMPH @ RVA 0x3149DB8

void SFRequestSender__NBIKPJAEMPH
               (SFRequestSender_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_045667a4 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_9874/*"OnLoginFail"*/);
    FUN_01bab630(&StringLiteral_11544/*"SFRequestSender::OnLoginFail: custom|smartfox_login_fail"*/);
    DAT_045667a4 = 1;
    ICLHKEAILDM = (MDOKGPFICNK_PEDENGEGDNI__o *)extraout_x1;
  }
  SFRequestSender__JIIOPKNDBBJ(__this,(MethodInfo *)ICLHKEAILDM);
  NFNBHPOJFNJ__KCBJCLNBGAO(3,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__Error(StringLiteral_11544/*"SFRequestSender::OnLoginFail: custom|smartfox_login_fail"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
      SFRequestSender__FNFGGGJGPBB(__this,StringLiteral_9874/*"OnLoginFail"*/,-1,in_x3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKKEKIKFFCJ(GLINEGMOOBM DKMMBMBMJBO)  [RVA 0x3149E78]
// SFRequestSender$$NKKEKIKFFCJ @ RVA 0x3149E78

void SFRequestSender__NKKEKIKFFCJ(SFRequestSender_o *__this,GLINEGMOOBM_o *DKMMBMBMJBO,MethodInfo *method)

{
  int32_t iVar1;
  NDPMLPGANCI_o *pNVar2;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  NCJBDBGIPNF_o **ppNVar3;
  
  if ((DAT_045667a5 & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_NKKEKIKFFCJ__);
    DAT_045667a5 = 1;
  }
  pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar2 != (NDPMLPGANCI_o *)0x0) {
    iVar1 = NDPMLPGANCI__FFIOCEOHPEM(pNVar2,(MethodInfo *)0x0);
    if (iVar1 == 0xb) {
      return;
    }
    pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar2 != (NDPMLPGANCI_o *)0x0) {
      iVar1 = NDPMLPGANCI__FFIOCEOHPEM(pNVar2,(MethodInfo *)0x0);
      if (iVar1 == 2) {
        return;
      }
      pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                    thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar2 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__JBFHBECEOAP(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
        ppNVar3 = &(__this->fields).DNLDAJENPFE;
        DialogsOpener__FIEOHKDCIHM(*ppNVar3,(MethodInfo *)0x0);
        *ppNVar3 = (NCJBDBGIPNF_o *)0x0;
        thunk_FUN_01c20e04(ppNVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int ECANAMKCGPJ()  [RVA 0x3149F6C]
// SFRequestSender$$ECANAMKCGPJ @ RVA 0x3149F6C

int32_t SFRequestSender__ECANAMKCGPJ(SFRequestSender_o *__this,MethodInfo *method)

{
  RaidConfig_o *__this_00;
  HJEODECHNDG_o *pHVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667a6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045667a6 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((__this_00 != (RaidConfig_o *)0x0) &&
     (pHVar1 = RaidConfig__KAPJBGIIHAA(__this_00,(MethodInfo *)0x0), pHVar1 != (HJEODECHNDG_o *)0x0
     )) {
    return (pHVar1->fields)._BMCKPDBEKKD_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public JSONObject MANGEOLLGCL()  [RVA 0x3143D88]
// SFRequestSender$$MANGEOLLGCL @ RVA 0x3143D88

SimpleJSON_JSONObject_o * SFRequestSender__MANGEOLLGCL(SFRequestSender_o *__this,MethodInfo *method)

{
  SimpleJSON_JSONObject_o *__this_00;
  System_String_o *pSVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  AJOGJBFNELI_o *pAVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667a7 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_20329/*"publicKey"*/);
    FUN_01bab630(&StringLiteral_17711/*"deviceToken"*/);
    FUN_01bab630(&StringLiteral_20221/*"platform"*/);
    FUN_01bab630(&StringLiteral_21045/*"signature"*/);
    DAT_045667a7 = 1;
    method = extraout_x1;
  }
  __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo,method);
  SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03243e40 to 03343f13 has its CatchHandler @ 03243e40
                       catch() { ... } // from try @ 03243e40 with catch @ 03243e40
                       catch() { ... } // from try @ 03243f44 with catch @ 03243e40
                       catch() { ... } // from try @ 03243fb8 with catch @ 03243e40
                       catch() { ... } // from try @ 03243fe0 with catch @ 03243e40
                       catch() { ... } // from try @ 03244010 with catch @ 03243e40 */
  pSVar1 = EOAOCPLIKOI__MHLLAKBCAHD((MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSON_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,StringLiteral_17711/*"deviceToken"*/,pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar1 = EOAOCPLIKOI__GLFGHFIEIPL((MethodInfo *)0x0);
    pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,StringLiteral_20221/*"platform"*/,pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
    if (pAVar3 != (AJOGJBFNELI_o *)0x0) {
      pSVar1 = AJOGJBFNELI__NKGPBKKCLBH(pAVar3,(MethodInfo *)0x0);
      pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,StringLiteral_20329/*"publicKey"*/,pSVar2,(__this_00->klass->vtable)._8_set_Item.method)
      ;
                    /* try { // try from 03243f14 to 03343f1b has its CatchHandler @ 03243fc4 */
      pAVar3 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
      if (pAVar3 != (AJOGJBFNELI_o *)0x0) {
        pSVar1 = AJOGJBFNELI__ONHDKNBGCLC(pAVar3,(MethodInfo *)0x0);
                    /* try { // try from 03243f30 to 03343f43 has its CatchHandler @ 03243fc0 */
        pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 03243f44 to 03343fb3 has its CatchHandler @ 03243e40 */
        (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                  (__this_00,StringLiteral_21045/*"signature"*/,pSVar2,
                   (__this_00->klass->vtable)._8_set_Item.method);
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JGNHEIICALL(Action CJNHFNHJHPE)  [RVA 0x3149FD8]
// SFRequestSender$$JGNHEIICALL @ RVA 0x3149FD8

void SFRequestSender__JGNHEIICALL(SFRequestSender_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = CJNHFNHJHPE;
  auVar1._0_8_ = __this;
  if ((DAT_045667a8 & 1) == 0) {
    auVar1 = FUN_01bab630(&System_Action_TypeInfo);
    DAT_045667a8 = 1;
  }
  FUN_03f935f8(auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== public bool DHMHNMCPFIH()  [RVA 0x314A074]
// SFRequestSender$$DHMHNMCPFIH @ RVA 0x314A074

bool SFRequestSender__DHMHNMCPFIH(SFRequestSender_o *__this,MethodInfo *method)

{
  return (__this->fields)._CPLKKCAJOJJ_k__BackingField;
}


// ===== private void FJOMLDLFJPI()  [RVA 0x3144C84]
// SFRequestSender$$FJOMLDLFJPI @ RVA 0x3144C84

void SFRequestSender__FJOMLDLFJPI(SFRequestSender_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  
  if ((DAT_045667a9 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045667a9 = 1;
    method = extraout_x1;
  }
  SFRequestSender__NDBIGCCHMPL(__this,method);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = SFRequestSender__DOGIINKIMKC(__this,method_00);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_03244d28;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_03244d28:
  pSVar3 = (System_Collections_IEnumerator_o *)(*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  ppSVar8 = &(__this->fields).KHJEAFKNAKF;
  *ppSVar8 = pSVar3;
  thunk_FUN_01c20e04(ppSVar8,pSVar3);
  return;
}


// ===== public void LIKCPEBFCEC()  [RVA 0x3149364]
// SFRequestSender$$LIKCPEBFCEC @ RVA 0x3149364

void SFRequestSender__LIKCPEBFCEC(SFRequestSender_o *__this,MethodInfo *method)

{
  bool bVar1;
  GKKKJLJFGBG_o *__this_00;
  System_Collections_Generic_List_EKGDLIKHEMA__o *__this_01;
  RaidConfig_o *pJVar2;
  RaidConfig_BGJBFFKJHHD_o *pJVar3;
  Google_Protobuf_Collections_RepeatedField_int__o *pGVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_02;
  System_Collections_Generic_List_long__o *__this_03;
  PGICCMFLDPI_o *__this_04;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_05;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  FEPPOONJCGI_o *pFVar7;
  Roster_o *pAVar8;
  System_Collections_Generic_List_Enumerator_T__o local_d8;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045667aa & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EKGDLIKHEMA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EKGDLIKHEMA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EKGDLIKHEMA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_get_Current__);
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_NAFJEEKCIPL__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
    FUN_01bab630(&StringLiteral_20477/*"refresh_free_gems"*/);
    FUN_01bab630(&StringLiteral_16341/*"added achievement to request: {0} - {1}"*/);
    DAT_045667aa = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (GKKKJLJFGBG_o *)thunk_FUN_01bda818(GKKKJLJFGBG_TypeInfo,method);
  GKKKJLJFGBG___ctor(__this_00,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar8 == (Roster_o *)0x0) {
LAB_03249820:
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this,StringLiteral_20477/*"refresh_free_gems"*/,(Google_Protobuf_IMessage_o *)__this_00,
               BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    return;
  }
  pFVar7 = (pAVar8->fields).IMJJJJJMMHL;
  if (pFVar7 != (FEPPOONJCGI_o *)0x0) {
    __this_01 = (pFVar7->fields).EBDCADCBPNM;
    if (__this_01 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_d8,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<EKGDLIKHEMA>_GetEnumerator__);
      local_80.fields._list =
           (System_Collections_Generic_List_T__o *)
           CONCAT44(local_d8.fields._list._4_4_,(int32_t)local_d8.fields._list);
      local_80.fields._index = local_d8.fields._index;
      local_80.fields._version = local_d8.fields._version;
      local_80.fields._current = local_d8.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<EKGDLIKHEMA>_MoveNext__
                               ), pIVar5 = local_80.fields._current, bVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pJVar2 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pJVar3 = RaidConfig__MJHBGJIIKEB(pJVar2,pIVar5[1].monitor,(MethodInfo *)0x0);
        if ((pJVar3 != (RaidConfig_BGJBFFKJHHD_o *)0x0) && (*(char *)&pIVar5[2].klass != '\0')) {
          if (__this_00 == (GKKKJLJFGBG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pGVar4 = (__this_00->fields).DFKIAOPJPCE;
          if (pGVar4 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Google_Protobuf_Collections_RepeatedField<int>__Add
                    (pGVar4,(pJVar3->fields).IGLHCNLNIPK,
                     Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
          local_d8.fields._list._0_4_ = (pJVar3->fields).IGLHCNLNIPK;
          pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_d8);
          pSVar6 = System_String__Format
                             (StringLiteral_16341/*"added achievement to request: {0} - {1}"*/,pIVar5,
                              (Il2CppObject *)(pJVar3->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<EKGDLIKHEMA>_Dispose__)
      ;
      __this_02 = (pAVar8->fields).HDDNEKLMLMF;
      if (__this_02 != (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_d8,(System_Collections_Generic_List_object__o *)__this_02,
                   Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
        local_a0.fields._list =
             (System_Collections_Generic_List_T__o *)
             CONCAT44(local_d8.fields._list._4_4_,(int32_t)local_d8.fields._list);
        local_a0.fields._index = local_d8.fields._index;
        local_a0.fields._version = local_d8.fields._version;
        local_a0.fields._current = local_d8.fields._current;
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_a0,
                             Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__
                            );
          pIVar5 = local_a0.fields._current;
          if (!bVar1) break;
          if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (0 < *(int *)((long)&local_a0.fields._current[2].klass + 4)) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if (pJVar2 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pJVar3 = RaidConfig__MJHBGJIIKEB
                               (pJVar2,(System_String_o *)pIVar5[7].klass,(MethodInfo *)0x0);
            if (pJVar3 != (RaidConfig_BGJBFFKJHHD_o *)0x0) {
              if (__this_00 == (GKKKJLJFGBG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pGVar4 = (__this_00->fields).DFKIAOPJPCE;
              if (pGVar4 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              Google_Protobuf_Collections_RepeatedField<int>__Add
                        (pGVar4,(pJVar3->fields).IGLHCNLNIPK,
                         Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
              local_d8.fields._list._0_4_ = (pJVar3->fields).IGLHCNLNIPK;
              pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_d8);
              pSVar6 = System_String__Format
                                 (StringLiteral_16341/*"added achievement to request: {0} - {1}"*/,pIVar5,
                                  (Il2CppObject *)(pJVar3->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__);
        __this_03 = (pAVar8->fields).super.LLDABLJEMBM;
        if (__this_03 != (System_Collections_Generic_List_long__o *)0x0) {
          System_Collections_Generic_List<long>__GetEnumerator
                    (&local_d8,__this_03,
                     Method_System_Collections_Generic_List<long>_GetEnumerator__);
          local_c0.fields._list =
               (System_Collections_Generic_List_T__o *)
               CONCAT44(local_d8.fields._list._4_4_,(int32_t)local_d8.fields._list);
          local_c0.fields._index = local_d8.fields._index;
          local_c0.fields._version = local_d8.fields._version;
          local_c0.fields._current = local_d8.fields._current;
          while (bVar1 = System_Collections_Generic_List_Enumerator<long>__MoveNext
                                   (&local_c0,
                                    Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__
                                   ), pIVar5 = local_c0.fields._current, bVar1) {
            __this_04 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
            PGICCMFLDPI___ctor(__this_04,(MethodInfo *)0x0);
            if (__this_04 == (PGICCMFLDPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (__this_04->fields).GDKPGIBMFPA = (int64_t)pIVar5;
            if (__this_00 == (GKKKJLJFGBG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_05 = (__this_00->fields).LJDACDDNJOD;
            if (__this_05 == (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            Google_Protobuf_Collections_RepeatedField<object>__Add
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_05,
                       (Il2CppObject *)__this_04,
                       Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Add__);
          }
          System_Collections_Generic_List_Enumerator<long>__Dispose
                    (&local_c0,Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
          goto LAB_03249820;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

