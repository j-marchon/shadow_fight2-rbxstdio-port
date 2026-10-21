// TypeDefIndex 799
// Namespace: 
// public class EEGDOGKBLNG
// Fields:
//   public const string GCDHLLBLJJD = "ctt";
//   private Action<IList<PIADCKMDDAK>> MMCHECDCGKF; // 0x10
//   private Action<IList<PIADCKMDDAK>> DAGJHIAIOML; // 0x18
//   private Action AFAHJIJMAJM; // 0x20
//   public int HHOPNIKFJNE; // 0x28
//   private int <DHPJJLCDAJD>k__BackingField; // 0x2C
//   public long NCMLGNEFKBF; // 0x30
//   private KAMBBJFPLGM MLAAJICBOAD; // 0x38
//   private Dictionary<string, string> KPPDBKGGEGA; // 0x40
//   private string JHMMCCKCFFH; // 0x48
//   private string NBLJHMNHDAE; // 0x50
//   private string PDHCLFKCAAE; // 0x58
//   private string IHLHMKHJPCC; // 0x60
//   private string HONOOAELMFJ; // 0x68
//   private KCFAKHLDKJM LPMFKCDDEIA; // 0x70
//   private bool PPKDOBDMEEK; // 0x74

// ===== public void LJDDDMFPMDF(Action<IList<PIADCKMDDAK>> CJNHFNHJHPE)  [RVA 0x306E4D8]
// EEGDOGKBLNG$$LJDDDMFPMDF @ RVA 0x306E4D8

void EEGDOGKBLNG__LJDDDMFPMDF
               (EEGDOGKBLNG_o *__this,System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_IList_PIADCKMDDAK___c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IList_PIADCKMDDAK___o *pSVar5;
  System_Action_IList_PIADCKMDDAK___o *source;
  
  if ((DAT_04565f4b & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    DAT_04565f4b = 1;
  }
  source = (__this->fields).MMCHECDCGKF;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IList<PIADCKMDDAK>>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IList<PIADCKMDDAK>>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IList_PIADCKMDDAK___o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public string LPKLOLAIHGJ()  [RVA 0x306E588]
// EEGDOGKBLNG$$LPKLOLAIHGJ @ RVA 0x306E588

System_String_o * EEGDOGKBLNG__LPKLOLAIHGJ(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  return (__this->fields).NBLJHMNHDAE;
}


// ===== public void KDHGGBJHMLN(string KGLJICLJHEL)  [RVA 0x306E590]
// EEGDOGKBLNG$$KDHGGBJHMLN @ RVA 0x306E590

void EEGDOGKBLNG__KDHGGBJHMLN(EEGDOGKBLNG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  (__this->fields).PDHCLFKCAAE = KGLJICLJHEL;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void JJBFCLBGNBO(long CJNHFNHJHPE)  [RVA 0x306E598]
// EEGDOGKBLNG$$JJBFCLBGNBO @ RVA 0x306E598

void EEGDOGKBLNG__JJBFCLBGNBO(EEGDOGKBLNG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  NGOFOPOGBMJ_o *pNVar2;
  
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if ((pKVar1 != (KAMBBJFPLGM_o *)0x0) &&
     (pNVar2 = (pKVar1->fields).CBEJJIHKEGF, pNVar2 != (NGOFOPOGBMJ_o *)0x0)) {
    (pNVar2->fields).GDKPGIBMFPA = CJNHFNHJHPE;
  }
  return;
}


// ===== public Dictionary<string, int> BJJOPEEAGGD()  [RVA 0x306E5B0]
// EEGDOGKBLNG$$BJJOPEEAGGD @ RVA 0x306E5B0

System_Collections_Generic_Dictionary_string__int__o *
EEGDOGKBLNG__BJJOPEEAGGD(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__int__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  long lVar3;
  
  if ((DAT_04565f4c & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&StringLiteral_8234/*"Key"*/);
    DAT_04565f4c = 1;
    method = extraout_x1;
  }
  lVar1 = Method_System_Array_Empty<string>__;
  lVar3 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar3 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__,method);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  pSVar2 = EEGDOGKBLNG__MPLCEKAPDHJ
                     (__this,StringLiteral_8234/*"Key"*/,
                      (System_String_array *)**(undefined8 **)(lVar1 + 0xb8),in_x3);
  return pSVar2;
}


// ===== public void PJDFGEMEJAC(int EABPLJNGAGE)  [RVA 0x306E98C]
// EEGDOGKBLNG$$PJDFGEMEJAC @ RVA 0x306E98C

void EEGDOGKBLNG__PJDFGEMEJAC(EEGDOGKBLNG_o *__this,int32_t EABPLJNGAGE,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
    (pKVar1->fields).EMOLIBOCKJK = EABPLJNGAGE;
  }
  return;
}


// ===== private void BHJOHOIMAKN(KAMBBJFPLGM MCCKDBNBCPM)  [RVA 0x306E99C]
// EEGDOGKBLNG$$BHJOHOIMAKN @ RVA 0x306E99C

void EEGDOGKBLNG__BHJOHOIMAKN(EEGDOGKBLNG_o *__this,KAMBBJFPLGM_o *MCCKDBNBCPM,MethodInfo *method)

{
  long lVar1;
  undefined8 *puVar2;
  KAMBBJFPLGM_o *pKVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_04565f4d & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_04565f4d = 1;
  }
  pKVar3 = (__this->fields).MLAAJICBOAD;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  if (MCCKDBNBCPM != (KAMBBJFPLGM_o *)0x0) {
    if ((pKVar3->fields).EMOLIBOCKJK == (MCCKDBNBCPM->fields).EMOLIBOCKJK) {
      return;
    }
    lVar1 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    plVar6 = (long *)**(undefined8 **)(lVar1 + 0xb8);
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(ODEIOKOJGDM_c **)(piVar5 + -2) == ODEIOKOJGDM_TypeInfo) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0316ea90;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01b81914(plVar6,ODEIOKOJGDM_TypeInfo,0);
LAB_0316ea90:
                    /* WARNING: Could not recover jumptable at 0x0316eaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,0,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KBPKLBHOGAP(Action CJNHFNHJHPE)  [RVA 0x306EAAC]
// EEGDOGKBLNG$$KBPKLBHOGAP @ RVA 0x306EAAC

void EEGDOGKBLNG__KBPKLBHOGAP(EEGDOGKBLNG_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04565f4e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565f4e = 1;
  }
  ppSVar4 = &(__this->fields).AFAHJIJMAJM;
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


// ===== public int OHDDLJKGLGA(string FLMDPLPNBFC)  [RVA 0x306EB48]
// EEGDOGKBLNG$$OHDDLJKGLGA @ RVA 0x306EB48

int32_t EEGDOGKBLNG__OHDDLJKGLGA
                  (EEGDOGKBLNG_o *__this,System_String_o *FLMDPLPNBFC,MethodInfo *method)

{
  int32_t iVar1;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar2;
  MethodInfo *method_00;
  
  if ((DAT_04565f4f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565f4f = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_00 != (JMDPBFOCHHP_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pJVar2 = JMDPBFOCHHP__FPPDGOEOJCH(__this_00,FLMDPLPNBFC,(MethodInfo *)0x0);
    if (pJVar2 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) {
      iVar1 = EEGDOGKBLNG__OHCGFHJNEGO(__this,FLMDPLPNBFC,method_00);
      return iVar1;
    }
    iVar1 = EEGDOGKBLNG__APFFEAJBAEK(__this,FLMDPLPNBFC,method_00);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LIAFPDDOGIH(bool IOLOMIIIOPM, bool PKGIGLFCIBK = True)  [RVA 0x306ED8C]
// EEGDOGKBLNG$$LIAFPDDOGIH @ RVA 0x306ED8C

void EEGDOGKBLNG__LIAFPDDOGIH
               (EEGDOGKBLNG_o *__this,bool IOLOMIIIOPM,bool PKGIGLFCIBK,MethodInfo *method)

{
  AJOGJBFNELI_o *__this_00;
  
  if ((DAT_04565f50 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f50 = 1;
  }
  (__this->fields).PPKDOBDMEEK = IOLOMIIIOPM;
  if (!PKGIGLFCIBK) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (__this_00 != (AJOGJBFNELI_o *)0x0) {
    AJOGJBFNELI__LIAFPDDOGIH(__this_00,IOLOMIIIOPM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void POPAIDFJPEB(bool OIJDDKPKJIO)  [RVA 0x306EE20]
// EEGDOGKBLNG$$POPAIDFJPEB @ RVA 0x306EE20

void EEGDOGKBLNG__POPAIDFJPEB(EEGDOGKBLNG_o *__this,bool OIJDDKPKJIO,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  MethodInfo *pMVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  ACHLOMELAJE_o *pAVar5;
  KAMBBJFPLGM_o *pKVar6;
  LPAPAMPGDFN_o *pLVar7;
  
  pMVar4 = (MethodInfo *)(ulong)OIJDDKPKJIO;
  if ((DAT_04565f51 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21839/*"update_tutorial"*/);
    DAT_04565f51 = 1;
    pMVar4 = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    pMVar4 = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = extraout_x1_03;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    pMVar4 = extraout_x1_04;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = extraout_x1_05;
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar5 == (ACHLOMELAJE_o *)0x0) ||
     (pLVar7 = (pAVar5->fields).LMCDOMHENMC, pLVar7 == (LPAPAMPGDFN_o *)0x0)) goto LAB_0316f07c;
  pKVar6 = (__this->fields).MLAAJICBOAD;
  if (pKVar6 == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  iVar1 = (pLVar7->fields).AMIMEMOELHE;
  if (!OIJDDKPKJIO) {
    bVar3 = KAMBBJFPLGM__GLMBJCDGFOJ(pKVar6,(MethodInfo *)0x0);
    pKVar6 = (__this->fields).MLAAJICBOAD;
    pMVar4 = extraout_x1_06;
    if (bVar3) {
      if (pKVar6 == (KAMBBJFPLGM_o *)0x0) goto LAB_0316f07c;
      iVar2 = (pKVar6->fields).GNKNDHJHFOC;
      if (iVar1 <= iVar2) {
        if (iVar2 <= iVar1) {
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
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
            (pKVar6 = (__this->fields).MLAAJICBOAD, pKVar6 != (KAMBBJFPLGM_o *)0x0)) &&
           (pLVar7 = (pAVar5->fields).LMCDOMHENMC, pLVar7 != (LPAPAMPGDFN_o *)0x0)) {
          LPAPAMPGDFN__MBIEJFDDPAG(pLVar7,(pKVar6->fields).GNKNDHJHFOC,(MethodInfo *)0x0);
          return;
        }
        goto LAB_0316f07c;
      }
    }
    else if (pKVar6 == (KAMBBJFPLGM_o *)0x0) goto LAB_0316f07c;
  }
  (pKVar6->fields).GNKNDHJHFOC = iVar1;
  if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = extraout_x1_07;
  }
  if (KDDOKHLOKMI_TypeInfo->static_fields->MANGIHDNLPM == false) {
LAB_0316f068:
    EEGDOGKBLNG__BBMCMFOPMFN(__this,pMVar4);
    return;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_00->fields).value_ = (long)iVar1 & ((long)iVar1 >> 0x3f ^ 0xffffffffffffffffU);
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_21839/*"update_tutorial"*/,
                 (Google_Protobuf_IMessage_o *)__this_00,(System_Action_KEFHDOHHHML__o *)0x0,0.0,
                 (Il2CppObject *)0x0,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_08;
      goto LAB_0316f068;
    }
  }
LAB_0316f07c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int KKMICNJPOKE()  [RVA 0x306F0E0]
// EEGDOGKBLNG$$KKMICNJPOKE @ RVA 0x306F0E0

int32_t EEGDOGKBLNG__KKMICNJPOKE(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  KAMBBJFPLGM_o *pKVar3;
  EOLFEKNCPLM_o *pEVar4;
  
  pKVar3 = (__this->fields).MLAAJICBOAD;
  iVar2 = 0;
  if (pKVar3 != (KAMBBJFPLGM_o *)0x0) {
    bVar1 = KAMBBJFPLGM__FOBHCKNLADH(pKVar3,(MethodInfo *)0x0);
    if (bVar1) {
      pKVar3 = (__this->fields).MLAAJICBOAD;
      if ((pKVar3 == (KAMBBJFPLGM_o *)0x0) ||
         (pEVar4 = (pKVar3->fields).FLAFELDNABC, pEVar4 == (EOLFEKNCPLM_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = (pEVar4->fields).ODDCBFOLIGB;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ===== public bool EKIGAHIBDAG()  [RVA 0x306F124]
// EEGDOGKBLNG$$EKIGAHIBDAG @ RVA 0x306F124

bool EEGDOGKBLNG__EKIGAHIBDAG(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  return (__this->fields).PPKDOBDMEEK;
}


// ===== private void LHHHAKCIBHC()  [RVA 0x306F12C]
// EEGDOGKBLNG$$LHHHAKCIBHC @ RVA 0x306F12C

void EEGDOGKBLNG__LHHHAKCIBHC(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Google_Protobuf_WellKnownTypes_StringValue_o *__this_01;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04565f52 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__);
    FUN_01bab630(&Method_EEGDOGKBLNG_JEOCNEDKJKE__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
    FUN_01bab630(&StringLiteral_18647/*"get_var"*/);
    DAT_04565f52 = 1;
    method = extraout_x1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).KPPDBKGGEGA;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_b8,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__);
    local_90.fields._version = local_b8.fields._version;
    local_90.fields._index = local_b8.fields._index;
    local_90.fields._dictionary = local_b8.fields._dictionary;
    local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_b8.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__
                        );
      value = local_90.fields._current.fields.key;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_90,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__
                  );
        return;
      }
      __this_01 = (Google_Protobuf_WellKnownTypes_StringValue_o *)
                  thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
      Google_Protobuf_WellKnownTypes_StringValue___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Google_Protobuf_WellKnownTypes_StringValue_o *)0x0) break;
      Google_Protobuf_WellKnownTypes_StringValue__set_Value
                (__this_01,(System_String_o *)value,(MethodInfo *)0x0);
      __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_02,StringLiteral_18647/*"get_var"*/,
                 (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,value,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public string PKAPCJACGOA()  [RVA 0x306F37C]
// EEGDOGKBLNG$$PKAPCJACGOA @ RVA 0x306F37C

System_String_o * EEGDOGKBLNG__PKAPCJACGOA(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  return (__this->fields).HONOOAELMFJ;
}


// ===== public void KFDOOFMOAEH(PIADCKMDDAK CHMGGEMGDPE, bool CBBJMNGHMIF)  [RVA 0x306F384]
// EEGDOGKBLNG$$KFDOOFMOAEH @ RVA 0x306F384

void EEGDOGKBLNG__KFDOOFMOAEH
               (EEGDOGKBLNG_o *__this,PIADCKMDDAK_o *CHMGGEMGDPE,bool CBBJMNGHMIF,MethodInfo *method
               )

{
  int iVar1;
  bool bVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Il2CppObject *pIVar3;
  uint uVar4;
  KAMBBJFPLGM_o *pKVar5;
  System_Action_IList_PIADCKMDDAK___o *pSVar6;
  int iVar7;
  
  if ((DAT_04565f53 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_04565f53 = 1;
  }
  pKVar5 = (__this->fields).MLAAJICBOAD;
  if (pKVar5 == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  __this_00 = (pKVar5->fields).AKFPFIHIHOC;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar1 = (__this_00->fields).count;
    iVar7 = 1;
    bVar2 = 0 < iVar1;
    while (bVar2) {
      pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,iVar7 + -1,
                          Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
      if ((pIVar3 == (Il2CppObject *)0x0) || (CHMGGEMGDPE == (PIADCKMDDAK_o *)0x0))
      goto LAB_0316f4d0;
      bVar2 = System_String__op_Equality
                        (pIVar3[1].monitor,(CHMGGEMGDPE->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
      if (bVar2) {
        if (CBBJMNGHMIF) {
          uVar4 = (CHMGGEMGDPE->fields).GDKPGIBMFPA + *(int *)&pIVar3[2].klass;
          uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        }
        else {
          uVar4 = (CHMGGEMGDPE->fields).GDKPGIBMFPA;
        }
        *(uint *)&pIVar3[2].klass = uVar4;
        goto LAB_0316f49c;
      }
      pKVar5 = (__this->fields).MLAAJICBOAD;
      if (pKVar5 == (KAMBBJFPLGM_o *)0x0) goto LAB_0316f4d0;
      __this_00 = (pKVar5->fields).AKFPFIHIHOC;
      bVar2 = iVar7 < iVar1;
      iVar7 = iVar7 + 1;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
      goto LAB_0316f4d0;
    }
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (Il2CppObject *)CHMGGEMGDPE,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
LAB_0316f49c:
    pKVar5 = (__this->fields).MLAAJICBOAD;
    if ((pKVar5 != (KAMBBJFPLGM_o *)0x0) &&
       (pSVar6 = (__this->fields).DAGJHIAIOML, pSVar6 != (System_Action_IList_PIADCKMDDAK___o *)0x0)
       ) {
                    /* WARNING: Could not recover jumptable at 0x0316f4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar6->fields).super.super.invoke_impl)
                ((pSVar6->fields).super.super.method_code,(pKVar5->fields).AKFPFIHIHOC,
                 (pSVar6->fields).super.super.method);
      return;
    }
  }
LAB_0316f4d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KODPPOKHKML(Action<IList<PIADCKMDDAK>> CJNHFNHJHPE)  [RVA 0x306F4D4]
// EEGDOGKBLNG$$KODPPOKHKML @ RVA 0x306F4D4

void EEGDOGKBLNG__KODPPOKHKML
               (EEGDOGKBLNG_o *__this,System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_IList_PIADCKMDDAK___c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IList_PIADCKMDDAK___o *pSVar5;
  System_Action_IList_PIADCKMDDAK___o **ppSVar6;
  System_Action_IList_PIADCKMDDAK___o *a;
  
  if ((DAT_04565f54 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    DAT_04565f54 = 1;
  }
  ppSVar6 = &(__this->fields).DAGJHIAIOML;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IList<PIADCKMDDAK>>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IList<PIADCKMDDAK>>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IList_PIADCKMDDAK___o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void CBFAEPDJDNL()  [RVA 0x306F584]
// EEGDOGKBLNG$$CBFAEPDJDNL @ RVA 0x306F584

/* WARNING: Removing unreachable block (ram,0x0316f750) */

void EEGDOGKBLNG__CBFAEPDJDNL(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  MethodInfo *extraout_x1;
  KAMBBJFPLGM_o *pKVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04565f55 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__);
    DAT_04565f55 = 1;
    method = extraout_x1;
  }
  pKVar7 = (__this->fields).MLAAJICBOAD;
  if (pKVar7 == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  __this_00 = (pKVar7->fields).AKFPFIHIHOC;
  if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                      Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__)
  ;
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar8 = pSVar4->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_0316f658;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0316f658:
    uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar9 & 1) == 0) {
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return;
      }
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 == 0) goto LAB_0316f70c;
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      break;
    }
    pSVar8 = pSVar4->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_0316f6b4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo,0);
LAB_0316f6b4:
    lVar6 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    *(undefined4 *)(lVar6 + 0x20) = 0;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar8->vtable + *piVar10;
      goto LAB_0316f728;
    }
  }
LAB_0316f70c:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_0316f728:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  return;
}


// ===== public void .ctor()  [RVA 0x306F80C]
// EEGDOGKBLNG$$.ctor @ RVA 0x306F80C

void EEGDOGKBLNG___ctor(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Action_IList_PIADCKMDDAK___o **ppSVar3;
  System_Action_o **ppSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar6;
  AJOGJBFNELI_o *pAVar7;
  System_String_o *pSVar8;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_IList_PIADCKMDDAK___o *pSVar9;
  System_Action_o *pSVar10;
  System_String_o **ppSVar11;
  System_String_o **ppSVar12;
  System_String_o **ppSVar13;
  System_String_o **ppSVar14;
  System_String_o **ppSVar15;
  
  if ((DAT_04565f56 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_EEGDOGKBLNG_<>c_EACNDPGHDCB__);
    FUN_01bab630(&Method_EEGDOGKBLNG_<>c_JFILMEMNEPO__);
    FUN_01bab630(&Method_EEGDOGKBLNG_<>c_MCPOAPOBAHA__);
    FUN_01bab630(&EEGDOGKBLNG_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_17504/*"ctt"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04565f56 = 1;
    method = extraout_x1;
  }
  if ((EEGDOGKBLNG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EEGDOGKBLNG_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar9 = EEGDOGKBLNG_<>c_TypeInfo->static_fields->__9__25_0;
  if (pSVar9 == (System_Action_IList_PIADCKMDDAK___o *)0x0) {
    if ((EEGDOGKBLNG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EEGDOGKBLNG_<>c_TypeInfo,method);
    }
    pSVar9 = (System_Action_IList_PIADCKMDDAK___o *)
             thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar3 = &EEGDOGKBLNG_<>c_TypeInfo->static_fields->__9__25_0;
    *ppSVar3 = pSVar9;
    thunk_FUN_01c20e04(ppSVar3,pSVar9);
  }
  if (__this != (EEGDOGKBLNG_o *)0x0) {
    (__this->fields).MMCHECDCGKF = pSVar9;
    thunk_FUN_01c20e04(&__this->fields,pSVar9);
    if ((EEGDOGKBLNG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar9 = EEGDOGKBLNG_<>c_TypeInfo->static_fields->__9__25_1;
    if (pSVar9 == (System_Action_IList_PIADCKMDDAK___o *)0x0) {
      if ((EEGDOGKBLNG_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar9 = (System_Action_IList_PIADCKMDDAK___o *)
               thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar3 = &EEGDOGKBLNG_<>c_TypeInfo->static_fields->__9__25_1;
      *ppSVar3 = pSVar9;
      thunk_FUN_01c20e04(ppSVar3,pSVar9);
    }
    ppSVar3 = &(__this->fields).DAGJHIAIOML;
    *ppSVar3 = pSVar9;
    thunk_FUN_01c20e04(ppSVar3,pSVar9);
    if ((EEGDOGKBLNG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = EEGDOGKBLNG_<>c_TypeInfo->static_fields->__9__25_2;
    if (pSVar10 == (System_Action_o *)0x0) {
      if ((EEGDOGKBLNG_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar10 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar4 = &EEGDOGKBLNG_<>c_TypeInfo->static_fields->__9__25_2;
      *ppSVar4 = pSVar10;
      thunk_FUN_01c20e04(ppSVar4,pSVar10);
    }
    ppSVar4 = &(__this->fields).AFAHJIJMAJM;
    *ppSVar4 = pSVar10;
    thunk_FUN_01c20e04(ppSVar4,pSVar10);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (pSVar5,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    ppSVar6 = &(__this->fields).KPPDBKGGEGA;
    *ppSVar6 = (System_Collections_Generic_Dictionary_string__string__o *)pSVar5;
    thunk_FUN_01c20e04(ppSVar6,pSVar5);
    ppSVar12 = &(__this->fields).JHMMCCKCFFH;
    *ppSVar12 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar12);
    ppSVar13 = &(__this->fields).NBLJHMNHDAE;
    *ppSVar13 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar13);
    ppSVar14 = &(__this->fields).PDHCLFKCAAE;
    *ppSVar14 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar14);
    ppSVar15 = &(__this->fields).IHLHMKHJPCC;
    *ppSVar15 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar15);
    ppSVar11 = &(__this->fields).HONOOAELMFJ;
    *ppSVar11 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar11);
    (__this->fields).LPMFKCDDEIA = 4;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).HHOPNIKFJNE = -1;
    (__this->fields)._DHPJJLCDAJD_k__BackingField = -1;
    *ppSVar12 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar12);
    *ppSVar13 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar13);
    *ppSVar14 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar14);
    *ppSVar15 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar15);
    *ppSVar11 = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ppSVar11);
    (__this->fields).PPKDOBDMEEK = false;
    (__this->fields).NCMLGNEFKBF = 0;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar7 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
    if (pAVar7 != (AJOGJBFNELI_o *)0x0) {
      pSVar8 = AJOGJBFNELI__PKAPCJACGOA(pAVar7,(MethodInfo *)0x0);
      if ((DAT_04565f77 & 1) == 0) {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565f77 = 1;
      }
      *ppSVar11 = pSVar8;
      thunk_FUN_01c20e04(ppSVar11,pSVar8);
      pAVar7 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
      if (pAVar7 != (AJOGJBFNELI_o *)0x0) {
        iVar2 = AJOGJBFNELI__OAHBPALGKGJ(pAVar7,(MethodInfo *)0x0);
        if ((DAT_04565f59 & 1) == 0) {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565f59 = 1;
        }
        (__this->fields).LPMFKCDDEIA = iVar2;
        pAVar7 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
        if (pAVar7 != (AJOGJBFNELI_o *)0x0) {
          bVar1 = AJOGJBFNELI__EKIGAHIBDAG(pAVar7,(MethodInfo *)0x0);
          if ((DAT_04565f50 & 1) == 0) {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565f50 = 1;
          }
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).KPPDBKGGEGA;
          (__this->fields).PPKDOBDMEEK = bVar1;
          if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (pSVar5,StringLiteral_17504/*"ctt"*/,StringLiteral_1567/*"0"*/,
                       Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int IGIHHCEONEM()  [RVA 0x306FDD8]
// EEGDOGKBLNG$$IGIHHCEONEM @ RVA 0x306FDD8

int32_t EEGDOGKBLNG__IGIHHCEONEM(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  KAMBBJFPLGM_o *pKVar2;
  EOLFEKNCPLM_o *pEVar3;
  GKLPDMLELJF_o *pGVar4;
  
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
    iVar1 = 1;
  }
  else {
    pEVar3 = (pKVar2->fields).FLAFELDNABC;
    if ((pEVar3 == (EOLFEKNCPLM_o *)0x0) ||
       (pGVar4 = (pEVar3->fields).MCOPPCNPAHF, pGVar4 == (GKLPDMLELJF_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pGVar4->fields).PEBHLKLGDBM;
  }
  return iVar1;
}


// ===== public string GGHGAIBPPJO()  [RVA 0x306FE0C]
// EEGDOGKBLNG$$GGHGAIBPPJO @ RVA 0x306FE0C

System_String_o * EEGDOGKBLNG__GGHGAIBPPJO(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  int32_t startIndex;
  KAMBBJFPLGM_o *pKVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  System_String_o *pSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04565f57 & 1) == 0) {
    auVar5 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565f57 = 1;
  }
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
    pEVar2 = (pKVar1->fields).FLAFELDNABC;
    if (((pEVar2 != (EOLFEKNCPLM_o *)0x0) &&
        (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 != (GKLPDMLELJF_o *)0x0)) &&
       (pSVar4 = (pGVar3->fields).FFOIEHLJLDA, pSVar4 != (System_String_o *)0x0)) {
      startIndex = System_String__IndexOf(pSVar4,0x23,(MethodInfo *)0x0);
      pSVar4 = System_String__Substring(pSVar4,startIndex,(MethodInfo *)0x0);
      return pSVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
  }
  return StringLiteral_1/*""*/;
}


// ===== public void FACPGEOBOAJ()  [RVA 0x306FE9C]
// EEGDOGKBLNG$$FACPGEOBOAJ @ RVA 0x306FE9C

void EEGDOGKBLNG__FACPGEOBOAJ(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  if ((DAT_04565f58 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565f58 = 1;
  }
  EEGDOGKBLNG__JMMFCMIIDHL(__this,StringLiteral_1/*""*/,true,in_x3);
  EEGDOGKBLNG__IJIJACHHPBO(__this,4,true,in_x3);
  return;
}


// ===== public int GNIBFOOLMHK()  [RVA 0x306FEF8]
// EEGDOGKBLNG$$GNIBFOOLMHK @ RVA 0x306FEF8

int32_t EEGDOGKBLNG__GNIBFOOLMHK(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
    return (pKVar1->fields).EMOLIBOCKJK;
  }
  return -1;
}


// ===== public void IJIJACHHPBO(KCFAKHLDKJM EFJNKONCKNF, bool PKGIGLFCIBK = True)  [RVA 0x306FD48]
// EEGDOGKBLNG$$IJIJACHHPBO @ RVA 0x306FD48

void EEGDOGKBLNG__IJIJACHHPBO
               (EEGDOGKBLNG_o *__this,int32_t EFJNKONCKNF,bool PKGIGLFCIBK,MethodInfo *method)

{
  AJOGJBFNELI_o *__this_00;
  
  if ((DAT_04565f59 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f59 = 1;
  }
  (__this->fields).LPMFKCDDEIA = EFJNKONCKNF;
  if (!PKGIGLFCIBK) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (__this_00 != (AJOGJBFNELI_o *)0x0) {
    AJOGJBFNELI__IJIJACHHPBO(__this_00,(__this->fields).LPMFKCDDEIA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int PDHOLMCEAFE()  [RVA 0x306FF10]
// EEGDOGKBLNG$$PDHOLMCEAFE @ RVA 0x306FF10

int32_t EEGDOGKBLNG__PDHOLMCEAFE(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04565f5a & 1) == 0) {
    auVar3 = FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__
                         );
    DAT_04565f5a = 1;
  }
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if ((pKVar1 != (KAMBBJFPLGM_o *)0x0) &&
     (pGVar2 = (pKVar1->fields).AKFPFIHIHOC,
     pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    return (pGVar2->fields).count;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public bool JAIGNIGLBBN()  [RVA 0x306FF60]
// EEGDOGKBLNG$$JAIGNIGLBBN @ RVA 0x306FF60

bool EEGDOGKBLNG__JAIGNIGLBBN(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  PEEIMHCMDND_o *pPVar3;
  SimpleJSON_JSONNode_o *a;
  SimpleJSON_JSONArray_o *__this_00;
  System_String_o *__this_01;
  long *plVar4;
  System_String_o *strB;
  MethodInfo *extraout_x1;
  KAMBBJFPLGM_o *pKVar5;
  System_String_o *local_28;
  
  if ((DAT_04565f5b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_18062/*"eq"*/);
    DAT_04565f5b = 1;
    method = extraout_x1;
  }
  local_28 = (System_String_o *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pPVar3 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  pKVar5 = (__this->fields).MLAAJICBOAD;
  if ((pKVar5 != (KAMBBJFPLGM_o *)0x0) && (pPVar3 != (PEEIMHCMDND_o *)0x0)) {
    a = PEEIMHCMDND__BHCOOILLMGA(pPVar3,(pKVar5->fields).FLAFELDNABC,&local_28,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar1 = SimpleJSON_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return false;
    }
    __this_00 = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
    SimpleJSON_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar3 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
    if ((((pPVar3 != (PEEIMHCMDND_o *)0x0) &&
         (PEEIMHCMDND__OGHFMBJIOBB(pPVar3,(SimpleJSON_JSONNode_o *)__this_00,(MethodInfo *)0x0),
         __this_00 != (SimpleJSON_JSONArray_o *)0x0)) &&
        (__this_01 = (System_String_o *)
                     (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._3_ToString.method),
        a != (SimpleJSON_JSONNode_o *)0x0)) &&
       ((plVar4 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                    (a,StringLiteral_18062/*"eq"*/,(a->klass->vtable)._7_get_Item.method),
        plVar4 != (long *)0x0 &&
        (strB = (System_String_o *)
                (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170)),
        __this_01 != (System_String_o *)0x0)))) {
      iVar2 = System_String__CompareTo(__this_01,strB,(MethodInfo *)0x0);
      return iVar2 != 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string EFHDHAIECDI()  [RVA 0x30700EC]
// EEGDOGKBLNG$$EFHDHAIECDI @ RVA 0x30700EC

System_String_o * EEGDOGKBLNG__EFHDHAIECDI(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  return (__this->fields).IHLHMKHJPCC;
}


// ===== public void BNKOEFAHHIP(string KGLJICLJHEL, bool PKGIGLFCIBK = True)  [RVA 0x30700F4]
// EEGDOGKBLNG$$BNKOEFAHHIP @ RVA 0x30700F4

void EEGDOGKBLNG__BNKOEFAHHIP
               (EEGDOGKBLNG_o *__this,System_String_o *KGLJICLJHEL,bool PKGIGLFCIBK,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  System_String_o **ppSVar1;
  
  if ((DAT_04565f5c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f5c = 1;
  }
  ppSVar1 = &(__this->fields).JHMMCCKCFFH;
  *ppSVar1 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar1,KGLJICLJHEL);
  if (!PKGIGLFCIBK) {
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__HNKJELFDFAJ(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IOCIGCHAANI(string PMACBPAMPJA, string CJNHFNHJHPE)  [RVA 0x30701C0]
// EEGDOGKBLNG$$IOCIGCHAANI @ RVA 0x30701C0

void EEGDOGKBLNG__IOCIGCHAANI
               (EEGDOGKBLNG_o *__this,System_String_o *PMACBPAMPJA,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  ALOGBMGGBEP_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  
  if ((DAT_04565f5d & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&StringLiteral_20954/*"set_var"*/);
    FUN_01bab630(&StringLiteral_10312/*"PlayerData::SetVar: "*/);
    FUN_01bab630(&StringLiteral_235/*" - "*/);
    DAT_04565f5d = 1;
  }
  pSVar2 = System_String__Concat
                     (StringLiteral_10312/*"PlayerData::SetVar: "*/,PMACBPAMPJA,StringLiteral_235/*" - "*/,CJNHFNHJHPE,
                      (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  if ((__this->fields).MLAAJICBOAD == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KPPDBKGGEGA;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Item
                       (pSVar3,(Il2CppObject *)PMACBPAMPJA,
                        Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    bVar1 = System_String__op_Inequality(pSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KPPDBKGGEGA
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (pSVar3,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)CJNHFNHJHPE,
                 Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
      __this_00 = (ALOGBMGGBEP_o *)thunk_FUN_01bda818(ALOGBMGGBEP_TypeInfo);
      ALOGBMGGBEP___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (ALOGBMGGBEP_o *)0x0) {
        ALOGBMGGBEP__CNILLEFMALH(__this_00,PMACBPAMPJA,(MethodInfo *)0x0);
        ALOGBMGGBEP__BKDOEIHJFAP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,StringLiteral_20954/*"set_var"*/,
                     (Google_Protobuf_IMessage_o *)__this_00,(System_Action_KEFHDOHHHML__o *)0x0,0.0
                     ,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IFOIOCBNKDF(long CJNHFNHJHPE)  [RVA 0x3070384]
// EEGDOGKBLNG$$IFOIOCBNKDF @ RVA 0x3070384

void EEGDOGKBLNG__IFOIOCBNKDF(EEGDOGKBLNG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
    (pKVar1->fields).FLFGAIPCCJK = CJNHFNHJHPE;
  }
  return;
}


// ===== public void JOMFHMDCMNG(KAMBBJFPLGM LLJHKLPGMGC)  [RVA 0x3070394]
// EEGDOGKBLNG$$JOMFHMDCMNG @ RVA 0x3070394

void EEGDOGKBLNG__JOMFHMDCMNG(EEGDOGKBLNG_o *__this,KAMBBJFPLGM_o *LLJHKLPGMGC,MethodInfo *method)

{
  GALHNMPIEHA_o *__this_00;
  System_Action_IList_PIADCKMDDAK___o *pSVar1;
  KAMBBJFPLGM_o *pKVar2;
  System_Action_o *pSVar3;
  KAMBBJFPLGM_o **ppKVar4;
  
  if ((DAT_04565f5e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565f5e = 1;
  }
  if (LLJHKLPGMGC == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  EEGDOGKBLNG__LLNLBFAEJNC(__this,LLJHKLPGMGC,method);
  EEGDOGKBLNG__BHJOHOIMAKN(__this,LLJHKLPGMGC,method);
  ppKVar4 = &(__this->fields).MLAAJICBOAD;
  *ppKVar4 = LLJHKLPGMGC;
  thunk_FUN_01c20e04(ppKVar4,LLJHKLPGMGC);
  EEGDOGKBLNG__POPAIDFJPEB(__this,false,method);
  if (*ppKVar4 != (KAMBBJFPLGM_o *)0x0) {
    if (((*ppKVar4)->fields).IGPJEDLPAGI != (BPBGAAHBFKH_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
      if ((*ppKVar4 == (KAMBBJFPLGM_o *)0x0) || (__this_00 == (GALHNMPIEHA_o *)0x0))
      goto LAB_031704b4;
      GALHNMPIEHA__CDGDOLDEIBD(__this_00,((*ppKVar4)->fields).IGPJEDLPAGI,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).MMCHECDCGKF;
    if (pSVar1 != (System_Action_IList_PIADCKMDDAK___o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,0,(pSVar1->fields).super.super.method);
      pKVar2 = (__this->fields).MLAAJICBOAD;
      if ((pKVar2 != (KAMBBJFPLGM_o *)0x0) &&
         (pSVar1 = (__this->fields).DAGJHIAIOML,
         pSVar1 != (System_Action_IList_PIADCKMDDAK___o *)0x0)) {
        (*(code *)(pSVar1->fields).super.super.invoke_impl)
                  ((pSVar1->fields).super.super.method_code,(pKVar2->fields).AKFPFIHIHOC,
                   (pSVar1->fields).super.super.method);
        pSVar3 = (__this->fields).AFAHJIJMAJM;
        if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031704a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
          return;
        }
      }
    }
  }
LAB_031704b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool CLJIMCDAEKO()  [RVA 0x306C458]
// EEGDOGKBLNG$$CLJIMCDAEKO @ RVA 0x306C458

bool EEGDOGKBLNG__CLJIMCDAEKO(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *__this_00;
  
  __this_00 = (__this->fields).MLAAJICBOAD;
  if (__this_00 != (KAMBBJFPLGM_o *)0x0) {
                    /* try { // try from 0316c460 to 0326c607 has its CatchHandler @ 0316c330 */
    bVar1 = KAMBBJFPLGM__ODJAMCJCHGG(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public void PNFJNOHLGCF(string DIIDFLPOBMC, int GBLKICMLIHH)  [RVA 0x30705C8]
// EEGDOGKBLNG$$PNFJNOHLGCF @ RVA 0x30705C8

void EEGDOGKBLNG__PNFJNOHLGCF
               (EEGDOGKBLNG_o *__this,System_String_o *DIIDFLPOBMC,int32_t GBLKICMLIHH,
               MethodInfo *method)

{
  return;
}


// ===== public void BALIJLHGKFM(KCPFIELGGLA GMCEHJAIFBJ)  [RVA 0x30705CC]
// EEGDOGKBLNG$$BALIJLHGKFM @ RVA 0x30705CC

void EEGDOGKBLNG__BALIJLHGKFM(EEGDOGKBLNG_o *__this,KCPFIELGGLA_o *GMCEHJAIFBJ,MethodInfo *method)

{
  PIADCKMDDAK_o *OAOLCGAIILM;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  MethodInfo *method_00;
  KAMBBJFPLGM_o *pKVar1;
  System_Action_IList_PIADCKMDDAK___o *pSVar2;
  int index;
  
  if ((DAT_04565f5f & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_KIAOELALKBL<PIADCKMDDAK>__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_04565f5f = 1;
  }
  if ((GMCEHJAIFBJ == (KCPFIELGGLA_o *)0x0) ||
     ((__this->fields).MLAAJICBOAD == (KAMBBJFPLGM_o *)0x0)) {
    return;
  }
  __this_00 = (GMCEHJAIFBJ->fields).EHBNKDHKJNI;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields).count <= index) {
        pKVar1 = (__this->fields).MLAAJICBOAD;
        if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
          AJKNKCLEEAD__KIAOELALKBL<object>
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)(pKVar1->fields).LEJBLHJFJHP,
                     (System_Collections_Generic_IList_T__o *)__this_00,
                     Method_AJKNKCLEEAD_KIAOELALKBL<PIADCKMDDAK>__);
          pSVar2 = (__this->fields).MMCHECDCGKF;
          if (pSVar2 != (System_Action_IList_PIADCKMDDAK___o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031706c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar2->fields).super.super.invoke_impl)
                      ((pSVar2->fields).super.super.method_code,0,
                       (pSVar2->fields).super.super.method);
            return;
          }
        }
        break;
      }
      method_00 = Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__;
      OAOLCGAIILM = (PIADCKMDDAK_o *)
                    Google_Protobuf_Collections_RepeatedField<object>__get_Item
                              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                               (MethodInfo_295F6AC *)
                               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                              );
      EEGDOGKBLNG__LLNLBFAEJNC(__this,OAOLCGAIILM,method_00);
      __this_00 = (GMCEHJAIFBJ->fields).EHBNKDHKJNI;
      index = index + 1;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HOOFGFHMIAB(string KGLJICLJHEL, bool PKGIGLFCIBK = True)  [RVA 0x3070828]
// EEGDOGKBLNG$$HOOFGFHMIAB @ RVA 0x3070828

void EEGDOGKBLNG__HOOFGFHMIAB
               (EEGDOGKBLNG_o *__this,System_String_o *KGLJICLJHEL,bool PKGIGLFCIBK,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  System_String_o **ppSVar1;
  
  if ((DAT_04565f60 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f60 = 1;
  }
  ppSVar1 = &(__this->fields).NBLJHMNHDAE;
  *ppSVar1 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar1,KGLJICLJHEL);
  if (!PKGIGLFCIBK) {
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__HNKJELFDFAJ(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BBMCMFOPMFN()  [RVA 0x306F080]
// EEGDOGKBLNG$$BBMCMFOPMFN @ RVA 0x306F080

void EEGDOGKBLNG__BBMCMFOPMFN(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *pNVar2;
  KAMBBJFPLGM_o *pKVar3;
  
  pKVar3 = (__this->fields).MLAAJICBOAD;
  if (((pKVar3 != (KAMBBJFPLGM_o *)0x0) && ((pKVar3->fields).GNKNDHJHFOC == 0x32)) &&
     (bVar1 = KFCFGKEHPNK__ECJLKNEAMKH(1,(MethodInfo *)0x0), bVar1)) {
    pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar2 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__DHMIJAAHPEI(pNVar2,(MethodInfo *)0x0);
      pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar2 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__NPDADBCINPL(pNVar2,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void AGCALOAKJEK()  [RVA 0x307091C]
// EEGDOGKBLNG$$AGCALOAKJEK @ RVA 0x307091C

void EEGDOGKBLNG__AGCALOAKJEK(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *pKVar2;
  MethodInfo_27F86F8 *in_x3;
  EOLFEKNCPLM_o *pEVar3;
  GKLPDMLELJF_o *pGVar4;
  System_Nullable_long__o __this_00;
  undefined8 local_30;
  int64_t iStack_28;
  
  if ((DAT_04565f61 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>__ctor__);
    DAT_04565f61 = 1;
  }
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if ((pKVar2 != (KAMBBJFPLGM_o *)0x0) &&
     (bVar1 = KAMBBJFPLGM__ODJAMCJCHGG(pKVar2,(MethodInfo *)0x0), bVar1)) {
    pKVar2 = (__this->fields).MLAAJICBOAD;
    if ((pKVar2 != (KAMBBJFPLGM_o *)0x0) &&
       (pEVar3 = (pKVar2->fields).FLAFELDNABC, pEVar3 != (EOLFEKNCPLM_o *)0x0)) {
      pGVar4 = (pEVar3->fields).MCOPPCNPAHF;
      local_30 = 0;
      iStack_28 = 0;
      __this_00.fields.value = 0;
      __this_00.fields._0_8_ = &local_30;
      System_Nullable<long>___ctor(__this_00,Method_System_Nullable<long>__ctor__,in_x3);
      if (pGVar4 != (GKLPDMLELJF_o *)0x0) {
        (pGVar4->fields).ADEIKPGDIPM.fields.value = iStack_28;
        *(undefined8 *)&(pGVar4->fields).ADEIKPGDIPM.fields = local_30;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private Dictionary<string, int> MPLCEKAPDHJ(string BHDLLGCLMBD, string[] OKBIKHHKOEN)  [RVA 0x306E65C]
// EEGDOGKBLNG$$MPLCEKAPDHJ @ RVA 0x306E65C

/* WARNING: Removing unreachable block (ram,0x0316e8c8) */

System_Collections_Generic_Dictionary_string__int__o *
EEGDOGKBLNG__MPLCEKAPDHJ
          (EEGDOGKBLNG_o *__this,System_String_o *BHDLLGCLMBD,System_String_array *OKBIKHHKOEN,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  KAMBBJFPLGM_o *pKVar8;
  System_Collections_Generic_IEnumerator_T__c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  
  if ((DAT_04565f62 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<string,_int>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__);
    DAT_04565f62 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  pKVar8 = (__this->fields).MLAAJICBOAD;
  if (pKVar8 == (KAMBBJFPLGM_o *)0x0) {
    return (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  }
  __this_01 = (pKVar8->fields).LEJBLHJFJHP;
  if (__this_01 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                      Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__)
  ;
  if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar9 = pSVar5->klass;
    uVar1._0_1_ = (pSVar9->_2).rank;
    uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar6 = pSVar9->vtable + *piVar11;
          goto LAB_0316e794;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0316e794:
    uVar10 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if ((uVar10 & 1) == 0) {
      if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
      }
      pSVar9 = pSVar5->klass;
      uVar3._0_1_ = (pSVar9->_2).rank;
      uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar3;
      if (uVar10 == 0) goto LAB_0316e874;
      piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
      break;
    }
    pSVar9 = pSVar5->klass;
    uVar2._0_1_ = (pSVar9->_2).rank;
    uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
          pVVar6 = pSVar9->vtable + *piVar11;
          goto LAB_0316e7f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo,0);
LAB_0316e7f0:
    lVar7 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = PCOEHCPGBBG__EBJIONLKNEE
                      (*(System_String_o **)(lVar7 + 0x18),BHDLLGCLMBD,OKBIKHHKOEN,(MethodInfo *)0x0
                      );
    if (bVar4) {
      CAOJHCDPDBH__GKONJMIPMEH<object,_int>
                ((System_Collections_Generic_Dictionary_T__U__o *)__this_00,
                 *(Il2CppObject **)(lVar7 + 0x18),*(int32_t *)(lVar7 + 0x20),
                 Method_CAOJHCDPDBH_GKONJMIPMEH<string,_int>__);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar6 = pSVar9->vtable + *piVar11;
      goto LAB_0316e890;
    }
  }
LAB_0316e874:
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_IDisposable_TypeInfo,0);
LAB_0316e890:
  (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
  return (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
}


// ===== public int OHCGFHJNEGO(string DIIDFLPOBMC)  [RVA 0x306EBE4]
// EEGDOGKBLNG$$OHCGFHJNEGO @ RVA 0x306EBE4

int32_t EEGDOGKBLNG__OHCGFHJNEGO
                  (EEGDOGKBLNG_o *__this,System_String_o *DIIDFLPOBMC,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar5;
  int index;
  
  if ((DAT_04565f63 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_04565f63 = 1;
  }
  pKVar4 = (__this->fields).MLAAJICBOAD;
  if (pKVar4 == (KAMBBJFPLGM_o *)0x0) {
    return 0;
  }
  pGVar5 = (pKVar4->fields).AKFPFIHIHOC;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar1 = (pGVar5->fields).count;
    if (iVar1 < 1) {
      return 0;
    }
    index = 0;
    do {
      pGVar5 = (pKVar4->fields).AKFPFIHIHOC;
      if ((pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) ||
         (pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,index,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                             ), pIVar3 == (Il2CppObject *)0x0)) break;
      bVar2 = System_String__op_Equality(pIVar3[1].monitor,DIIDFLPOBMC,(MethodInfo *)0x0);
      if (bVar2) {
        return *(int32_t *)&pIVar3[2].klass;
      }
      index = index + 1;
      if (iVar1 == index) {
        return 0;
      }
      pKVar4 = (__this->fields).MLAAJICBOAD;
    } while (pKVar4 != (KAMBBJFPLGM_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Dictionary<string, int> AMLHEDJMKEC()  [RVA 0x30709B0]
// EEGDOGKBLNG$$AMLHEDJMKEC @ RVA 0x30709B0

System_Collections_Generic_Dictionary_string__int__o *
EEGDOGKBLNG__AMLHEDJMKEC(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  System_String_array *OKBIKHHKOEN;
  System_Collections_Generic_Dictionary_string__int__o *pSVar1;
  MethodInfo *in_x3;
  
  if ((DAT_04565f64 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_11980/*"Shard"*/);
    FUN_01bab630(&StringLiteral_8234/*"Key"*/);
    DAT_04565f64 = 1;
  }
  OKBIKHHKOEN = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (OKBIKHHKOEN != (System_String_array *)0x0) {
    if ((int)OKBIKHHKOEN->max_length != 0) {
      OKBIKHHKOEN->m_Items[0] = StringLiteral_11980/*"Shard"*/;
      thunk_FUN_01c20e04();
      pSVar1 = EEGDOGKBLNG__MPLCEKAPDHJ(__this,StringLiteral_8234/*"Key"*/,OKBIKHHKOEN,in_x3);
      return pSVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FAOMBBKHKIA(int CJNHFNHJHPE)  [RVA 0x3070A58]
// EEGDOGKBLNG$$FAOMBBKHKIA @ RVA 0x3070A58

void EEGDOGKBLNG__FAOMBBKHKIA(EEGDOGKBLNG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DHPJJLCDAJD_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool LMIIHKLCBKD(ANCCMBHPADC MJIEPACBNBI)  [RVA 0x3070A60]
// EEGDOGKBLNG$$LMIIHKLCBKD @ RVA 0x3070A60

bool EEGDOGKBLNG__LMIIHKLCBKD(EEGDOGKBLNG_o *__this,int32_t MJIEPACBNBI,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *pKVar2;
  
  pKVar2 = (__this->fields).MLAAJICBOAD;
  bVar1 = false;
  if (pKVar2 != (KAMBBJFPLGM_o *)0x0) {
    bVar1 = KAMBBJFPLGM__KILBJDNIPBK(pKVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pKVar2 = (__this->fields).MLAAJICBOAD;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (MJIEPACBNBI & ((pKVar2->fields).IJBBNNHJPLF ^ 0xffffffffU)) == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// ===== private bool CIHOPLMGDHH(string KGLJICLJHEL)  [RVA 0x3070AB0]
// EEGDOGKBLNG$$CIHOPLMGDHH @ RVA 0x3070AB0

bool EEGDOGKBLNG__CIHOPLMGDHH(EEGDOGKBLNG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  JMDPBFOCHHP_o *pJVar3;
  Il2CppObject *pIVar4;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar5;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  int iVar6;
  bool bVar7;
  
  if ((DAT_04565f65 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    DAT_04565f65 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
      (pJVar5 = (pJVar3->fields).OFMMMBIIDAE, pJVar5 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) &&
     (__this_00 = (pJVar5->fields).GADHINPJDAF,
     __this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)) {
    iVar6 = (__this_00->fields)._size;
    bVar7 = 0 < iVar6;
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar6,
                            Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__
                           );
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03170bd0;
        bVar2 = System_String__op_Equality
                          (KGLJICLJHEL,(System_String_o *)pIVar4[1].klass,(MethodInfo *)0x0);
        if ((bVar2) &&
           (bVar2 = System_String__op_Equality
                              (pIVar4[4].monitor,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0), bVar2)) {
          return bVar7;
        }
        iVar1 = (__this_00->fields)._size;
        iVar6 = iVar6 + 1;
        bVar7 = iVar6 < iVar1;
      } while (iVar6 < iVar1);
    }
    return bVar7;
  }
LAB_03170bd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string GKMAFGODLLG()  [RVA 0x3070BD4]
// EEGDOGKBLNG$$GKMAFGODLLG @ RVA 0x3070BD4

System_String_o * EEGDOGKBLNG__GKMAFGODLLG(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  System_String_o **ppSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04565f66 & 1) == 0) {
    auVar5 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565f66 = 1;
  }
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
    ppSVar4 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else {
    pEVar2 = (pKVar1->fields).FLAFELDNABC;
    if ((pEVar2 == (EOLFEKNCPLM_o *)0x0) ||
       (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 == (GKLPDMLELJF_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
    }
    ppSVar4 = &(pGVar3->fields).LLBEKLPKDHK;
  }
  return *ppSVar4;
}


// ===== public int LEMMPAGMMOA()  [RVA 0x3070C3C]
// EEGDOGKBLNG$$LEMMPAGMMOA @ RVA 0x3070C3C

int32_t EEGDOGKBLNG__LEMMPAGMMOA(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  return (__this->fields)._DHPJJLCDAJD_k__BackingField;
}


// ===== private void LLNLBFAEJNC(PIADCKMDDAK OAOLCGAIILM)  [RVA 0x30706C4]
// EEGDOGKBLNG$$LLNLBFAEJNC @ RVA 0x30706C4

void EEGDOGKBLNG__LLNLBFAEJNC(EEGDOGKBLNG_o *__this,PIADCKMDDAK_o *OAOLCGAIILM,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  EEGDOGKBLNG_o *pEVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_04565f67 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11980/*"Shard"*/);
    FUN_01bab630(&StringLiteral_8234/*"Key"*/);
    DAT_04565f67 = 1;
  }
  if (OAOLCGAIILM != (PIADCKMDDAK_o *)0x0) {
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
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      pSVar2 = (OAOLCGAIILM->fields).GJNOEAKNMOG;
      if (pSVar2 == (System_String_o *)0x0) {
LAB_03170824:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = System_String__Contains(pSVar2,StringLiteral_8234/*"Key"*/,(MethodInfo *)0x0);
      if (bVar1) {
        pEVar3 = (EEGDOGKBLNG_o *)EEGDOGKBLNG__BJJOPEEAGGD(__this,method_00);
        bVar1 = EEGDOGKBLNG__GNPEGNJDJJO
                          (pEVar3,OAOLCGAIILM,
                           (System_Collections_Generic_Dictionary_string__int__o *)pEVar3,in_x3);
        if (bVar1) {
          ACHLOMELAJE__IOMGPHOEKGJ(__this_00,true,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pSVar2 = (OAOLCGAIILM->fields).GJNOEAKNMOG;
        if (pSVar2 == (System_String_o *)0x0) goto LAB_03170824;
        bVar1 = System_String__Contains(pSVar2,StringLiteral_11980/*"Shard"*/,(MethodInfo *)0x0);
        if (bVar1) {
          pEVar3 = (EEGDOGKBLNG_o *)EEGDOGKBLNG__NDKMLPFGFAI(__this,method_01);
          bVar1 = EEGDOGKBLNG__GNPEGNJDJJO
                            (pEVar3,OAOLCGAIILM,
                             (System_Collections_Generic_Dictionary_string__int__o *)pEVar3,in_x3);
          if (bVar1) {
            ACHLOMELAJE__JFGHGKCDHMA(__this_00,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  return;
}


// ===== public long PALANAIJAFE()  [RVA 0x3070D90]
// EEGDOGKBLNG$$PALANAIJAFE @ RVA 0x3070D90

int64_t EEGDOGKBLNG__PALANAIJAFE(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *pKVar2;
  int64_t iVar3;
  EOLFEKNCPLM_o *pEVar4;
  GKLPDMLELJF_o *pGVar5;
  
  if ((DAT_04565f68 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    DAT_04565f68 = 1;
  }
  pKVar2 = (__this->fields).MLAAJICBOAD;
  iVar3 = 0;
  if (pKVar2 != (KAMBBJFPLGM_o *)0x0) {
    bVar1 = KAMBBJFPLGM__ODJAMCJCHGG(pKVar2,(MethodInfo *)0x0);
    iVar3 = 0;
    if (bVar1) {
      pKVar2 = (__this->fields).MLAAJICBOAD;
      if (((pKVar2 == (KAMBBJFPLGM_o *)0x0) ||
          (pEVar4 = (pKVar2->fields).FLAFELDNABC, pEVar4 == (EOLFEKNCPLM_o *)0x0)) ||
         (pGVar5 = (pEVar4->fields).MCOPPCNPAHF, pGVar5 == (GKLPDMLELJF_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (pGVar5->fields).ADEIKPGDIPM.fields.value;
    }
  }
  return iVar3;
}


// ===== public IOGEICNIGGH NJNJAECEPCP()  [RVA 0x3070E04]
// EEGDOGKBLNG$$NJNJAECEPCP @ RVA 0x3070E04

int32_t EEGDOGKBLNG__NJNJAECEPCP(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *pKVar2;
  EOLFEKNCPLM_o *pEVar3;
  GKLPDMLELJF_o *pGVar4;
  
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if ((pKVar2 == (KAMBBJFPLGM_o *)0x0) ||
     (bVar1 = KAMBBJFPLGM__MKICELHALEL(pKVar2,(MethodInfo *)0x0), !bVar1)) {
    return 1;
  }
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if ((pKVar2 != (KAMBBJFPLGM_o *)0x0) &&
     ((pEVar3 = (pKVar2->fields).FLAFELDNABC, pEVar3 != (EOLFEKNCPLM_o *)0x0 &&
      (pGVar4 = (pEVar3->fields).MCOPPCNPAHF, pGVar4 != (GKLPDMLELJF_o *)0x0)))) {
    return (pGVar4->fields).PFJPLCAIGJH;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IANDFKCDLKP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3070E50]
// EEGDOGKBLNG$$IANDFKCDLKP @ RVA 0x3070E50

void EEGDOGKBLNG__IANDFKCDLKP(EEGDOGKBLNG_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  EEGDOGKBLNG_o *__this_00;
  CHDGOFBHAFI_o *pCVar3;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  Il2CppClass *LLJHKLPGMGC;
  
  if ((DAT_04565f69 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<CDAAECGFKON>__);
    __this = (EEGDOGKBLNG_o *)FUN_01bab630(&StringLiteral_10313/*"PlayerData::onRaidBattlePlayerFinishResponse error"*/);
    DAT_04565f69 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10313/*"PlayerData::onRaidBattlePlayerFinishResponse error"*/,(MethodInfo *)0x0);
      return;
    }
    pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<CDAAECGFKON>__);
    __this = (EEGDOGKBLNG_o *)0x0;
    if (pIVar2 != (Il2CppObject *)0x0) {
      LLJHKLPGMGC = pIVar2[2].klass;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      __this = (EEGDOGKBLNG_o *)0x0;
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__JOMFHMDCMNG(__this_00,(KAMBBJFPLGM_o *)LLJHKLPGMGC,method);
        IIPPMAOIKHB = pIVar2[1].monitor;
        pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        __this = (EEGDOGKBLNG_o *)0x0;
        if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
          CHDGOFBHAFI__BNPLDAHKIED(pCVar3,IIPPMAOIKHB,(PGICCMFLDPI_o *)0x0,(MethodInfo *)0x0);
          pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
          __this = (EEGDOGKBLNG_o *)0x0;
          if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
            (pCVar3->fields).GBGHPLFONHD = true;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public int APFFEAJBAEK(string BJEEDJEKAMF)  [RVA 0x306ECB8]
// EEGDOGKBLNG$$APFFEAJBAEK @ RVA 0x306ECB8

int32_t EEGDOGKBLNG__APFFEAJBAEK
                  (EEGDOGKBLNG_o *__this,System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar5;
  int index;
  
  if ((DAT_04565f6a & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_04565f6a = 1;
  }
  pKVar4 = (__this->fields).MLAAJICBOAD;
  if (pKVar4 == (KAMBBJFPLGM_o *)0x0) {
    return 0;
  }
  pGVar5 = (pKVar4->fields).LEJBLHJFJHP;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar1 = (pGVar5->fields).count;
    if (iVar1 < 1) {
      return 0;
    }
    index = 0;
    do {
      pGVar5 = (pKVar4->fields).LEJBLHJFJHP;
      if ((pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) ||
         (pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,index,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                             ), pIVar3 == (Il2CppObject *)0x0)) break;
      bVar2 = System_String__op_Equality(pIVar3[1].monitor,BJEEDJEKAMF,(MethodInfo *)0x0);
      if (bVar2) {
        return *(int32_t *)&pIVar3[2].klass;
      }
      index = index + 1;
      if (iVar1 == index) {
        return 0;
      }
      pKVar4 = (__this->fields).MLAAJICBOAD;
    } while (pKVar4 != (KAMBBJFPLGM_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GFFGLIEOPGO(Action<IList<PIADCKMDDAK>> CJNHFNHJHPE)  [RVA 0x3070F78]
// EEGDOGKBLNG$$GFFGLIEOPGO @ RVA 0x3070F78

void EEGDOGKBLNG__GFFGLIEOPGO
               (EEGDOGKBLNG_o *__this,System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_IList_PIADCKMDDAK___c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IList_PIADCKMDDAK___o *pSVar5;
  System_Action_IList_PIADCKMDDAK___o **ppSVar6;
  System_Action_IList_PIADCKMDDAK___o *source;
  
  if ((DAT_04565f6b & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    DAT_04565f6b = 1;
  }
  ppSVar6 = &(__this->fields).DAGJHIAIOML;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IList<PIADCKMDDAK>>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IList<PIADCKMDDAK>>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IList_PIADCKMDDAK___o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void KILLKMHKIMI(PIADCKMDDAK LNAHOKBLFGA, bool CBBJMNGHMIF)  [RVA 0x3071028]
// EEGDOGKBLNG$$KILLKMHKIMI @ RVA 0x3071028

void EEGDOGKBLNG__KILLKMHKIMI
               (EEGDOGKBLNG_o *__this,PIADCKMDDAK_o *LNAHOKBLFGA,bool CBBJMNGHMIF,MethodInfo *method
               )

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  KAMBBJFPLGM_o *pKVar4;
  undefined8 *puVar5;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar6;
  System_Action_IList_PIADCKMDDAK___o *pSVar7;
  System_String_o *pSVar8;
  int index;
  int32_t local_48;
  uint local_44;
  
  method_00 = (MethodInfo *)(ulong)CBBJMNGHMIF;
  if ((DAT_04565f6c & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    FUN_01bab630(&StringLiteral_16321/*"add {0} = {1}"*/);
    FUN_01bab630(&StringLiteral_19845/*"new {0} = {1}"*/);
    DAT_04565f6c = 1;
  }
  if ((__this->fields).MLAAJICBOAD == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  EEGDOGKBLNG__LLNLBFAEJNC(__this,LNAHOKBLFGA,method_00);
  pKVar4 = (__this->fields).MLAAJICBOAD;
  if ((pKVar4 != (KAMBBJFPLGM_o *)0x0) &&
     (pGVar6 = (pKVar4->fields).LEJBLHJFJHP,
     pGVar6 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    iVar1 = (pGVar6->fields).count;
    if (0 < iVar1) {
      bVar2 = false;
      index = 0;
      do {
        if ((((bVar2) ||
             (pGVar6 = (pKVar4->fields).LEJBLHJFJHP,
             pGVar6 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) ||
            (pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                                ), pIVar3 == (Il2CppObject *)0x0)) ||
           (LNAHOKBLFGA == (PIADCKMDDAK_o *)0x0)) goto LAB_03171234;
        bVar2 = System_String__op_Equality
                          (pIVar3[1].monitor,(LNAHOKBLFGA->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
        if (bVar2) {
          if (CBBJMNGHMIF) {
            local_44 = (LNAHOKBLFGA->fields).GDKPGIBMFPA + *(int *)&pIVar3[2].klass;
            local_44 = local_44 & ((int)local_44 >> 0x1f ^ 0xffffffffU);
          }
          else {
            local_44 = (LNAHOKBLFGA->fields).GDKPGIBMFPA;
          }
          *(uint *)&pIVar3[2].klass = local_44;
          pSVar8 = pIVar3[1].monitor;
          pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
          puVar5 = &StringLiteral_16321/*"add {0} = {1}"*/;
          goto LAB_031711d8;
        }
        pKVar4 = (__this->fields).MLAAJICBOAD;
        index = index + 1;
        bVar2 = pKVar4 == (KAMBBJFPLGM_o *)0x0;
      } while (iVar1 != index);
      if (pKVar4 == (KAMBBJFPLGM_o *)0x0) goto LAB_03171234;
    }
    pGVar6 = (pKVar4->fields).LEJBLHJFJHP;
    if ((pGVar6 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) &&
       (Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,
                   (Il2CppObject *)LNAHOKBLFGA,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__),
       LNAHOKBLFGA != (PIADCKMDDAK_o *)0x0)) {
      pSVar8 = (LNAHOKBLFGA->fields).GJNOEAKNMOG;
      local_48 = (LNAHOKBLFGA->fields).GDKPGIBMFPA;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
      puVar5 = &StringLiteral_19845/*"new {0} = {1}"*/;
LAB_031711d8:
      pSVar8 = System_String__Format
                         ((System_String_o *)*puVar5,(Il2CppObject *)pSVar8,pIVar3,(MethodInfo *)0x0
                         );
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar8,(MethodInfo *)0x0);
      pKVar4 = (__this->fields).MLAAJICBOAD;
      if ((pKVar4 != (KAMBBJFPLGM_o *)0x0) &&
         (pSVar7 = (__this->fields).MMCHECDCGKF,
         pSVar7 != (System_Action_IList_PIADCKMDDAK___o *)0x0)) {
        (*(code *)(pSVar7->fields).super.super.invoke_impl)
                  ((pSVar7->fields).super.super.method_code,(pKVar4->fields).LEJBLHJFJHP,
                   (pSVar7->fields).super.super.method);
        return;
      }
    }
  }
LAB_03171234:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long DHLIBNAGDAD()  [RVA 0x3071238]
// EEGDOGKBLNG$$DHLIBNAGDAD @ RVA 0x3071238

int64_t EEGDOGKBLNG__DHLIBNAGDAD(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  NGOFOPOGBMJ_o *pNVar2;
  
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if ((pKVar1 != (KAMBBJFPLGM_o *)0x0) &&
     (pNVar2 = (pKVar1->fields).CBEJJIHKEGF, pNVar2 != (NGOFOPOGBMJ_o *)0x0)) {
    return (pNVar2->fields).GDKPGIBMFPA;
  }
  return 0;
}


// ===== public void FKAKMNIANAK(IOGEICNIGGH CJNHFNHJHPE)  [RVA 0x3071258]
// EEGDOGKBLNG$$FKAKMNIANAK @ RVA 0x3071258

void EEGDOGKBLNG__FKAKMNIANAK(EEGDOGKBLNG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (((pKVar1 != (KAMBBJFPLGM_o *)0x0) &&
      (pEVar2 = (pKVar1->fields).FLAFELDNABC, pEVar2 != (EOLFEKNCPLM_o *)0x0)) &&
     (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
    (pGVar3->fields).PFJPLCAIGJH = CJNHFNHJHPE;
  }
  return;
}


// ===== public void DNJPBDHOMOI(Action CJNHFNHJHPE)  [RVA 0x3071278]
// EEGDOGKBLNG$$DNJPBDHOMOI @ RVA 0x3071278

void EEGDOGKBLNG__DNJPBDHOMOI(EEGDOGKBLNG_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04565f6d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565f6d = 1;
  }
  ppSVar4 = &(__this->fields).AFAHJIJMAJM;
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


// ===== public string PLFLMELHBPN()  [RVA 0x3071314]
// EEGDOGKBLNG$$PLFLMELHBPN @ RVA 0x3071314

System_String_o * EEGDOGKBLNG__PLFLMELHBPN(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  System_String_o **ppSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04565f6e & 1) == 0) {
    auVar5 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565f6e = 1;
  }
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
    ppSVar4 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else {
    pEVar2 = (pKVar1->fields).FLAFELDNABC;
    if ((pEVar2 == (EOLFEKNCPLM_o *)0x0) ||
       (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 == (GKLPDMLELJF_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
    }
    ppSVar4 = &(pGVar3->fields).FFOIEHLJLDA;
  }
  return *ppSVar4;
}


// ===== public string NOMBACGIHNK()  [RVA 0x307137C]
// EEGDOGKBLNG$$NOMBACGIHNK @ RVA 0x307137C

System_String_o * EEGDOGKBLNG__NOMBACGIHNK(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  return (__this->fields).PDHCLFKCAAE;
}


// ===== public KEGDLHPEJBG FCNBCFILDAH()  [RVA 0x3071384]
// EEGDOGKBLNG$$FCNBCFILDAH @ RVA 0x3071384

KEGDLHPEJBG_o * EEGDOGKBLNG__FCNBCFILDAH(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
    return (pKVar1->fields).LIGHEGAMGHD;
  }
  return (KEGDLHPEJBG_o *)0x0;
}


// ===== public long APCMGOCHMGC()  [RVA 0x307139C]
// EEGDOGKBLNG$$APCMGOCHMGC @ RVA 0x307139C

int64_t EEGDOGKBLNG__APCMGOCHMGC(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  KAMBBJFPLGM_o *pKVar2;
  EOLFEKNCPLM_o *pEVar3;
  GKLPDMLELJF_o *pGVar4;
  
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
    iVar1 = 0;
  }
  else {
    pEVar3 = (pKVar2->fields).FLAFELDNABC;
    if ((pEVar3 == (EOLFEKNCPLM_o *)0x0) ||
       (pGVar4 = (pEVar3->fields).MCOPPCNPAHF, pGVar4 == (GKLPDMLELJF_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pGVar4->fields).ANAJGHJEEOC;
  }
  return iVar1;
}


// ===== public void BCOMIMBOGIM(KAMBBJFPLGM LLJHKLPGMGC)  [RVA 0x30713D0]
// EEGDOGKBLNG$$BCOMIMBOGIM @ RVA 0x30713D0

void EEGDOGKBLNG__BCOMIMBOGIM(EEGDOGKBLNG_o *__this,KAMBBJFPLGM_o *LLJHKLPGMGC,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  KAMBBJFPLGM_o *pKVar4;
  
  EEGDOGKBLNG__LHHHAKCIBHC(__this,(MethodInfo *)LLJHKLPGMGC);
  EEGDOGKBLNG__JOMFHMDCMNG(__this,LLJHKLPGMGC,method);
  pKVar4 = (__this->fields).MLAAJICBOAD;
  if (((pKVar4 != (KAMBBJFPLGM_o *)0x0) && ((pKVar4->fields).GNKNDHJHFOC == 0x32)) &&
     (bVar1 = KFCFGKEHPNK__ECJLKNEAMKH(1,(MethodInfo *)0x0), bVar1)) {
    pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
      if ((iVar2 == 6) &&
         (bVar1 = Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene((MethodInfo *)0x0), bVar1)) {
        return;
      }
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__DHMIJAAHPEI(pNVar3,(MethodInfo *)0x0);
        pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__NPDADBCINPL(pNVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void GILENGKAJNN(Action<IList<PIADCKMDDAK>> CJNHFNHJHPE)  [RVA 0x307147C]
// EEGDOGKBLNG$$GILENGKAJNN @ RVA 0x307147C

void EEGDOGKBLNG__GILENGKAJNN
               (EEGDOGKBLNG_o *__this,System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_IList_PIADCKMDDAK___c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IList_PIADCKMDDAK___o *pSVar5;
  System_Action_IList_PIADCKMDDAK___o *a;
  
  if ((DAT_04565f6f & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    DAT_04565f6f = 1;
  }
  a = (__this->fields).MMCHECDCGKF;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IList<PIADCKMDDAK>>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IList<PIADCKMDDAK>>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IList_PIADCKMDDAK___o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public string ADPPNOCMKJP()  [RVA 0x307152C]
// EEGDOGKBLNG$$ADPPNOCMKJP @ RVA 0x307152C

System_String_o * EEGDOGKBLNG__ADPPNOCMKJP(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  return (__this->fields).JHMMCCKCFFH;
}


// ===== public Dictionary<string, int> NDKMLPFGFAI()  [RVA 0x3070CE4]
// EEGDOGKBLNG$$NDKMLPFGFAI @ RVA 0x3070CE4

System_Collections_Generic_Dictionary_string__int__o *
EEGDOGKBLNG__NDKMLPFGFAI(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__int__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  long lVar3;
  
  if ((DAT_04565f70 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&StringLiteral_11980/*"Shard"*/);
    DAT_04565f70 = 1;
    method = extraout_x1;
  }
  lVar1 = Method_System_Array_Empty<string>__;
  lVar3 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar3 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__,method);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  pSVar2 = EEGDOGKBLNG__MPLCEKAPDHJ
                     (__this,StringLiteral_11980/*"Shard"*/,
                      (System_String_array *)**(undefined8 **)(lVar1 + 0xb8),in_x3);
  return pSVar2;
}


// ===== public void JFFOFHJAFGH(string KGLJICLJHEL, bool PKGIGLFCIBK = True)  [RVA 0x3071534]
// EEGDOGKBLNG$$JFFOFHJAFGH @ RVA 0x3071534

void EEGDOGKBLNG__JFFOFHJAFGH
               (EEGDOGKBLNG_o *__this,System_String_o *KGLJICLJHEL,bool PKGIGLFCIBK,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  System_String_o **ppSVar1;
  
  if ((DAT_04565f71 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f71 = 1;
  }
  ppSVar1 = &(__this->fields).IHLHMKHJPCC;
  *ppSVar1 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar1,KGLJICLJHEL);
  if (!PKGIGLFCIBK) {
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__HNKJELFDFAJ(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EOLFEKNCPLM ELHLAJNJAKD()  [RVA 0x3071600]
// EEGDOGKBLNG$$ELHLAJNJAKD @ RVA 0x3071600

EOLFEKNCPLM_o * EEGDOGKBLNG__ELHLAJNJAKD(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
    return (pKVar1->fields).FLAFELDNABC;
  }
  return (EOLFEKNCPLM_o *)0x0;
}


// ===== public long HIPOGPBBJNJ()  [RVA 0x3071618]
// EEGDOGKBLNG$$HIPOGPBBJNJ @ RVA 0x3071618

int64_t EEGDOGKBLNG__HIPOGPBBJNJ(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
    return (pKVar1->fields).FLFGAIPCCJK;
  }
  return 0;
}


// ===== private void JEOCNEDKJKE(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3071630]
// EEGDOGKBLNG$$JEOCNEDKJKE @ RVA 0x3071630

void EEGDOGKBLNG__JEOCNEDKJKE(EEGDOGKBLNG_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  int32_t CJNHFNHJHPE;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  int iVar3;
  System_String_o *CJNHFNHJHPE_00;
  KAMBBJFPLGM_o *pKVar4;
  System_String_o *DIHAKADKIKM;
  LPAPAMPGDFN_o *__this_00;
  ACHLOMELAJE_o *pAVar5;
  
  if ((DAT_04565f72 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<string,_string>__);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<StringValue>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_17504/*"ctt"*/);
    DAT_04565f72 = 1;
  }
  if (((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
      (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), bVar1)) &&
     (CJNHFNHJHPE_00 = (System_String_o *)(IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
     CJNHFNHJHPE_00 != (System_String_o *)0x0)) {
    if (CJNHFNHJHPE_00->klass != string_TypeInfo) {
      CJNHFNHJHPE_00 = (System_String_o *)0x0;
    }
    pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<StringValue>__);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE_00,(MethodInfo *)0x0);
    if ((!bVar1) && (pIVar2 != (Il2CppObject *)0x0)) {
      DIHAKADKIKM = pIVar2[1].monitor;
      CAOJHCDPDBH__GKONJMIPMEH<object,_object>
                ((System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).KPPDBKGGEGA,
                 (Il2CppObject *)CJNHFNHJHPE_00,(Il2CppObject *)DIHAKADKIKM,
                 Method_CAOJHCDPDBH_GKONJMIPMEH<string,_string>__);
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
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
         (bVar1 = System_String__op_Equality(CJNHFNHJHPE_00,StringLiteral_17504/*"ctt"*/,(MethodInfo *)0x0),
         bVar1)) {
        pKVar4 = (__this->fields).MLAAJICBOAD;
        if ((pKVar4 == (KAMBBJFPLGM_o *)0x0) || ((pKVar4->fields).GNKNDHJHFOC != 0x32)) {
          iVar3 = 0;
        }
        else {
          bVar1 = KFCFGKEHPNK__ECJLKNEAMKH(1,(MethodInfo *)0x0);
          iVar3 = 6;
          if (!bVar1) {
            iVar3 = 0;
          }
        }
        __this_00 = (pAVar5->fields).LMCDOMHENMC;
        CJNHFNHJHPE = PCOEHCPGBBG__JBGCINPPLAC(DIHAKADKIKM,0,(MethodInfo *)0x0);
        if (__this_00 == (LPAPAMPGDFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LPAPAMPGDFN__MKACHLMIINH(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        if (iVar3 == 0) {
          EEGDOGKBLNG__BBMCMFOPMFN(__this,method_00);
          return;
        }
      }
    }
  }
  return;
}


// ===== public KCFAKHLDKJM OAHBPALGKGJ()  [RVA 0x3071810]
// EEGDOGKBLNG$$OAHBPALGKGJ @ RVA 0x3071810

int32_t EEGDOGKBLNG__OAHBPALGKGJ(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  return (__this->fields).LPMFKCDDEIA;
}


// ===== public long HBJCAIGDNLF(CKLIGNAPKFO ACCIHBHMFPN)  [RVA 0x3071818]
// EEGDOGKBLNG$$HBJCAIGDNLF @ RVA 0x3071818

int64_t EEGDOGKBLNG__HBJCAIGDNLF(EEGDOGKBLNG_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Func_TSource__bool__o *predicate;
  Il2CppClass *pIVar2;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *source;
  
  if ((DAT_04565f73 & 1) == 0) {
    FUN_01bab630(&Method_EEGDOGKBLNG_EABAJGALGON_OLGLGNLKKEN__);
    FUN_01bab630(&EEGDOGKBLNG_EABAJGALGON_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<EIBAKHBHMAO>__);
    FUN_01bab630(&System_Func<EIBAKHBHMAO,_bool>_TypeInfo);
    DAT_04565f73 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(EEGDOGKBLNG_EABAJGALGON_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    *(int32_t *)&pIVar1[1].klass = ACCIHBHMFPN;
    pKVar3 = (__this->fields).MLAAJICBOAD;
    if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
      pIVar2 = (Il2CppClass *)0x0;
    }
    else {
      source = (pKVar3->fields).FDELJPKNGKF;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<EIBAKHBHMAO,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      pIVar1 = System_Linq_Enumerable__FirstOrDefault<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                          Method_System_Linq_Enumerable_FirstOrDefault<EIBAKHBHMAO>__);
      pIVar2 = (Il2CppClass *)0x0;
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar1[2].klass;
      }
    }
    return (int64_t)pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PIADCKMDDAK IOHFMHEMCHN()  [RVA 0x3071910]
// EEGDOGKBLNG$$IOHFMHEMCHN @ RVA 0x3071910

PIADCKMDDAK_o * EEGDOGKBLNG__IOHFMHEMCHN(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *method_00;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar4;
  int index;
  
  if ((DAT_04565f74 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_04565f74 = 1;
  }
  pKVar3 = (__this->fields).MLAAJICBOAD;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    return (PIADCKMDDAK_o *)0x0;
  }
  pGVar4 = (pKVar3->fields).AKFPFIHIHOC;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar1 = (pGVar4->fields).count;
    if (iVar1 < 1) {
      return (PIADCKMDDAK_o *)0x0;
    }
    index = 0;
    do {
      pGVar4 = (pKVar3->fields).AKFPFIHIHOC;
      if ((pGVar4 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) ||
         (method_00 = Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__,
         __this_00 = (EEGDOGKBLNG_o *)
                     Google_Protobuf_Collections_RepeatedField<object>__get_Item
                               ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,index,
                                (MethodInfo_295F6AC *)
                                Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                               ), __this_00 == (EEGDOGKBLNG_o *)0x0)) break;
      bVar2 = EEGDOGKBLNG__CIHOPLMGDHH
                        (__this_00,(System_String_o *)(__this_00->fields).DAGJHIAIOML,method_00);
      if ((bVar2) && (0 < *(int *)&(__this_00->fields).AFAHJIJMAJM)) {
        return (PIADCKMDDAK_o *)__this_00;
      }
      index = index + 1;
      if (iVar1 == index) {
        return (PIADCKMDDAK_o *)0x0;
      }
      pKVar3 = (__this->fields).MLAAJICBOAD;
    } while (pKVar3 != (KAMBBJFPLGM_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool GNPEGNJDJJO(PIADCKMDDAK OAOLCGAIILM, Dictionary<string, int> JKKDLIOMHAJ)  [RVA 0x3070C44]
// EEGDOGKBLNG$$GNPEGNJDJJO @ RVA 0x3070C44

bool EEGDOGKBLNG__GNPEGNJDJJO
               (EEGDOGKBLNG_o *__this,PIADCKMDDAK_o *OAOLCGAIILM,
               System_Collections_Generic_Dictionary_string__int__o *JKKDLIOMHAJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  
  if ((DAT_04565f75 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    __this = (EEGDOGKBLNG_o *)
             FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    DAT_04565f75 = 1;
  }
  if ((OAOLCGAIILM != (PIADCKMDDAK_o *)0x0) &&
     (JKKDLIOMHAJ != (System_Collections_Generic_Dictionary_string__int__o *)0x0)) {
    iVar1 = (OAOLCGAIILM->fields).GDKPGIBMFPA;
    bVar2 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__int__o *)JKKDLIOMHAJ,
                       (Il2CppObject *)(OAOLCGAIILM->fields).GJNOEAKNMOG,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if ((bVar2) &&
       (iVar3 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                          ((System_Collections_Generic_Dictionary_object__int__o *)JKKDLIOMHAJ,
                           (Il2CppObject *)(OAOLCGAIILM->fields).GJNOEAKNMOG,
                           Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__),
       iVar3 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = 0 < iVar1;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public bool NMFKMEFIIMP()  [RVA 0x30708F4]
// EEGDOGKBLNG$$NMFKMEFIIMP @ RVA 0x30708F4

bool EEGDOGKBLNG__NMFKMEFIIMP(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  KAMBBJFPLGM_o *pKVar2;
  
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if ((pKVar2 != (KAMBBJFPLGM_o *)0x0) && ((pKVar2->fields).GNKNDHJHFOC == 0x32)) {
    bVar1 = KFCFGKEHPNK__ECJLKNEAMKH(1,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== private void LLNLBFAEJNC(KAMBBJFPLGM MCCKDBNBCPM)  [RVA 0x30704B8]
// EEGDOGKBLNG$$LLNLBFAEJNC @ RVA 0x30704B8

void EEGDOGKBLNG__LLNLBFAEJNC(EEGDOGKBLNG_o *__this,KAMBBJFPLGM_o *MCCKDBNBCPM,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  PIADCKMDDAK_o *OAOLCGAIILM;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int index;
  
  if ((DAT_04565f76 & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    FUN_01bab630(&StringLiteral_4294/*"Check usage of Old-keys"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565f76 = 1;
  }
  if ((__this->fields).MLAAJICBOAD == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_4294/*"Check usage of Old-keys"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  EEGDOGKBLNG__AMLHEDJMKEC(__this,method_00);
  if ((MCCKDBNBCPM != (KAMBBJFPLGM_o *)0x0) &&
     (__this_00 = (MCCKDBNBCPM->fields).LEJBLHJFJHP,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    iVar1 = (__this_00->fields).count;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      method_01 = Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__;
      OAOLCGAIILM = (PIADCKMDDAK_o *)
                    Google_Protobuf_Collections_RepeatedField<object>__get_Item
                              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                               (MethodInfo_295F6AC *)
                               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                              );
      EEGDOGKBLNG__LLNLBFAEJNC(__this,OAOLCGAIILM,method_01);
      if (iVar1 + -1 == index) {
        return;
      }
      __this_00 = (MCCKDBNBCPM->fields).LEJBLHJFJHP;
      index = index + 1;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JMMFCMIIDHL(string KGLJICLJHEL, bool PKGIGLFCIBK = True)  [RVA 0x306FCAC]
// EEGDOGKBLNG$$JMMFCMIIDHL @ RVA 0x306FCAC

void EEGDOGKBLNG__JMMFCMIIDHL
               (EEGDOGKBLNG_o *__this,System_String_o *KGLJICLJHEL,bool PKGIGLFCIBK,
               MethodInfo *method)

{
  AJOGJBFNELI_o *__this_00;
  System_String_o **ppSVar1;
  
  if ((DAT_04565f77 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f77 = 1;
  }
  ppSVar1 = &(__this->fields).HONOOAELMFJ;
  *ppSVar1 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar1,KGLJICLJHEL);
  if (!PKGIGLFCIBK) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (__this_00 != (AJOGJBFNELI_o *)0x0) {
    AJOGJBFNELI__JMMFCMIIDHL(__this_00,*ppSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string EGENCJMCCEJ(string PMACBPAMPJA)  [RVA 0x30719D8]
// EEGDOGKBLNG$$EGENCJMCCEJ @ RVA 0x30719D8

System_String_o *
EEGDOGKBLNG__EGENCJMCCEJ(EEGDOGKBLNG_o *__this,System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  
  if ((DAT_04565f78 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    DAT_04565f78 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).KPPDBKGGEGA;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar1 = (System_String_o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Item
                       (__this_00,(Il2CppObject *)PMACBPAMPJA,
                        Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GNNNAFFIPKI(string BNMOJBMGDDN)  [RVA 0x3071A30]
// EEGDOGKBLNG$$GNNNAFFIPKI @ RVA 0x3071A30

bool EEGDOGKBLNG__GNNNAFFIPKI(EEGDOGKBLNG_o *__this,System_String_o *BNMOJBMGDDN,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  KAMBBJFPLGM_o *pKVar2;
  
  if ((DAT_04565f79 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Contains__);
    DAT_04565f79 = 1;
  }
  pKVar2 = (__this->fields).MLAAJICBOAD;
  if (pKVar2 != (KAMBBJFPLGM_o *)0x0) {
    __this_00 = (pKVar2->fields).HBIHNBPPEEO;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Contains
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Il2CppObject *)BNMOJBMGDDN,
                         Method_Google_Protobuf_Collections_RepeatedField<string>_Contains__);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

